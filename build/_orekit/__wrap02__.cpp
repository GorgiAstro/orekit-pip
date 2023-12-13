#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Object.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Object::class$ = NULL;
    jmethodID *Object::mids$ = NULL;
    bool Object::live$ = false;

    jclass Object::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Object");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClass_1aeb0737a960d371] = env->getMethodID(cls, "getClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_notify_a1fa5dae97ea5ed2] = env->getMethodID(cls, "notify", "()V");
        mids$[mid_notifyAll_a1fa5dae97ea5ed2] = env->getMethodID(cls, "notifyAll", "()V");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_wait_a1fa5dae97ea5ed2] = env->getMethodID(cls, "wait", "()V");
        mids$[mid_wait_3d7dd2314a0dd456] = env->getMethodID(cls, "wait", "(J)V");
        mids$[mid_wait_c89ec8817ad4d2c6] = env->getMethodID(cls, "wait", "(JI)V");
        mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Object::Object() : ::JObject(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    jboolean Object::equals(const Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Class Object::getClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getClass_1aeb0737a960d371]));
    }

    jint Object::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    void Object::notify() const
    {
      env->callVoidMethod(this$, mids$[mid_notify_a1fa5dae97ea5ed2]);
    }

    void Object::notifyAll() const
    {
      env->callVoidMethod(this$, mids$[mid_notifyAll_a1fa5dae97ea5ed2]);
    }

    ::java::lang::String Object::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    void Object::wait() const
    {
      env->callVoidMethod(this$, mids$[mid_wait_a1fa5dae97ea5ed2]);
    }

    void Object::wait(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_3d7dd2314a0dd456], a0);
    }

    void Object::wait(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_c89ec8817ad4d2c6], a0, a1);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Object_equals(t_Object *self, PyObject *arg);
    static PyObject *t_Object_getClass(t_Object *self);
    static PyObject *t_Object_hashCode(t_Object *self);
    static PyObject *t_Object_notify(t_Object *self);
    static PyObject *t_Object_notifyAll(t_Object *self);
    static PyObject *t_Object_toString(t_Object *self);
    static PyObject *t_Object_wait(t_Object *self, PyObject *args);
    static PyObject *t_Object_get__class(t_Object *self, void *data);
    static PyGetSetDef t_Object__fields_[] = {
      DECLARE_GET_FIELD(t_Object, class),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Object__methods_[] = {
      DECLARE_METHOD(t_Object, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, equals, METH_O),
      DECLARE_METHOD(t_Object, getClass, METH_NOARGS),
      DECLARE_METHOD(t_Object, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Object, notify, METH_NOARGS),
      DECLARE_METHOD(t_Object, notifyAll, METH_NOARGS),
      DECLARE_METHOD(t_Object, toString, METH_NOARGS),
      DECLARE_METHOD(t_Object, wait, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Object)[] = {
      { Py_tp_methods, t_Object__methods_ },
      { Py_tp_init, (void *) t_Object_init_ },
      { Py_tp_getset, t_Object__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Object)[] = {
      &PY_TYPE_DEF(JObject),
      NULL
    };

    DEFINE_TYPE(Object, t_Object, Object);

    void t_Object::install(PyObject *module)
    {
      installType(&PY_TYPE(Object), &PY_TYPE_DEF(Object), module, "Object", 0);
    }

    void t_Object::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "class_", make_descriptor(Object::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "wrapfn_", make_descriptor(t_Object::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Object::initializeClass, 1)))
        return NULL;
      return t_Object::wrap_Object(Object(((t_Object *) arg)->object.this$));
    }
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Object::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds)
    {
      Object object((jobject) NULL);

      INT_CALL(object = Object());
      self->object = object;

      return 0;
    }

    static PyObject *t_Object_equals(t_Object *self, PyObject *arg)
    {
      Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Object_getClass(t_Object *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_Object_hashCode(t_Object *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Object_notify(t_Object *self)
    {
      OBJ_CALL(self->object.notify());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_notifyAll(t_Object *self)
    {
      OBJ_CALL(self->object.notifyAll());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_toString(t_Object *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toString());
      return j2p(result);
    }

    static PyObject *t_Object_wait(t_Object *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.wait());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.wait(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(self->object.wait(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "wait", args);
      return NULL;
    }

    static PyObject *t_Object_get__class(t_Object *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GenericGNSS::class$ = NULL;
        jmethodID *GenericGNSS::mids$ = NULL;
        bool GenericGNSS::live$ = false;

        jclass GenericGNSS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GenericGNSS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a872ffc4376f5f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GenericGNSS::GenericGNSS(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_a872ffc4376f5f34, a0.this$, a1.this$, a2.this$, a3.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GenericGNSS__methods_[] = {
          DECLARE_METHOD(t_GenericGNSS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GenericGNSS, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GenericGNSS)[] = {
          { Py_tp_methods, t_GenericGNSS__methods_ },
          { Py_tp_init, (void *) t_GenericGNSS_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GenericGNSS)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GenericGNSS, t_GenericGNSS, GenericGNSS);

        void t_GenericGNSS::install(PyObject *module)
        {
          installType(&PY_TYPE(GenericGNSS), &PY_TYPE_DEF(GenericGNSS), module, "GenericGNSS", 0);
        }

        void t_GenericGNSS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "class_", make_descriptor(GenericGNSS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "wrapfn_", make_descriptor(t_GenericGNSS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GenericGNSS::initializeClass, 1)))
            return NULL;
          return t_GenericGNSS::wrap_Object(GenericGNSS(((t_GenericGNSS *) arg)->object.this$));
        }
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GenericGNSS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          GenericGNSS object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GenericGNSS(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FunctionalDetector::class$ = NULL;
        jmethodID *FunctionalDetector::mids$ = NULL;
        bool FunctionalDetector::live$ = false;

        jclass FunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_c9b2ed319954c7f8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FunctionalDetector::FunctionalDetector() : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble FunctionalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args);
        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args);
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data);
        static PyGetSetDef t_FunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FunctionalDetector)[] = {
          { Py_tp_methods, t_FunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FunctionalDetector_init_ },
          { Py_tp_getset, t_FunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FunctionalDetector, t_FunctionalDetector, FunctionalDetector);
        PyObject *t_FunctionalDetector::wrap_Object(const FunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FunctionalDetector), &PY_TYPE_DEF(FunctionalDetector), module, "FunctionalDetector", 0);
        }

        void t_FunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "class_", make_descriptor(FunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "wrapfn_", make_descriptor(t_FunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FunctionalDetector::wrap_Object(FunctionalDetector(((t_FunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          FunctionalDetector object((jobject) NULL);

          INT_CALL(object = FunctionalDetector());
          self->object = object;
          self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FunctionalDetector);

          return 0;
        }

        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EnablingPredicate::class$ = NULL;
        jmethodID *EnablingPredicate::mids$ = NULL;
        bool EnablingPredicate::live$ = false;

        jclass EnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_ce200617ff3a9b46] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean EnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_ce200617ff3a9b46], a0.this$, a1.this$, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args);

        static PyMethodDef t_EnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_EnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnablingPredicate)[] = {
          { Py_tp_methods, t_EnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnablingPredicate, t_EnablingPredicate, EnablingPredicate);

        void t_EnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(EnablingPredicate), &PY_TYPE_DEF(EnablingPredicate), module, "EnablingPredicate", 0);
        }

        void t_EnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "class_", make_descriptor(EnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "wrapfn_", make_descriptor(t_EnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_EnablingPredicate::wrap_Object(EnablingPredicate(((t_EnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PoissonDistribution::class$ = NULL;
        jmethodID *PoissonDistribution::mids$ = NULL;
        bool PoissonDistribution::live$ = false;
        jdouble PoissonDistribution::DEFAULT_EPSILON = (jdouble) 0;
        jint PoissonDistribution::DEFAULT_MAX_ITERATIONS = (jint) 0;

        jclass PoissonDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PoissonDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_normalApproximateProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "normalApproximateProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
            DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PoissonDistribution::PoissonDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

        jdouble PoissonDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble PoissonDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble PoissonDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble PoissonDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jint PoissonDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint PoissonDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean PoissonDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble PoissonDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble PoissonDistribution::normalApproximateProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_normalApproximateProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble PoissonDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {
        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self);
        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg);
        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data);
        static PyGetSetDef t_PoissonDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PoissonDistribution, mean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PoissonDistribution__methods_[] = {
          DECLARE_METHOD(t_PoissonDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, normalApproximateProbability, METH_O),
          DECLARE_METHOD(t_PoissonDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PoissonDistribution)[] = {
          { Py_tp_methods, t_PoissonDistribution__methods_ },
          { Py_tp_init, (void *) t_PoissonDistribution_init_ },
          { Py_tp_getset, t_PoissonDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PoissonDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PoissonDistribution, t_PoissonDistribution, PoissonDistribution);

        void t_PoissonDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PoissonDistribution), &PY_TYPE_DEF(PoissonDistribution), module, "PoissonDistribution", 0);
        }

        void t_PoissonDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "class_", make_descriptor(PoissonDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "wrapfn_", make_descriptor(t_PoissonDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(PoissonDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_EPSILON", make_descriptor(PoissonDistribution::DEFAULT_EPSILON));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_MAX_ITERATIONS", make_descriptor(PoissonDistribution::DEFAULT_MAX_ITERATIONS));
        }

        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PoissonDistribution::initializeClass, 1)))
            return NULL;
          return t_PoissonDistribution::wrap_Object(PoissonDistribution(((t_PoissonDistribution *) arg)->object.this$));
        }
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PoissonDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PoissonDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jint a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = PoissonDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.normalApproximateProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "normalApproximateProbability", arg);
          return NULL;
        }

        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *LegacyNavigationMessage::class$ = NULL;
            jmethodID *LegacyNavigationMessage::mids$ = NULL;
            bool LegacyNavigationMessage::live$ = false;
            ::java::lang::String *LegacyNavigationMessage::LNAV = NULL;

            jclass LegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFitInterval_55546ef6a647f39b] = env->getMethodID(cls, "getFitInterval", "()I");
                mids$[mid_getIODC_55546ef6a647f39b] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_55546ef6a647f39b] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getSvAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_55546ef6a647f39b] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_b74f83833fdad017] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_setFitInterval_44ed599e93e8a30c] = env->getMethodID(cls, "setFitInterval", "(I)V");
                mids$[mid_setIODC_44ed599e93e8a30c] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_8ba9fe7a847cecad] = env->getMethodID(cls, "setIODE", "(D)V");
                mids$[mid_setSvAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_8ba9fe7a847cecad] = env->getMethodID(cls, "setTGD", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LNAV = new ::java::lang::String(env->getStaticObjectField(cls, "LNAV", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LegacyNavigationMessage::getFitInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getFitInterval_55546ef6a647f39b]);
            }

            jint LegacyNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_55546ef6a647f39b]);
            }

            jint LegacyNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_55546ef6a647f39b]);
            }

            jdouble LegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_b74f83833fdad017]);
            }

            jint LegacyNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_55546ef6a647f39b]);
            }

            jdouble LegacyNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_b74f83833fdad017]);
            }

            void LegacyNavigationMessage::setFitInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFitInterval_44ed599e93e8a30c], a0);
            }

            void LegacyNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_44ed599e93e8a30c], a0);
            }

            void LegacyNavigationMessage::setIODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_8ba9fe7a847cecad], a0);
            }

            void LegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_8ba9fe7a847cecad], a0);
            }

            void LegacyNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_44ed599e93e8a30c], a0);
            }

            void LegacyNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_8ba9fe7a847cecad], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_LegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, fitInterval),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, tGD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_LegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getFitInterval, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, setFitInterval, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setTGD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LegacyNavigationMessage)[] = {
              { Py_tp_methods, t_LegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(LegacyNavigationMessage, t_LegacyNavigationMessage, LegacyNavigationMessage);

            void t_LegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(LegacyNavigationMessage), &PY_TYPE_DEF(LegacyNavigationMessage), module, "LegacyNavigationMessage", 0);
            }

            void t_LegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "class_", make_descriptor(LegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "wrapfn_", make_descriptor(t_LegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(LegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "LNAV", make_descriptor(j2p(*LegacyNavigationMessage::LNAV)));
            }

            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_LegacyNavigationMessage::wrap_Object(LegacyNavigationMessage(((t_LegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFitInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setFitInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFitInterval", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFitInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setFitInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fitInterval", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AnyMatrix::class$ = NULL;
      jmethodID *AnyMatrix::mids$ = NULL;
      bool AnyMatrix::live$ = false;

      jclass AnyMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AnyMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isSquare_9ab94ac1dc23b105] = env->getMethodID(cls, "isSquare", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint AnyMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      jint AnyMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      jboolean AnyMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_9ab94ac1dc23b105]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data);
      static PyGetSetDef t_AnyMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AnyMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, square),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AnyMatrix__methods_[] = {
        DECLARE_METHOD(t_AnyMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, isSquare, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AnyMatrix)[] = {
        { Py_tp_methods, t_AnyMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AnyMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AnyMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AnyMatrix, t_AnyMatrix, AnyMatrix);

      void t_AnyMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AnyMatrix), &PY_TYPE_DEF(AnyMatrix), module, "AnyMatrix", 0);
      }

      void t_AnyMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "class_", make_descriptor(AnyMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "wrapfn_", make_descriptor(t_AnyMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AnyMatrix::initializeClass, 1)))
          return NULL;
        return t_AnyMatrix::wrap_Object(AnyMatrix(((t_AnyMatrix *) arg)->object.this$));
      }
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AnyMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldVector3D::class$ = NULL;
          jmethodID *FieldVector3D::mids$ = NULL;
          bool FieldVector3D::live$ = false;

          jclass FieldVector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldVector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8b0f7facc8a6a46e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_d060b2b32c85260a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_0602f39e097cca02] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_c444820624e1b64e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_855fef2df88fcdd5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_e337ae7145f7989c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_baa1ed35ace5d036] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_948fa9c9c487e23d] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_2798ba7a942a5ffc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_ca508b772f55d7a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_329cb7beeb5dfe9e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_ee573b6483f71595] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_1496b3dd3cf8d362] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_0fcce8dd8894011e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_e6812b3ad67e78a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_9cf8e3f2f92992c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_49157187b00e5904] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_356b02aa715afa02] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_e6412b26eb8f79ad] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_304381b29cf06a58] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_e8e3047ae0b7ae3f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_2beceb62ee48f448] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_angle_07cc087c385a99ad] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_1651606e28c48c1e] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_b71939b8275fb620] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_blendArithmeticallyWith_0eb73ffa34a8bbf6] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_49157187b00e5904] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_356b02aa715afa02] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_f9c086f1066c613d] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_16314175123ed0e2] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_ef06fbca397b6e8d] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_distance_f475fa22e4944acc] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_40bcacaf1f5c8f3e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_07cc087c385a99ad] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b71939b8275fb620] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_1651606e28c48c1e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_f475fa22e4944acc] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_40bcacaf1f5c8f3e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_07cc087c385a99ad] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_1651606e28c48c1e] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b71939b8275fb620] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_f475fa22e4944acc] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_40bcacaf1f5c8f3e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_07cc087c385a99ad] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_1651606e28c48c1e] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b71939b8275fb620] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_f475fa22e4944acc] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_40bcacaf1f5c8f3e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_07cc087c385a99ad] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b71939b8275fb620] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_1651606e28c48c1e] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_f475fa22e4944acc] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_40bcacaf1f5c8f3e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_07cc087c385a99ad] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b71939b8275fb620] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_1651606e28c48c1e] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_81520b552cb3fa26] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDelta_81520b552cb3fa26] = env->getMethodID(cls, "getDelta", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMinusI_98221d2e63674019] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusJ_98221d2e63674019] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusK_98221d2e63674019] = env->getStaticMethodID(cls, "getMinusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNaN_98221d2e63674019] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNegativeInfinity_98221d2e63674019] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNorm_81520b552cb3fa26] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_81520b552cb3fa26] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_81520b552cb3fa26] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_81520b552cb3fa26] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_98221d2e63674019] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusJ_98221d2e63674019] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusK_98221d2e63674019] = env->getStaticMethodID(cls, "getPlusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPositiveInfinity_98221d2e63674019] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getX_81520b552cb3fa26] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_81520b552cb3fa26] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZ_81520b552cb3fa26] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_98221d2e63674019] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_ff5ac73a7b43eddd] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_normalize_ff5ac73a7b43eddd] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_orthogonal_ff5ac73a7b43eddd] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_c6e22cf5a7df5c99] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_0e25f993119a02fa] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_49157187b00e5904] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_356b02aa715afa02] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_e6412b26eb8f79ad] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_304381b29cf06a58] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_e8e3047ae0b7ae3f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_2beceb62ee48f448] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_toArray_883be608cfc68c26] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector3D_8b724f8b4fdad1a2] = env->getMethodID(cls, "toVector3D", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector3D::FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b0f7facc8a6a46e, a0.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d060b2b32c85260a, a0, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0602f39e097cca02, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c444820624e1b64e, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_855fef2df88fcdd5, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e337ae7145f7989c, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_baa1ed35ace5d036, a0.this$, a1.this$, a2.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_948fa9c9c487e23d, a0, a1.this$, a2, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2798ba7a942a5ffc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca508b772f55d7a5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_329cb7beeb5dfe9e, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee573b6483f71595, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1496b3dd3cf8d362, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5, jdouble a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fcce8dd8894011e, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6812b3ad67e78a6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cf8e3f2f92992c1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D FieldVector3D::add(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_49157187b00e5904], a0.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_356b02aa715afa02], a0.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_e6412b26eb8f79ad], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_304381b29cf06a58], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_e8e3047ae0b7ae3f], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_2beceb62ee48f448], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_1651606e28c48c1e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_b71939b8275fb620], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::blendArithmeticallyWith(const FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_0eb73ffa34a8bbf6], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_49157187b00e5904], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_356b02aa715afa02], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_f9c086f1066c613d], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_16314175123ed0e2], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_ef06fbca397b6e8d], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_b71939b8275fb620], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_1651606e28c48c1e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_1651606e28c48c1e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_b71939b8275fb620], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_1651606e28c48c1e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_b71939b8275fb620], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_b71939b8275fb620], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_1651606e28c48c1e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_07cc087c385a99ad], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_b71939b8275fb620], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_1651606e28c48c1e], a0.this$, a1.this$));
          }

          jboolean FieldVector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getAlpha() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getDelta() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDelta_81520b552cb3fa26]));
          }

          FieldVector3D FieldVector3D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusK_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_98221d2e63674019], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_81520b552cb3fa26]));
          }

          FieldVector3D FieldVector3D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusK_98221d2e63674019], a0.this$));
          }

          FieldVector3D FieldVector3D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_98221d2e63674019], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getZ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZ_81520b552cb3fa26]));
          }

          FieldVector3D FieldVector3D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getZero_98221d2e63674019], a0.this$));
          }

          jint FieldVector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean FieldVector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
          }

          jboolean FieldVector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          FieldVector3D FieldVector3D::negate() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_negate_ff5ac73a7b43eddd]));
          }

          FieldVector3D FieldVector3D::normalize() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_normalize_ff5ac73a7b43eddd]));
          }

          FieldVector3D FieldVector3D::orthogonal() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_ff5ac73a7b43eddd]));
          }

          FieldVector3D FieldVector3D::scalarMultiply(jdouble a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_c6e22cf5a7df5c99], a0));
          }

          FieldVector3D FieldVector3D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_0e25f993119a02fa], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_49157187b00e5904], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_356b02aa715afa02], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_e6412b26eb8f79ad], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_304381b29cf06a58], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_e8e3047ae0b7ae3f], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_2beceb62ee48f448], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector3D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_883be608cfc68c26]));
          }

          ::java::lang::String FieldVector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String FieldVector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldVector3D::toVector3D() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toVector3D_8b724f8b4fdad1a2]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args);
          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data);
          static PyGetSetDef t_FieldVector3D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector3D, alpha),
            DECLARE_GET_FIELD(t_FieldVector3D, delta),
            DECLARE_GET_FIELD(t_FieldVector3D, infinite),
            DECLARE_GET_FIELD(t_FieldVector3D, naN),
            DECLARE_GET_FIELD(t_FieldVector3D, norm),
            DECLARE_GET_FIELD(t_FieldVector3D, norm1),
            DECLARE_GET_FIELD(t_FieldVector3D, normInf),
            DECLARE_GET_FIELD(t_FieldVector3D, normSq),
            DECLARE_GET_FIELD(t_FieldVector3D, x),
            DECLARE_GET_FIELD(t_FieldVector3D, y),
            DECLARE_GET_FIELD(t_FieldVector3D, z),
            DECLARE_GET_FIELD(t_FieldVector3D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector3D__methods_[] = {
            DECLARE_METHOD(t_FieldVector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, blendArithmeticallyWith, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toVector3D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector3D)[] = {
            { Py_tp_methods, t_FieldVector3D__methods_ },
            { Py_tp_init, (void *) t_FieldVector3D_init_ },
            { Py_tp_getset, t_FieldVector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector3D, t_FieldVector3D, FieldVector3D);
          PyObject *t_FieldVector3D::wrap_Object(const FieldVector3D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector3D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector3D), &PY_TYPE_DEF(FieldVector3D), module, "FieldVector3D", 0);
          }

          void t_FieldVector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "class_", make_descriptor(FieldVector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "wrapfn_", make_descriptor(t_FieldVector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector3D::initializeClass, 1)))
              return NULL;
            return t_FieldVector3D::wrap_Object(FieldVector3D(((t_FieldVector3D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_, &a6, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args)
          {
            FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
              return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelta());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNaN(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNegativeInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPositiveInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getZ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getZero(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector3D());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelta());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getZ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/util/Iterator.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/lang/Long.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_2c01874c65d2ef2f] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_be194746f459c63c] = env->getMethodID(cls, "addValue", "(Ljava/lang/Comparable;)V");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_entrySetIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "entrySetIterator", "()Ljava/util/Iterator;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCount_847217f97b13f225] = env->getMethodID(cls, "getCount", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumFreq_847217f97b13f225] = env->getMethodID(cls, "getCumFreq", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumPct_501a514086abd77c] = env->getMethodID(cls, "getCumPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getMode_e62d3bb06d56d7e3] = env->getMethodID(cls, "getMode", "()Ljava/util/List;");
          mids$[mid_getPct_501a514086abd77c] = env->getMethodID(cls, "getPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getSumFreq_6c0ce7e438e5ded4] = env->getMethodID(cls, "getSumFreq", "()J");
          mids$[mid_getUniqueCount_55546ef6a647f39b] = env->getMethodID(cls, "getUniqueCount", "()I");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_incrementValue_73e3fbb166ca1058] = env->getMethodID(cls, "incrementValue", "(Ljava/lang/Comparable;J)V");
          mids$[mid_merge_17f8a575980fa0db] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/stat/Frequency;)V");
          mids$[mid_merge_7d8f123763cd893c] = env->getMethodID(cls, "merge", "(Ljava/util/Collection;)V");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_valuesIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "valuesIterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frequency::Frequency() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Frequency::Frequency(const ::java::util::Comparator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c01874c65d2ef2f, a0.this$)) {}

      void Frequency::addValue(const ::java::lang::Comparable & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_be194746f459c63c], a0.this$);
      }

      void Frequency::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
      }

      ::java::util::Iterator Frequency::entrySetIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_entrySetIterator_fc7780bc5d5b73b0]));
      }

      jboolean Frequency::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jlong Frequency::getCount(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_847217f97b13f225], a0.this$);
      }

      jlong Frequency::getCumFreq(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_847217f97b13f225], a0.this$);
      }

      jdouble Frequency::getCumPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_501a514086abd77c], a0.this$);
      }

      ::java::util::List Frequency::getMode() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMode_e62d3bb06d56d7e3]));
      }

      jdouble Frequency::getPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_501a514086abd77c], a0.this$);
      }

      jlong Frequency::getSumFreq() const
      {
        return env->callLongMethod(this$, mids$[mid_getSumFreq_6c0ce7e438e5ded4]);
      }

      jint Frequency::getUniqueCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getUniqueCount_55546ef6a647f39b]);
      }

      jint Frequency::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      void Frequency::incrementValue(const ::java::lang::Comparable & a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_73e3fbb166ca1058], a0.this$, a1);
      }

      void Frequency::merge(const Frequency & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_17f8a575980fa0db], a0.this$);
      }

      void Frequency::merge(const ::java::util::Collection & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_7d8f123763cd893c], a0.this$);
      }

      ::java::lang::String Frequency::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::util::Iterator Frequency::valuesIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_valuesIterator_fc7780bc5d5b73b0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_clear(t_Frequency *self);
      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self);
      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getMode(t_Frequency *self);
      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getSumFreq(t_Frequency *self);
      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self);
      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_valuesIterator(t_Frequency *self);
      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mode),
        DECLARE_GET_FIELD(t_Frequency, sumFreq),
        DECLARE_GET_FIELD(t_Frequency, uniqueCount),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, addValue, METH_O),
        DECLARE_METHOD(t_Frequency, clear, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, entrySetIterator, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, equals, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getCount, METH_O),
        DECLARE_METHOD(t_Frequency, getCumFreq, METH_O),
        DECLARE_METHOD(t_Frequency, getCumPct, METH_O),
        DECLARE_METHOD(t_Frequency, getMode, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getPct, METH_O),
        DECLARE_METHOD(t_Frequency, getSumFreq, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getUniqueCount, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, incrementValue, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, merge, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, toString, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, valuesIterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) t_Frequency_init_ },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Frequency object((jobject) NULL);

            INT_CALL(object = Frequency());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Frequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = Frequency(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValue", arg);
        return NULL;
      }

      static PyObject *t_Frequency_clear(t_Frequency *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.entrySetIterator());
        return ::java::util::t_Iterator::wrap_Object(result);
      }

      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumFreq", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getMode(t_Frequency *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getMode());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getSumFreq(t_Frequency *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getUniqueCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong a1;

        if (!parseArgs(args, "KJ", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "incrementValue", args);
        return NULL;
      }

      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Frequency a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", Frequency::initializeClass, &a0, &p0, t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "merge", args);
        return NULL;
      }

      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frequency_valuesIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.valuesIterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getMode());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getUniqueCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleBounds::class$ = NULL;
      jmethodID *SimpleBounds::mids$ = NULL;
      bool SimpleBounds::live$ = false;

      jclass SimpleBounds::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleBounds");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_getLower_25e1757a36c4dde2] = env->getMethodID(cls, "getLower", "()[D");
          mids$[mid_getUpper_25e1757a36c4dde2] = env->getMethodID(cls, "getUpper", "()[D");
          mids$[mid_unbounded_9c4a2e0ad6568aaa] = env->getStaticMethodID(cls, "unbounded", "(I)Lorg/hipparchus/optim/SimpleBounds;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleBounds::SimpleBounds(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

      JArray< jdouble > SimpleBounds::getLower() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLower_25e1757a36c4dde2]));
      }

      JArray< jdouble > SimpleBounds::getUpper() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpper_25e1757a36c4dde2]));
      }

      SimpleBounds SimpleBounds::unbounded(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleBounds(env->callStaticObjectMethod(cls, mids$[mid_unbounded_9c4a2e0ad6568aaa], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data);
      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data);
      static PyGetSetDef t_SimpleBounds__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleBounds, lower),
        DECLARE_GET_FIELD(t_SimpleBounds, upper),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleBounds__methods_[] = {
        DECLARE_METHOD(t_SimpleBounds, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, getLower, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, getUpper, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, unbounded, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleBounds)[] = {
        { Py_tp_methods, t_SimpleBounds__methods_ },
        { Py_tp_init, (void *) t_SimpleBounds_init_ },
        { Py_tp_getset, t_SimpleBounds__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleBounds)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleBounds, t_SimpleBounds, SimpleBounds);

      void t_SimpleBounds::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleBounds), &PY_TYPE_DEF(SimpleBounds), module, "SimpleBounds", 0);
      }

      void t_SimpleBounds::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "class_", make_descriptor(SimpleBounds::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "wrapfn_", make_descriptor(t_SimpleBounds::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleBounds::initializeClass, 1)))
          return NULL;
        return t_SimpleBounds::wrap_Object(SimpleBounds(((t_SimpleBounds *) arg)->object.this$));
      }
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleBounds::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleBounds object((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          INT_CALL(object = SimpleBounds(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLower());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpper());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        SimpleBounds result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::SimpleBounds::unbounded(a0));
          return t_SimpleBounds::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unbounded", arg);
        return NULL;
      }

      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLower());
        return value.wrap();
      }

      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpper());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e8ab8fc14564dfe7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Line;)V");
              mids$[mid_init$_14bec7b2bdc550d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_distance_a7f439b8ba8ffc55] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_getEnd_9cb1572c1d4936cf] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getLength_b74f83833fdad017] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getLine_f76ed72539e37ce2] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getStart_9cb1572c1d4936cf] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::geometry::euclidean::twod::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8ab8fc14564dfe7, a0.this$, a1.this$, a2.this$)) {}

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14bec7b2bdc550d3, a0.this$, a1.this$, a2)) {}

          jdouble Segment::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_a7f439b8ba8ffc55], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEnd_9cb1572c1d4936cf]));
          }

          jdouble Segment::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Line(env->callObjectMethod(this$, mids$[mid_getLine_f76ed72539e37ce2]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getStart_9cb1572c1d4936cf]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLength(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__length(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, length),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, distance, METH_O),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Line a2((jobject) NULL);
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Line::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLength(t_Segment *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__length(t_Segment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_3543a5b2e9e83041] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNormalizedSphericalHarmonicsProvider::PythonNormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonNormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonNormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonNormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNormalizedSphericalHarmonicsProvider, t_PythonNormalizedSphericalHarmonicsProvider, PythonNormalizedSphericalHarmonicsProvider);

          void t_PythonNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonNormalizedSphericalHarmonicsProvider), module, "PythonNormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonNormalizedSphericalHarmonicsProvider::wrap_Object(PythonNormalizedSphericalHarmonicsProvider(((t_PythonNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonNormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParameterConfiguration::class$ = NULL;
      jmethodID *ParameterConfiguration::mids$ = NULL;
      bool ParameterConfiguration::live$ = false;

      jclass ParameterConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParameterConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getHP_b74f83833fdad017] = env->getMethodID(cls, "getHP", "()D");
          mids$[mid_getParameterName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getParameterName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterConfiguration::getHP() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHP_b74f83833fdad017]);
      }

      ::java::lang::String ParameterConfiguration::getParameterName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParameterName_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data);
      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data);
      static PyGetSetDef t_ParameterConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterConfiguration, hP),
        DECLARE_GET_FIELD(t_ParameterConfiguration, parameterName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterConfiguration__methods_[] = {
        DECLARE_METHOD(t_ParameterConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, getHP, METH_NOARGS),
        DECLARE_METHOD(t_ParameterConfiguration, getParameterName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterConfiguration)[] = {
        { Py_tp_methods, t_ParameterConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterConfiguration, t_ParameterConfiguration, ParameterConfiguration);

      void t_ParameterConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterConfiguration), &PY_TYPE_DEF(ParameterConfiguration), module, "ParameterConfiguration", 0);
      }

      void t_ParameterConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "class_", make_descriptor(ParameterConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "wrapfn_", make_descriptor(t_ParameterConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterConfiguration::initializeClass, 1)))
          return NULL;
        return t_ParameterConfiguration::wrap_Object(ParameterConfiguration(((t_ParameterConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHP());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getParameterName());
        return j2p(result);
      }

      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHP());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameterName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposition::class$ = NULL;
      jmethodID *SingularValueDecomposition::mids$ = NULL;
      bool SingularValueDecomposition::live$ = false;

      jclass SingularValueDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getConditionNumber_b74f83833fdad017] = env->getMethodID(cls, "getConditionNumber", "()D");
          mids$[mid_getCovariance_f5dd9d6021dc9dae] = env->getMethodID(cls, "getCovariance", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getInverseConditionNumber_b74f83833fdad017] = env->getMethodID(cls, "getInverseConditionNumber", "()D");
          mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getRank_55546ef6a647f39b] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getS_f77d745f2128c391] = env->getMethodID(cls, "getS", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSingularValues_25e1757a36c4dde2] = env->getMethodID(cls, "getSingularValues", "()[D");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_f77d745f2128c391] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getUT_f77d745f2128c391] = env->getMethodID(cls, "getUT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_f77d745f2128c391] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_f77d745f2128c391] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposition::SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      jdouble SingularValueDecomposition::getConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getConditionNumber_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getCovariance(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f5dd9d6021dc9dae], a0));
      }

      jdouble SingularValueDecomposition::getInverseConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInverseConditionNumber_b74f83833fdad017]);
      }

      jdouble SingularValueDecomposition::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
      }

      jint SingularValueDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getS() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getS_f77d745f2128c391]));
      }

      JArray< jdouble > SingularValueDecomposition::getSingularValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSingularValues_25e1757a36c4dde2]));
      }

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getUT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getUT_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_f77d745f2128c391]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data);
      static PyGetSetDef t_SingularValueDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SingularValueDecomposition, conditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, inverseConditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, norm),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, rank),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, s),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, singularValues),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, solver),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, u),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, uT),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, v),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SingularValueDecomposition__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, getConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getCovariance, METH_O),
        DECLARE_METHOD(t_SingularValueDecomposition, getInverseConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getS, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSingularValues, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getU, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getUT, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposition)[] = {
        { Py_tp_methods, t_SingularValueDecomposition__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposition_init_ },
        { Py_tp_getset, t_SingularValueDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposition, t_SingularValueDecomposition, SingularValueDecomposition);

      void t_SingularValueDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposition), &PY_TYPE_DEF(SingularValueDecomposition), module, "SingularValueDecomposition", 0);
      }

      void t_SingularValueDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "class_", make_descriptor(SingularValueDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "wrapfn_", make_descriptor(t_SingularValueDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposition::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposition::wrap_Object(SingularValueDecomposition(((t_SingularValueDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        SingularValueDecomposition object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = SingularValueDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getCovariance(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
        return NULL;
      }

      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSingularValues());
        return result.wrap();
      }

      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSingularValues());
        return value.wrap();
      }

      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays::class$ = NULL;
      jmethodID *MathArrays::mids$ = NULL;
      bool MathArrays::live$ = false;

      jclass MathArrays::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildArray_80a6a1ce74027d71] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_d3a891e7c6b40b5a] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_5d545c1f91daf146] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;III)[[[Lorg/hipparchus/FieldElement;");
          mids$[mid_checkEqualLength_b15baa0161a4e9c7] = env->getStaticMethodID(cls, "checkEqualLength", "([D[D)V");
          mids$[mid_checkEqualLength_e8629e72f2d3b3fa] = env->getStaticMethodID(cls, "checkEqualLength", "([I[I)V");
          mids$[mid_checkEqualLength_2d4b2d13ddc9fb6a] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkEqualLength_393011d94d739a17] = env->getStaticMethodID(cls, "checkEqualLength", "([D[DZ)Z");
          mids$[mid_checkEqualLength_27857a2f8c83f80b] = env->getStaticMethodID(cls, "checkEqualLength", "([I[IZ)Z");
          mids$[mid_checkEqualLength_1fa55763facf3d95] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Z)Z");
          mids$[mid_checkNonNegative_17fd280b39a6ae4b] = env->getStaticMethodID(cls, "checkNonNegative", "([J)V");
          mids$[mid_checkNonNegative_91c722539daade34] = env->getStaticMethodID(cls, "checkNonNegative", "([[J)V");
          mids$[mid_checkNotNaN_ab69da052b88f50c] = env->getStaticMethodID(cls, "checkNotNaN", "([D)V");
          mids$[mid_checkOrder_ab69da052b88f50c] = env->getStaticMethodID(cls, "checkOrder", "([D)V");
          mids$[mid_checkOrder_8b0f7facc8a6a46e] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkOrder_394af56549787f7e] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_9cfc143ead3ed71b] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_5ada72c1cb379bc6] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkOrder_f0c65bca39d2b36e] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkPositive_ab69da052b88f50c] = env->getStaticMethodID(cls, "checkPositive", "([D)V");
          mids$[mid_checkRectangular_91c722539daade34] = env->getStaticMethodID(cls, "checkRectangular", "([[J)V");
          mids$[mid_concatenate_39540fc7a1c0be02] = env->getStaticMethodID(cls, "concatenate", "([[D)[D");
          mids$[mid_convolve_1badeb24cd1b9588] = env->getStaticMethodID(cls, "convolve", "([D[D)[D");
          mids$[mid_cosAngle_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "cosAngle", "([D[D)D");
          mids$[mid_distance_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "distance", "([D[D)D");
          mids$[mid_distance_923288a0d1ba08c3] = env->getStaticMethodID(cls, "distance", "([I[I)D");
          mids$[mid_distance1_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "distance1", "([D[D)D");
          mids$[mid_distance1_f95aa64a2259804a] = env->getStaticMethodID(cls, "distance1", "([I[I)I");
          mids$[mid_distanceInf_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "distanceInf", "([D[D)D");
          mids$[mid_distanceInf_f95aa64a2259804a] = env->getStaticMethodID(cls, "distanceInf", "([I[I)I");
          mids$[mid_ebeAdd_1badeb24cd1b9588] = env->getStaticMethodID(cls, "ebeAdd", "([D[D)[D");
          mids$[mid_ebeDivide_1badeb24cd1b9588] = env->getStaticMethodID(cls, "ebeDivide", "([D[D)[D");
          mids$[mid_ebeMultiply_1badeb24cd1b9588] = env->getStaticMethodID(cls, "ebeMultiply", "([D[D)[D");
          mids$[mid_ebeSubtract_1badeb24cd1b9588] = env->getStaticMethodID(cls, "ebeSubtract", "([D[D)[D");
          mids$[mid_equals_647cf52483fdbbfb] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
          mids$[mid_equals_e686b66104c2bcdb] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
          mids$[mid_equals_ae971d88c358a487] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
          mids$[mid_equals_a3d1d51d22e4faac] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
          mids$[mid_equals_00519a977ecc68a6] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
          mids$[mid_equals_264d1cfb985cead2] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
          mids$[mid_equalsIncludingNaN_e686b66104c2bcdb] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([D[D)Z");
          mids$[mid_equalsIncludingNaN_ae971d88c358a487] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([F[F)Z");
          mids$[mid_isMonotonic_3aec7f9cfa63d6a2] = env->getStaticMethodID(cls, "isMonotonic", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_isMonotonic_a72b37c3f2d4eb72] = env->getStaticMethodID(cls, "isMonotonic", "([Ljava/lang/Comparable;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_linearCombination_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "linearCombination", "([D[D)D");
          mids$[mid_linearCombination_08eba2463884b341] = env->getStaticMethodID(cls, "linearCombination", "(DDDD)D");
          mids$[mid_linearCombination_7f9459f01496f8b0] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDD)D");
          mids$[mid_linearCombination_f3af7376f9b4ca90] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDDDD)D");
          mids$[mid_natural_7247c1a113e968de] = env->getStaticMethodID(cls, "natural", "(I)[I");
          mids$[mid_normalizeArray_ffc9125fb767957a] = env->getStaticMethodID(cls, "normalizeArray", "([DD)[D");
          mids$[mid_safeNorm_b060e4326765ccf1] = env->getStaticMethodID(cls, "safeNorm", "([D)D");
          mids$[mid_scale_91fbb4072ae7ce9a] = env->getStaticMethodID(cls, "scale", "(D[D)[D");
          mids$[mid_scaleInPlace_d606d0c99c70c093] = env->getStaticMethodID(cls, "scaleInPlace", "(D[D)V");
          mids$[mid_sequence_f556b53ccd261e0b] = env->getStaticMethodID(cls, "sequence", "(III)[I");
          mids$[mid_shuffle_86a2769cb881d388] = env->getStaticMethodID(cls, "shuffle", "([I)V");
          mids$[mid_shuffle_731fe975a683f34a] = env->getStaticMethodID(cls, "shuffle", "([ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_shuffle_89dc86ae4bb0adf7] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;)V");
          mids$[mid_shuffle_7526ec75451ed2ad] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_sortInPlace_134a5d9f7619d4a2] = env->getStaticMethodID(cls, "sortInPlace", "([D[[D)V");
          mids$[mid_sortInPlace_7a3c0d46712c2fd1] = env->getStaticMethodID(cls, "sortInPlace", "([DLorg/hipparchus/util/MathArrays$OrderDirection;[[D)V");
          mids$[mid_unique_14dee4cb8cc3e959] = env->getStaticMethodID(cls, "unique", "([D)[D");
          mids$[mid_verifyValues_b08314b77f62cf14] = env->getStaticMethodID(cls, "verifyValues", "([DII)Z");
          mids$[mid_verifyValues_967254fedd78ae78] = env->getStaticMethodID(cls, "verifyValues", "([D[DII)Z");
          mids$[mid_verifyValues_919c5fb93dd70ef8] = env->getStaticMethodID(cls, "verifyValues", "([DIIZ)Z");
          mids$[mid_verifyValues_50d358db3bbe3be9] = env->getStaticMethodID(cls, "verifyValues", "([D[DIIZ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::FieldElement > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::FieldElement >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_80a6a1ce74027d71], a0.this$, a1));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_d3a891e7c6b40b5a], a0.this$, a1, a2));
      }

      JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< JArray< ::org::hipparchus::FieldElement > > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_5d545c1f91daf146], a0.this$, a1, a2, a3));
      }

      void MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_b15baa0161a4e9c7], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_e8629e72f2d3b3fa], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_2d4b2d13ddc9fb6a], a0.this$, a1.this$);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_393011d94d739a17], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_27857a2f8c83f80b], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_1fa55763facf3d95], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkNonNegative(const JArray< jlong > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_17fd280b39a6ae4b], a0.this$);
      }

      void MathArrays::checkNonNegative(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_91c722539daade34], a0.this$);
      }

      void MathArrays::checkNotNaN(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNaN_ab69da052b88f50c], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_ab69da052b88f50c], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_8b0f7facc8a6a46e], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_394af56549787f7e], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_9cfc143ead3ed71b], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_5ada72c1cb379bc6], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_f0c65bca39d2b36e], a0.this$, a1.this$, a2, a3);
      }

      void MathArrays::checkPositive(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkPositive_ab69da052b88f50c], a0.this$);
      }

      void MathArrays::checkRectangular(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRectangular_91c722539daade34], a0.this$);
      }

      JArray< jdouble > MathArrays::concatenate(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_concatenate_39540fc7a1c0be02], a0.this$));
      }

      JArray< jdouble > MathArrays::convolve(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_convolve_1badeb24cd1b9588], a0.this$, a1.this$));
      }

      jdouble MathArrays::cosAngle(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosAngle_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_923288a0d1ba08c3], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance1(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance1_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jint MathArrays::distance1(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distance1_f95aa64a2259804a], a0.this$, a1.this$);
      }

      jdouble MathArrays::distanceInf(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jint MathArrays::distanceInf(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distanceInf_f95aa64a2259804a], a0.this$, a1.this$);
      }

      JArray< jdouble > MathArrays::ebeAdd(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeAdd_1badeb24cd1b9588], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeDivide(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeDivide_1badeb24cd1b9588], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeMultiply(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeMultiply_1badeb24cd1b9588], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeSubtract(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeSubtract_1badeb24cd1b9588], a0.this$, a1.this$));
      }

      jboolean MathArrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_647cf52483fdbbfb], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_e686b66104c2bcdb], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae971d88c358a487], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_a3d1d51d22e4faac], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_00519a977ecc68a6], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_264d1cfb985cead2], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_e686b66104c2bcdb], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_ae971d88c358a487], a0.this$, a1.this$);
      }

      jboolean MathArrays::isMonotonic(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_3aec7f9cfa63d6a2], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::isMonotonic(const JArray< ::java::lang::Comparable > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_a72b37c3f2d4eb72], a0.this$, a1.this$, a2);
      }

      jdouble MathArrays::linearCombination(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_08eba2463884b341], a0, a1, a2, a3);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_7f9459f01496f8b0], a0, a1, a2, a3, a4, a5);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_f3af7376f9b4ca90], a0, a1, a2, a3, a4, a5, a6, a7);
      }

      JArray< jint > MathArrays::natural(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_natural_7247c1a113e968de], a0));
      }

      JArray< jdouble > MathArrays::normalizeArray(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalizeArray_ffc9125fb767957a], a0.this$, a1));
      }

      jdouble MathArrays::safeNorm(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_safeNorm_b060e4326765ccf1], a0.this$);
      }

      JArray< jdouble > MathArrays::scale(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_scale_91fbb4072ae7ce9a], a0, a1.this$));
      }

      void MathArrays::scaleInPlace(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_scaleInPlace_d606d0c99c70c093], a0, a1.this$);
      }

      JArray< jint > MathArrays::sequence(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_sequence_f556b53ccd261e0b], a0, a1, a2));
      }

      void MathArrays::shuffle(const JArray< jint > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_86a2769cb881d388], a0.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, const ::org::hipparchus::random::RandomGenerator & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_731fe975a683f34a], a0.this$, a1.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_89dc86ae4bb0adf7], a0.this$, a1, a2.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2, const ::org::hipparchus::random::RandomGenerator & a3)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_7526ec75451ed2ad], a0.this$, a1, a2.this$, a3.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_134a5d9f7619d4a2], a0.this$, a1.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, const JArray< JArray< jdouble > > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_7a3c0d46712c2fd1], a0.this$, a1.this$, a2.this$);
      }

      JArray< jdouble > MathArrays::unique(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_unique_14dee4cb8cc3e959], a0.this$));
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_b08314b77f62cf14], a0.this$, a1, a2);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_967254fedd78ae78], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_919c5fb93dd70ef8], a0.this$, a1, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3, jboolean a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_50d358db3bbe3be9], a0.this$, a1.this$, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathArrays__methods_[] = {
        DECLARE_METHOD(t_MathArrays, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, buildArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkEqualLength, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNonNegative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNotNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkOrder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkPositive, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkRectangular, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, concatenate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, convolve, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, cosAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distanceInf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeAdd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeDivide, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeMultiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeSubtract, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, isMonotonic, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, linearCombination, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, natural, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, normalizeArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, safeNorm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scale, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scaleInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sequence, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, shuffle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sortInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, unique, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, verifyValues, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays)[] = {
        { Py_tp_methods, t_MathArrays__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays, t_MathArrays, MathArrays);

      void t_MathArrays::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays), &PY_TYPE_DEF(MathArrays), module, "MathArrays", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Position", make_descriptor(&PY_TYPE_DEF(MathArrays$Position)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "OrderDirection", make_descriptor(&PY_TYPE_DEF(MathArrays$OrderDirection)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Function", make_descriptor(&PY_TYPE_DEF(MathArrays$Function)));
      }

      void t_MathArrays::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "class_", make_descriptor(MathArrays::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "wrapfn_", make_descriptor(t_MathArrays::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays::initializeClass, 1)))
          return NULL;
        return t_MathArrays::wrap_Object(MathArrays(((t_MathArrays *) arg)->object.this$));
      }
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > result((jobject) NULL);

            if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError(type, "buildArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[I[IZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[K[KZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkEqualLength", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jlong > a0((jobject) NULL);

            if (!parseArgs(args, "[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< JArray< jlong > > a0((jobject) NULL);

            if (!parseArgs(args, "[[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNonNegative", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkNotNaN(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkNotNaN", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[KKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DKZZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[KKZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkOrder", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkPositive(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkPositive", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jlong > > a0((jobject) NULL);

        if (!parseArg(arg, "[[J", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkRectangular(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRectangular", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::concatenate(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "concatenate", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::convolve(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "convolve", args);
        return NULL;
      }

      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::cosAngle(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "cosAngle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance1", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distanceInf", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeAdd(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeAdd", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeDivide(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeMultiply(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeSubtract(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeSubtract", args);
        return NULL;
      }

      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jbyte > a0((jobject) NULL);
            JArray< jbyte > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jlong > a0((jobject) NULL);
            JArray< jlong > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[J[J", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jshort > a0((jobject) NULL);
            JArray< jshort > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[S[S", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::java::lang::Comparable > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[KKZ", ::java::lang::Comparable::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMonotonic", args);
        return NULL;
      }

      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 6:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble result;

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 8:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble result;

            if (!parseArgs(args, "DDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::natural(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "natural", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble a1;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::normalizeArray(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalizeArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::safeNorm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "safeNorm", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::scale(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "scale", args);
        return NULL;
      }

      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::scaleInPlace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "scaleInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::sequence(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sequence", args);
        return NULL;
      }

      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);

            if (!parseArgs(args, "[Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[IIK", ::org::hipparchus::util::MathArrays$Position::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::random::RandomGenerator a3((jobject) NULL);

            if (!parseArgs(args, "[IIKk", ::org::hipparchus::util::MathArrays$Position::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_, &a3))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "shuffle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);

            if (!parseArgs(args, "[D[[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[DK[[D", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "sortInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::unique(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "unique", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean result;

            if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DIIZ", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 5:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean a4;
            jboolean result;

            if (!parseArgs(args, "[D[DIIZ", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3, a4));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "verifyValues", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Integer.h"
#include "java/lang/Integer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Integer::class$ = NULL;
    jmethodID *Integer::mids$ = NULL;
    bool Integer::live$ = false;
    jint Integer::BYTES = (jint) 0;
    jint Integer::MAX_VALUE = (jint) 0;
    jint Integer::MIN_VALUE = (jint) 0;
    jint Integer::SIZE = (jint) 0;
    ::java::lang::Class *Integer::TYPE = NULL;

    jclass Integer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Integer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_bitCount_0e7cf35192c3effe] = env->getStaticMethodID(cls, "bitCount", "(I)I");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_92ecd94558bf0c68] = env->getStaticMethodID(cls, "compare", "(II)I");
        mids$[mid_compareTo_eb8ccb0a3786e9ee] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Integer;)I");
        mids$[mid_compareUnsigned_92ecd94558bf0c68] = env->getStaticMethodID(cls, "compareUnsigned", "(II)I");
        mids$[mid_decode_8e74996b76bd24d6] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_divideUnsigned_92ecd94558bf0c68] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getInteger_8e74996b76bd24d6] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_getInteger_f8a17c08cd2247a2] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
        mids$[mid_getInteger_f7fdf9e285509298] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_0e7cf35192c3effe] = env->getStaticMethodID(cls, "hashCode", "(I)I");
        mids$[mid_highestOneBit_0e7cf35192c3effe] = env->getStaticMethodID(cls, "highestOneBit", "(I)I");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_0e7cf35192c3effe] = env->getStaticMethodID(cls, "lowestOneBit", "(I)I");
        mids$[mid_max_92ecd94558bf0c68] = env->getStaticMethodID(cls, "max", "(II)I");
        mids$[mid_min_92ecd94558bf0c68] = env->getStaticMethodID(cls, "min", "(II)I");
        mids$[mid_numberOfLeadingZeros_0e7cf35192c3effe] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(I)I");
        mids$[mid_numberOfTrailingZeros_0e7cf35192c3effe] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(I)I");
        mids$[mid_parseInt_f0ba70671b70c6e5] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;)I");
        mids$[mid_parseInt_7c969bab81d289ef] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseInt_9812b0991b0a70b4] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_parseUnsignedInt_f0ba70671b70c6e5] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;)I");
        mids$[mid_parseUnsignedInt_7c969bab81d289ef] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseUnsignedInt_9812b0991b0a70b4] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_remainderUnsigned_92ecd94558bf0c68] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
        mids$[mid_reverse_0e7cf35192c3effe] = env->getStaticMethodID(cls, "reverse", "(I)I");
        mids$[mid_reverseBytes_0e7cf35192c3effe] = env->getStaticMethodID(cls, "reverseBytes", "(I)I");
        mids$[mid_rotateLeft_92ecd94558bf0c68] = env->getStaticMethodID(cls, "rotateLeft", "(II)I");
        mids$[mid_rotateRight_92ecd94558bf0c68] = env->getStaticMethodID(cls, "rotateRight", "(II)I");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_0e7cf35192c3effe] = env->getStaticMethodID(cls, "signum", "(I)I");
        mids$[mid_sum_92ecd94558bf0c68] = env->getStaticMethodID(cls, "sum", "(II)I");
        mids$[mid_toBinaryString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toBinaryString", "(I)Ljava/lang/String;");
        mids$[mid_toHexString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toHexString", "(I)Ljava/lang/String;");
        mids$[mid_toOctalString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toOctalString", "(I)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toString_e91e53c42d39aef9] = env->getStaticMethodID(cls, "toString", "(II)Ljava/lang/String;");
        mids$[mid_toUnsignedLong_f4947a88f79e0725] = env->getStaticMethodID(cls, "toUnsignedLong", "(I)J");
        mids$[mid_toUnsignedString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toUnsignedString", "(I)Ljava/lang/String;");
        mids$[mid_toUnsignedString_e91e53c42d39aef9] = env->getStaticMethodID(cls, "toUnsignedString", "(II)Ljava/lang/String;");
        mids$[mid_valueOf_8e74996b76bd24d6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_valueOf_b3bcfcb4d07a5aa3] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/Integer;");
        mids$[mid_valueOf_f7fdf9e285509298] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticIntField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticIntField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Integer::Integer(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Integer::Integer(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    jint Integer::bitCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_0e7cf35192c3effe], a0);
    }

    jbyte Integer::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Integer::compare(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_92ecd94558bf0c68], a0, a1);
    }

    jint Integer::compareTo(const Integer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_eb8ccb0a3786e9ee], a0.this$);
    }

    jint Integer::compareUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_92ecd94558bf0c68], a0, a1);
    }

    Integer Integer::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_decode_8e74996b76bd24d6], a0.this$));
    }

    jint Integer::divideUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_92ecd94558bf0c68], a0, a1);
    }

    jdouble Integer::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Integer::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jfloat Integer::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    Integer Integer::getInteger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_8e74996b76bd24d6], a0.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, const Integer & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_f8a17c08cd2247a2], a0.this$, a1.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_f7fdf9e285509298], a0.this$, a1));
    }

    jint Integer::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Integer::hashCode(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0e7cf35192c3effe], a0);
    }

    jint Integer::highestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_highestOneBit_0e7cf35192c3effe], a0);
    }

    jint Integer::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jlong Integer::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jint Integer::lowestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lowestOneBit_0e7cf35192c3effe], a0);
    }

    jint Integer::max$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_max_92ecd94558bf0c68], a0, a1);
    }

    jint Integer::min$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_min_92ecd94558bf0c68], a0, a1);
    }

    jint Integer::numberOfLeadingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_0e7cf35192c3effe], a0);
    }

    jint Integer::numberOfTrailingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_0e7cf35192c3effe], a0);
    }

    jint Integer::parseInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_f0ba70671b70c6e5], a0.this$);
    }

    jint Integer::parseInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_7c969bab81d289ef], a0.this$, a1);
    }

    jint Integer::parseInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_9812b0991b0a70b4], a0.this$, a1, a2, a3);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_f0ba70671b70c6e5], a0.this$);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_7c969bab81d289ef], a0.this$, a1);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_9812b0991b0a70b4], a0.this$, a1, a2, a3);
    }

    jint Integer::remainderUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_92ecd94558bf0c68], a0, a1);
    }

    jint Integer::reverse(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverse_0e7cf35192c3effe], a0);
    }

    jint Integer::reverseBytes(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverseBytes_0e7cf35192c3effe], a0);
    }

    jint Integer::rotateLeft(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateLeft_92ecd94558bf0c68], a0, a1);
    }

    jint Integer::rotateRight(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateRight_92ecd94558bf0c68], a0, a1);
    }

    jshort Integer::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    jint Integer::signum(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_0e7cf35192c3effe], a0);
    }

    jint Integer::sum(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_sum_92ecd94558bf0c68], a0, a1);
    }

    ::java::lang::String Integer::toBinaryString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String Integer::toHexString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String Integer::toOctalString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String Integer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Integer::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String Integer::toString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e91e53c42d39aef9], a0, a1));
    }

    jlong Integer::toUnsignedLong(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_f4947a88f79e0725], a0);
    }

    ::java::lang::String Integer::toUnsignedString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String Integer::toUnsignedString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_e91e53c42d39aef9], a0, a1));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8e74996b76bd24d6], a0.this$));
    }

    Integer Integer::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b3bcfcb4d07a5aa3], a0));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f7fdf9e285509298], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg);
    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Integer__methods_[] = {
      DECLARE_METHOD(t_Integer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, compareTo, METH_O),
      DECLARE_METHOD(t_Integer, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, equals, METH_VARARGS),
      DECLARE_METHOD(t_Integer, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, getInteger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Integer, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseUnsignedInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toString, METH_VARARGS),
      DECLARE_METHOD(t_Integer, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Integer)[] = {
      { Py_tp_methods, t_Integer__methods_ },
      { Py_tp_init, (void *) t_Integer_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Integer)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Integer, t_Integer, Integer);

    void t_Integer::install(PyObject *module)
    {
      installType(&PY_TYPE(Integer), &PY_TYPE_DEF(Integer), module, "Integer", 0);
    }

    void t_Integer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "class_", make_descriptor(Integer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "wrapfn_", make_descriptor(unboxInteger));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "boxfn_", make_descriptor(boxInteger));
      env->getClass(Integer::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "BYTES", make_descriptor(Integer::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MAX_VALUE", make_descriptor(Integer::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MIN_VALUE", make_descriptor(Integer::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "SIZE", make_descriptor(Integer::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Integer::TYPE)));
    }

    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Integer::initializeClass, 1)))
        return NULL;
      return t_Integer::wrap_Object(Integer(((t_Integer *) arg)->object.this$));
    }
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Integer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Integer(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          Integer object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Integer(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg)
    {
      Integer a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Integer), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Integer result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::decode(a0));
        return t_Integer::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::divideUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer a1((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Integer), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInteger", args);
      return NULL;
    }

    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::highestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::lowestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::max$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::min$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseInt", args);
      return NULL;
    }

    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedInt", args);
      return NULL;
    }

    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::remainderUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverse(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateLeft(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateRight(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::sum(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jlong result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          jint a0;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase::class$ = NULL;
        jmethodID *EstimatedMeasurementBase::mids$ = NULL;
        bool EstimatedMeasurementBase::live$ = false;

        jclass EstimatedMeasurementBase::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1751916beaa99c3d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getCount_55546ef6a647f39b] = env->getMethodID(cls, "getCount", "()I");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEstimatedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getEstimatedValue", "()[D");
            mids$[mid_getIteration_55546ef6a647f39b] = env->getMethodID(cls, "getIteration", "()I");
            mids$[mid_getObservedMeasurement_a902d8547365f415] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getObservedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParticipants_352b3a127c5ae4d9] = env->getMethodID(cls, "getParticipants", "()[Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getStates_3807ff088e7ce821] = env->getMethodID(cls, "getStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStatus_33e10db37ee6c7fc] = env->getMethodID(cls, "getStatus", "()Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_getTimeOffset_b74f83833fdad017] = env->getMethodID(cls, "getTimeOffset", "()D");
            mids$[mid_setEstimatedValue_ab69da052b88f50c] = env->getMethodID(cls, "setEstimatedValue", "([D)V");
            mids$[mid_setStatus_0feae6c71af38e56] = env->getMethodID(cls, "setStatus", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase::EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1751916beaa99c3d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        jint EstimatedMeasurementBase::getCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getCount_55546ef6a647f39b]);
        }

        ::org::orekit::time::AbsoluteDate EstimatedMeasurementBase::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getEstimatedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEstimatedValue_25e1757a36c4dde2]));
        }

        jint EstimatedMeasurementBase::getIteration() const
        {
          return env->callIntMethod(this$, mids$[mid_getIteration_55546ef6a647f39b]);
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement EstimatedMeasurementBase::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_a902d8547365f415]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_25e1757a36c4dde2]));
        }

        JArray< ::org::orekit::utils::TimeStampedPVCoordinates > EstimatedMeasurementBase::getParticipants() const
        {
          return JArray< ::org::orekit::utils::TimeStampedPVCoordinates >(env->callObjectMethod(this$, mids$[mid_getParticipants_352b3a127c5ae4d9]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > EstimatedMeasurementBase::getStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getStates_3807ff088e7ce821]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status EstimatedMeasurementBase::getStatus() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status(env->callObjectMethod(this$, mids$[mid_getStatus_33e10db37ee6c7fc]));
        }

        jdouble EstimatedMeasurementBase::getTimeOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOffset_b74f83833fdad017]);
        }

        void EstimatedMeasurementBase::setEstimatedValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEstimatedValue_ab69da052b88f50c], a0.this$);
        }

        void EstimatedMeasurementBase::setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStatus_0feae6c71af38e56], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args);
        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, count),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, date),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, estimatedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, iteration),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedMeasurement),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, participants),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, states),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, status),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, timeOffset),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getCount, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getEstimatedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getIteration, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getParticipants, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStates, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStatus, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getTimeOffset, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setEstimatedValue, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setStatus, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurementBase_init_ },
          { Py_tp_getset, t_EstimatedMeasurementBase__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase, t_EstimatedMeasurementBase, EstimatedMeasurementBase);
        PyObject *t_EstimatedMeasurementBase::wrap_Object(const EstimatedMeasurementBase& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase), &PY_TYPE_DEF(EstimatedMeasurementBase), module, "EstimatedMeasurementBase", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "Status", make_descriptor(&PY_TYPE_DEF(EstimatedMeasurementBase$Status)));
        }

        void t_EstimatedMeasurementBase::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "class_", make_descriptor(EstimatedMeasurementBase::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase::wrap_Object(EstimatedMeasurementBase(((t_EstimatedMeasurementBase *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurementBase object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurementBase(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIteration());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParticipants());
          return JArray<jobject>(result.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status result((jobject) NULL);
          OBJ_CALL(result = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.setEstimatedValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEstimatedValue", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::parameters_))
          {
            OBJ_CALL(self->object.setStatus(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStatus", arg);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedValue());
          return value.wrap();
        }
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setEstimatedValue(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "estimatedValue", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIteration());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParticipants());
          return JArray<jobject>(value.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
          OBJ_CALL(value = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(value);
        }
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &value))
            {
              INT_CALL(self->object.setStatus(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "status", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonSupplier.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonSupplier::class$ = NULL;
      jmethodID *PythonSupplier::mids$ = NULL;
      bool PythonSupplier::live$ = false;

      jclass PythonSupplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonSupplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_get_541690f9ee81d3ad] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSupplier::PythonSupplier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonSupplier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonSupplier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonSupplier::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args);
      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self);
      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args);
      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data);
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data);
      static PyGetSetDef t_PythonSupplier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSupplier, self),
        DECLARE_GET_FIELD(t_PythonSupplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSupplier__methods_[] = {
        DECLARE_METHOD(t_PythonSupplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonSupplier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSupplier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSupplier)[] = {
        { Py_tp_methods, t_PythonSupplier__methods_ },
        { Py_tp_init, (void *) t_PythonSupplier_init_ },
        { Py_tp_getset, t_PythonSupplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSupplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSupplier, t_PythonSupplier, PythonSupplier);
      PyObject *t_PythonSupplier::wrap_Object(const PythonSupplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonSupplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonSupplier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSupplier), &PY_TYPE_DEF(PythonSupplier), module, "PythonSupplier", 1);
      }

      void t_PythonSupplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "class_", make_descriptor(PythonSupplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "wrapfn_", make_descriptor(t_PythonSupplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSupplier::initializeClass);
        JNINativeMethod methods[] = {
          { "get", "()Ljava/lang/Object;", (void *) t_PythonSupplier_get0 },
          { "pythonDecRef", "()V", (void *) t_PythonSupplier_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSupplier::initializeClass, 1)))
          return NULL;
        return t_PythonSupplier::wrap_Object(PythonSupplier(((t_PythonSupplier *) arg)->object.this$));
      }
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSupplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds)
      {
        PythonSupplier object((jobject) NULL);

        INT_CALL(object = PythonSupplier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "get", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("get", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbstractMultipleShooting::class$ = NULL;
      jmethodID *AbstractMultipleShooting::mids$ = NULL;
      bool AbstractMultipleShooting::live$ = false;

      jclass AbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addConstraint_94fe8d9ffeb50676] = env->getMethodID(cls, "addConstraint", "(IID)V");
          mids$[mid_compute_e62d3bb06d56d7e3] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_setEpochFreedom_34742154de10200a] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
          mids$[mid_setPatchPointComponentFreedom_90b0dcc6277c0236] = env->getMethodID(cls, "setPatchPointComponentFreedom", "(IIZ)V");
          mids$[mid_setScaleLength_8ba9fe7a847cecad] = env->getMethodID(cls, "setScaleLength", "(D)V");
          mids$[mid_setScaleTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setScaleTime", "(D)V");
          mids$[mid_getAugmentedInitialState_f4730dd89e9880a0] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getNumberOfConstraints_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
          mids$[mid_computeEpochJacobianMatrix_223f424c780300ce] = env->getMethodID(cls, "computeEpochJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_computeAdditionalConstraints_a16345554cd829da] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_223f424c780300ce] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getConstraintsMap_810bed48fafb0b9a] = env->getMethodID(cls, "getConstraintsMap", "()Ljava/util/Map;");
          mids$[mid_getPatchedSpacecraftState_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPatchedSpacecraftState", "()Ljava/util/List;");
          mids$[mid_getPatchPoint_f4730dd89e9880a0] = env->getMethodID(cls, "getPatchPoint", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_updateAdditionalConstraints_75061e5f5bbace93] = env->getMethodID(cls, "updateAdditionalConstraints", "(I[D)V");
          mids$[mid_getNumberOfFreeComponents_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfFreeComponents", "()I");
          mids$[mid_getFreeCompsMap_61a28961b8c39fbd] = env->getMethodID(cls, "getFreeCompsMap", "()[Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMultipleShooting::addConstraint(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addConstraint_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::java::util::List AbstractMultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_e62d3bb06d56d7e3]));
      }

      void AbstractMultipleShooting::setEpochFreedom(jint a0, jboolean a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEpochFreedom_34742154de10200a], a0, a1);
      }

      void AbstractMultipleShooting::setPatchPointComponentFreedom(jint a0, jint a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setPatchPointComponentFreedom_90b0dcc6277c0236], a0, a1, a2);
      }

      void AbstractMultipleShooting::setScaleLength(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleLength_8ba9fe7a847cecad], a0);
      }

      void AbstractMultipleShooting::setScaleTime(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleTime_8ba9fe7a847cecad], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self);
      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg);
      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractMultipleShooting__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleLength),
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_AbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, addConstraint, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, compute, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setEpochFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setPatchPointComponentFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleLength, METH_O),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleTime, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleShooting)[] = {
        { Py_tp_methods, t_AbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMultipleShooting, t_AbstractMultipleShooting, AbstractMultipleShooting);

      void t_AbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMultipleShooting), &PY_TYPE_DEF(AbstractMultipleShooting), module, "AbstractMultipleShooting", 0);
      }

      void t_AbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "class_", make_descriptor(AbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "wrapfn_", make_descriptor(t_AbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_AbstractMultipleShooting::wrap_Object(AbstractMultipleShooting(((t_AbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addConstraint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addConstraint", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }

      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jboolean a1;

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(self->object.setEpochFreedom(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEpochFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean a2;

        if (!parseArgs(args, "IIZ", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setPatchPointComponentFreedom(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setPatchPointComponentFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleLength(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleLength", arg);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleTime(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleTime", arg);
        return NULL;
      }

      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleLength(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
        return -1;
      }

      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleTime(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonAbstractRadiationForceModel::class$ = NULL;
        jmethodID *PythonAbstractRadiationForceModel::mids$ = NULL;
        bool PythonAbstractRadiationForceModel::live$ = false;

        jclass PythonAbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonAbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9ef5443d0ff1b80f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractRadiationForceModel::PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_9ef5443d0ff1b80f, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::java::util::List PythonAbstractRadiationForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void PythonAbstractRadiationForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractRadiationForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractRadiationForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractRadiationForceModel, t_PythonAbstractRadiationForceModel, PythonAbstractRadiationForceModel);

        void t_PythonAbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractRadiationForceModel), &PY_TYPE_DEF(PythonAbstractRadiationForceModel), module, "PythonAbstractRadiationForceModel", 0);
        }

        void t_PythonAbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "class_", make_descriptor(PythonAbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "wrapfn_", make_descriptor(t_PythonAbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractRadiationForceModel::wrap_Object(PythonAbstractRadiationForceModel(((t_PythonAbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          PythonAbstractRadiationForceModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PythonAbstractRadiationForceModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterDriversProvider::class$ = NULL;
      jmethodID *PythonParameterDriversProvider::mids$ = NULL;
      bool PythonParameterDriversProvider::live$ = false;

      jclass PythonParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterDriversProvider::PythonParameterDriversProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonParameterDriversProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonParameterDriversProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonParameterDriversProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self);
      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args);
      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data);
      static PyGetSetDef t_PythonParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterDriversProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_PythonParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterDriversProvider)[] = {
        { Py_tp_methods, t_PythonParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) t_PythonParameterDriversProvider_init_ },
        { Py_tp_getset, t_PythonParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterDriversProvider, t_PythonParameterDriversProvider, PythonParameterDriversProvider);

      void t_PythonParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterDriversProvider), &PY_TYPE_DEF(PythonParameterDriversProvider), module, "PythonParameterDriversProvider", 1);
      }

      void t_PythonParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "class_", make_descriptor(PythonParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "wrapfn_", make_descriptor(t_PythonParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterDriversProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonParameterDriversProvider_getParametersDrivers0 },
          { "pythonDecRef", "()V", (void *) t_PythonParameterDriversProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_PythonParameterDriversProvider::wrap_Object(PythonParameterDriversProvider(((t_PythonParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterDriversProvider object((jobject) NULL);

        INT_CALL(object = PythonParameterDriversProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getParametersDrivers", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmParser::class$ = NULL;
              jmethodID *ApmParser::mids$ = NULL;
              bool ApmParser::live$ = false;

              jclass ApmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_b2f14c5dd9556061] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Apm;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_beec2990b8b4fe1e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Apm ApmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Apm(env->callObjectMethod(this$, mids$[mid_build_b2f14c5dd9556061]));
              }

              jboolean ApmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader ApmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_beec2990b8b4fe1e]));
              }

              jboolean ApmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean ApmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void ApmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data);
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data);
              static PyGetSetDef t_ApmParser__fields_[] = {
                DECLARE_GET_FIELD(t_ApmParser, header),
                DECLARE_GET_FIELD(t_ApmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmParser__methods_[] = {
                DECLARE_METHOD(t_ApmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmParser)[] = {
                { Py_tp_methods, t_ApmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(ApmParser, t_ApmParser, ApmParser);
              PyObject *t_ApmParser::wrap_Object(const ApmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_ApmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_ApmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmParser), &PY_TYPE_DEF(ApmParser), module, "ApmParser", 0);
              }

              void t_ApmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "class_", make_descriptor(ApmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "wrapfn_", make_descriptor(t_ApmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmParser::initializeClass, 1)))
                  return NULL;
                return t_ApmParser::wrap_Object(ApmParser(((t_ApmParser *) arg)->object.this$));
              }
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Apm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Apm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmHeader::class$ = NULL;
              jmethodID *SsrIgmHeader::mids$ = NULL;
              bool SsrIgmHeader::live$ = false;

              jclass SsrIgmHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfSatellites_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_setNumberOfSatellites_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmHeader::SsrIgmHeader() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIgmHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_55546ef6a647f39b]);
              }

              void SsrIgmHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_44ed599e93e8a30c], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self);
              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg);
              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data);
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmHeader, numberOfSatellites),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmHeader__methods_[] = {
                DECLARE_METHOD(t_SsrIgmHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmHeader, setNumberOfSatellites, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmHeader)[] = {
                { Py_tp_methods, t_SsrIgmHeader__methods_ },
                { Py_tp_init, (void *) t_SsrIgmHeader_init_ },
                { Py_tp_getset, t_SsrIgmHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgmHeader, t_SsrIgmHeader, SsrIgmHeader);

              void t_SsrIgmHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmHeader), &PY_TYPE_DEF(SsrIgmHeader), module, "SsrIgmHeader", 0);
              }

              void t_SsrIgmHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "class_", make_descriptor(SsrIgmHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "wrapfn_", make_descriptor(t_SsrIgmHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmHeader::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmHeader::wrap_Object(SsrIgmHeader(((t_SsrIgmHeader *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmHeader object((jobject) NULL);

                INT_CALL(object = SsrIgmHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanModel::class$ = NULL;
        jmethodID *UnscentedKalmanModel::mids$ = NULL;
        bool UnscentedKalmanModel::live$ = false;

        jclass UnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_e37ac5ac73cc5311] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_17493e4ff0ba8a7f] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_1545440d4dab3e97] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_c0bf9a4322bf8619] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_b0b6792f6308ef30] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_aef7db4b13ced902], a0.this$, a1.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821]));
        }

        ::org::orekit::time::AbsoluteDate UnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint UnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_e37ac5ac73cc5311]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425]));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_17493e4ff0ba8a7f]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_1545440d4dab3e97], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c0bf9a4322bf8619], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::hipparchus::linear::RealVector > UnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_b0b6792f6308ef30], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_UnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanModel)[] = {
          { Py_tp_methods, t_UnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanModel, t_UnscentedKalmanModel, UnscentedKalmanModel);

        void t_UnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanModel), &PY_TYPE_DEF(UnscentedKalmanModel), module, "UnscentedKalmanModel", 0);
        }

        void t_UnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "class_", make_descriptor(UnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "wrapfn_", make_descriptor(t_UnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanModel::wrap_Object(UnscentedKalmanModel(((t_UnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer::live$ = false;

            jclass NonLinearConjugateGradientOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0905b944d2ee80b7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_143c7e95e2590c15] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDD)V");
                mids$[mid_init$_cba8557a7f2969ed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDDLorg/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner;)V");
                mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_0905b944d2ee80b7, a0.this$, a1.this$)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_143c7e95e2590c15, a0.this$, a1.this$, a2, a3, a4)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner & a5) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_cba8557a7f2969ed, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

            ::org::hipparchus::optim::PointValuePair NonLinearConjugateGradientOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer, t_NonLinearConjugateGradientOptimizer, NonLinearConjugateGradientOptimizer);
            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_Object(const NonLinearConjugateGradientOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer), module, "NonLinearConjugateGradientOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "IdentityPreconditioner", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "Formula", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula)));
            }

            void t_NonLinearConjugateGradientOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "class_", make_descriptor(NonLinearConjugateGradientOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer::wrap_Object(NonLinearConjugateGradientOptimizer(((t_NonLinearConjugateGradientOptimizer *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDD", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner a5((jobject) NULL);
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDDk", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(NonLinearConjugateGradientOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AggregateBoundedAttitudeProvider::class$ = NULL;
      jmethodID *AggregateBoundedAttitudeProvider::mids$ = NULL;
      bool AggregateBoundedAttitudeProvider::live$ = false;

      jclass AggregateBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AggregateBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregateBoundedAttitudeProvider::AggregateBoundedAttitudeProvider(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

      ::org::orekit::attitudes::Attitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_AggregateBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregateBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_AggregateBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_AggregateBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_AggregateBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregateBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregateBoundedAttitudeProvider, t_AggregateBoundedAttitudeProvider, AggregateBoundedAttitudeProvider);

      void t_AggregateBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregateBoundedAttitudeProvider), &PY_TYPE_DEF(AggregateBoundedAttitudeProvider), module, "AggregateBoundedAttitudeProvider", 0);
      }

      void t_AggregateBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "class_", make_descriptor(AggregateBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_AggregateBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AggregateBoundedAttitudeProvider::wrap_Object(AggregateBoundedAttitudeProvider(((t_AggregateBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        AggregateBoundedAttitudeProvider object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = AggregateBoundedAttitudeProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$EphemerisSegment::class$ = NULL;
        jmethodID *EphemerisFile$EphemerisSegment::mids$ = NULL;
        bool EphemerisFile$EphemerisSegment::live$ = false;

        jclass EphemerisFile$EphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$EphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_2d80cda3dc1f1422] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_9e515362e8de0afe] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::CartesianDerivativesFilter EphemerisFile$EphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::java::util::List EphemerisFile$EphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
        }

        jint EphemerisFile$EphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble EphemerisFile$EphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2d80cda3dc1f1422]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9e515362e8de0afe], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyGetSetDef t_EphemerisFile$EphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, frame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, start),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$EphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$EphemerisSegment)[] = {
          { Py_tp_methods, t_EphemerisFile$EphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$EphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$EphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$EphemerisSegment, t_EphemerisFile$EphemerisSegment, EphemerisFile$EphemerisSegment);
        PyObject *t_EphemerisFile$EphemerisSegment::wrap_Object(const EphemerisFile$EphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$EphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFile$EphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$EphemerisSegment), &PY_TYPE_DEF(EphemerisFile$EphemerisSegment), module, "EphemerisFile$EphemerisSegment", 0);
        }

        void t_EphemerisFile$EphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "class_", make_descriptor(EphemerisFile$EphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "wrapfn_", make_descriptor(t_EphemerisFile$EphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$EphemerisSegment::wrap_Object(EphemerisFile$EphemerisSegment(((t_EphemerisFile$EphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *InterpolatingTransformProvider::class$ = NULL;
      jmethodID *InterpolatingTransformProvider::mids$ = NULL;
      bool InterpolatingTransformProvider::live$ = false;

      jclass InterpolatingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/InterpolatingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5ee83e9cfd012af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_55546ef6a647f39b] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_51018934a5745bab] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStep_b74f83833fdad017] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolatingTransformProvider::InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5ee83e9cfd012af, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint InterpolatingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_55546ef6a647f39b]);
      }

      ::org::orekit::frames::TransformProvider InterpolatingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_51018934a5745bab]));
      }

      jdouble InterpolatingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_b74f83833fdad017]);
      }

      ::org::orekit::frames::Transform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args);
      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data);
      static PyGetSetDef t_InterpolatingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolatingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_InterpolatingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolatingTransformProvider)[] = {
        { Py_tp_methods, t_InterpolatingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_InterpolatingTransformProvider_init_ },
        { Py_tp_getset, t_InterpolatingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolatingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolatingTransformProvider, t_InterpolatingTransformProvider, InterpolatingTransformProvider);

      void t_InterpolatingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolatingTransformProvider), &PY_TYPE_DEF(InterpolatingTransformProvider), module, "InterpolatingTransformProvider", 0);
      }

      void t_InterpolatingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "class_", make_descriptor(InterpolatingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "wrapfn_", make_descriptor(t_InterpolatingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolatingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_InterpolatingTransformProvider::wrap_Object(InterpolatingTransformProvider(((t_InterpolatingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolatingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        InterpolatingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = InterpolatingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepNormalizer::class$ = NULL;
        jmethodID *FieldOrekitStepNormalizer::mids$ = NULL;
        bool FieldOrekitStepNormalizer::live$ = false;

        jclass FieldOrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_73fc248bc2640832] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getFixedStepHandler_61ae3f77f3cce6dd] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_81520b552cb3fa26] = env->getMethodID(cls, "getFixedTimeStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_handleStep_fa82adff12d70536] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_requiresDenseOutput_9ab94ac1dc23b105] = env->getMethodID(cls, "requiresDenseOutput", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOrekitStepNormalizer::FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73fc248bc2640832, a0.this$, a1.this$)) {}

        void FieldOrekitStepNormalizer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_54d9efbf99822980], a0.this$);
        }

        ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler FieldOrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_61ae3f77f3cce6dd]));
        }

        ::org::hipparchus::CalculusFieldElement FieldOrekitStepNormalizer::getFixedTimeStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFixedTimeStep_81520b552cb3fa26]));
        }

        void FieldOrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_fa82adff12d70536], a0.this$);
        }

        void FieldOrekitStepNormalizer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        jboolean FieldOrekitStepNormalizer::requiresDenseOutput() const
        {
          return env->callBooleanMethod(this$, mids$[mid_requiresDenseOutput_9ab94ac1dc23b105]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldOrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedTimeStep),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, requiresDenseOutput, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepNormalizer)[] = {
          { Py_tp_methods, t_FieldOrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldOrekitStepNormalizer_init_ },
          { Py_tp_getset, t_FieldOrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepNormalizer, t_FieldOrekitStepNormalizer, FieldOrekitStepNormalizer);
        PyObject *t_FieldOrekitStepNormalizer::wrap_Object(const FieldOrekitStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepNormalizer), &PY_TYPE_DEF(FieldOrekitStepNormalizer), module, "FieldOrekitStepNormalizer", 0);
        }

        void t_FieldOrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "class_", make_descriptor(FieldOrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "wrapfn_", make_descriptor(t_FieldOrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepNormalizer::wrap_Object(FieldOrekitStepNormalizer(((t_FieldOrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
          {
            INT_CALL(object = FieldOrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.requiresDenseOutput());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractListCrawler::class$ = NULL;
      jmethodID *PythonAbstractListCrawler::mids$ = NULL;
      bool PythonAbstractListCrawler::live$ = false;

      jclass PythonAbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBaseName_9a3ac03d9f8571c6] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_9a3ac03d9f8571c6] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getStream_0382569eb62554bd] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_af9c1f2da4a68b37] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractListCrawler::PythonAbstractListCrawler() : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAbstractListCrawler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractListCrawler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractListCrawler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args);
      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self);
      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data);
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data);
      static PyGetSetDef t_PythonAbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, self),
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractListCrawler)[] = {
        { Py_tp_methods, t_PythonAbstractListCrawler__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractListCrawler_init_ },
        { Py_tp_getset, t_PythonAbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(PythonAbstractListCrawler, t_PythonAbstractListCrawler, PythonAbstractListCrawler);
      PyObject *t_PythonAbstractListCrawler::wrap_Object(const PythonAbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonAbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonAbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractListCrawler), &PY_TYPE_DEF(PythonAbstractListCrawler), module, "PythonAbstractListCrawler", 1);
      }

      void t_PythonAbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "class_", make_descriptor(PythonAbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "wrapfn_", make_descriptor(t_PythonAbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractListCrawler::initializeClass);
        JNINativeMethod methods[] = {
          { "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getBaseName0 },
          { "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getCompleteName1 },
          { "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;", (void *) t_PythonAbstractListCrawler_getStream2 },
          { "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;", (void *) t_PythonAbstractListCrawler_getZipJarCrawler3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractListCrawler_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractListCrawler::wrap_Object(PythonAbstractListCrawler(((t_PythonAbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractListCrawler object((jobject) NULL);

        INT_CALL(object = PythonAbstractListCrawler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getBaseName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getBaseName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getCompleteName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getCompleteName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStream", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("getStream", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::ZipJarCrawler value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getZipJarCrawler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::ZipJarCrawler::initializeClass, &value))
        {
          throwTypeError("getZipJarCrawler", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *JulierUnscentedTransform::class$ = NULL;
      jmethodID *JulierUnscentedTransform::mids$ = NULL;
      bool JulierUnscentedTransform::live$ = false;
      jdouble JulierUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass JulierUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/JulierUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_getWc_3a10cc75bd070d84] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_3a10cc75bd070d84] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_b74f83833fdad017] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0, jdouble a1) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_3a10cc75bd070d84]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data);
      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data);
      static PyGetSetDef t_JulierUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JulierUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_JulierUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JulierUnscentedTransform)[] = {
        { Py_tp_methods, t_JulierUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_JulierUnscentedTransform_init_ },
        { Py_tp_getset, t_JulierUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JulierUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(JulierUnscentedTransform, t_JulierUnscentedTransform, JulierUnscentedTransform);

      void t_JulierUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(JulierUnscentedTransform), &PY_TYPE_DEF(JulierUnscentedTransform), module, "JulierUnscentedTransform", 0);
      }

      void t_JulierUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "class_", make_descriptor(JulierUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "wrapfn_", make_descriptor(t_JulierUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(JulierUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(JulierUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JulierUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_JulierUnscentedTransform::wrap_Object(JulierUnscentedTransform(((t_JulierUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JulierUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = JulierUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = JulierUnscentedTransform(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *CircularFieldOfView::class$ = NULL;
        jmethodID *CircularFieldOfView::mids$ = NULL;
        bool CircularFieldOfView::live$ = false;

        jclass CircularFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/CircularFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_97a411cae22dcac2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");
            mids$[mid_getHalfAperture_b74f83833fdad017] = env->getMethodID(cls, "getHalfAperture", "()D");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_498f52cd8e5a7072] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CircularFieldOfView::CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_97a411cae22dcac2, a0.this$, a1, a2)) {}

        jdouble CircularFieldOfView::getHalfAperture() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfAperture_b74f83833fdad017]);
        }

        jdouble CircularFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_927580832e9083f9], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D CircularFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_f21507e4850a184e], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self);
        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data);
        static PyGetSetDef t_CircularFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_CircularFieldOfView, halfAperture),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CircularFieldOfView__methods_[] = {
          DECLARE_METHOD(t_CircularFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, getHalfAperture, METH_NOARGS),
          DECLARE_METHOD(t_CircularFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_CircularFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CircularFieldOfView)[] = {
          { Py_tp_methods, t_CircularFieldOfView__methods_ },
          { Py_tp_init, (void *) t_CircularFieldOfView_init_ },
          { Py_tp_getset, t_CircularFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CircularFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(CircularFieldOfView, t_CircularFieldOfView, CircularFieldOfView);

        void t_CircularFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(CircularFieldOfView), &PY_TYPE_DEF(CircularFieldOfView), module, "CircularFieldOfView", 0);
        }

        void t_CircularFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "class_", make_descriptor(CircularFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "wrapfn_", make_descriptor(t_CircularFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CircularFieldOfView::initializeClass, 1)))
            return NULL;
          return t_CircularFieldOfView::wrap_Object(CircularFieldOfView(((t_CircularFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CircularFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          CircularFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = CircularFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
