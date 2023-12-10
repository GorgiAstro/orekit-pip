#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesRangeModifier::RelativisticJ2ClockInterSatellitesRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier, t_RelativisticJ2ClockInterSatellitesRangeModifier, RelativisticJ2ClockInterSatellitesRangeModifier);

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesRangeModifier), module, "RelativisticJ2ClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_Object(RelativisticJ2ClockInterSatellitesRangeModifier(((t_RelativisticJ2ClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/InterruptedException.h"
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClass_7c16c5008b34b3db] = env->getMethodID(cls, "getClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_notify_0fa09c18fee449d5] = env->getMethodID(cls, "notify", "()V");
        mids$[mid_notifyAll_0fa09c18fee449d5] = env->getMethodID(cls, "notifyAll", "()V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_wait_0fa09c18fee449d5] = env->getMethodID(cls, "wait", "()V");
        mids$[mid_wait_3a8e7649f31fdb20] = env->getMethodID(cls, "wait", "(J)V");
        mids$[mid_wait_bc47df22dc246221] = env->getMethodID(cls, "wait", "(JI)V");
        mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Object::Object() : ::JObject(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    jboolean Object::equals(const Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Class Object::getClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getClass_7c16c5008b34b3db]));
    }

    jint Object::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    void Object::notify() const
    {
      env->callVoidMethod(this$, mids$[mid_notify_0fa09c18fee449d5]);
    }

    void Object::notifyAll() const
    {
      env->callVoidMethod(this$, mids$[mid_notifyAll_0fa09c18fee449d5]);
    }

    ::java::lang::String Object::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void Object::wait() const
    {
      env->callVoidMethod(this$, mids$[mid_wait_0fa09c18fee449d5]);
    }

    void Object::wait(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_3a8e7649f31fdb20], a0);
    }

    void Object::wait(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_bc47df22dc246221], a0, a1);
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
#include "org/orekit/utils/PythonParameterObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterObserver::class$ = NULL;
      jmethodID *PythonParameterObserver::mids$ = NULL;
      bool PythonParameterObserver::live$ = false;

      jclass PythonParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_valueChanged_add632ecd3f14e19] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_8e4add4a2fbb55d9] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterObserver::PythonParameterObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonParameterObserver::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonParameterObserver::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonParameterObserver::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self);
      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args);
      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data);
      static PyGetSetDef t_PythonParameterObserver__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterObserver, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterObserver__methods_[] = {
        DECLARE_METHOD(t_PythonParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterObserver, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterObserver)[] = {
        { Py_tp_methods, t_PythonParameterObserver__methods_ },
        { Py_tp_init, (void *) t_PythonParameterObserver_init_ },
        { Py_tp_getset, t_PythonParameterObserver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterObserver, t_PythonParameterObserver, PythonParameterObserver);

      void t_PythonParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterObserver), &PY_TYPE_DEF(PythonParameterObserver), module, "PythonParameterObserver", 1);
      }

      void t_PythonParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "class_", make_descriptor(PythonParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "wrapfn_", make_descriptor(t_PythonParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterObserver::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterObserver_pythonDecRef0 },
          { "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonParameterObserver_valueChanged1 },
          { "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V", (void *) t_PythonParameterObserver_valueSpanMapChanged2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterObserver::initializeClass, 1)))
          return NULL;
        return t_PythonParameterObserver::wrap_Object(PythonParameterObserver(((t_PythonParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterObserver object((jobject) NULL);

        INT_CALL(object = PythonParameterObserver());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args)
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

      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "valueChanged", "dOO", (double) a0, o1, o2);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_TimeSpanMap::wrap_Object(::org::orekit::utils::TimeSpanMap(a0));
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *result = PyObject_CallMethod(obj, "valueSpanMapChanged", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data)
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
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField::class$ = NULL;
      jmethodID *DfpField::mids$ = NULL;
      bool DfpField::live$ = false;
      jint DfpField::FLAG_DIV_ZERO = (jint) 0;
      jint DfpField::FLAG_INEXACT = (jint) 0;
      jint DfpField::FLAG_INVALID = (jint) 0;
      jint DfpField::FLAG_OVERFLOW = (jint) 0;
      jint DfpField::FLAG_UNDERFLOW = (jint) 0;

      jclass DfpField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_clearIEEEFlags_0fa09c18fee449d5] = env->getMethodID(cls, "clearIEEEFlags", "()V");
          mids$[mid_computeExp_e130e149d282e384] = env->getStaticMethodID(cls, "computeExp", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_computeLn_9c78f332607c1977] = env->getStaticMethodID(cls, "computeLn", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDegToRad_7fd146fa3f090bf3] = env->getMethodID(cls, "getDegToRad", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getE_7fd146fa3f090bf3] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getESplit_0ca66b07d05059e1] = env->getMethodID(cls, "getESplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExtendedField_e90ad1b7c724c3a9] = env->getMethodID(cls, "getExtendedField", "(IZ)Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getIEEEFlags_570ce0828f81a2c1] = env->getMethodID(cls, "getIEEEFlags", "()I");
          mids$[mid_getLn10_7fd146fa3f090bf3] = env->getMethodID(cls, "getLn10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2_7fd146fa3f090bf3] = env->getMethodID(cls, "getLn2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2Split_0ca66b07d05059e1] = env->getMethodID(cls, "getLn2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5_7fd146fa3f090bf3] = env->getMethodID(cls, "getLn5", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5Split_0ca66b07d05059e1] = env->getMethodID(cls, "getLn5Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getOne_7fd146fa3f090bf3] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_7fd146fa3f090bf3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPiSplit_0ca66b07d05059e1] = env->getMethodID(cls, "getPiSplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadToDeg_7fd146fa3f090bf3] = env->getMethodID(cls, "getRadToDeg", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getRoundingMode_bf46aec6cfca2c16] = env->getMethodID(cls, "getRoundingMode", "()Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getSqr2_7fd146fa3f090bf3] = env->getMethodID(cls, "getSqr2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Reciprocal_7fd146fa3f090bf3] = env->getMethodID(cls, "getSqr2Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Split_0ca66b07d05059e1] = env->getMethodID(cls, "getSqr2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3_7fd146fa3f090bf3] = env->getMethodID(cls, "getSqr3", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3Reciprocal_7fd146fa3f090bf3] = env->getMethodID(cls, "getSqr3Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getTwo_7fd146fa3f090bf3] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_7fd146fa3f090bf3] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_newDfp_7fd146fa3f090bf3] = env->getMethodID(cls, "newDfp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_71d71a82cc65a754] = env->getMethodID(cls, "newDfp", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_63aa6f5f01162583] = env->getMethodID(cls, "newDfp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_57809bf392b66806] = env->getMethodID(cls, "newDfp", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_81c4d69757062546] = env->getMethodID(cls, "newDfp", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_0fe5880f95528b86] = env->getMethodID(cls, "newDfp", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_0b19f2e563b71fc5] = env->getMethodID(cls, "newDfp", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_84679f0649faeef6] = env->getMethodID(cls, "newDfp", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_setIEEEFlags_99803b0791f320ff] = env->getMethodID(cls, "setIEEEFlags", "(I)V");
          mids$[mid_setIEEEFlagsBits_99803b0791f320ff] = env->getMethodID(cls, "setIEEEFlagsBits", "(I)V");
          mids$[mid_setRoundingMode_3e40fdd14a832bfd] = env->getMethodID(cls, "setRoundingMode", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FLAG_DIV_ZERO = env->getStaticIntField(cls, "FLAG_DIV_ZERO");
          FLAG_INEXACT = env->getStaticIntField(cls, "FLAG_INEXACT");
          FLAG_INVALID = env->getStaticIntField(cls, "FLAG_INVALID");
          FLAG_OVERFLOW = env->getStaticIntField(cls, "FLAG_OVERFLOW");
          FLAG_UNDERFLOW = env->getStaticIntField(cls, "FLAG_UNDERFLOW");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField::DfpField(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      void DfpField::clearIEEEFlags() const
      {
        env->callVoidMethod(this$, mids$[mid_clearIEEEFlags_0fa09c18fee449d5]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeExp(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeExp_e130e149d282e384], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeLn(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1, const ::org::hipparchus::dfp::Dfp & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeLn_9c78f332607c1977], a0.this$, a1.this$, a2.this$));
      }

      jboolean DfpField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getDegToRad() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getDegToRad_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getE() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getE_7fd146fa3f090bf3]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getESplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getESplit_0ca66b07d05059e1]));
      }

      DfpField DfpField::getExtendedField(jint a0, jboolean a1) const
      {
        return DfpField(env->callObjectMethod(this$, mids$[mid_getExtendedField_e90ad1b7c724c3a9], a0, a1));
      }

      jint DfpField::getIEEEFlags() const
      {
        return env->callIntMethod(this$, mids$[mid_getIEEEFlags_570ce0828f81a2c1]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn10() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn10_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn2_7fd146fa3f090bf3]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn2Split_0ca66b07d05059e1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn5() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn5_7fd146fa3f090bf3]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn5Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn5Split_0ca66b07d05059e1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getOne() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getOne_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getPi() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getPi_7fd146fa3f090bf3]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getPiSplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getPiSplit_0ca66b07d05059e1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getRadToDeg() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getRadToDeg_7fd146fa3f090bf3]));
      }

      jint DfpField::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_570ce0828f81a2c1]);
      }

      ::org::hipparchus::dfp::DfpField$RoundingMode DfpField::getRoundingMode() const
      {
        return ::org::hipparchus::dfp::DfpField$RoundingMode(env->callObjectMethod(this$, mids$[mid_getRoundingMode_bf46aec6cfca2c16]));
      }

      ::java::lang::Class DfpField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2Reciprocal_7fd146fa3f090bf3]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getSqr2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getSqr2Split_0ca66b07d05059e1]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3Reciprocal_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getTwo() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getZero() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getZero_7fd146fa3f090bf3]));
      }

      jint DfpField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_71d71a82cc65a754], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_57809bf392b66806], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_81c4d69757062546], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_0fe5880f95528b86], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_0b19f2e563b71fc5], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_84679f0649faeef6], a0, a1));
      }

      void DfpField::setIEEEFlags(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlags_99803b0791f320ff], a0);
      }

      void DfpField::setIEEEFlagsBits(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlagsBits_99803b0791f320ff], a0);
      }

      void DfpField::setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setRoundingMode_3e40fdd14a832bfd], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getDegToRad(t_DfpField *self);
      static PyObject *t_DfpField_getE(t_DfpField *self);
      static PyObject *t_DfpField_getESplit(t_DfpField *self);
      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_getLn10(t_DfpField *self);
      static PyObject *t_DfpField_getLn2(t_DfpField *self);
      static PyObject *t_DfpField_getLn2Split(t_DfpField *self);
      static PyObject *t_DfpField_getLn5(t_DfpField *self);
      static PyObject *t_DfpField_getLn5Split(t_DfpField *self);
      static PyObject *t_DfpField_getOne(t_DfpField *self);
      static PyObject *t_DfpField_getPi(t_DfpField *self);
      static PyObject *t_DfpField_getPiSplit(t_DfpField *self);
      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self);
      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self);
      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self);
      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getTwo(t_DfpField *self);
      static PyObject *t_DfpField_getZero(t_DfpField *self);
      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data);
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data);
      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data);
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data);
      static PyGetSetDef t_DfpField__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField, degToRad),
        DECLARE_GET_FIELD(t_DfpField, e),
        DECLARE_GET_FIELD(t_DfpField, eSplit),
        DECLARE_GETSET_FIELD(t_DfpField, iEEEFlags),
        DECLARE_SET_FIELD(t_DfpField, iEEEFlagsBits),
        DECLARE_GET_FIELD(t_DfpField, ln10),
        DECLARE_GET_FIELD(t_DfpField, ln2),
        DECLARE_GET_FIELD(t_DfpField, ln2Split),
        DECLARE_GET_FIELD(t_DfpField, ln5),
        DECLARE_GET_FIELD(t_DfpField, ln5Split),
        DECLARE_GET_FIELD(t_DfpField, one),
        DECLARE_GET_FIELD(t_DfpField, pi),
        DECLARE_GET_FIELD(t_DfpField, piSplit),
        DECLARE_GET_FIELD(t_DfpField, radToDeg),
        DECLARE_GET_FIELD(t_DfpField, radixDigits),
        DECLARE_GETSET_FIELD(t_DfpField, roundingMode),
        DECLARE_GET_FIELD(t_DfpField, runtimeClass),
        DECLARE_GET_FIELD(t_DfpField, sqr2),
        DECLARE_GET_FIELD(t_DfpField, sqr2Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, sqr2Split),
        DECLARE_GET_FIELD(t_DfpField, sqr3),
        DECLARE_GET_FIELD(t_DfpField, sqr3Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, two),
        DECLARE_GET_FIELD(t_DfpField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField__methods_[] = {
        DECLARE_METHOD(t_DfpField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, clearIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, computeExp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, computeLn, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, equals, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getDegToRad, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getE, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getESplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getExtendedField, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn10, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPi, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPiSplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadToDeg, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRoundingMode, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, newDfp, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, setIEEEFlags, METH_O),
        DECLARE_METHOD(t_DfpField, setIEEEFlagsBits, METH_O),
        DECLARE_METHOD(t_DfpField, setRoundingMode, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField)[] = {
        { Py_tp_methods, t_DfpField__methods_ },
        { Py_tp_init, (void *) t_DfpField_init_ },
        { Py_tp_getset, t_DfpField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpField, t_DfpField, DfpField);

      void t_DfpField::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField), &PY_TYPE_DEF(DfpField), module, "DfpField", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "RoundingMode", make_descriptor(&PY_TYPE_DEF(DfpField$RoundingMode)));
      }

      void t_DfpField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "class_", make_descriptor(DfpField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "wrapfn_", make_descriptor(t_DfpField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_DIV_ZERO", make_descriptor(DfpField::FLAG_DIV_ZERO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INEXACT", make_descriptor(DfpField::FLAG_INEXACT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INVALID", make_descriptor(DfpField::FLAG_INVALID));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_OVERFLOW", make_descriptor(DfpField::FLAG_OVERFLOW));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_UNDERFLOW", make_descriptor(DfpField::FLAG_UNDERFLOW));
      }

      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField::initializeClass, 1)))
          return NULL;
        return t_DfpField::wrap_Object(DfpField(((t_DfpField *) arg)->object.this$));
      }
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        DfpField object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = DfpField(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self)
      {
        OBJ_CALL(self->object.clearIEEEFlags());
        Py_RETURN_NONE;
      }

      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeExp(a0, a1));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeExp", args);
        return NULL;
      }

      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a2((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeLn(a0, a1, a2));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeLn", args);
        return NULL;
      }

      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DfpField_getDegToRad(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getE(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getESplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getESplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args)
      {
        jint a0;
        jboolean a1;
        DfpField result((jobject) NULL);

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getExtendedField(a0, a1));
          return t_DfpField::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getExtendedField", args);
        return NULL;
      }

      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIEEEFlags());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getLn10(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getLn5(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn5Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getOne(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPi(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPiSplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPiSplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_DfpField_getSqr2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getSqr3(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getTwo(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getZero(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newDfp());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newDfp(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newDfp", args);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlags(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlags", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlagsBits(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlagsBits", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &p0, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
        {
          OBJ_CALL(self->object.setRoundingMode(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRoundingMode", arg);
        return NULL;
      }

      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getESplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIEEEFlags());
        return PyLong_FromLong((long) value);
      }
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlags(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlags", arg);
        return -1;
      }

      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlagsBits(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlagsBits", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPiSplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(value);
      }
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &value))
          {
            INT_CALL(self->object.setRoundingMode(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "roundingMode", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *TrivariateFunction::class$ = NULL;
      jmethodID *TrivariateFunction::mids$ = NULL;
      bool TrivariateFunction::live$ = false;

      jclass TrivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/TrivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_8c19bdea212fe058] = env->getMethodID(cls, "value", "(DDD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TrivariateFunction::value(jdouble a0, jdouble a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_8c19bdea212fe058], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args);

      static PyMethodDef t_TrivariateFunction__methods_[] = {
        DECLARE_METHOD(t_TrivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrivariateFunction)[] = {
        { Py_tp_methods, t_TrivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrivariateFunction, t_TrivariateFunction, TrivariateFunction);

      void t_TrivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TrivariateFunction), &PY_TYPE_DEF(TrivariateFunction), module, "TrivariateFunction", 0);
      }

      void t_TrivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "class_", make_descriptor(TrivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "wrapfn_", make_descriptor(t_TrivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrivariateFunction::initializeClass, 1)))
          return NULL;
        return t_TrivariateFunction::wrap_Object(TrivariateFunction(((t_TrivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.value(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelCoefficientsLoader::class$ = NULL;
          jmethodID *ViennaModelCoefficientsLoader::mids$ = NULL;
          bool ViennaModelCoefficientsLoader::live$ = false;
          ::java::lang::String *ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass ViennaModelCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10464a1e1406b2a8] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_e2acdcd5ca89a6e6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_615a551bd8547b2e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getA_60c7040667a7dc5c] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getZenithDelay_60c7040667a7dc5c] = env->getMethodID(cls, "getZenithDelay", "()[D");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadViennaCoefficients_0fa09c18fee449d5] = env->getMethodID(cls, "loadViennaCoefficients", "()V");
              mids$[mid_loadViennaCoefficients_4d63b530baf1ccb7] = env->getMethodID(cls, "loadViennaCoefficients", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::ViennaModelType & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_10464a1e1406b2a8, a0, a1, a2.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e2acdcd5ca89a6e6, a0.this$, a1, a2, a3.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_615a551bd8547b2e, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          JArray< jdouble > ViennaModelCoefficientsLoader::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_60c7040667a7dc5c]));
          }

          ::java::lang::String ViennaModelCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
          }

          JArray< jdouble > ViennaModelCoefficientsLoader::getZenithDelay() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getZenithDelay_60c7040667a7dc5c]));
          }

          void ViennaModelCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_0fa09c18fee449d5]);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_4d63b530baf1ccb7], a0.this$);
          }

          jboolean ViennaModelCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyGetSetDef t_ViennaModelCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, a),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, supportedNames),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, zenithDelay),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getA, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getZenithDelay, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadViennaCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelCoefficientsLoader)[] = {
            { Py_tp_methods, t_ViennaModelCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_ViennaModelCoefficientsLoader_init_ },
            { Py_tp_getset, t_ViennaModelCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(ViennaModelCoefficientsLoader, t_ViennaModelCoefficientsLoader, ViennaModelCoefficientsLoader);

          void t_ViennaModelCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelCoefficientsLoader), &PY_TYPE_DEF(ViennaModelCoefficientsLoader), module, "ViennaModelCoefficientsLoader", 0);
          }

          void t_ViennaModelCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "class_", make_descriptor(ViennaModelCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "wrapfn_", make_descriptor(t_ViennaModelCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_ViennaModelCoefficientsLoader::wrap_Object(ViennaModelCoefficientsLoader(((t_ViennaModelCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::ViennaModelType a2((jobject) NULL);
                PyTypeObject **p2;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "DDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDKk", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_, &a4))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3, a4));
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

          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getZenithDelay());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadViennaCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadViennaCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadViennaCoefficients", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getZenithDelay());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventEnablingPredicateFilter::class$ = NULL;
        jmethodID *FieldEventEnablingPredicateFilter::mids$ = NULL;
        bool FieldEventEnablingPredicateFilter::live$ = false;

        jclass FieldEventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3609119c1e3b8098] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FieldEnablingPredicate;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_239190ad6dae84e4] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventEnablingPredicateFilter::FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FieldEnablingPredicate & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3609119c1e3b8098, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventEnablingPredicateFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4fe06ecc019ea51d]));
        }

        void FieldEventEnablingPredicateFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self);
        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_FieldEventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_FieldEventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_FieldEventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventEnablingPredicateFilter, t_FieldEventEnablingPredicateFilter, FieldEventEnablingPredicateFilter);
        PyObject *t_FieldEventEnablingPredicateFilter::wrap_Object(const FieldEventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventEnablingPredicateFilter), &PY_TYPE_DEF(FieldEventEnablingPredicateFilter), module, "FieldEventEnablingPredicateFilter", 0);
        }

        void t_FieldEventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "class_", make_descriptor(FieldEventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_FieldEventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventEnablingPredicateFilter::wrap_Object(FieldEventEnablingPredicateFilter(((t_FieldEventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEnablingPredicate a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FieldEnablingPredicate::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEnablingPredicate::parameters_))
          {
            INT_CALL(object = FieldEventEnablingPredicateFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/Map.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundStation::class$ = NULL;
        jmethodID *GroundStation::mids$ = NULL;
        bool GroundStation::live$ = false;
        ::java::lang::String *GroundStation::DRIFT_SUFFIX = NULL;
        ::java::lang::String *GroundStation::INTERMEDIATE_SUFFIX = NULL;
        ::java::lang::String *GroundStation::OFFSET_SUFFIX = NULL;

        jclass GroundStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_359d9aed85301acb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_0fceb273e92d7c84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/frames/EOPHistory;[Lorg/orekit/models/earth/displacement/StationDisplacement;)V");
            mids$[mid_getBaseFrame_e17d4157ae504252] = env->getMethodID(cls, "getBaseFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_getClockDriftDriver_a25ed222178aa59f] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getDisplacements_1d7cd7b627f6155e] = env->getMethodID(cls, "getDisplacements", "()[Lorg/orekit/models/earth/displacement/StationDisplacement;");
            mids$[mid_getEastOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getEastOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getEstimatedEarthFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getEstimatedEarthFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEstimatedUT1_b384d97b3c055d24] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getNorthOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getNorthOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getOffsetGeodeticPoint_018502dfb824b2a5] = env->getMethodID(cls, "getOffsetGeodeticPoint", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getOffsetToInertial_699d2ff355610ec1] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/frames/Transform;");
            mids$[mid_getOffsetToInertial_3a8071b5885d64d5] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getOffsetToInertial_70e2ca8f44903f00] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getPolarDriftXDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getZenithOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getZenithOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRIFT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DRIFT_SUFFIX", "Ljava/lang/String;"));
            INTERMEDIATE_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "INTERMEDIATE_SUFFIX", "Ljava/lang/String;"));
            OFFSET_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "OFFSET_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_359d9aed85301acb, a0.this$)) {}

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::frames::EOPHistory & a1, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fceb273e92d7c84, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::frames::TopocentricFrame GroundStation::getBaseFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getBaseFrame_e17d4157ae504252]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_a25ed222178aa59f]));
        }

        JArray< ::org::orekit::models::earth::displacement::StationDisplacement > GroundStation::getDisplacements() const
        {
          return JArray< ::org::orekit::models::earth::displacement::StationDisplacement >(env->callObjectMethod(this$, mids$[mid_getDisplacements_1d7cd7b627f6155e]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getEastOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getEastOffsetDriver_a25ed222178aa59f]));
        }

        ::org::orekit::frames::Frame GroundStation::getEstimatedEarthFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEstimatedEarthFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::time::UT1Scale GroundStation::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_b384d97b3c055d24]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getNorthOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getNorthOffsetDriver_a25ed222178aa59f]));
        }

        ::org::orekit::bodies::GeodeticPoint GroundStation::getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getOffsetGeodeticPoint_018502dfb824b2a5], a0.this$));
        }

        ::org::orekit::frames::Transform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_699d2ff355610ec1], a0.this$, a1.this$, a2));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_3a8071b5885d64d5], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_70e2ca8f44903f00], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getZenithOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getZenithOffsetDriver_a25ed222178aa59f]));
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
        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self);
        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self);
        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg);
        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args);
        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data);
        static PyGetSetDef t_GroundStation__fields_[] = {
          DECLARE_GET_FIELD(t_GroundStation, baseFrame),
          DECLARE_GET_FIELD(t_GroundStation, clockDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, clockOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, displacements),
          DECLARE_GET_FIELD(t_GroundStation, eastOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, estimatedEarthFrame),
          DECLARE_GET_FIELD(t_GroundStation, estimatedUT1),
          DECLARE_GET_FIELD(t_GroundStation, northOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftYDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, zenithOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundStation__methods_[] = {
          DECLARE_METHOD(t_GroundStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, getBaseFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getDisplacements, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEastOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedEarthFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getNorthOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getOffsetGeodeticPoint, METH_O),
          DECLARE_METHOD(t_GroundStation, getOffsetToInertial, METH_VARARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getZenithOffsetDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundStation)[] = {
          { Py_tp_methods, t_GroundStation__methods_ },
          { Py_tp_init, (void *) t_GroundStation_init_ },
          { Py_tp_getset, t_GroundStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundStation, t_GroundStation, GroundStation);

        void t_GroundStation::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundStation), &PY_TYPE_DEF(GroundStation), module, "GroundStation", 0);
        }

        void t_GroundStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "class_", make_descriptor(GroundStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "wrapfn_", make_descriptor(t_GroundStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundStation::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "DRIFT_SUFFIX", make_descriptor(j2p(*GroundStation::DRIFT_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "INTERMEDIATE_SUFFIX", make_descriptor(j2p(*GroundStation::INTERMEDIATE_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "OFFSET_SUFFIX", make_descriptor(j2p(*GroundStation::OFFSET_SUFFIX)));
        }

        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundStation::initializeClass, 1)))
            return NULL;
          return t_GroundStation::wrap_Object(GroundStation(((t_GroundStation *) arg)->object.this$));
        }
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = GroundStation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ::org::orekit::frames::EOPHistory a1((jobject) NULL);
              JArray< ::org::orekit::models::earth::displacement::StationDisplacement > a2((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "kk[k", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::models::earth::displacement::StationDisplacement::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GroundStation(a0, a1, a2));
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

        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplacements());
          return JArray<jobject>(result.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getOffsetGeodeticPoint(a0));
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetGeodeticPoint", arg);
          return NULL;
        }

        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetToInertial", args);
          return NULL;
        }

        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getDisplacements());
          return JArray<jobject>(value.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisSegment::mids$ = NULL;
        bool PythonAttitudeEphemerisSegment::live$ = false;

        jclass PythonAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAngularCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisSegment::PythonAttitudeEphemerisSegment() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAttitudeEphemerisSegment::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAttitudeEphemerisSegment::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAttitudeEphemerisSegment::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self);
        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisSegment, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisSegment, t_PythonAttitudeEphemerisSegment, PythonAttitudeEphemerisSegment);

        void t_PythonAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisSegment), &PY_TYPE_DEF(PythonAttitudeEphemerisSegment), module, "PythonAttitudeEphemerisSegment", 1);
        }

        void t_PythonAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "class_", make_descriptor(PythonAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisSegment::initializeClass);
          JNINativeMethod methods[] = {
            { "getAngularCoordinates", "()Ljava/util/List;", (void *) t_PythonAttitudeEphemerisSegment_getAngularCoordinates0 },
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonAttitudeEphemerisSegment_getAttitudeProvider1 },
            { "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;", (void *) t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2 },
            { "getInterpolationMethod", "()Ljava/lang/String;", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationMethod3 },
            { "getInterpolationSamples", "()I", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationSamples4 },
            { "getReferenceFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAttitudeEphemerisSegment_getReferenceFrame5 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStart6 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStop7 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisSegment_pythonDecRef8 },
          };
          env->registerNatives(cls, methods, 9);
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisSegment::wrap_Object(PythonAttitudeEphemerisSegment(((t_PythonAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisSegment object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisSegment());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAngularCoordinates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getAngularCoordinates", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
          {
            throwTypeError("getAttitudeProvider", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAvailableDerivatives", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &value))
          {
            throwTypeError("getAvailableDerivatives", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationMethod", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getInterpolationMethod", result);
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

        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationSamples", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getInterpolationSamples", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getReferenceFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getReferenceFrame", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractGradientConverter::mids$ = NULL;
        bool PythonAbstractGradientConverter::live$ = false;

        jclass PythonAbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_extend_b582dc064d70ed6d] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_extend_a54ef65bb7e1aa32] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_7b4bd5ccbcf5cc53] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFreeStateParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeStateParameters", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGradientConverter::PythonAbstractGradientConverter(jint a0) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        ::org::hipparchus::analysis::differentiation::Gradient PythonAbstractGradientConverter::extend(const ::org::hipparchus::analysis::differentiation::Gradient & a0, jint a1) const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_extend_b582dc064d70ed6d], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_extend_a54ef65bb7e1aa32], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_extend_7b4bd5ccbcf5cc53], a0.this$, a1));
        }

        jint PythonAbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_570ce0828f81a2c1]);
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
      namespace integration {
        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, extend, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, getFreeStateParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGradientConverter, t_PythonAbstractGradientConverter, PythonAbstractGradientConverter);

        void t_PythonAbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGradientConverter), &PY_TYPE_DEF(PythonAbstractGradientConverter), module, "PythonAbstractGradientConverter", 0);
        }

        void t_PythonAbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "class_", make_descriptor(PythonAbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGradientConverter::wrap_Object(PythonAbstractGradientConverter(((t_PythonAbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          PythonAbstractGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = PythonAbstractGradientConverter(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::differentiation::Gradient a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extend", args);
          return NULL;
        }

        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFreeStateParameters());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractGradientConverter), (PyObject *) self, "getFreeStateParameters", args, 2);
        }

        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguitySolver::class$ = NULL;
          jmethodID *AmbiguitySolver::mids$ = NULL;
          bool AmbiguitySolver::live$ = false;

          jclass AmbiguitySolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguitySolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a6dd32ef95df4eea] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver;Lorg/orekit/estimation/measurements/gnss/AmbiguityAcceptance;)V");
              mids$[mid_fixIntegerAmbiguities_c271d207a951992f] = env->getMethodID(cls, "fixIntegerAmbiguities", "(ILjava/util/List;Lorg/hipparchus/linear/RealMatrix;)Ljava/util/List;");
              mids$[mid_getAllAmbiguityDrivers_2afa36052df4765d] = env->getMethodID(cls, "getAllAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_unFixAmbiguity_01a5c4b8230d6f04] = env->getMethodID(cls, "unFixAmbiguity", "(Lorg/orekit/utils/ParameterDriver;)V");
              mids$[mid_getFreeAmbiguityDrivers_2afa36052df4765d] = env->getMethodID(cls, "getFreeAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_getFreeAmbiguityIndirection_ec0d400b55e6e7cc] = env->getMethodID(cls, "getFreeAmbiguityIndirection", "(ILjava/util/List;)[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguitySolver::AmbiguitySolver(const ::java::util::List & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver & a1, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6dd32ef95df4eea, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List AmbiguitySolver::fixIntegerAmbiguities(jint a0, const ::java::util::List & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_fixIntegerAmbiguities_c271d207a951992f], a0, a1.this$, a2.this$));
          }

          ::java::util::List AmbiguitySolver::getAllAmbiguityDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllAmbiguityDrivers_2afa36052df4765d]));
          }

          void AmbiguitySolver::unFixAmbiguity(const ::org::orekit::utils::ParameterDriver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_unFixAmbiguity_01a5c4b8230d6f04], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args);
          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self);
          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg);
          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data);
          static PyGetSetDef t_AmbiguitySolver__fields_[] = {
            DECLARE_GET_FIELD(t_AmbiguitySolver, allAmbiguityDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguitySolver__methods_[] = {
            DECLARE_METHOD(t_AmbiguitySolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, fixIntegerAmbiguities, METH_VARARGS),
            DECLARE_METHOD(t_AmbiguitySolver, getAllAmbiguityDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AmbiguitySolver, unFixAmbiguity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguitySolver)[] = {
            { Py_tp_methods, t_AmbiguitySolver__methods_ },
            { Py_tp_init, (void *) t_AmbiguitySolver_init_ },
            { Py_tp_getset, t_AmbiguitySolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguitySolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguitySolver, t_AmbiguitySolver, AmbiguitySolver);

          void t_AmbiguitySolver::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguitySolver), &PY_TYPE_DEF(AmbiguitySolver), module, "AmbiguitySolver", 0);
          }

          void t_AmbiguitySolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "class_", make_descriptor(AmbiguitySolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "wrapfn_", make_descriptor(t_AmbiguitySolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguitySolver::initializeClass, 1)))
              return NULL;
            return t_AmbiguitySolver::wrap_Object(AmbiguitySolver(((t_AmbiguitySolver *) arg)->object.this$));
          }
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguitySolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver a1((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance a2((jobject) NULL);
            AmbiguitySolver object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver::initializeClass, ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = AmbiguitySolver(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args)
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::List::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.fixIntegerAmbiguities(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            PyErr_SetArgsError((PyObject *) self, "fixIntegerAmbiguities", args);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg)
          {
            ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.unFixAmbiguity(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "unFixAmbiguity", arg);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggers::class$ = NULL;
          jmethodID *ManeuverTriggers::mids$ = NULL;
          bool ManeuverTriggers::live$ = false;

          jclass ManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_a16797fae59e88ec] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_e53773d2404dc858] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_785ace4124d89120] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_89b940ef53c9a82d] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_a16797fae59e88ec], a0.this$);
          }

          void ManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_e53773d2404dc858], a0.this$, a1.this$);
          }

          ::java::lang::String ManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_785ace4124d89120], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_89b940ef53c9a82d], a0.this$, a1.this$);
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self);
          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data);
          static PyGetSetDef t_ManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_ManeuverTriggers, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, getName, METH_NOARGS),
            DECLARE_METHOD(t_ManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggers)[] = {
            { Py_tp_methods, t_ManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggers, t_ManeuverTriggers, ManeuverTriggers);

          void t_ManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggers), &PY_TYPE_DEF(ManeuverTriggers), module, "ManeuverTriggers", 0);
          }

          void t_ManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "class_", make_descriptor(ManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "wrapfn_", make_descriptor(t_ManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggers::wrap_Object(ManeuverTriggers(((t_ManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Interval::class$ = NULL;
          jmethodID *Interval::mids$ = NULL;
          bool Interval::live$ = false;

          jclass Interval::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Interval");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_checkPoint_68e0cffc4189a356] = env->getMethodID(cls, "checkPoint", "(DD)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_dff5885c2c873297] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_dff5885c2c873297] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_dff5885c2c873297] = env->getMethodID(cls, "getSup", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Interval::Interval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Interval::checkPoint(jdouble a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_68e0cffc4189a356], a0, a1));
          }

          jdouble Interval::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_dff5885c2c873297]);
          }

          jdouble Interval::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_dff5885c2c873297]);
          }

          jdouble Interval::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
          }

          jdouble Interval::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_dff5885c2c873297]);
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
        namespace oned {
          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args);
          static PyObject *t_Interval_getBarycenter(t_Interval *self);
          static PyObject *t_Interval_getInf(t_Interval *self);
          static PyObject *t_Interval_getSize(t_Interval *self);
          static PyObject *t_Interval_getSup(t_Interval *self);
          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data);
          static PyObject *t_Interval_get__inf(t_Interval *self, void *data);
          static PyObject *t_Interval_get__size(t_Interval *self, void *data);
          static PyObject *t_Interval_get__sup(t_Interval *self, void *data);
          static PyGetSetDef t_Interval__fields_[] = {
            DECLARE_GET_FIELD(t_Interval, barycenter),
            DECLARE_GET_FIELD(t_Interval, inf),
            DECLARE_GET_FIELD(t_Interval, size),
            DECLARE_GET_FIELD(t_Interval, sup),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Interval__methods_[] = {
            DECLARE_METHOD(t_Interval, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, checkPoint, METH_VARARGS),
            DECLARE_METHOD(t_Interval, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSup, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Interval)[] = {
            { Py_tp_methods, t_Interval__methods_ },
            { Py_tp_init, (void *) t_Interval_init_ },
            { Py_tp_getset, t_Interval__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Interval)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Interval, t_Interval, Interval);

          void t_Interval::install(PyObject *module)
          {
            installType(&PY_TYPE(Interval), &PY_TYPE_DEF(Interval), module, "Interval", 0);
          }

          void t_Interval::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "class_", make_descriptor(Interval::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "wrapfn_", make_descriptor(t_Interval::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Interval::initializeClass, 1)))
              return NULL;
            return t_Interval::wrap_Object(Interval(((t_Interval *) arg)->object.this$));
          }
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Interval::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Interval object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Interval(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.checkPoint(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
            return NULL;
          }

          static PyObject *t_Interval_getBarycenter(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getInf(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSize(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSup(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__inf(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__size(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__sup(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeModifierUtil::class$ = NULL;
          jmethodID *RangeModifierUtil::mids$ = NULL;
          bool RangeModifierUtil::live$ = false;

          jclass RangeModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeModifierUtil");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeModifierUtil)[] = {
            { Py_tp_methods, t_RangeModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeModifierUtil, t_RangeModifierUtil, RangeModifierUtil);

          void t_RangeModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeModifierUtil), &PY_TYPE_DEF(RangeModifierUtil), module, "RangeModifierUtil", 0);
          }

          void t_RangeModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "class_", make_descriptor(RangeModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "wrapfn_", make_descriptor(t_RangeModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeModifierUtil::wrap_Object(RangeModifierUtil(((t_RangeModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeModifierUtil::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTileFactory::class$ = NULL;
        jmethodID *SimpleTileFactory::mids$ = NULL;
        bool SimpleTileFactory::live$ = false;

        jclass SimpleTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_cedc0388ba3bf574] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/SimpleTile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleTileFactory::SimpleTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::rugged::raster::SimpleTile SimpleTileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::SimpleTile(env->callObjectMethod(this$, mids$[mid_createTile_cedc0388ba3bf574]));
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
    namespace rugged {
      namespace raster {
        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self);

        static PyMethodDef t_SimpleTileFactory__methods_[] = {
          DECLARE_METHOD(t_SimpleTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTileFactory)[] = {
          { Py_tp_methods, t_SimpleTileFactory__methods_ },
          { Py_tp_init, (void *) t_SimpleTileFactory_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTileFactory, t_SimpleTileFactory, SimpleTileFactory);

        void t_SimpleTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTileFactory), &PY_TYPE_DEF(SimpleTileFactory), module, "SimpleTileFactory", 0);
        }

        void t_SimpleTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "class_", make_descriptor(SimpleTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "wrapfn_", make_descriptor(t_SimpleTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTileFactory::initializeClass, 1)))
            return NULL;
          return t_SimpleTileFactory::wrap_Object(SimpleTileFactory(((t_SimpleTileFactory *) arg)->object.this$));
        }
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds)
        {
          SimpleTileFactory object((jobject) NULL);

          INT_CALL(object = SimpleTileFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self)
        {
          ::org::orekit::rugged::raster::SimpleTile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return ::org::orekit::rugged::raster::t_SimpleTile::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Integer.h"
#include "java/lang/Integer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_bitCount_2235cd056f5a882b] = env->getStaticMethodID(cls, "bitCount", "(I)I");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_819f91eddf220c5b] = env->getStaticMethodID(cls, "compare", "(II)I");
        mids$[mid_compareTo_24310ead8f6fb48c] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Integer;)I");
        mids$[mid_compareUnsigned_819f91eddf220c5b] = env->getStaticMethodID(cls, "compareUnsigned", "(II)I");
        mids$[mid_decode_47f254a16ecfcfb7] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_divideUnsigned_819f91eddf220c5b] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getInteger_47f254a16ecfcfb7] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_getInteger_b98a9fd57a467019] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
        mids$[mid_getInteger_b61bc34eaac0a6a9] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_2235cd056f5a882b] = env->getStaticMethodID(cls, "hashCode", "(I)I");
        mids$[mid_highestOneBit_2235cd056f5a882b] = env->getStaticMethodID(cls, "highestOneBit", "(I)I");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_2235cd056f5a882b] = env->getStaticMethodID(cls, "lowestOneBit", "(I)I");
        mids$[mid_max_819f91eddf220c5b] = env->getStaticMethodID(cls, "max", "(II)I");
        mids$[mid_min_819f91eddf220c5b] = env->getStaticMethodID(cls, "min", "(II)I");
        mids$[mid_numberOfLeadingZeros_2235cd056f5a882b] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(I)I");
        mids$[mid_numberOfTrailingZeros_2235cd056f5a882b] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(I)I");
        mids$[mid_parseInt_02f02486e9727d8f] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;)I");
        mids$[mid_parseInt_01c41545a950bc7c] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseInt_0fde873f33ad0a7b] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_parseUnsignedInt_02f02486e9727d8f] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;)I");
        mids$[mid_parseUnsignedInt_01c41545a950bc7c] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseUnsignedInt_0fde873f33ad0a7b] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_remainderUnsigned_819f91eddf220c5b] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
        mids$[mid_reverse_2235cd056f5a882b] = env->getStaticMethodID(cls, "reverse", "(I)I");
        mids$[mid_reverseBytes_2235cd056f5a882b] = env->getStaticMethodID(cls, "reverseBytes", "(I)I");
        mids$[mid_rotateLeft_819f91eddf220c5b] = env->getStaticMethodID(cls, "rotateLeft", "(II)I");
        mids$[mid_rotateRight_819f91eddf220c5b] = env->getStaticMethodID(cls, "rotateRight", "(II)I");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_2235cd056f5a882b] = env->getStaticMethodID(cls, "signum", "(I)I");
        mids$[mid_sum_819f91eddf220c5b] = env->getStaticMethodID(cls, "sum", "(II)I");
        mids$[mid_toBinaryString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toBinaryString", "(I)Ljava/lang/String;");
        mids$[mid_toHexString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toHexString", "(I)Ljava/lang/String;");
        mids$[mid_toOctalString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toOctalString", "(I)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toString_5d51f1f447446760] = env->getStaticMethodID(cls, "toString", "(II)Ljava/lang/String;");
        mids$[mid_toUnsignedLong_a1cf8c47dc9c5883] = env->getStaticMethodID(cls, "toUnsignedLong", "(I)J");
        mids$[mid_toUnsignedString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toUnsignedString", "(I)Ljava/lang/String;");
        mids$[mid_toUnsignedString_5d51f1f447446760] = env->getStaticMethodID(cls, "toUnsignedString", "(II)Ljava/lang/String;");
        mids$[mid_valueOf_47f254a16ecfcfb7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_valueOf_ed5141c7ad9cc910] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/Integer;");
        mids$[mid_valueOf_b61bc34eaac0a6a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");

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

    Integer::Integer(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Integer::Integer(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    jint Integer::bitCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_2235cd056f5a882b], a0);
    }

    jbyte Integer::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Integer::compare(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_819f91eddf220c5b], a0, a1);
    }

    jint Integer::compareTo(const Integer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_24310ead8f6fb48c], a0.this$);
    }

    jint Integer::compareUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_819f91eddf220c5b], a0, a1);
    }

    Integer Integer::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_decode_47f254a16ecfcfb7], a0.this$));
    }

    jint Integer::divideUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_819f91eddf220c5b], a0, a1);
    }

    jdouble Integer::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Integer::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jfloat Integer::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    Integer Integer::getInteger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_47f254a16ecfcfb7], a0.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, const Integer & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_b98a9fd57a467019], a0.this$, a1.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_b61bc34eaac0a6a9], a0.this$, a1));
    }

    jint Integer::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Integer::hashCode(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_2235cd056f5a882b], a0);
    }

    jint Integer::highestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_highestOneBit_2235cd056f5a882b], a0);
    }

    jint Integer::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jlong Integer::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jint Integer::lowestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lowestOneBit_2235cd056f5a882b], a0);
    }

    jint Integer::max$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_max_819f91eddf220c5b], a0, a1);
    }

    jint Integer::min$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_min_819f91eddf220c5b], a0, a1);
    }

    jint Integer::numberOfLeadingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_2235cd056f5a882b], a0);
    }

    jint Integer::numberOfTrailingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_2235cd056f5a882b], a0);
    }

    jint Integer::parseInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_02f02486e9727d8f], a0.this$);
    }

    jint Integer::parseInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_01c41545a950bc7c], a0.this$, a1);
    }

    jint Integer::parseInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_0fde873f33ad0a7b], a0.this$, a1, a2, a3);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_02f02486e9727d8f], a0.this$);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_01c41545a950bc7c], a0.this$, a1);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_0fde873f33ad0a7b], a0.this$, a1, a2, a3);
    }

    jint Integer::remainderUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_819f91eddf220c5b], a0, a1);
    }

    jint Integer::reverse(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverse_2235cd056f5a882b], a0);
    }

    jint Integer::reverseBytes(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverseBytes_2235cd056f5a882b], a0);
    }

    jint Integer::rotateLeft(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateLeft_819f91eddf220c5b], a0, a1);
    }

    jint Integer::rotateRight(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateRight_819f91eddf220c5b], a0, a1);
    }

    jshort Integer::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    jint Integer::signum(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_2235cd056f5a882b], a0);
    }

    jint Integer::sum(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_sum_819f91eddf220c5b], a0, a1);
    }

    ::java::lang::String Integer::toBinaryString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_8cc8a10236476f23], a0));
    }

    ::java::lang::String Integer::toHexString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_8cc8a10236476f23], a0));
    }

    ::java::lang::String Integer::toOctalString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_8cc8a10236476f23], a0));
    }

    ::java::lang::String Integer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Integer::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_8cc8a10236476f23], a0));
    }

    ::java::lang::String Integer::toString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_5d51f1f447446760], a0, a1));
    }

    jlong Integer::toUnsignedLong(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_a1cf8c47dc9c5883], a0);
    }

    ::java::lang::String Integer::toUnsignedString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_8cc8a10236476f23], a0));
    }

    ::java::lang::String Integer::toUnsignedString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_5d51f1f447446760], a0, a1));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_47f254a16ecfcfb7], a0.this$));
    }

    Integer Integer::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed5141c7ad9cc910], a0));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b61bc34eaac0a6a9], a0.this$, a1));
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
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEState::class$ = NULL;
      jmethodID *ODEState::mids$ = NULL;
      bool ODEState::live$ = false;

      jclass ODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f617b8481082c6ea] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_7c3872a936543d2c] = env->getMethodID(cls, "<init>", "(D[D[[D)V");
          mids$[mid_getCompleteState_60c7040667a7dc5c] = env->getMethodID(cls, "getCompleteState", "()[D");
          mids$[mid_getCompleteStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_60c7040667a7dc5c] = env->getMethodID(cls, "getPrimaryState", "()[D");
          mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_abe82da4f5c7c981] = env->getMethodID(cls, "getSecondaryState", "(I)[D");
          mids$[mid_getSecondaryStateDimension_2235cd056f5a882b] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_9c0348b17db96525] = env->getMethodID(cls, "copy", "([[D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f617b8481082c6ea, a0, a1.this$)) {}

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c3872a936543d2c, a0, a1.this$, a2.this$)) {}

      JArray< jdouble > ODEState::getCompleteState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteState_60c7040667a7dc5c]));
      }

      jint ODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_570ce0828f81a2c1]);
      }

      jint ODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1]);
      }

      JArray< jdouble > ODEState::getPrimaryState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_60c7040667a7dc5c]));
      }

      jint ODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1]);
      }

      JArray< jdouble > ODEState::getSecondaryState(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_abe82da4f5c7c981], a0));
      }

      jint ODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_2235cd056f5a882b], a0);
      }

      jdouble ODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
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
      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEState_getCompleteState(t_ODEState *self);
      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getTime(t_ODEState *self);
      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data);
      static PyGetSetDef t_ODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ODEState, completeState),
        DECLARE_GET_FIELD(t_ODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ODEState, primaryState),
        DECLARE_GET_FIELD(t_ODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEState__methods_[] = {
        DECLARE_METHOD(t_ODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEState)[] = {
        { Py_tp_methods, t_ODEState__methods_ },
        { Py_tp_init, (void *) t_ODEState_init_ },
        { Py_tp_getset, t_ODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEState, t_ODEState, ODEState);

      void t_ODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEState), &PY_TYPE_DEF(ODEState), module, "ODEState", 0);
      }

      void t_ODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "class_", make_descriptor(ODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "wrapfn_", make_descriptor(t_ODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEState::initializeClass, 1)))
          return NULL;
        return t_ODEState::wrap_Object(ODEState(((t_ODEState *) arg)->object.this$));
      }
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = ODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D[[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEState(a0, a1, a2));
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

      static PyObject *t_ODEState_getCompleteState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getTime(t_ODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/inertia/InertialForces.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        ::java::lang::Class *InertialForces::class$ = NULL;
        jmethodID *InertialForces::mids$ = NULL;
        bool InertialForces::live$ = false;

        jclass InertialForces::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/inertia/InertialForces");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialForces::InertialForces(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D InertialForces::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D InertialForces::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean InertialForces::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List InertialForces::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
      namespace inertia {
        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args);
        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self);
        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self);
        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data);
        static PyGetSetDef t_InertialForces__fields_[] = {
          DECLARE_GET_FIELD(t_InertialForces, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialForces__methods_[] = {
          DECLARE_METHOD(t_InertialForces, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_InertialForces, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_InertialForces, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialForces)[] = {
          { Py_tp_methods, t_InertialForces__methods_ },
          { Py_tp_init, (void *) t_InertialForces_init_ },
          { Py_tp_getset, t_InertialForces__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialForces)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InertialForces, t_InertialForces, InertialForces);

        void t_InertialForces::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialForces), &PY_TYPE_DEF(InertialForces), module, "InertialForces", 0);
        }

        void t_InertialForces::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "class_", make_descriptor(InertialForces::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "wrapfn_", make_descriptor(t_InertialForces::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialForces::initializeClass, 1)))
            return NULL;
          return t_InertialForces::wrap_Object(InertialForces(((t_InertialForces *) arg)->object.this$));
        }
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialForces::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          InertialForces object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            INT_CALL(object = InertialForces(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data)
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
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DerivativeGenerator::class$ = NULL;
        jmethodID *DerivativeGenerator::mids$ = NULL;
        bool DerivativeGenerator::live$ = false;

        jclass DerivativeGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DerivativeGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_constant_d02904082378787e] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getSelected_2afa36052df4765d] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_variable_ef120ce93b28b8e5] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_constant_d02904082378787e], a0));
        }

        ::org::hipparchus::Field DerivativeGenerator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        ::java::util::List DerivativeGenerator::getSelected() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSelected_2afa36052df4765d]));
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::variable(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_variable_ef120ce93b28b8e5], a0.this$));
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
    namespace rugged {
      namespace utils {
        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args);
        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data);
        static PyGetSetDef t_DerivativeGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeGenerator, field),
          DECLARE_GET_FIELD(t_DerivativeGenerator, selected),
          DECLARE_GET_FIELD(t_DerivativeGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeGenerator__methods_[] = {
          DECLARE_METHOD(t_DerivativeGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeGenerator, constant, METH_O),
          DECLARE_METHOD(t_DerivativeGenerator, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, getSelected, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, variable, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeGenerator)[] = {
          { Py_tp_methods, t_DerivativeGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeGenerator, t_DerivativeGenerator, DerivativeGenerator);
        PyObject *t_DerivativeGenerator::wrap_Object(const DerivativeGenerator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DerivativeGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DerivativeGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeGenerator), &PY_TYPE_DEF(DerivativeGenerator), module, "DerivativeGenerator", 0);
        }

        void t_DerivativeGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "class_", make_descriptor(DerivativeGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "wrapfn_", make_descriptor(t_DerivativeGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeGenerator::initializeClass, 1)))
            return NULL;
          return t_DerivativeGenerator::wrap_Object(DerivativeGenerator(((t_DerivativeGenerator *) arg)->object.this$));
        }
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.variable(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", arg);
          return NULL;
        }
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame3::class$ = NULL;
          jmethodID *SubFrame3::mids$ = NULL;
          bool SubFrame3::live$ = false;

          jclass SubFrame3::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame3");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCic_dff5885c2c873297] = env->getMethodID(cls, "getCic", "()D");
              mids$[mid_getCis_dff5885c2c873297] = env->getMethodID(cls, "getCis", "()D");
              mids$[mid_getCrc_dff5885c2c873297] = env->getMethodID(cls, "getCrc", "()D");
              mids$[mid_getI0_dff5885c2c873297] = env->getMethodID(cls, "getI0", "()D");
              mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
              mids$[mid_getIODE_570ce0828f81a2c1] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getLowercaseOmega_dff5885c2c873297] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getOmegaDot_dff5885c2c873297] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getUppercaseOmega0_dff5885c2c873297] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame3::getCic() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCic_dff5885c2c873297]);
          }

          jdouble SubFrame3::getCis() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCis_dff5885c2c873297]);
          }

          jdouble SubFrame3::getCrc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrc_dff5885c2c873297]);
          }

          jdouble SubFrame3::getI0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI0_dff5885c2c873297]);
          }

          jdouble SubFrame3::getIDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
          }

          jint SubFrame3::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_570ce0828f81a2c1]);
          }

          jdouble SubFrame3::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_dff5885c2c873297]);
          }

          jdouble SubFrame3::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_dff5885c2c873297]);
          }

          jdouble SubFrame3::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_dff5885c2c873297]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data);
          static PyGetSetDef t_SubFrame3__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame3, cic),
            DECLARE_GET_FIELD(t_SubFrame3, cis),
            DECLARE_GET_FIELD(t_SubFrame3, crc),
            DECLARE_GET_FIELD(t_SubFrame3, i0),
            DECLARE_GET_FIELD(t_SubFrame3, iDot),
            DECLARE_GET_FIELD(t_SubFrame3, iODE),
            DECLARE_GET_FIELD(t_SubFrame3, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrame3, omegaDot),
            DECLARE_GET_FIELD(t_SubFrame3, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame3__methods_[] = {
            DECLARE_METHOD(t_SubFrame3, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, getCic, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCis, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCrc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getI0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame3)[] = {
            { Py_tp_methods, t_SubFrame3__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame3__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame3)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame3, t_SubFrame3, SubFrame3);

          void t_SubFrame3::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame3), &PY_TYPE_DEF(SubFrame3), module, "SubFrame3", 0);
          }

          void t_SubFrame3::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "class_", make_descriptor(SubFrame3::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "wrapfn_", make_descriptor(t_SubFrame3::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame3::initializeClass, 1)))
              return NULL;
            return t_SubFrame3::wrap_Object(SubFrame3(((t_SubFrame3 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame3::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCic());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getIDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCic());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCis());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RegionCode::class$ = NULL;
          jmethodID *RegionCode::mids$ = NULL;
          bool RegionCode::live$ = false;
          RegionCode *RegionCode::JAPAN = NULL;
          RegionCode *RegionCode::WIDE_AREA = NULL;

          jclass RegionCode::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RegionCode");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_19801efe937ea9ac] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_values_a8affb7348886059] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/RegionCode;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              JAPAN = new RegionCode(env->getStaticObjectField(cls, "JAPAN", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              WIDE_AREA = new RegionCode(env->getStaticObjectField(cls, "WIDE_AREA", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RegionCode RegionCode::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RegionCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_19801efe937ea9ac], a0.this$));
          }

          JArray< RegionCode > RegionCode::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RegionCode >(env->callStaticObjectMethod(cls, mids$[mid_values_a8affb7348886059]));
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args);
          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RegionCode_values(PyTypeObject *type);
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data);
          static PyGetSetDef t_RegionCode__fields_[] = {
            DECLARE_GET_FIELD(t_RegionCode, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RegionCode__methods_[] = {
            DECLARE_METHOD(t_RegionCode, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, of_, METH_VARARGS),
            DECLARE_METHOD(t_RegionCode, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RegionCode)[] = {
            { Py_tp_methods, t_RegionCode__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RegionCode__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RegionCode)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RegionCode, t_RegionCode, RegionCode);
          PyObject *t_RegionCode::wrap_Object(const RegionCode& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RegionCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RegionCode::install(PyObject *module)
          {
            installType(&PY_TYPE(RegionCode), &PY_TYPE_DEF(RegionCode), module, "RegionCode", 0);
          }

          void t_RegionCode::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "class_", make_descriptor(RegionCode::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "wrapfn_", make_descriptor(t_RegionCode::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "boxfn_", make_descriptor(boxObject));
            env->getClass(RegionCode::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "JAPAN", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::JAPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "WIDE_AREA", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::WIDE_AREA)));
          }

          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RegionCode::initializeClass, 1)))
              return NULL;
            return t_RegionCode::wrap_Object(RegionCode(((t_RegionCode *) arg)->object.this$));
          }
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RegionCode::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RegionCode result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::valueOf(a0));
              return t_RegionCode::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RegionCode_values(PyTypeObject *type)
          {
            JArray< RegionCode > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::values());
            return JArray<jobject>(result.this$).wrap(t_RegionCode::wrap_jobject);
          }
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PVBuilder::class$ = NULL;
          jmethodID *PVBuilder::mids$ = NULL;
          bool PVBuilder::live$ = false;

          jclass PVBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PVBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4e22eb58be67ace1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_19f87324b346f736] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/PV;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PVBuilder::PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_4e22eb58be67ace1, a0.this$, a1, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::PV PVBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::PV(env->callObjectMethod(this$, mids$[mid_build_19f87324b346f736], a0.this$, a1.this$));
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args);
          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args);
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data);
          static PyGetSetDef t_PVBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PVBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PVBuilder__methods_[] = {
            DECLARE_METHOD(t_PVBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PVBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PVBuilder)[] = {
            { Py_tp_methods, t_PVBuilder__methods_ },
            { Py_tp_init, (void *) t_PVBuilder_init_ },
            { Py_tp_getset, t_PVBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PVBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PVBuilder, t_PVBuilder, PVBuilder);
          PyObject *t_PVBuilder::wrap_Object(const PVBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PVBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PVBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PVBuilder), &PY_TYPE_DEF(PVBuilder), module, "PVBuilder", 0);
          }

          void t_PVBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "class_", make_descriptor(PVBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "wrapfn_", make_descriptor(t_PVBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PVBuilder::initializeClass, 1)))
              return NULL;
            return t_PVBuilder::wrap_Object(PVBuilder(((t_PVBuilder *) arg)->object.this$));
          }
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PVBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            PVBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = PVBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::PV result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_PV::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PVBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *FieldPVCoordinatesProvider::mids$ = NULL;
      bool FieldPVCoordinatesProvider::live$ = false;

      jclass FieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_edb3d4e7c6d4d2e6] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_edb3d4e7c6d4d2e6], a0.this$, a1.this$));
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
      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_FieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_FieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinatesProvider, t_FieldPVCoordinatesProvider, FieldPVCoordinatesProvider);
      PyObject *t_FieldPVCoordinatesProvider::wrap_Object(const FieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinatesProvider), &PY_TYPE_DEF(FieldPVCoordinatesProvider), module, "FieldPVCoordinatesProvider", 0);
      }

      void t_FieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "class_", make_descriptor(FieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_FieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinatesProvider::wrap_Object(FieldPVCoordinatesProvider(((t_FieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader$Parser::class$ = NULL;
      jmethodID *EopHistoryLoader$Parser::mids$ = NULL;
      bool EopHistoryLoader$Parser::live$ = false;

      jclass EopHistoryLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_newBulletinBParser_1ee4493590943264] = env->getStaticMethodID(cls, "newBulletinBParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newEopC04Parser_1ee4493590943264] = env->getStaticMethodID(cls, "newEopC04Parser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsColumnsParser_92a32df12ebf7815] = env->getStaticMethodID(cls, "newFinalsColumnsParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;Z)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsXmlParser_1ee4493590943264] = env->getStaticMethodID(cls, "newFinalsXmlParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_parse_0fd0d48912c66ce3] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newBulletinBParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newBulletinBParser_1ee4493590943264], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newEopC04Parser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newEopC04Parser_1ee4493590943264], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsColumnsParser_92a32df12ebf7815], a0.this$, a1.this$, a2.this$, a3));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsXmlParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsXmlParser_1ee4493590943264], a0.this$, a1.this$, a2.this$));
      }

      ::java::util::Collection EopHistoryLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_parse_0fd0d48912c66ce3], a0.this$, a1.this$));
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
      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newBulletinBParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newEopC04Parser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsColumnsParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsXmlParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader$Parser)[] = {
        { Py_tp_methods, t_EopHistoryLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader$Parser, t_EopHistoryLoader$Parser, EopHistoryLoader$Parser);

      void t_EopHistoryLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader$Parser), &PY_TYPE_DEF(EopHistoryLoader$Parser), module, "EopHistoryLoader$Parser", 0);
      }

      void t_EopHistoryLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "class_", make_descriptor(EopHistoryLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "wrapfn_", make_descriptor(t_EopHistoryLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader$Parser::wrap_Object(EopHistoryLoader$Parser(((t_EopHistoryLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newBulletinBParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newBulletinBParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newEopC04Parser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newEopC04Parser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        jboolean a3;
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "KkkZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsColumnsParser(a0, a1, a2, a3));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsColumnsParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsXmlParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsXmlParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::Collection result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/UTF8Control.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/Locale.h"
#include "java/lang/InstantiationException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *UTF8Control::class$ = NULL;
      jmethodID *UTF8Control::mids$ = NULL;
      bool UTF8Control::live$ = false;

      jclass UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_b7c54cce3a9709ed] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTF8Control::UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::java::util::ResourceBundle UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_b7c54cce3a9709ed], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args);

      static PyMethodDef t_UTF8Control__methods_[] = {
        DECLARE_METHOD(t_UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTF8Control)[] = {
        { Py_tp_methods, t_UTF8Control__methods_ },
        { Py_tp_init, (void *) t_UTF8Control_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(UTF8Control, t_UTF8Control, UTF8Control);

      void t_UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(UTF8Control), &PY_TYPE_DEF(UTF8Control), module, "UTF8Control", 0);
      }

      void t_UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "class_", make_descriptor(UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "wrapfn_", make_descriptor(t_UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTF8Control::initializeClass, 1)))
          return NULL;
        return t_UTF8Control::wrap_Object(UTF8Control(((t_UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        UTF8Control object((jobject) NULL);

        INT_CALL(object = UTF8Control());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::Locale a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::ClassLoader a3((jobject) NULL);
        jboolean a4;
        ::java::util::ResourceBundle result((jobject) NULL);

        if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
          return ::java::util::t_ResourceBundle::wrap_Object(result);
        }

        return callSuper(PY_TYPE(UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *AngleType::class$ = NULL;
            jmethodID *AngleType::mids$ = NULL;
            bool AngleType::live$ = false;
            AngleType *AngleType::AZEL = NULL;
            AngleType *AngleType::RADEC = NULL;
            AngleType *AngleType::XEYN = NULL;
            AngleType *AngleType::XSYE = NULL;

            jclass AngleType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/AngleType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_3aeb734a044fd706] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_values_fce8f4eaabce606d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AZEL = new AngleType(env->getStaticObjectField(cls, "AZEL", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                RADEC = new AngleType(env->getStaticObjectField(cls, "RADEC", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XEYN = new AngleType(env->getStaticObjectField(cls, "XEYN", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XSYE = new AngleType(env->getStaticObjectField(cls, "XSYE", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AngleType AngleType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3aeb734a044fd706], a0.this$));
            }

            JArray< AngleType > AngleType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_fce8f4eaabce606d]));
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
          namespace tdm {
            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args);
            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AngleType_values(PyTypeObject *type);
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data);
            static PyGetSetDef t_AngleType__fields_[] = {
              DECLARE_GET_FIELD(t_AngleType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AngleType__methods_[] = {
              DECLARE_METHOD(t_AngleType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AngleType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AngleType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AngleType)[] = {
              { Py_tp_methods, t_AngleType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AngleType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AngleType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AngleType, t_AngleType, AngleType);
            PyObject *t_AngleType::wrap_Object(const AngleType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AngleType::install(PyObject *module)
            {
              installType(&PY_TYPE(AngleType), &PY_TYPE_DEF(AngleType), module, "AngleType", 0);
            }

            void t_AngleType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "class_", make_descriptor(AngleType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "wrapfn_", make_descriptor(t_AngleType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AngleType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "AZEL", make_descriptor(t_AngleType::wrap_Object(*AngleType::AZEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "RADEC", make_descriptor(t_AngleType::wrap_Object(*AngleType::RADEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XEYN", make_descriptor(t_AngleType::wrap_Object(*AngleType::XEYN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XSYE", make_descriptor(t_AngleType::wrap_Object(*AngleType::XSYE)));
            }

            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AngleType::initializeClass, 1)))
                return NULL;
              return t_AngleType::wrap_Object(AngleType(((t_AngleType *) arg)->object.this$));
            }
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AngleType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AngleType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::valueOf(a0));
                return t_AngleType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AngleType_values(PyTypeObject *type)
            {
              JArray< AngleType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::values());
              return JArray<jobject>(result.this$).wrap(t_AngleType::wrap_jobject);
            }
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularTroposphericDelayModifier::class$ = NULL;
          jmethodID *AngularTroposphericDelayModifier::mids$ = NULL;
          bool AngularTroposphericDelayModifier::live$ = false;

          jclass AngularTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularTroposphericDelayModifier::AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          ::java::util::List AngularTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void AngularTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self);
          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularTroposphericDelayModifier, t_AngularTroposphericDelayModifier, AngularTroposphericDelayModifier);

          void t_AngularTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularTroposphericDelayModifier), &PY_TYPE_DEF(AngularTroposphericDelayModifier), module, "AngularTroposphericDelayModifier", 0);
          }

          void t_AngularTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "class_", make_descriptor(AngularTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "wrapfn_", make_descriptor(t_AngularTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularTroposphericDelayModifier::wrap_Object(AngularTroposphericDelayModifier(((t_AngularTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            AngularTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionField::class$ = NULL;
      jmethodID *BigFractionField::mids$ = NULL;
      bool BigFractionField::live$ = false;

      jclass BigFractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_bd5b8d6d09b3bc67] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getOne_785133ac6602777f] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_785133ac6602777f] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      BigFractionField BigFractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_bd5b8d6d09b3bc67]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getOne() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getOne_785133ac6602777f]));
      }

      ::java::lang::Class BigFractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getZero() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getZero_785133ac6602777f]));
      }

      jint BigFractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type);
      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self);
      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data);
      static PyGetSetDef t_BigFractionField__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionField, instance),
        DECLARE_GET_FIELD(t_BigFractionField, one),
        DECLARE_GET_FIELD(t_BigFractionField, runtimeClass),
        DECLARE_GET_FIELD(t_BigFractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionField__methods_[] = {
        DECLARE_METHOD(t_BigFractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionField)[] = {
        { Py_tp_methods, t_BigFractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigFractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFractionField, t_BigFractionField, BigFractionField);

      void t_BigFractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionField), &PY_TYPE_DEF(BigFractionField), module, "BigFractionField", 0);
      }

      void t_BigFractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "class_", make_descriptor(BigFractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "wrapfn_", make_descriptor(t_BigFractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionField::initializeClass, 1)))
          return NULL;
        return t_BigFractionField::wrap_Object(BigFractionField(((t_BigFractionField *) arg)->object.this$));
      }
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type)
      {
        BigFractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionField::getInstance());
        return t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
      }

      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data)
      {
        BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue$Event::class$ = NULL;
          jmethodID *FieldRecordAndContinue$Event::mids$ = NULL;
          bool FieldRecordAndContinue$Event::live$ = false;

          jclass FieldRecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
              mids$[mid_getState_02cea343d9f71933] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::FieldEventDetector FieldRecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4fe06ecc019ea51d]));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldRecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_02cea343d9f71933]));
          }

          jboolean FieldRecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_b108b35ef48e27bd]);
          }

          ::java::lang::String FieldRecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, state),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue$Event)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue$Event, t_FieldRecordAndContinue$Event, FieldRecordAndContinue$Event);
          PyObject *t_FieldRecordAndContinue$Event::wrap_Object(const FieldRecordAndContinue$Event& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue$Event::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue$Event), &PY_TYPE_DEF(FieldRecordAndContinue$Event), module, "FieldRecordAndContinue$Event", 0);
          }

          void t_FieldRecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "class_", make_descriptor(FieldRecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "wrapfn_", make_descriptor(t_FieldRecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue$Event::wrap_Object(FieldRecordAndContinue$Event(((t_FieldRecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldRecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
