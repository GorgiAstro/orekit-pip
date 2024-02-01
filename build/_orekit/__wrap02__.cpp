#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *FieldDSSTNewtonianAttractionContext::mids$ = NULL;
            bool FieldDSSTNewtonianAttractionContext::live$ = false;

            jclass FieldDSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGM_08d37e3f77b7239d] = env->getMethodID(cls, "getGM", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTNewtonianAttractionContext::getGM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGM_08d37e3f77b7239d]));
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_FieldDSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, gM),
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_FieldDSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTNewtonianAttractionContext, t_FieldDSSTNewtonianAttractionContext, FieldDSSTNewtonianAttractionContext);
            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_Object(const FieldDSSTNewtonianAttractionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTNewtonianAttractionContext), &PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext), module, "FieldDSSTNewtonianAttractionContext", 0);
            }

            void t_FieldDSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "class_", make_descriptor(FieldDSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_FieldDSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTNewtonianAttractionContext::wrap_Object(FieldDSSTNewtonianAttractionContext(((t_FieldDSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_notify_ff7cb6c242604316] = env->getMethodID(cls, "notify", "()V");
        mids$[mid_notifyAll_ff7cb6c242604316] = env->getMethodID(cls, "notifyAll", "()V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_wait_ff7cb6c242604316] = env->getMethodID(cls, "wait", "()V");
        mids$[mid_wait_f5bbab7e97879358] = env->getMethodID(cls, "wait", "(J)V");
        mids$[mid_wait_915640b8c3079553] = env->getMethodID(cls, "wait", "(JI)V");
        mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Object::Object() : ::JObject(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    jboolean Object::equals(const Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Class Object::getClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getClass_d5247e4b166c4ce8]));
    }

    jint Object::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    void Object::notify() const
    {
      env->callVoidMethod(this$, mids$[mid_notify_ff7cb6c242604316]);
    }

    void Object::notifyAll() const
    {
      env->callVoidMethod(this$, mids$[mid_notifyAll_ff7cb6c242604316]);
    }

    ::java::lang::String Object::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void Object::wait() const
    {
      env->callVoidMethod(this$, mids$[mid_wait_ff7cb6c242604316]);
    }

    void Object::wait(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_f5bbab7e97879358], a0);
    }

    void Object::wait(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_915640b8c3079553], a0, a1);
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
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisSegment::PythonAttitudeEphemerisSegment() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAttitudeEphemerisSegment::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAttitudeEphemerisSegment::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAttitudeEphemerisSegment::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *ShortTermEncounter2DDefinition::mids$ = NULL;
              bool ShortTermEncounter2DDefinition::live$ = false;

              jclass ShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_89ecd735eb1431e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_89547db4e26ecd2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_c1fc1d796144a032] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_f25406ca20426d56] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_50fcd7d28a171699] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_50fcd7d28a171699] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_9981f74b2d109da6] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()D");
                  mids$[mid_computeMahalanobisDistance_9981f74b2d109da6] = env->getMethodID(cls, "computeMahalanobisDistance", "()D");
                  mids$[mid_computeMahalanobisDistance_bf28ed64d6e8576b] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)D");
                  mids$[mid_computeMissDistance_9981f74b2d109da6] = env->getMethodID(cls, "computeMissDistance", "()D");
                  mids$[mid_computeOtherPositionInCollisionPlane_0490d0574aafb07c] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_0490d0574aafb07c] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_22e63043f272734b] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_78e01095d7eced90] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/PVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_9981f74b2d109da6] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()D");
                  mids$[mid_computeSquaredMahalanobisDistance_bf28ed64d6e8576b] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)D");
                  mids$[mid_computeSquaredMahalanobisDistance_5a724479b3e5ac60] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/linear/RealMatrix;)D");
                  mids$[mid_computeSquaredMahalanobisDistance_45d926aea7231320] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(DDDD)D");
                  mids$[mid_getCombinedRadius_9981f74b2d109da6] = env->getMethodID(cls, "getCombinedRadius", "()D");
                  mids$[mid_getEncounterFrame_b6d8b1833bbc692c] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_fb241cd44f6e41bc] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getOtherCovariance_50fcd7d28a171699] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getReferenceAtTCA_fb241cd44f6e41bc] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getReferenceCovariance_50fcd7d28a171699] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getTca_80e11148db499dda] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89ecd735eb1431e7, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89547db4e26ecd2c, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1fc1d796144a032, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f25406ca20426d56, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7)) {}

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_50fcd7d28a171699]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_50fcd7d28a171699]));
              }

              jdouble ShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeCoppolaEncounterDuration_9981f74b2d109da6]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_9981f74b2d109da6]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_bf28ed64d6e8576b], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMissDistance_9981f74b2d109da6]);
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_0490d0574aafb07c]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_0490d0574aafb07c]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_22e63043f272734b], a0));
              }

              ::org::orekit::utils::PVCoordinates ShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_78e01095d7eced90]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_b2eebabce70526d8]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_b2eebabce70526d8]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_b2eebabce70526d8]));
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_9981f74b2d109da6]);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_bf28ed64d6e8576b], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::linear::RealMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_5a724479b3e5ac60], a0.this$, a1.this$);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_45d926aea7231320], a0, a1, a2, a3);
              }

              jdouble ShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCombinedRadius_9981f74b2d109da6]);
              }

              ::org::orekit::frames::encounter::EncounterLOF ShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b6d8b1833bbc692c]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_fb241cd44f6e41bc]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_50fcd7d28a171699]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_fb241cd44f6e41bc]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_50fcd7d28a171699]));
              }

              ::org::orekit::time::AbsoluteDate ShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_80e11148db499dda]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, tca),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_ShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_ShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DDefinition, t_ShortTermEncounter2DDefinition, ShortTermEncounter2DDefinition);

              void t_ShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DDefinition), &PY_TYPE_DEF(ShortTermEncounter2DDefinition), module, "ShortTermEncounter2DDefinition", 0);
              }

              void t_ShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "class_", make_descriptor(ShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_ShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DDefinition::wrap_Object(ShortTermEncounter2DDefinition(((t_ShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeMissDistance());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::PVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                    ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                    jdouble result;

                    if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
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
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmMessage::class$ = NULL;
            jmethodID *RtcmMessage::mids$ = NULL;
            bool RtcmMessage::live$ = false;

            jclass RtcmMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7559511d1c06d438] = env->getMethodID(cls, "<init>", "(ILjava/util/List;)V");
                mids$[mid_getData_d751c1a57012b438] = env->getMethodID(cls, "getData", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmMessage::RtcmMessage(jint a0, const ::java::util::List & a1) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_7559511d1c06d438, a0, a1.this$)) {}

            ::java::util::List RtcmMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_d751c1a57012b438]));
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
          namespace rtcm {
            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args);
            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self);
            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data);
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data);
            static PyGetSetDef t_RtcmMessage__fields_[] = {
              DECLARE_GET_FIELD(t_RtcmMessage, data),
              DECLARE_GET_FIELD(t_RtcmMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RtcmMessage__methods_[] = {
              DECLARE_METHOD(t_RtcmMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_RtcmMessage, getData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmMessage)[] = {
              { Py_tp_methods, t_RtcmMessage__methods_ },
              { Py_tp_init, (void *) t_RtcmMessage_init_ },
              { Py_tp_getset, t_RtcmMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(RtcmMessage, t_RtcmMessage, RtcmMessage);
            PyObject *t_RtcmMessage::wrap_Object(const RtcmMessage& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RtcmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RtcmMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmMessage), &PY_TYPE_DEF(RtcmMessage), module, "RtcmMessage", 0);
            }

            void t_RtcmMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "class_", make_descriptor(RtcmMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "wrapfn_", make_descriptor(t_RtcmMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmMessage::initializeClass, 1)))
                return NULL;
              return t_RtcmMessage::wrap_Object(RtcmMessage(((t_RtcmMessage *) arg)->object.this$));
            }
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              RtcmMessage object((jobject) NULL);

              if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = RtcmMessage(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ApsideDetector::class$ = NULL;
        jmethodID *ApsideDetector::mids$ = NULL;
        bool ApsideDetector::live$ = false;

        jclass ApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_5228b6144a2ffaa7] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_ee1acc8b3006ecae] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ApsideDetector::ApsideDetector(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

        ApsideDetector::ApsideDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5228b6144a2ffaa7, a0, a1.this$)) {}

        jdouble ApsideDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
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
        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args);
        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args);
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data);
        static PyGetSetDef t_ApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ApsideDetector__methods_[] = {
          DECLARE_METHOD(t_ApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ApsideDetector)[] = {
          { Py_tp_methods, t_ApsideDetector__methods_ },
          { Py_tp_init, (void *) t_ApsideDetector_init_ },
          { Py_tp_getset, t_ApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ApsideDetector, t_ApsideDetector, ApsideDetector);
        PyObject *t_ApsideDetector::wrap_Object(const ApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ApsideDetector), &PY_TYPE_DEF(ApsideDetector), module, "ApsideDetector", 0);
        }

        void t_ApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "class_", make_descriptor(ApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "wrapfn_", make_descriptor(t_ApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ApsideDetector::initializeClass, 1)))
            return NULL;
          return t_ApsideDetector::wrap_Object(ApsideDetector(((t_ApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = ApsideDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ApsideDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
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

        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovariance::class$ = NULL;
            jmethodID *XYZCovariance::mids$ = NULL;
            bool XYZCovariance::live$ = false;

            jclass XYZCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCdrgdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgx_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgx", "()D");
                mids$[mid_getCdrgxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgxdot", "()D");
                mids$[mid_getCdrgy_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgy", "()D");
                mids$[mid_getCdrgydot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgydot", "()D");
                mids$[mid_getCdrgz_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgz", "()D");
                mids$[mid_getCdrgzdot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgzdot", "()D");
                mids$[mid_getCsrpdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpsrp_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpx_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpx", "()D");
                mids$[mid_getCsrpxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpxdot", "()D");
                mids$[mid_getCsrpy_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpy", "()D");
                mids$[mid_getCsrpydot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpydot", "()D");
                mids$[mid_getCsrpz_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpz", "()D");
                mids$[mid_getCsrpzdot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpzdot", "()D");
                mids$[mid_getCthrdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrsrp_9981f74b2d109da6] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrthr_9981f74b2d109da6] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCthrx_9981f74b2d109da6] = env->getMethodID(cls, "getCthrx", "()D");
                mids$[mid_getCthrxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrxdot", "()D");
                mids$[mid_getCthry_9981f74b2d109da6] = env->getMethodID(cls, "getCthry", "()D");
                mids$[mid_getCthrydot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrydot", "()D");
                mids$[mid_getCthrz_9981f74b2d109da6] = env->getMethodID(cls, "getCthrz", "()D");
                mids$[mid_getCthrzdot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrzdot", "()D");
                mids$[mid_getCxdotx_9981f74b2d109da6] = env->getMethodID(cls, "getCxdotx", "()D");
                mids$[mid_getCxdotxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCxdotxdot", "()D");
                mids$[mid_getCxdoty_9981f74b2d109da6] = env->getMethodID(cls, "getCxdoty", "()D");
                mids$[mid_getCxdotz_9981f74b2d109da6] = env->getMethodID(cls, "getCxdotz", "()D");
                mids$[mid_getCxx_9981f74b2d109da6] = env->getMethodID(cls, "getCxx", "()D");
                mids$[mid_getCydotx_9981f74b2d109da6] = env->getMethodID(cls, "getCydotx", "()D");
                mids$[mid_getCydotxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCydotxdot", "()D");
                mids$[mid_getCydoty_9981f74b2d109da6] = env->getMethodID(cls, "getCydoty", "()D");
                mids$[mid_getCydotydot_9981f74b2d109da6] = env->getMethodID(cls, "getCydotydot", "()D");
                mids$[mid_getCydotz_9981f74b2d109da6] = env->getMethodID(cls, "getCydotz", "()D");
                mids$[mid_getCyx_9981f74b2d109da6] = env->getMethodID(cls, "getCyx", "()D");
                mids$[mid_getCyy_9981f74b2d109da6] = env->getMethodID(cls, "getCyy", "()D");
                mids$[mid_getCzdotx_9981f74b2d109da6] = env->getMethodID(cls, "getCzdotx", "()D");
                mids$[mid_getCzdotxdot_9981f74b2d109da6] = env->getMethodID(cls, "getCzdotxdot", "()D");
                mids$[mid_getCzdoty_9981f74b2d109da6] = env->getMethodID(cls, "getCzdoty", "()D");
                mids$[mid_getCzdotydot_9981f74b2d109da6] = env->getMethodID(cls, "getCzdotydot", "()D");
                mids$[mid_getCzdotz_9981f74b2d109da6] = env->getMethodID(cls, "getCzdotz", "()D");
                mids$[mid_getCzdotzdot_9981f74b2d109da6] = env->getMethodID(cls, "getCzdotzdot", "()D");
                mids$[mid_getCzx_9981f74b2d109da6] = env->getMethodID(cls, "getCzx", "()D");
                mids$[mid_getCzy_9981f74b2d109da6] = env->getMethodID(cls, "getCzy", "()D");
                mids$[mid_getCzz_9981f74b2d109da6] = env->getMethodID(cls, "getCzz", "()D");
                mids$[mid_getXYZCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getXYZCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_isCovXYZset_eee3de00fe971136] = env->getMethodID(cls, "isCovXYZset", "()Z");
                mids$[mid_setCdrgdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgx", "(D)V");
                mids$[mid_setCdrgxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgxdot", "(D)V");
                mids$[mid_setCdrgy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgy", "(D)V");
                mids$[mid_setCdrgydot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgydot", "(D)V");
                mids$[mid_setCdrgz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgz", "(D)V");
                mids$[mid_setCdrgzdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgzdot", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCsrpdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpsrp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpx", "(D)V");
                mids$[mid_setCsrpxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpxdot", "(D)V");
                mids$[mid_setCsrpy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpy", "(D)V");
                mids$[mid_setCsrpydot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpydot", "(D)V");
                mids$[mid_setCsrpz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpz", "(D)V");
                mids$[mid_setCsrpzdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpzdot", "(D)V");
                mids$[mid_setCthrdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrsrp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrthr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCthrx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrx", "(D)V");
                mids$[mid_setCthrxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrxdot", "(D)V");
                mids$[mid_setCthry_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthry", "(D)V");
                mids$[mid_setCthrydot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrydot", "(D)V");
                mids$[mid_setCthrz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrz", "(D)V");
                mids$[mid_setCthrzdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrzdot", "(D)V");
                mids$[mid_setCxdotx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCxdotx", "(D)V");
                mids$[mid_setCxdotxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCxdotxdot", "(D)V");
                mids$[mid_setCxdoty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCxdoty", "(D)V");
                mids$[mid_setCxdotz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCxdotz", "(D)V");
                mids$[mid_setCxx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCxx", "(D)V");
                mids$[mid_setCydotx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCydotx", "(D)V");
                mids$[mid_setCydotxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCydotxdot", "(D)V");
                mids$[mid_setCydoty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCydoty", "(D)V");
                mids$[mid_setCydotydot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCydotydot", "(D)V");
                mids$[mid_setCydotz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCydotz", "(D)V");
                mids$[mid_setCyx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCyx", "(D)V");
                mids$[mid_setCyy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCyy", "(D)V");
                mids$[mid_setCzdotx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdotx", "(D)V");
                mids$[mid_setCzdotxdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdotxdot", "(D)V");
                mids$[mid_setCzdoty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdoty", "(D)V");
                mids$[mid_setCzdotydot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdotydot", "(D)V");
                mids$[mid_setCzdotz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdotz", "(D)V");
                mids$[mid_setCzdotzdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzdotzdot", "(D)V");
                mids$[mid_setCzx_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzx", "(D)V");
                mids$[mid_setCzy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzy", "(D)V");
                mids$[mid_setCzz_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCzz", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XYZCovariance::XYZCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

            jdouble XYZCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgy_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgydot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCdrgzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgzdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpy_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpydot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCsrpzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpzdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthry() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthry_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrydot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCthrzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrzdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCxdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCxdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCxdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdoty_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCxdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCxx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCydotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCydotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCydoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydoty_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCydotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotydot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCydotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCyx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCyy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyy_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotxdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdoty_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotydot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotz_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzdotzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotzdot_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzx_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzy_9981f74b2d109da6]);
            }

            jdouble XYZCovariance::getCzz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzz_9981f74b2d109da6]);
            }

            ::org::hipparchus::linear::RealMatrix XYZCovariance::getXYZCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceMatrix_b2eebabce70526d8]));
            }

            jboolean XYZCovariance::isCovXYZset() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCovXYZset_eee3de00fe971136]);
            }

            void XYZCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgy_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgydot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCdrgzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgzdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
            }

            void XYZCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpy_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpydot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCsrpzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpzdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthry(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthry_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrydot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCthrzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrzdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCxdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCxdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCxdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdoty_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCxdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCxx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCydotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCydotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCydoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydoty_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCydotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotydot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCydotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCyx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCyy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyy_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotxdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdoty_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotydot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzdotzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotzdot_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzx_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzy_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::setCzz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzz_1ad26e8c8c0cd65b], a0);
            }

            void XYZCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
          namespace cdm {
            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data);
            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data);
            static PyGetSetDef t_XYZCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgzdot),
              DECLARE_GET_FIELD(t_XYZCovariance, covXYZset),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthry),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czz),
              DECLARE_GET_FIELD(t_XYZCovariance, xYZCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovariance__methods_[] = {
              DECLARE_METHOD(t_XYZCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthry, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getXYZCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, isCovXYZset, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthry, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovariance)[] = {
              { Py_tp_methods, t_XYZCovariance__methods_ },
              { Py_tp_init, (void *) t_XYZCovariance_init_ },
              { Py_tp_getset, t_XYZCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(XYZCovariance, t_XYZCovariance, XYZCovariance);

            void t_XYZCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovariance), &PY_TYPE_DEF(XYZCovariance), module, "XYZCovariance", 0);
            }

            void t_XYZCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "class_", make_descriptor(XYZCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "wrapfn_", make_descriptor(t_XYZCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovariance::initializeClass, 1)))
                return NULL;
              return t_XYZCovariance::wrap_Object(XYZCovariance(((t_XYZCovariance *) arg)->object.this$));
            }
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              XYZCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = XYZCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthry());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCovXYZset());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthry(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthry", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XYZCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCovXYZset());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthry());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthry(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthry", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyStaticContext::class$ = NULL;
            jmethodID *DSSTThirdBodyStaticContext::mids$ = NULL;
            bool DSSTThirdBodyStaticContext::live$ = false;

            jclass DSSTThirdBodyStaticContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e2ec8908c6908417] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;DD[D)V");
                mids$[mid_getMaxAR3Pow_d6ab429752e7c267] = env->getMethodID(cls, "getMaxAR3Pow", "()I");
                mids$[mid_getMaxEccPow_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEccPow", "()I");
                mids$[mid_getMaxFreqF_d6ab429752e7c267] = env->getMethodID(cls, "getMaxFreqF", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyStaticContext::DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_e2ec8908c6908417, a0.this$, a1, a2, a3.this$)) {}

            jint DSSTThirdBodyStaticContext::getMaxAR3Pow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxAR3Pow_d6ab429752e7c267]);
            }

            jint DSSTThirdBodyStaticContext::getMaxEccPow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxEccPow_d6ab429752e7c267]);
            }

            jint DSSTThirdBodyStaticContext::getMaxFreqF() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxFreqF_d6ab429752e7c267]);
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyStaticContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxAR3Pow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxEccPow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxFreqF),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyStaticContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxAR3Pow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxEccPow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxFreqF, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyStaticContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyStaticContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyStaticContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyStaticContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyStaticContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyStaticContext, t_DSSTThirdBodyStaticContext, DSSTThirdBodyStaticContext);

            void t_DSSTThirdBodyStaticContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyStaticContext), &PY_TYPE_DEF(DSSTThirdBodyStaticContext), module, "DSSTThirdBodyStaticContext", 0);
            }

            void t_DSSTThirdBodyStaticContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "class_", make_descriptor(DSSTThirdBodyStaticContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyStaticContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyStaticContext::wrap_Object(DSSTThirdBodyStaticContext(((t_DSSTThirdBodyStaticContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              DSSTThirdBodyStaticContext object((jobject) NULL);

              if (!parseArgs(args, "kDD[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DSSTThirdBodyStaticContext(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxEccPow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxFreqF());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxEccPow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxFreqF());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeSupplement::class$ = NULL;
        jmethodID *CRD$RangeSupplement::mids$ = NULL;
        bool CRD$RangeSupplement::live$ = false;

        jclass CRD$RangeSupplement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeSupplement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_754ea1416fd17ac0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;DDDDD)V");
            mids$[mid_getCenterOfMassCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getCenterOfMassCorrection", "()D");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getNdFilterValue_9981f74b2d109da6] = env->getMethodID(cls, "getNdFilterValue", "()D");
            mids$[mid_getRangeRate_9981f74b2d109da6] = env->getMethodID(cls, "getRangeRate", "()D");
            mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeBiasApplied_9981f74b2d109da6] = env->getMethodID(cls, "getTimeBiasApplied", "()D");
            mids$[mid_getTroposphericRefractionCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getTroposphericRefractionCorrection", "()D");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeSupplement::CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_754ea1416fd17ac0, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

        jdouble CRD$RangeSupplement::getCenterOfMassCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassCorrection_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate CRD$RangeSupplement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jdouble CRD$RangeSupplement::getNdFilterValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNdFilterValue_9981f74b2d109da6]);
        }

        jdouble CRD$RangeSupplement::getRangeRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRangeRate_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$RangeSupplement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e]));
        }

        jdouble CRD$RangeSupplement::getTimeBiasApplied() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeBiasApplied_9981f74b2d109da6]);
        }

        jdouble CRD$RangeSupplement::getTroposphericRefractionCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTroposphericRefractionCorrection_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$RangeSupplement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$RangeSupplement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      namespace ilrs {
        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args);
        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyGetSetDef t_CRD$RangeSupplement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, centerOfMassCorrection),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, date),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, ndFilterValue),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, rangeRate),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, timeBiasApplied),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, troposphericRefractionCorrection),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeSupplement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeSupplement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getCenterOfMassCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getNdFilterValue, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getRangeRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTimeBiasApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTroposphericRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeSupplement)[] = {
          { Py_tp_methods, t_CRD$RangeSupplement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeSupplement_init_ },
          { Py_tp_getset, t_CRD$RangeSupplement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeSupplement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeSupplement, t_CRD$RangeSupplement, CRD$RangeSupplement);

        void t_CRD$RangeSupplement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeSupplement), &PY_TYPE_DEF(CRD$RangeSupplement), module, "CRD$RangeSupplement", 0);
        }

        void t_CRD$RangeSupplement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "class_", make_descriptor(CRD$RangeSupplement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "wrapfn_", make_descriptor(t_CRD$RangeSupplement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeSupplement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeSupplement::wrap_Object(CRD$RangeSupplement(((t_CRD$RangeSupplement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeSupplement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          jdouble a6;
          CRD$RangeSupplement object((jobject) NULL);

          if (!parseArgs(args, "ksDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = CRD$RangeSupplement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRangeRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$RangeSupplement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRangeRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateFunction::class$ = NULL;
      jmethodID *StateFunction::mids$ = NULL;
      bool StateFunction::live$ = false;

      jclass StateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e8a4ac02afc72623] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > StateFunction::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e8a4ac02afc72623], a0.this$));
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
      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg);

      static PyMethodDef t_StateFunction__methods_[] = {
        DECLARE_METHOD(t_StateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateFunction)[] = {
        { Py_tp_methods, t_StateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateFunction, t_StateFunction, StateFunction);

      void t_StateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(StateFunction), &PY_TYPE_DEF(StateFunction), module, "StateFunction", 0);
      }

      void t_StateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "class_", make_descriptor(StateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "wrapfn_", make_descriptor(t_StateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateFunction::initializeClass, 1)))
          return NULL;
        return t_StateFunction::wrap_Object(StateFunction(((t_StateFunction *) arg)->object.this$));
      }
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *BoundedPropagator::class$ = NULL;
      jmethodID *BoundedPropagator::mids$ = NULL;
      bool BoundedPropagator::live$ = false;

      jclass BoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/BoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
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
      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data);
      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data);
      static PyGetSetDef t_BoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_BoundedPropagator, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_BoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedPropagator)[] = {
        { Py_tp_methods, t_BoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::Propagator),
        NULL
      };

      DEFINE_TYPE(BoundedPropagator, t_BoundedPropagator, BoundedPropagator);

      void t_BoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedPropagator), &PY_TYPE_DEF(BoundedPropagator), module, "BoundedPropagator", 0);
      }

      void t_BoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "class_", make_descriptor(BoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "wrapfn_", make_descriptor(t_BoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_BoundedPropagator::wrap_Object(BoundedPropagator(((t_BoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *AuxiliaryElements::class$ = NULL;
            jmethodID *AuxiliaryElements::mids$ = NULL;
            bool AuxiliaryElements::live$ = false;

            jclass AuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_12b685cda2556bf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;I)V");
                mids$[mid_getAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getB_9981f74b2d109da6] = env->getMethodID(cls, "getB", "()D");
                mids$[mid_getBeta_9981f74b2d109da6] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getC_9981f74b2d109da6] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEcc_9981f74b2d109da6] = env->getMethodID(cls, "getEcc", "()D");
                mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_9981f74b2d109da6] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getH_9981f74b2d109da6] = env->getMethodID(cls, "getH", "()D");
                mids$[mid_getK_9981f74b2d109da6] = env->getMethodID(cls, "getK", "()D");
                mids$[mid_getKeplerianPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
                mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
                mids$[mid_getLf_9981f74b2d109da6] = env->getMethodID(cls, "getLf", "()D");
                mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getOrbit_fb241cd44f6e41bc] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
                mids$[mid_getP_9981f74b2d109da6] = env->getMethodID(cls, "getP", "()D");
                mids$[mid_getQ_9981f74b2d109da6] = env->getMethodID(cls, "getQ", "()D");
                mids$[mid_getRetrogradeFactor_d6ab429752e7c267] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_9981f74b2d109da6] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getVectorF_032312bdeb3f2f93] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorG_032312bdeb3f2f93] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorW_032312bdeb3f2f93] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AuxiliaryElements::AuxiliaryElements(const ::org::orekit::orbits::Orbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12b685cda2556bf0, a0.this$, a1)) {}

            jdouble AuxiliaryElements::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getB_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate AuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jdouble AuxiliaryElements::getEcc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEcc_9981f74b2d109da6]);
            }

            ::org::orekit::frames::Frame AuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
            }

            jdouble AuxiliaryElements::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getH() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getH_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getKeplerianPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getLM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getLf() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLf_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getLv() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            ::org::orekit::orbits::Orbit AuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_fb241cd44f6e41bc]));
            }

            jdouble AuxiliaryElements::getP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getP_9981f74b2d109da6]);
            }

            jdouble AuxiliaryElements::getQ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getQ_9981f74b2d109da6]);
            }

            jint AuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_d6ab429752e7c267]);
            }

            jdouble AuxiliaryElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_9981f74b2d109da6]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_032312bdeb3f2f93]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_032312bdeb3f2f93]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_032312bdeb3f2f93]));
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data);
            static PyGetSetDef t_AuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_AuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_AuxiliaryElements, b),
              DECLARE_GET_FIELD(t_AuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_AuxiliaryElements, c),
              DECLARE_GET_FIELD(t_AuxiliaryElements, date),
              DECLARE_GET_FIELD(t_AuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_AuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_AuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, h),
              DECLARE_GET_FIELD(t_AuxiliaryElements, k),
              DECLARE_GET_FIELD(t_AuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lf),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_AuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_AuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_AuxiliaryElements, p),
              DECLARE_GET_FIELD(t_AuxiliaryElements, q),
              DECLARE_GET_FIELD(t_AuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_AuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorW),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_AuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLf, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorW, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AuxiliaryElements)[] = {
              { Py_tp_methods, t_AuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_AuxiliaryElements_init_ },
              { Py_tp_getset, t_AuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AuxiliaryElements, t_AuxiliaryElements, AuxiliaryElements);

            void t_AuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(AuxiliaryElements), &PY_TYPE_DEF(AuxiliaryElements), module, "AuxiliaryElements", 0);
            }

            void t_AuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "class_", make_descriptor(AuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "wrapfn_", make_descriptor(t_AuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_AuxiliaryElements::wrap_Object(AuxiliaryElements(((t_AuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jint a1;
              AuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEcc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getH());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLf());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLv());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self)
            {
              ::org::orekit::orbits::Orbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getQ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEcc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getH());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLM());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLf());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLv());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::Orbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getP());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getQ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolver::class$ = NULL;
      jmethodID *IterativeLinearSolver::mids$ = NULL;
      bool IterativeLinearSolver::live$ = false;

      jclass IterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_825e5a57590da83c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getIterationManager_189f5d3e1d7b776f] = env->getMethodID(cls, "getIterationManager", "()Lorg/hipparchus/util/IterationManager;");
          mids$[mid_solve_0cdb2b64c2fd2ee5] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0299ee26edcac320] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_0299ee26edcac320] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_1b962cd1836dca11] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolver::IterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_825e5a57590da83c, a0.this$)) {}

      IterativeLinearSolver::IterativeLinearSolver(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ::org::hipparchus::util::IterationManager IterativeLinearSolver::getIterationManager() const
      {
        return ::org::hipparchus::util::IterationManager(env->callObjectMethod(this$, mids$[mid_getIterationManager_189f5d3e1d7b776f]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0cdb2b64c2fd2ee5], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self);
      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data);
      static PyGetSetDef t_IterativeLinearSolver__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolver, iterationManager),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, getIterationManager, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolver)[] = {
        { Py_tp_methods, t_IterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolver_init_ },
        { Py_tp_getset, t_IterativeLinearSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolver, t_IterativeLinearSolver, IterativeLinearSolver);

      void t_IterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolver), &PY_TYPE_DEF(IterativeLinearSolver), module, "IterativeLinearSolver", 0);
      }

      void t_IterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "class_", make_descriptor(IterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "wrapfn_", make_descriptor(t_IterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolver::wrap_Object(IterativeLinearSolver(((t_IterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
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

      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self)
      {
        ::org::hipparchus::util::IterationManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "solveInPlace", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data)
      {
        ::org::hipparchus::util::IterationManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *KendallsCorrelation::class$ = NULL;
        jmethodID *KendallsCorrelation::mids$ = NULL;
        bool KendallsCorrelation::live$ = false;

        jclass KendallsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/KendallsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeCorrelationMatrix_a50478fa84afaa43] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b01af8a77d4df96f] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KendallsCorrelation::KendallsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        KendallsCorrelation::KendallsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

        KendallsCorrelation::KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_a50478fa84afaa43], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7], a0.this$));
        }

        jdouble KendallsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_b2eebabce70526d8]));
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
    namespace stat {
      namespace correlation {
        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self);
        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data);
        static PyGetSetDef t_KendallsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_KendallsCorrelation, correlationMatrix),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KendallsCorrelation__methods_[] = {
          DECLARE_METHOD(t_KendallsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, getCorrelationMatrix, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KendallsCorrelation)[] = {
          { Py_tp_methods, t_KendallsCorrelation__methods_ },
          { Py_tp_init, (void *) t_KendallsCorrelation_init_ },
          { Py_tp_getset, t_KendallsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KendallsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KendallsCorrelation, t_KendallsCorrelation, KendallsCorrelation);

        void t_KendallsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(KendallsCorrelation), &PY_TYPE_DEF(KendallsCorrelation), module, "KendallsCorrelation", 0);
        }

        void t_KendallsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "class_", make_descriptor(KendallsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "wrapfn_", make_descriptor(t_KendallsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KendallsCorrelation::initializeClass, 1)))
            return NULL;
          return t_KendallsCorrelation::wrap_Object(KendallsCorrelation(((t_KendallsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KendallsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KendallsCorrelation object((jobject) NULL);

              INT_CALL(object = KendallsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
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

        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedProcess::class$ = NULL;
          jmethodID *UnscentedProcess::mids$ = NULL;
          bool UnscentedProcess::live$ = false;

          jclass UnscentedProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_c252237192c59b9a] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
              mids$[mid_getInnovation_fcdbd6e45b6bfb9e] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getPredictedMeasurements_36c4488e207c1499] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)[Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedProcess::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_c252237192c59b9a], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector UnscentedProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_fcdbd6e45b6bfb9e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::linear::RealVector > UnscentedProcess::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::hipparchus::filtering::kalman::Measurement & a1) const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_36c4488e207c1499], a0.this$, a1.this$));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data);
          static PyGetSetDef t_UnscentedProcess__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedProcess__methods_[] = {
            DECLARE_METHOD(t_UnscentedProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getInnovation, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getPredictedMeasurements, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedProcess)[] = {
            { Py_tp_methods, t_UnscentedProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UnscentedProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedProcess, t_UnscentedProcess, UnscentedProcess);
          PyObject *t_UnscentedProcess::wrap_Object(const UnscentedProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedProcess), &PY_TYPE_DEF(UnscentedProcess), module, "UnscentedProcess", 0);
          }

          void t_UnscentedProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "class_", make_descriptor(UnscentedProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "wrapfn_", make_descriptor(t_UnscentedProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedProcess::initializeClass, 1)))
              return NULL;
            return t_UnscentedProcess::wrap_Object(UnscentedProcess(((t_UnscentedProcess *) arg)->object.this$));
          }
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args)
          {
            JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a1((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

            if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
            return NULL;
          }
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultiStartMultivariateOptimizer::class$ = NULL;
          jmethodID *MultiStartMultivariateOptimizer::mids$ = NULL;
          bool MultiStartMultivariateOptimizer::live$ = false;

          jclass MultiStartMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6972ec374b888fbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
              mids$[mid_getOptima_44a4932cc723b5fb] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_store_b0995f4cbc58500a] = env->getMethodID(cls, "store", "(Lorg/hipparchus/optim/PointValuePair;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiStartMultivariateOptimizer::MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_6972ec374b888fbf, a0.this$, a1, a2.this$)) {}

          JArray< ::org::hipparchus::optim::PointValuePair > MultiStartMultivariateOptimizer::getOptima() const
          {
            return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_44a4932cc723b5fb]));
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultiStartMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, optima),
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiStartMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, getOptima, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiStartMultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultiStartMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) t_MultiStartMultivariateOptimizer_init_ },
            { Py_tp_getset, t_MultiStartMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiStartMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultiStartMultivariateOptimizer, t_MultiStartMultivariateOptimizer, MultiStartMultivariateOptimizer);
          PyObject *t_MultiStartMultivariateOptimizer::wrap_Object(const MultiStartMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultiStartMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiStartMultivariateOptimizer), &PY_TYPE_DEF(MultiStartMultivariateOptimizer), module, "MultiStartMultivariateOptimizer", 0);
          }

          void t_MultiStartMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "class_", make_descriptor(MultiStartMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultiStartMultivariateOptimizer::wrap_Object(MultiStartMultivariateOptimizer(((t_MultiStartMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
            MultiStartMultivariateOptimizer object((jobject) NULL);

            if (!parseArgs(args, "KIk", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2))
            {
              INT_CALL(object = MultiStartMultivariateOptimizer(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOptima());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            return callSuper(PY_TYPE(MultiStartMultivariateOptimizer), (PyObject *) self, "getOptima", args, 2);
          }
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
            OBJ_CALL(value = self->object.getOptima());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
          }
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
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
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
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_bitCount_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "bitCount", "(I)I");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "compare", "(II)I");
        mids$[mid_compareTo_b0489d72230dcaaf] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Integer;)I");
        mids$[mid_compareUnsigned_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "compareUnsigned", "(II)I");
        mids$[mid_decode_0309e0e592dfbbeb] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_divideUnsigned_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getInteger_0309e0e592dfbbeb] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_getInteger_7462b2a828b6af22] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
        mids$[mid_getInteger_1b6226636e5ca60f] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "hashCode", "(I)I");
        mids$[mid_highestOneBit_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "highestOneBit", "(I)I");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "lowestOneBit", "(I)I");
        mids$[mid_max_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "max", "(II)I");
        mids$[mid_min_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "min", "(II)I");
        mids$[mid_numberOfLeadingZeros_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(I)I");
        mids$[mid_numberOfTrailingZeros_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(I)I");
        mids$[mid_parseInt_84fe1f8fbbcb0268] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;)I");
        mids$[mid_parseInt_36da4b2d3bc5085f] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseInt_438906d2090fe38f] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_parseUnsignedInt_84fe1f8fbbcb0268] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;)I");
        mids$[mid_parseUnsignedInt_36da4b2d3bc5085f] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseUnsignedInt_438906d2090fe38f] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_remainderUnsigned_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
        mids$[mid_reverse_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "reverse", "(I)I");
        mids$[mid_reverseBytes_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "reverseBytes", "(I)I");
        mids$[mid_rotateLeft_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "rotateLeft", "(II)I");
        mids$[mid_rotateRight_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "rotateRight", "(II)I");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "signum", "(I)I");
        mids$[mid_sum_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "sum", "(II)I");
        mids$[mid_toBinaryString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toBinaryString", "(I)Ljava/lang/String;");
        mids$[mid_toHexString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toHexString", "(I)Ljava/lang/String;");
        mids$[mid_toOctalString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toOctalString", "(I)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toString_43e3765e4d074a90] = env->getStaticMethodID(cls, "toString", "(II)Ljava/lang/String;");
        mids$[mid_toUnsignedLong_3453f750066710ab] = env->getStaticMethodID(cls, "toUnsignedLong", "(I)J");
        mids$[mid_toUnsignedString_c81987d6b0e2977a] = env->getStaticMethodID(cls, "toUnsignedString", "(I)Ljava/lang/String;");
        mids$[mid_toUnsignedString_43e3765e4d074a90] = env->getStaticMethodID(cls, "toUnsignedString", "(II)Ljava/lang/String;");
        mids$[mid_valueOf_0309e0e592dfbbeb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_valueOf_7cbd08ba8096c44f] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/Integer;");
        mids$[mid_valueOf_1b6226636e5ca60f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");

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

    Integer::Integer(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Integer::Integer(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    jint Integer::bitCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_d938fc64e8c6df2d], a0);
    }

    jbyte Integer::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Integer::compare(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_91b9e1e34b2235d5], a0, a1);
    }

    jint Integer::compareTo(const Integer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b0489d72230dcaaf], a0.this$);
    }

    jint Integer::compareUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_91b9e1e34b2235d5], a0, a1);
    }

    Integer Integer::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_decode_0309e0e592dfbbeb], a0.this$));
    }

    jint Integer::divideUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_91b9e1e34b2235d5], a0, a1);
    }

    jdouble Integer::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Integer::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jfloat Integer::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    Integer Integer::getInteger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_0309e0e592dfbbeb], a0.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, const Integer & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_7462b2a828b6af22], a0.this$, a1.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_1b6226636e5ca60f], a0.this$, a1));
    }

    jint Integer::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Integer::hashCode(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d938fc64e8c6df2d], a0);
    }

    jint Integer::highestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_highestOneBit_d938fc64e8c6df2d], a0);
    }

    jint Integer::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jlong Integer::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jint Integer::lowestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lowestOneBit_d938fc64e8c6df2d], a0);
    }

    jint Integer::max$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_max_91b9e1e34b2235d5], a0, a1);
    }

    jint Integer::min$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_min_91b9e1e34b2235d5], a0, a1);
    }

    jint Integer::numberOfLeadingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_d938fc64e8c6df2d], a0);
    }

    jint Integer::numberOfTrailingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_d938fc64e8c6df2d], a0);
    }

    jint Integer::parseInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_84fe1f8fbbcb0268], a0.this$);
    }

    jint Integer::parseInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint Integer::parseInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_438906d2090fe38f], a0.this$, a1, a2, a3);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_84fe1f8fbbcb0268], a0.this$);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_438906d2090fe38f], a0.this$, a1, a2, a3);
    }

    jint Integer::remainderUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_91b9e1e34b2235d5], a0, a1);
    }

    jint Integer::reverse(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverse_d938fc64e8c6df2d], a0);
    }

    jint Integer::reverseBytes(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverseBytes_d938fc64e8c6df2d], a0);
    }

    jint Integer::rotateLeft(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateLeft_91b9e1e34b2235d5], a0, a1);
    }

    jint Integer::rotateRight(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateRight_91b9e1e34b2235d5], a0, a1);
    }

    jshort Integer::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    jint Integer::signum(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_d938fc64e8c6df2d], a0);
    }

    jint Integer::sum(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_sum_91b9e1e34b2235d5], a0, a1);
    }

    ::java::lang::String Integer::toBinaryString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_c81987d6b0e2977a], a0));
    }

    ::java::lang::String Integer::toHexString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_c81987d6b0e2977a], a0));
    }

    ::java::lang::String Integer::toOctalString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_c81987d6b0e2977a], a0));
    }

    ::java::lang::String Integer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Integer::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c81987d6b0e2977a], a0));
    }

    ::java::lang::String Integer::toString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_43e3765e4d074a90], a0, a1));
    }

    jlong Integer::toUnsignedLong(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_3453f750066710ab], a0);
    }

    ::java::lang::String Integer::toUnsignedString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_c81987d6b0e2977a], a0));
    }

    ::java::lang::String Integer::toUnsignedString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_43e3765e4d074a90], a0, a1));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0309e0e592dfbbeb], a0.this$));
    }

    Integer Integer::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7cbd08ba8096c44f], a0));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1b6226636e5ca60f], a0.this$, a1));
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
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap$Transition::class$ = NULL;
      jmethodID *FieldTimeSpanMap$Transition::mids$ = NULL;
      bool FieldTimeSpanMap$Transition::live$ = false;

      jclass FieldTimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsoluteDate_1fea28374011eef5] = env->getMethodID(cls, "getAbsoluteDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getAfter_704a5bee58538972] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_704a5bee58538972] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeSpanMap$Transition::getAbsoluteDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getAbsoluteDate_1fea28374011eef5]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_704a5bee58538972]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_704a5bee58538972]));
      }

      ::org::orekit::time::AbsoluteDate FieldTimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
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
      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, absoluteDate),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeSpanMap$Transition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap$Transition, t_FieldTimeSpanMap$Transition, FieldTimeSpanMap$Transition);
      PyObject *t_FieldTimeSpanMap$Transition::wrap_Object(const FieldTimeSpanMap$Transition& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap$Transition), &PY_TYPE_DEF(FieldTimeSpanMap$Transition), module, "FieldTimeSpanMap$Transition", 0);
      }

      void t_FieldTimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "class_", make_descriptor(FieldTimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "wrapfn_", make_descriptor(t_FieldTimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap$Transition::wrap_Object(FieldTimeSpanMap$Transition(((t_FieldTimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractMeasurementBuilder::class$ = NULL;
          jmethodID *PythonAbstractMeasurementBuilder::mids$ = NULL;
          bool PythonAbstractMeasurementBuilder::live$ = false;

          jclass PythonAbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ae6efa529bbaf6e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;[D[D[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_init$_483ec950921c3999] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DD[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_9dac2855d37640dd] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getBaseWeight_be783177b060994b] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getEnd_80e11148db499dda] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getNoise_be783177b060994b] = env->getMethodID(cls, "getNoise", "()[D");
              mids$[mid_getSatellites_27bb228995072af3] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_ae6efa529bbaf6e7, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_483ec950921c3999, a0.this$, a1, a2, a3.this$)) {}

          void PythonAbstractMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getBaseWeight() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_be783177b060994b]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getEnd() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_80e11148db499dda]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getNoise() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNoise_be783177b060994b]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > PythonAbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_27bb228995072af3]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getStart() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getTheoreticalStandardDeviation() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_be783177b060994b]));
          }

          jlong PythonAbstractMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, baseWeight),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, end),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, noise),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, start),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, theoreticalStandardDeviation),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getBaseWeight, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getNoise, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getSatellites, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getStart, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getTheoreticalStandardDeviation, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractMeasurementBuilder, t_PythonAbstractMeasurementBuilder, PythonAbstractMeasurementBuilder);
          PyObject *t_PythonAbstractMeasurementBuilder::wrap_Object(const PythonAbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractMeasurementBuilder), &PY_TYPE_DEF(PythonAbstractMeasurementBuilder), module, "PythonAbstractMeasurementBuilder", 1);
          }

          void t_PythonAbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "class_", make_descriptor(PythonAbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonAbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonAbstractMeasurementBuilder_build0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurementBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractMeasurementBuilder::wrap_Object(PythonAbstractMeasurementBuilder(((t_PythonAbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "k[D[D[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "kDD[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseWeight());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNoise());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSatellites());
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
            }

            return callSuper(PY_TYPE(PythonAbstractMeasurementBuilder), (PyObject *) self, "getSatellites", args, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
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

          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseWeight());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNoise());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSModel::class$ = NULL;
        jmethodID *BatchLSModel::mids$ = NULL;
        bool BatchLSModel::live$ = false;

        jclass BatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f278310556712c73] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_1a5b9825e639ffce] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_88ee223eb65bb3ed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSModel::BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_f278310556712c73, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BatchLSModel__methods_[] = {
          DECLARE_METHOD(t_BatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSModel)[] = {
          { Py_tp_methods, t_BatchLSModel__methods_ },
          { Py_tp_init, (void *) t_BatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(BatchLSModel, t_BatchLSModel, BatchLSModel);

        void t_BatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSModel), &PY_TYPE_DEF(BatchLSModel), module, "BatchLSModel", 0);
        }

        void t_BatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "class_", make_descriptor(BatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "wrapfn_", make_descriptor(t_BatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSModel::initializeClass, 1)))
            return NULL;
          return t_BatchLSModel::wrap_Object(BatchLSModel(((t_BatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          BatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = BatchLSModel(a0, a1, a2, a3));
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
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *SparseGradient::class$ = NULL;
        jmethodID *SparseGradient::mids$ = NULL;
        bool SparseGradient::live$ = false;

        jclass SparseGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/SparseGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_1f03f2e65dbb6407] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acos_1f03f2e65dbb6407] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acosh_1f03f2e65dbb6407] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_4a013d2a9dc557f4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_3f2467b7f7b2d7ca] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_addInPlace_47cb2eff1cfcea1d] = env->getMethodID(cls, "addInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_asin_1f03f2e65dbb6407] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_asinh_1f03f2e65dbb6407] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan_1f03f2e65dbb6407] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_4a013d2a9dc557f4] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_c84f8a61ad86e337] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atanh_1f03f2e65dbb6407] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cbrt_1f03f2e65dbb6407] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ceil_1f03f2e65dbb6407] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_compose_f455cbca559ab382] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_4a013d2a9dc557f4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_3f2467b7f7b2d7ca] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cos_1f03f2e65dbb6407] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cosh_1f03f2e65dbb6407] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createConstant_3f2467b7f7b2d7ca] = env->getStaticMethodID(cls, "createConstant", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createVariable_1307e84c2eb1c24f] = env->getStaticMethodID(cls, "createVariable", "(ID)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_4a013d2a9dc557f4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_3f2467b7f7b2d7ca] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_1f03f2e65dbb6407] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_expm1_1f03f2e65dbb6407] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_floor_1f03f2e65dbb6407] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getDerivative_ce4c02d583456bc9] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getPi_1f03f2e65dbb6407] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_4a013d2a9dc557f4] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_hypot_c84f8a61ad86e337] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_335b7cf168dc3d8b] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_1e4e20e1749d22c7] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/SparseGradient;[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_62c0cef30f3b8835] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_d00ed8f88e71d5c6] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_7e0fa4a0e91725c2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_193c829cc5a96e93] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_4a22cfc14e405dab] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_9fb3c042d3423ae5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log_1f03f2e65dbb6407] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log10_1f03f2e65dbb6407] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log1p_1f03f2e65dbb6407] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_4a013d2a9dc557f4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_3f2467b7f7b2d7ca] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_71acadd828c4caad] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiplyInPlace_47cb2eff1cfcea1d] = env->getMethodID(cls, "multiplyInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_negate_1f03f2e65dbb6407] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_newInstance_3f2467b7f7b2d7ca] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_numVars_d6ab429752e7c267] = env->getMethodID(cls, "numVars", "()I");
            mids$[mid_pow_4a013d2a9dc557f4] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_3f2467b7f7b2d7ca] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_71acadd828c4caad] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_136200e24fde2468] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_reciprocal_1f03f2e65dbb6407] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_4a013d2a9dc557f4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_3f2467b7f7b2d7ca] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rint_1f03f2e65dbb6407] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rootN_71acadd828c4caad] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_scalb_71acadd828c4caad] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sign_1f03f2e65dbb6407] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sin_1f03f2e65dbb6407] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_1f03f2e65dbb6407] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_1f03f2e65dbb6407] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_4a013d2a9dc557f4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_3f2467b7f7b2d7ca] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tan_1f03f2e65dbb6407] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tanh_1f03f2e65dbb6407] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_taylor_a40ce4fdf6559ac0] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_1f03f2e65dbb6407] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_toRadians_1f03f2e65dbb6407] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ulp_1f03f2e65dbb6407] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SparseGradient SparseGradient::abs() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_abs_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::acos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acos_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::acosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acosh_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::add(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::add(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_3f2467b7f7b2d7ca], a0));
        }

        void SparseGradient::addInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addInPlace_47cb2eff1cfcea1d], a0.this$);
        }

        SparseGradient SparseGradient::asin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asin_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::asinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asinh_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::atan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan2_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_atan2_c84f8a61ad86e337], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::atanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atanh_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::cbrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cbrt_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::ceil() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ceil_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::compose(const JArray< jdouble > & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_compose_f455cbca559ab382], a0.this$));
        }

        SparseGradient SparseGradient::copySign(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::copySign(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::cos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cos_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::cosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cosh_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::createConstant(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createConstant_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::createVariable(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createVariable_1307e84c2eb1c24f], a0, a1));
        }

        SparseGradient SparseGradient::divide(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::divide(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_3f2467b7f7b2d7ca], a0));
        }

        jboolean SparseGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        SparseGradient SparseGradient::exp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_exp_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::expm1() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_expm1_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::floor() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_floor_1f03f2e65dbb6407]));
        }

        jdouble SparseGradient::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_ce4c02d583456bc9], a0);
        }

        ::org::hipparchus::Field SparseGradient::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        SparseGradient SparseGradient::getPi() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_getPi_1f03f2e65dbb6407]));
        }

        jdouble SparseGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        jdouble SparseGradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint SparseGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_hypot_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_hypot_c84f8a61ad86e337], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< jdouble > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_335b7cf168dc3d8b], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< SparseGradient > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1e4e20e1749d22c7], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_62c0cef30f3b8835], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d00ed8f88e71d5c6], a0, a1.this$, a2, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_7e0fa4a0e91725c2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_193c829cc5a96e93], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5, const SparseGradient & a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4a22cfc14e405dab], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5, jdouble a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_9fb3c042d3423ae5], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        SparseGradient SparseGradient::log() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::log10() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log10_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::log1p() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log1p_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::multiply(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::multiply(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::multiply(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_71acadd828c4caad], a0));
        }

        void SparseGradient::multiplyInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_multiplyInPlace_47cb2eff1cfcea1d], a0.this$);
        }

        SparseGradient SparseGradient::negate() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_negate_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::newInstance(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_newInstance_3f2467b7f7b2d7ca], a0));
        }

        jint SparseGradient::numVars() const
        {
          return env->callIntMethod(this$, mids$[mid_numVars_d6ab429752e7c267]);
        }

        SparseGradient SparseGradient::pow(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::pow(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::pow(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_71acadd828c4caad], a0));
        }

        SparseGradient SparseGradient::pow(jdouble a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_136200e24fde2468], a0, a1.this$));
        }

        SparseGradient SparseGradient::reciprocal() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::remainder(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::remainder(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::rint() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rint_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::rootN(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rootN_71acadd828c4caad], a0));
        }

        SparseGradient SparseGradient::scalb(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_scalb_71acadd828c4caad], a0));
        }

        SparseGradient SparseGradient::sign() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sign_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::sin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sin_1f03f2e65dbb6407]));
        }

        ::org::hipparchus::util::FieldSinCos SparseGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        SparseGradient SparseGradient::sinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sinh_1f03f2e65dbb6407]));
        }

        ::org::hipparchus::util::FieldSinhCosh SparseGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        SparseGradient SparseGradient::sqrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sqrt_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::subtract(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_4a013d2a9dc557f4], a0.this$));
        }

        SparseGradient SparseGradient::subtract(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_3f2467b7f7b2d7ca], a0));
        }

        SparseGradient SparseGradient::tan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tan_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::tanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tanh_1f03f2e65dbb6407]));
        }

        jdouble SparseGradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_a40ce4fdf6559ac0], a0.this$);
        }

        SparseGradient SparseGradient::toDegrees() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::toRadians() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toRadians_1f03f2e65dbb6407]));
        }

        SparseGradient SparseGradient::ulp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ulp_1f03f2e65dbb6407]));
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
    namespace analysis {
      namespace differentiation {
        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_abs(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_asin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self);
        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_cos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_exp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self);
        static PyObject *t_SparseGradient_floor(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_getField(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self);
        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_log(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log10(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self);
        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_negate(t_SparseGradient *self);
        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self);
        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_rint(t_SparseGradient *self);
        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_sign(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_tan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self);
        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data);
        static PyGetSetDef t_SparseGradient__fields_[] = {
          DECLARE_GET_FIELD(t_SparseGradient, field),
          DECLARE_GET_FIELD(t_SparseGradient, pi),
          DECLARE_GET_FIELD(t_SparseGradient, real),
          DECLARE_GET_FIELD(t_SparseGradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SparseGradient__methods_[] = {
          DECLARE_METHOD(t_SparseGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, addInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan2, METH_O),
          DECLARE_METHOD(t_SparseGradient, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, compose, METH_O),
          DECLARE_METHOD(t_SparseGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, createConstant, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, createVariable, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getDerivative, METH_O),
          DECLARE_METHOD(t_SparseGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, hypot, METH_O),
          DECLARE_METHOD(t_SparseGradient, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, multiplyInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, newInstance, METH_O),
          DECLARE_METHOD(t_SparseGradient, numVars, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, rootN, METH_O),
          DECLARE_METHOD(t_SparseGradient, scalb, METH_O),
          DECLARE_METHOD(t_SparseGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, taylor, METH_O),
          DECLARE_METHOD(t_SparseGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SparseGradient)[] = {
          { Py_tp_methods, t_SparseGradient__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SparseGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SparseGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SparseGradient, t_SparseGradient, SparseGradient);

        void t_SparseGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(SparseGradient), &PY_TYPE_DEF(SparseGradient), module, "SparseGradient", 0);
        }

        void t_SparseGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "class_", make_descriptor(SparseGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "wrapfn_", make_descriptor(t_SparseGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SparseGradient::initializeClass, 1)))
            return NULL;
          return t_SparseGradient::wrap_Object(SparseGradient(((t_SparseGradient *) arg)->object.this$));
        }
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SparseGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SparseGradient_abs(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_asin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::atan2(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_cos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createConstant(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createConstant", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createVariable(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createVariable", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_SparseGradient_exp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_floor(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_getField(t_SparseGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::hypot(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              JArray< SparseGradient > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient a6((jobject) NULL);
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              jdouble a6;
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_log(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log10(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.multiplyInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "multiplyInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_negate(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.numVars());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::pow(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_rint(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_sign(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_tan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data)
        {
          SparseGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_SparseGradient::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042Data::class$ = NULL;
              jmethodID *Rtcm1042Data::mids$ = NULL;
              bool Rtcm1042Data::live$ = false;

              jclass Rtcm1042Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getBeidouNavigationMessage_e6f42604e7feb12a] = env->getMethodID(cls, "getBeidouNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouNavigationMessage_731fc97e60c82f35] = env->getMethodID(cls, "getBeidouNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouToc_9981f74b2d109da6] = env->getMethodID(cls, "getBeidouToc", "()D");
                  mids$[mid_getSvHealth_9981f74b2d109da6] = env->getMethodID(cls, "getSvHealth", "()D");
                  mids$[mid_setBeidouNavigationMessage_2d17a52d9df6bdec] = env->getMethodID(cls, "setBeidouNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
                  mids$[mid_setBeidouToc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBeidouToc", "(D)V");
                  mids$[mid_setSvHealth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvHealth", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042Data::Rtcm1042Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_e6f42604e7feb12a]));
              }

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_731fc97e60c82f35], a0.this$));
              }

              jdouble Rtcm1042Data::getBeidouToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeidouToc_9981f74b2d109da6]);
              }

              jdouble Rtcm1042Data::getSvHealth() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSvHealth_9981f74b2d109da6]);
              }

              void Rtcm1042Data::setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouNavigationMessage_2d17a52d9df6bdec], a0.this$);
              }

              void Rtcm1042Data::setBeidouToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouToc_1ad26e8c8c0cd65b], a0);
              }

              void Rtcm1042Data::setSvHealth(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSvHealth_1ad26e8c8c0cd65b], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args);
              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1042Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouToc),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, svHealth),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getSvHealth, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouToc, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setSvHealth, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042Data)[] = {
                { Py_tp_methods, t_Rtcm1042Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042Data_init_ },
                { Py_tp_getset, t_Rtcm1042Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1042Data, t_Rtcm1042Data, Rtcm1042Data);

              void t_Rtcm1042Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042Data), &PY_TYPE_DEF(Rtcm1042Data), module, "Rtcm1042Data", 0);
              }

              void t_Rtcm1042Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "class_", make_descriptor(Rtcm1042Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "wrapfn_", make_descriptor(t_Rtcm1042Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042Data::wrap_Object(Rtcm1042Data(((t_Rtcm1042Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1042Data object((jobject) NULL);

                INT_CALL(object = Rtcm1042Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getBeidouNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getBeidouNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getBeidouNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSvHealth());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setBeidouNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeidouToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSvHealth(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getBeidouNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setBeidouNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeidouToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouToc", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSvHealth());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSvHealth(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimator::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_processMeasurements_7d4c616f81e4b6b1] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_7d4c616f81e4b6b1], a0.this$));
        }

        void SemiAnalyticalUnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_2002169216358a3a], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalUnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimator, t_SemiAnalyticalUnscentedKalmanEstimator, SemiAnalyticalUnscentedKalmanEstimator);

        void t_SemiAnalyticalUnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator), module, "SemiAnalyticalUnscentedKalmanEstimator", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(SemiAnalyticalUnscentedKalmanEstimator(((t_SemiAnalyticalUnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalGradientConverter::mids$ = NULL;
        bool PythonAbstractAnalyticalGradientConverter::live$ = false;

        jclass PythonAbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1966ec07e9760ef3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;DI)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropagator_4f7a484ba5bae905] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalGradientConverter::PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_1966ec07e9760ef3, a0.this$, a1, a2)) {}

        void PythonAbstractAnalyticalGradientConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractAnalyticalGradientConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractAnalyticalGradientConverter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalGradientConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalGradientConverter, t_PythonAbstractAnalyticalGradientConverter, PythonAbstractAnalyticalGradientConverter);

        void t_PythonAbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalGradientConverter), &PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter), module, "PythonAbstractAnalyticalGradientConverter", 1);
        }

        void t_PythonAbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "class_", make_descriptor(PythonAbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalGradientConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0 },
            { "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;", (void *) t_PythonAbstractAnalyticalGradientConverter_getPropagator1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalGradientConverter::wrap_Object(PythonAbstractAnalyticalGradientConverter(((t_PythonAbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractAnalyticalGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractAnalyticalGradientConverter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "getPropagator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, &value))
          {
            throwTypeError("getPropagator", result);
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

        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalMultivariateSummary::class$ = NULL;
        jmethodID *StatisticalMultivariateSummary::mids$ = NULL;
        bool StatisticalMultivariateSummary::live$ = false;

        jclass StatisticalMultivariateSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalMultivariateSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_be783177b060994b] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_be783177b060994b] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_be783177b060994b] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_be783177b060994b] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_be783177b060994b] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_be783177b060994b] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_be783177b060994b] = env->getMethodID(cls, "getSumSq", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix StatisticalMultivariateSummary::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_b2eebabce70526d8]));
        }

        jint StatisticalMultivariateSummary::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_be783177b060994b]));
        }

        jlong StatisticalMultivariateSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_be783177b060994b]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_be783177b060994b]));
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
    namespace stat {
      namespace descriptive {
        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data);
        static PyGetSetDef t_StatisticalMultivariateSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, covariance),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, dimension),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, geometricMean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, max),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, min),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, n),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumLog),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalMultivariateSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalMultivariateSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumSq, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalMultivariateSummary)[] = {
          { Py_tp_methods, t_StatisticalMultivariateSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalMultivariateSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalMultivariateSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalMultivariateSummary, t_StatisticalMultivariateSummary, StatisticalMultivariateSummary);

        void t_StatisticalMultivariateSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalMultivariateSummary), &PY_TYPE_DEF(StatisticalMultivariateSummary), module, "StatisticalMultivariateSummary", 0);
        }

        void t_StatisticalMultivariateSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "class_", make_descriptor(StatisticalMultivariateSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "wrapfn_", make_descriptor(t_StatisticalMultivariateSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalMultivariateSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalMultivariateSummary::wrap_Object(StatisticalMultivariateSummary(((t_StatisticalMultivariateSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalMultivariateSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageParser::class$ = NULL;
            jmethodID *MessageParser::mids$ = NULL;
            bool MessageParser::live$ = false;

            jclass MessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_704a5bee58538972] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_getFileFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_7927c1c0838e396d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_db9439a3eec594be] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object MessageParser::build() const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_build_704a5bee58538972]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat MessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_49975b0867f6c97c]));
            }

            ::java::lang::String MessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_d2c8eb4129821f0e]));
            }

            ::java::util::Map MessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
            }

            ::java::lang::Object MessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_7927c1c0838e396d], a0.this$));
            }

            void MessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_db9439a3eec594be], a0.this$);
            }

            void MessageParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args);
            static PyObject *t_MessageParser_build(t_MessageParser *self);
            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self);
            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self);
            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self);
            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data);
            static PyGetSetDef t_MessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_MessageParser, fileFormat),
              DECLARE_GET_FIELD(t_MessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_MessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageParser__methods_[] = {
              DECLARE_METHOD(t_MessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageParser, build, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_MessageParser, process, METH_O),
              DECLARE_METHOD(t_MessageParser, reset, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageParser)[] = {
              { Py_tp_methods, t_MessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageParser, t_MessageParser, MessageParser);
            PyObject *t_MessageParser::wrap_Object(const MessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageParser), &PY_TYPE_DEF(MessageParser), module, "MessageParser", 0);
            }

            void t_MessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "class_", make_descriptor(MessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "wrapfn_", make_descriptor(t_MessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageParser::initializeClass, 1)))
                return NULL;
              return t_MessageParser::wrap_Object(MessageParser(((t_MessageParser *) arg)->object.this$));
            }
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageParser_build(t_MessageParser *self)
            {
              ::java::lang::Object result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "reset", arg);
              return NULL;
            }
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckTransformer::mids$ = NULL;
        bool AdamsNordsieckTransformer::live$ = false;

        jclass AdamsNordsieckTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_cb3051f78727d5af] = env->getStaticMethodID(cls, "getInstance", "(I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckTransformer;");
            mids$[mid_initializeHighOrderDerivatives_7145db39e893543c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_e958729b32219ba2] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckTransformer AdamsNordsieckTransformer::getInstance(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_cb3051f78727d5af], a0));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::initializeHighOrderDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_7145db39e893543c], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51], a0.this$));
        }

        void AdamsNordsieckTransformer::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_e958729b32219ba2], a0.this$, a1.this$, a2.this$);
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args);

        static PyMethodDef t_AdamsNordsieckTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, getInstance, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckTransformer, t_AdamsNordsieckTransformer, AdamsNordsieckTransformer);

        void t_AdamsNordsieckTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckTransformer), &PY_TYPE_DEF(AdamsNordsieckTransformer), module, "AdamsNordsieckTransformer", 0);
        }

        void t_AdamsNordsieckTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "class_", make_descriptor(AdamsNordsieckTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckTransformer::wrap_Object(AdamsNordsieckTransformer(((t_AdamsNordsieckTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          AdamsNordsieckTransformer result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckTransformer::getInstance(a0));
            return t_AdamsNordsieckTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArgs(args, "D[D[[D[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbSatellite::class$ = NULL;
        jmethodID *DcbSatellite::mids$ = NULL;
        bool DcbSatellite::live$ = false;

        jclass DcbSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_getDcbData_0c360eeb22da4148] = env->getMethodID(cls, "getDcbData", "()Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_eaa48fe1591febab] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getPRN_d2c8eb4129821f0e] = env->getMethodID(cls, "getPRN", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSytem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSytem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_setDescription_d9640e5f527b80a1] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbSatellite::DcbSatellite(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        ::org::orekit::files::sinex::Dcb DcbSatellite::getDcbData() const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_0c360eeb22da4148]));
        }

        ::org::orekit::files::sinex::DcbDescription DcbSatellite::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_eaa48fe1591febab]));
        }

        ::java::lang::String DcbSatellite::getPRN() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPRN_d2c8eb4129821f0e]));
        }

        ::org::orekit::gnss::SatelliteSystem DcbSatellite::getSatelliteSytem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSytem_fb0bd27fcc3ba9fc]));
        }

        void DcbSatellite::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_d9640e5f527b80a1], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg);
        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data);
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data);
        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data);
        static PyGetSetDef t_DcbSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_DcbSatellite, dcbData),
          DECLARE_GETSET_FIELD(t_DcbSatellite, description),
          DECLARE_GET_FIELD(t_DcbSatellite, pRN),
          DECLARE_GET_FIELD(t_DcbSatellite, satelliteSytem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbSatellite__methods_[] = {
          DECLARE_METHOD(t_DcbSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, getDcbData, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getPRN, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getSatelliteSytem, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbSatellite)[] = {
          { Py_tp_methods, t_DcbSatellite__methods_ },
          { Py_tp_init, (void *) t_DcbSatellite_init_ },
          { Py_tp_getset, t_DcbSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbSatellite, t_DcbSatellite, DcbSatellite);

        void t_DcbSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbSatellite), &PY_TYPE_DEF(DcbSatellite), module, "DcbSatellite", 0);
        }

        void t_DcbSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "class_", make_descriptor(DcbSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "wrapfn_", make_descriptor(t_DcbSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbSatellite::initializeClass, 1)))
            return NULL;
          return t_DcbSatellite::wrap_Object(DcbSatellite(((t_DcbSatellite *) arg)->object.this$));
        }
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbSatellite object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);
          OBJ_CALL(result = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPRN());
          return j2p(result);
        }

        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::Dcb value((jobject) NULL);
          OBJ_CALL(value = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(value);
        }

        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPRN());
          return j2p(value);
        }

        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/io/Reader.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonReaderOpener::class$ = NULL;
      jmethodID *PythonReaderOpener::mids$ = NULL;
      bool PythonReaderOpener::live$ = false;

      jclass PythonReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_0a92f974b39121e6] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonReaderOpener::PythonReaderOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonReaderOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonReaderOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonReaderOpener::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self);
      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args);
      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data);
      static PyGetSetDef t_PythonReaderOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonReaderOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonReaderOpener__methods_[] = {
        DECLARE_METHOD(t_PythonReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonReaderOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonReaderOpener)[] = {
        { Py_tp_methods, t_PythonReaderOpener__methods_ },
        { Py_tp_init, (void *) t_PythonReaderOpener_init_ },
        { Py_tp_getset, t_PythonReaderOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonReaderOpener, t_PythonReaderOpener, PythonReaderOpener);

      void t_PythonReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonReaderOpener), &PY_TYPE_DEF(PythonReaderOpener), module, "PythonReaderOpener", 1);
      }

      void t_PythonReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "class_", make_descriptor(PythonReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "wrapfn_", make_descriptor(t_PythonReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonReaderOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/Reader;", (void *) t_PythonReaderOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonReaderOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonReaderOpener::initializeClass, 1)))
          return NULL;
        return t_PythonReaderOpener::wrap_Object(PythonReaderOpener(((t_PythonReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonReaderOpener object((jobject) NULL);

        INT_CALL(object = PythonReaderOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::Reader value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::Reader::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data)
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
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sin::class$ = NULL;
        jmethodID *Sin::mids$ = NULL;
        bool Sin::live$ = false;

        jclass Sin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sin::Sin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Sin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
    namespace analysis {
      namespace function {
        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sin_value(t_Sin *self, PyObject *args);

        static PyMethodDef t_Sin__methods_[] = {
          DECLARE_METHOD(t_Sin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sin)[] = {
          { Py_tp_methods, t_Sin__methods_ },
          { Py_tp_init, (void *) t_Sin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sin, t_Sin, Sin);

        void t_Sin::install(PyObject *module)
        {
          installType(&PY_TYPE(Sin), &PY_TYPE_DEF(Sin), module, "Sin", 0);
        }

        void t_Sin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "class_", make_descriptor(Sin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "wrapfn_", make_descriptor(t_Sin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sin::initializeClass, 1)))
            return NULL;
          return t_Sin::wrap_Object(Sin(((t_Sin *) arg)->object.this$));
        }
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds)
        {
          Sin object((jobject) NULL);

          INT_CALL(object = Sin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sin_value(t_Sin *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ArithmeticUtils::class$ = NULL;
      jmethodID *ArithmeticUtils::mids$ = NULL;
      bool ArithmeticUtils::live$ = false;

      jclass ArithmeticUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ArithmeticUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAndCheck_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "addAndCheck", "(II)I");
          mids$[mid_addAndCheck_7912418dc9bc44e3] = env->getStaticMethodID(cls, "addAndCheck", "(JJ)J");
          mids$[mid_divideUnsigned_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
          mids$[mid_divideUnsigned_7912418dc9bc44e3] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
          mids$[mid_gcd_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "gcd", "(II)I");
          mids$[mid_gcd_7912418dc9bc44e3] = env->getStaticMethodID(cls, "gcd", "(JJ)J");
          mids$[mid_isPowerOfTwo_31359cc4f01092c4] = env->getStaticMethodID(cls, "isPowerOfTwo", "(J)Z");
          mids$[mid_lcm_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "lcm", "(II)I");
          mids$[mid_lcm_7912418dc9bc44e3] = env->getStaticMethodID(cls, "lcm", "(JJ)J");
          mids$[mid_mulAndCheck_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "mulAndCheck", "(II)I");
          mids$[mid_mulAndCheck_7912418dc9bc44e3] = env->getStaticMethodID(cls, "mulAndCheck", "(JJ)J");
          mids$[mid_pow_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "pow", "(II)I");
          mids$[mid_pow_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "pow", "(JI)J");
          mids$[mid_remainderUnsigned_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
          mids$[mid_remainderUnsigned_7912418dc9bc44e3] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
          mids$[mid_subAndCheck_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "subAndCheck", "(II)I");
          mids$[mid_subAndCheck_7912418dc9bc44e3] = env->getStaticMethodID(cls, "subAndCheck", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ArithmeticUtils::addAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addAndCheck_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::addAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addAndCheck_7912418dc9bc44e3], a0, a1);
      }

      jint ArithmeticUtils::divideUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::divideUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_7912418dc9bc44e3], a0, a1);
      }

      jint ArithmeticUtils::gcd(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_gcd_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::gcd(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_gcd_7912418dc9bc44e3], a0, a1);
      }

      jboolean ArithmeticUtils::isPowerOfTwo(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isPowerOfTwo_31359cc4f01092c4], a0);
      }

      jint ArithmeticUtils::lcm(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_lcm_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::lcm(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_lcm_7912418dc9bc44e3], a0, a1);
      }

      jint ArithmeticUtils::mulAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_mulAndCheck_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::mulAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_mulAndCheck_7912418dc9bc44e3], a0, a1);
      }

      jint ArithmeticUtils::pow(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_pow_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::pow(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_pow_e7e8a55529a0db0c], a0, a1);
      }

      jint ArithmeticUtils::remainderUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::remainderUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_7912418dc9bc44e3], a0, a1);
      }

      jint ArithmeticUtils::subAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subAndCheck_91b9e1e34b2235d5], a0, a1);
      }

      jlong ArithmeticUtils::subAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subAndCheck_7912418dc9bc44e3], a0, a1);
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
      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ArithmeticUtils__methods_[] = {
        DECLARE_METHOD(t_ArithmeticUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, addAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, divideUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, gcd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, isPowerOfTwo, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, lcm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, mulAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, remainderUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, subAndCheck, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArithmeticUtils)[] = {
        { Py_tp_methods, t_ArithmeticUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArithmeticUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArithmeticUtils, t_ArithmeticUtils, ArithmeticUtils);

      void t_ArithmeticUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ArithmeticUtils), &PY_TYPE_DEF(ArithmeticUtils), module, "ArithmeticUtils", 0);
      }

      void t_ArithmeticUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "class_", make_descriptor(ArithmeticUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "wrapfn_", make_descriptor(t_ArithmeticUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArithmeticUtils::initializeClass, 1)))
          return NULL;
        return t_ArithmeticUtils::wrap_Object(ArithmeticUtils(((t_ArithmeticUtils *) arg)->object.this$));
      }
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArithmeticUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "gcd", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jboolean result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::isPowerOfTwo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isPowerOfTwo", arg);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "lcm", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mulAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "remainderUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subAndCheck", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame$BaseEquipment::class$ = NULL;
          jmethodID *SpacecraftBodyFrame$BaseEquipment::mids$ = NULL;
          bool SpacecraftBodyFrame$BaseEquipment::live$ = false;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACC = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACTUATOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::AST = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::CSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::DSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ESA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::IMU_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::INSTRUMENT = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::MTA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::RW = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SC_BODY = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SENSOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::STARTRACKER = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::TAM = NULL;

          jclass SpacecraftBodyFrame$BaseEquipment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_a9450ba34f85326b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_values_acb1ae73df1a60bf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ACC = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACC", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ACTUATOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACTUATOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              AST = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "AST", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              CSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "CSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              DSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "DSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ESA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ESA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              IMU_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "IMU_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              INSTRUMENT = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "INSTRUMENT", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              MTA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "MTA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              RW = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "RW", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SC_BODY = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SC_BODY", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SENSOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              STARTRACKER = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "STARTRACKER", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              TAM = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "TAM", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame$BaseEquipment::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame$BaseEquipment(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a9450ba34f85326b], a0.this$));
          }

          JArray< SpacecraftBodyFrame$BaseEquipment > SpacecraftBodyFrame$BaseEquipment::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SpacecraftBodyFrame$BaseEquipment >(env->callStaticObjectMethod(cls, mids$[mid_values_acb1ae73df1a60bf]));
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
        namespace definitions {
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame$BaseEquipment__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame$BaseEquipment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame$BaseEquipment__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, of_, METH_VARARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame$BaseEquipment)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame$BaseEquipment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SpacecraftBodyFrame$BaseEquipment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame$BaseEquipment)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame$BaseEquipment, t_SpacecraftBodyFrame$BaseEquipment, SpacecraftBodyFrame$BaseEquipment);
          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(const SpacecraftBodyFrame$BaseEquipment& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SpacecraftBodyFrame$BaseEquipment::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame$BaseEquipment), &PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment), module, "SpacecraftBodyFrame$BaseEquipment", 0);
          }

          void t_SpacecraftBodyFrame$BaseEquipment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "class_", make_descriptor(SpacecraftBodyFrame$BaseEquipment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "boxfn_", make_descriptor(boxObject));
            env->getClass(SpacecraftBodyFrame$BaseEquipment::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACC", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACTUATOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACTUATOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "AST", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::AST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "CSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::CSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "DSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::DSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ESA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ESA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "IMU_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::IMU_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "INSTRUMENT", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::INSTRUMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "MTA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::MTA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "RW", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::RW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SC_BODY", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SC_BODY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SENSOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SENSOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "STARTRACKER", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::STARTRACKER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "TAM", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::TAM)));
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(SpacecraftBodyFrame$BaseEquipment(((t_SpacecraftBodyFrame$BaseEquipment *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::valueOf(a0));
              return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type)
          {
            JArray< SpacecraftBodyFrame$BaseEquipment > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::values());
            return JArray<jobject>(result.this$).wrap(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject);
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
