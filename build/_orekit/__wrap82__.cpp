#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldForceModelContext::class$ = NULL;
            jmethodID *FieldForceModelContext::mids$ = NULL;
            bool FieldForceModelContext::live$ = false;

            jclass FieldForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFieldAuxiliaryElements_fb84f60e04f8fd36] = env->getMethodID(cls, "getFieldAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements FieldForceModelContext::getFieldAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getFieldAuxiliaryElements_fb84f60e04f8fd36]));
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
            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args);
            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self);
            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data);
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data);
            static PyGetSetDef t_FieldForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldForceModelContext, fieldAuxiliaryElements),
              DECLARE_GET_FIELD(t_FieldForceModelContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldForceModelContext__methods_[] = {
              DECLARE_METHOD(t_FieldForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldForceModelContext, getFieldAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldForceModelContext)[] = {
              { Py_tp_methods, t_FieldForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldForceModelContext, t_FieldForceModelContext, FieldForceModelContext);
            PyObject *t_FieldForceModelContext::wrap_Object(const FieldForceModelContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldForceModelContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldForceModelContext), &PY_TYPE_DEF(FieldForceModelContext), module, "FieldForceModelContext", 0);
            }

            void t_FieldForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "class_", make_descriptor(FieldForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "wrapfn_", make_descriptor(t_FieldForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldForceModelContext::initializeClass, 1)))
                return NULL;
              return t_FieldForceModelContext::wrap_Object(FieldForceModelContext(((t_FieldForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbDescription::class$ = NULL;
        jmethodID *DcbDescription::mids$ = NULL;
        bool DcbDescription::live$ = false;

        jclass DcbDescription::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbDescription");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBiasMode_d2c8eb4129821f0e] = env->getMethodID(cls, "getBiasMode", "()Ljava/lang/String;");
            mids$[mid_getDeterminationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getDeterminationMethod", "()Ljava/lang/String;");
            mids$[mid_getObservationSampling_d6ab429752e7c267] = env->getMethodID(cls, "getObservationSampling", "()I");
            mids$[mid_getParameterSpacing_d6ab429752e7c267] = env->getMethodID(cls, "getParameterSpacing", "()I");
            mids$[mid_getTimeSystem_6110a08bedf3a63d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_setBiasMode_105e1eadb709d9ac] = env->getMethodID(cls, "setBiasMode", "(Ljava/lang/String;)V");
            mids$[mid_setDeterminationMethod_105e1eadb709d9ac] = env->getMethodID(cls, "setDeterminationMethod", "(Ljava/lang/String;)V");
            mids$[mid_setObservationSampling_8fd427ab23829bf5] = env->getMethodID(cls, "setObservationSampling", "(I)V");
            mids$[mid_setParameterSpacing_8fd427ab23829bf5] = env->getMethodID(cls, "setParameterSpacing", "(I)V");
            mids$[mid_setTimeSystem_70481f478101edcd] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbDescription::DcbDescription() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::lang::String DcbDescription::getBiasMode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBiasMode_d2c8eb4129821f0e]));
        }

        ::java::lang::String DcbDescription::getDeterminationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeterminationMethod_d2c8eb4129821f0e]));
        }

        jint DcbDescription::getObservationSampling() const
        {
          return env->callIntMethod(this$, mids$[mid_getObservationSampling_d6ab429752e7c267]);
        }

        jint DcbDescription::getParameterSpacing() const
        {
          return env->callIntMethod(this$, mids$[mid_getParameterSpacing_d6ab429752e7c267]);
        }

        ::org::orekit::gnss::TimeSystem DcbDescription::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_6110a08bedf3a63d]));
        }

        void DcbDescription::setBiasMode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBiasMode_105e1eadb709d9ac], a0.this$);
        }

        void DcbDescription::setDeterminationMethod(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDeterminationMethod_105e1eadb709d9ac], a0.this$);
        }

        void DcbDescription::setObservationSampling(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObservationSampling_8fd427ab23829bf5], a0);
        }

        void DcbDescription::setParameterSpacing(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterSpacing_8fd427ab23829bf5], a0);
        }

        void DcbDescription::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_70481f478101edcd], a0.this$);
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
        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self);
        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data);
        static PyGetSetDef t_DcbDescription__fields_[] = {
          DECLARE_GETSET_FIELD(t_DcbDescription, biasMode),
          DECLARE_GETSET_FIELD(t_DcbDescription, determinationMethod),
          DECLARE_GETSET_FIELD(t_DcbDescription, observationSampling),
          DECLARE_GETSET_FIELD(t_DcbDescription, parameterSpacing),
          DECLARE_GETSET_FIELD(t_DcbDescription, timeSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbDescription__methods_[] = {
          DECLARE_METHOD(t_DcbDescription, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, getBiasMode, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getDeterminationMethod, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getObservationSampling, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getParameterSpacing, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, setBiasMode, METH_O),
          DECLARE_METHOD(t_DcbDescription, setDeterminationMethod, METH_O),
          DECLARE_METHOD(t_DcbDescription, setObservationSampling, METH_O),
          DECLARE_METHOD(t_DcbDescription, setParameterSpacing, METH_O),
          DECLARE_METHOD(t_DcbDescription, setTimeSystem, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbDescription)[] = {
          { Py_tp_methods, t_DcbDescription__methods_ },
          { Py_tp_init, (void *) t_DcbDescription_init_ },
          { Py_tp_getset, t_DcbDescription__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbDescription)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbDescription, t_DcbDescription, DcbDescription);

        void t_DcbDescription::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbDescription), &PY_TYPE_DEF(DcbDescription), module, "DcbDescription", 0);
        }

        void t_DcbDescription::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "class_", make_descriptor(DcbDescription::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "wrapfn_", make_descriptor(t_DcbDescription::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbDescription::initializeClass, 1)))
            return NULL;
          return t_DcbDescription::wrap_Object(DcbDescription(((t_DcbDescription *) arg)->object.this$));
        }
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbDescription::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds)
        {
          DcbDescription object((jobject) NULL);

          INT_CALL(object = DcbDescription());
          self->object = object;

          return 0;
        }

        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getBiasMode());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeterminationMethod());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getObservationSampling());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getParameterSpacing());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setBiasMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBiasMode", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDeterminationMethod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDeterminationMethod", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setObservationSampling(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObservationSampling", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setParameterSpacing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterSpacing", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getBiasMode());
          return j2p(value);
        }
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setBiasMode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "biasMode", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeterminationMethod());
          return j2p(value);
        }
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDeterminationMethod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "determinationMethod", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getObservationSampling());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setObservationSampling(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observationSampling", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getParameterSpacing());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setParameterSpacing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parameterSpacing", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldChronologicalComparator::class$ = NULL;
      jmethodID *FieldChronologicalComparator::mids$ = NULL;
      bool FieldChronologicalComparator::live$ = false;

      jclass FieldChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_6d356654f1d7bf43] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldChronologicalComparator::FieldChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      jint FieldChronologicalComparator::compare(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_6d356654f1d7bf43], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args);
      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args);
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data);
      static PyGetSetDef t_FieldChronologicalComparator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldChronologicalComparator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_FieldChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldChronologicalComparator)[] = {
        { Py_tp_methods, t_FieldChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_FieldChronologicalComparator_init_ },
        { Py_tp_getset, t_FieldChronologicalComparator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldChronologicalComparator, t_FieldChronologicalComparator, FieldChronologicalComparator);
      PyObject *t_FieldChronologicalComparator::wrap_Object(const FieldChronologicalComparator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldChronologicalComparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldChronologicalComparator), &PY_TYPE_DEF(FieldChronologicalComparator), module, "FieldChronologicalComparator", 0);
      }

      void t_FieldChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "class_", make_descriptor(FieldChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "wrapfn_", make_descriptor(t_FieldChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_FieldChronologicalComparator::wrap_Object(FieldChronologicalComparator(((t_FieldChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        FieldChronologicalComparator object((jobject) NULL);

        INT_CALL(object = FieldChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jint result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *HaloXZPlaneCrossingDetector::class$ = NULL;
        jmethodID *HaloXZPlaneCrossingDetector::mids$ = NULL;
        bool HaloXZPlaneCrossingDetector::live$ = false;

        jclass HaloXZPlaneCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/HaloXZPlaneCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_d9a564272bdf6ed1] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/HaloXZPlaneCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HaloXZPlaneCrossingDetector::HaloXZPlaneCrossingDetector(jdouble a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble HaloXZPlaneCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
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
        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data);
        static PyGetSetDef t_HaloXZPlaneCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_HaloXZPlaneCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HaloXZPlaneCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HaloXZPlaneCrossingDetector)[] = {
          { Py_tp_methods, t_HaloXZPlaneCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_HaloXZPlaneCrossingDetector_init_ },
          { Py_tp_getset, t_HaloXZPlaneCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HaloXZPlaneCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(HaloXZPlaneCrossingDetector, t_HaloXZPlaneCrossingDetector, HaloXZPlaneCrossingDetector);
        PyObject *t_HaloXZPlaneCrossingDetector::wrap_Object(const HaloXZPlaneCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HaloXZPlaneCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HaloXZPlaneCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(HaloXZPlaneCrossingDetector), &PY_TYPE_DEF(HaloXZPlaneCrossingDetector), module, "HaloXZPlaneCrossingDetector", 0);
        }

        void t_HaloXZPlaneCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "class_", make_descriptor(HaloXZPlaneCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "wrapfn_", make_descriptor(t_HaloXZPlaneCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_HaloXZPlaneCrossingDetector::wrap_Object(HaloXZPlaneCrossingDetector(((t_HaloXZPlaneCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          HaloXZPlaneCrossingDetector object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = HaloXZPlaneCrossingDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(HaloXZPlaneCrossingDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HaloXZPlaneCrossingDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *EphemerisGenerator::class$ = NULL;
      jmethodID *EphemerisGenerator::mids$ = NULL;
      bool EphemerisGenerator::live$ = false;

      jclass EphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/EphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_6c7bb9da59d24b03] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::BoundedPropagator EphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_6c7bb9da59d24b03]));
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
      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self);
      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data);
      static PyGetSetDef t_EphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_EphemerisGenerator, generatedEphemeris),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_EphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EphemerisGenerator)[] = {
        { Py_tp_methods, t_EphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EphemerisGenerator, t_EphemerisGenerator, EphemerisGenerator);

      void t_EphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(EphemerisGenerator), &PY_TYPE_DEF(EphemerisGenerator), module, "EphemerisGenerator", 0);
      }

      void t_EphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "class_", make_descriptor(EphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "wrapfn_", make_descriptor(t_EphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_EphemerisGenerator::wrap_Object(EphemerisGenerator(((t_EphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self)
      {
        ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
      }

      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTileFactory::class$ = NULL;
          jmethodID *MinMaxTreeTileFactory::mids$ = NULL;
          bool MinMaxTreeTileFactory::live$ = false;

          jclass MinMaxTreeTileFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_createTile_1cd19714644063bd] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/intersection/duvenhage/MinMaxTreeTile;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MinMaxTreeTileFactory::MinMaxTreeTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile MinMaxTreeTileFactory::createTile() const
          {
            return ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile(env->callObjectMethod(this$, mids$[mid_createTile_1cd19714644063bd]));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self);

          static PyMethodDef t_MinMaxTreeTileFactory__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTileFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, createTile, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTileFactory)[] = {
            { Py_tp_methods, t_MinMaxTreeTileFactory__methods_ },
            { Py_tp_init, (void *) t_MinMaxTreeTileFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTileFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTileFactory, t_MinMaxTreeTileFactory, MinMaxTreeTileFactory);

          void t_MinMaxTreeTileFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTileFactory), &PY_TYPE_DEF(MinMaxTreeTileFactory), module, "MinMaxTreeTileFactory", 0);
          }

          void t_MinMaxTreeTileFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "class_", make_descriptor(MinMaxTreeTileFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "wrapfn_", make_descriptor(t_MinMaxTreeTileFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTileFactory::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTileFactory::wrap_Object(MinMaxTreeTileFactory(((t_MinMaxTreeTileFactory *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTileFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds)
          {
            MinMaxTreeTileFactory object((jobject) NULL);

            INT_CALL(object = MinMaxTreeTileFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self)
          {
            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile result((jobject) NULL);
            OBJ_CALL(result = self->object.createTile());
            return ::org::orekit::rugged::intersection::duvenhage::t_MinMaxTreeTile::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonAbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonAbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool PythonAbstractConstantThrustPropulsionModel::live$ = false;

          jclass PythonAbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_33b1676e2cf06e6c] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_a40ce4fdf6559ac0] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_c04968ee695d037c] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_209f08246d708042] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_44a47ea31a9889e8] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5e5894038af17774] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractConstantThrustPropulsionModel::PythonAbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_33b1676e2cf06e6c, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          void PythonAbstractConstantThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractConstantThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractConstantThrustPropulsionModel::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonAbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractConstantThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonAbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonAbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(PythonAbstractConstantThrustPropulsionModel, t_PythonAbstractConstantThrustPropulsionModel, PythonAbstractConstantThrustPropulsionModel);

          void t_PythonAbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel), module, "PythonAbstractConstantThrustPropulsionModel", 1);
          }

          void t_PythonAbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "class_", make_descriptor(PythonAbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonAbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractConstantThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getFlowRate", "()D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0 },
              { "getFlowRate", "([D)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7 },
              { "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractConstantThrustPropulsionModel::wrap_Object(PythonAbstractConstantThrustPropulsionModel(((t_PythonAbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::lang::String a4((jobject) NULL);
            PythonAbstractConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
            {
              INT_CALL(object = PythonAbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data)
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
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTrackingCoordinates::class$ = NULL;
      jmethodID *FieldTrackingCoordinates::mids$ = NULL;
      bool FieldTrackingCoordinates::live$ = false;

      jclass FieldTrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f9ea60a8dc2d69fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getAzimuth_08d37e3f77b7239d] = env->getMethodID(cls, "getAzimuth", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_08d37e3f77b7239d] = env->getMethodID(cls, "getElevation", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_08d37e3f77b7239d] = env->getMethodID(cls, "getRange", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTrackingCoordinates::FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9ea60a8dc2d69fb, a0.this$, a1.this$, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getAzimuth() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getElevation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getRange() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_08d37e3f77b7239d]));
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
      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args);
      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data);
      static PyGetSetDef t_FieldTrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, range),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldTrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTrackingCoordinates)[] = {
        { Py_tp_methods, t_FieldTrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldTrackingCoordinates_init_ },
        { Py_tp_getset, t_FieldTrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTrackingCoordinates, t_FieldTrackingCoordinates, FieldTrackingCoordinates);
      PyObject *t_FieldTrackingCoordinates::wrap_Object(const FieldTrackingCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTrackingCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTrackingCoordinates), &PY_TYPE_DEF(FieldTrackingCoordinates), module, "FieldTrackingCoordinates", 0);
      }

      void t_FieldTrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "class_", make_descriptor(FieldTrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "wrapfn_", make_descriptor(t_FieldTrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldTrackingCoordinates::wrap_Object(FieldTrackingCoordinates(((t_FieldTrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldTrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAzimuth());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRange());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAzimuth());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRange());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonDiscreteTroposphericModel::class$ = NULL;
          jmethodID *PythonDiscreteTroposphericModel::mids$ = NULL;
          bool PythonDiscreteTroposphericModel::live$ = false;

          jclass PythonDiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_be783177b060994b] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_84f929c42eeec397] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDiscreteTroposphericModel::PythonDiscreteTroposphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonDiscreteTroposphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonDiscreteTroposphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonDiscreteTroposphericModel::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self);
          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3);
          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data);
          static PyGetSetDef t_PythonDiscreteTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDiscreteTroposphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_PythonDiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonDiscreteTroposphericModel_init_ },
            { Py_tp_getset, t_PythonDiscreteTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDiscreteTroposphericModel, t_PythonDiscreteTroposphericModel, PythonDiscreteTroposphericModel);

          void t_PythonDiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDiscreteTroposphericModel), &PY_TYPE_DEF(PythonDiscreteTroposphericModel), module, "PythonDiscreteTroposphericModel", 1);
          }

          void t_PythonDiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "class_", make_descriptor(PythonDiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "wrapfn_", make_descriptor(t_PythonDiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDiscreteTroposphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonDiscreteTroposphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDiscreteTroposphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_pathDelay3 },
              { "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDiscreteTroposphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonDiscreteTroposphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonDiscreteTroposphericModel::wrap_Object(PythonDiscreteTroposphericModel(((t_PythonDiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonDiscreteTroposphericModel object((jobject) NULL);

            INT_CALL(object = PythonDiscreteTroposphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOOO", o0, o1, o2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "dOOO", (double) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data)
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
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *UpdatableTile::class$ = NULL;
        jmethodID *UpdatableTile::mids$ = NULL;
        bool UpdatableTile::live$ = false;

        jclass UpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/UpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_setElevation_e98d7b3e971b6087] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_d690bb44b994cfa6] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatableTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_e98d7b3e971b6087], a0, a1, a2);
        }

        void UpdatableTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_d690bb44b994cfa6], a0, a1, a2, a3, a4, a5);
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
        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args);
        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args);

        static PyMethodDef t_UpdatableTile__methods_[] = {
          DECLARE_METHOD(t_UpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatableTile, setGeometry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatableTile)[] = {
          { Py_tp_methods, t_UpdatableTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatableTile, t_UpdatableTile, UpdatableTile);

        void t_UpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatableTile), &PY_TYPE_DEF(UpdatableTile), module, "UpdatableTile", 0);
        }

        void t_UpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "class_", make_descriptor(UpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "wrapfn_", make_descriptor(t_UpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatableTile::initializeClass, 1)))
            return NULL;
          return t_UpdatableTile::wrap_Object(UpdatableTile(((t_UpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonEncounterLOF::class$ = NULL;
        jmethodID *PythonEncounterLOF::mids$ = NULL;
        bool PythonEncounterLOF::live$ = false;

        jclass PythonEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_aab2b71a889b2b8a] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOther_78e01095d7eced90] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_b6feed19a568aaff] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0c632cd592d334d1] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEncounterLOF::PythonEncounterLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEncounterLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self);
        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEncounterLOF)[] = {
          { Py_tp_methods, t_PythonEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonEncounterLOF_init_ },
          { Py_tp_getset, t_PythonEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEncounterLOF, t_PythonEncounterLOF, PythonEncounterLOF);

        void t_PythonEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEncounterLOF), &PY_TYPE_DEF(PythonEncounterLOF), module, "PythonEncounterLOF", 1);
        }

        void t_PythonEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "class_", make_descriptor(PythonEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "wrapfn_", make_descriptor(t_PythonEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;", (void *) t_PythonEncounterLOF_getFieldOther2 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonEncounterLOF_getName3 },
            { "getOther", "()Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonEncounterLOF_getOther4 },
            { "pythonDecRef", "()V", (void *) t_PythonEncounterLOF_pythonDecRef5 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonEncounterLOF_rotationFromInertial6 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonEncounterLOF_rotationFromInertial7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonEncounterLOF::wrap_Object(PythonEncounterLOF(((t_PythonEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          PythonEncounterLOF object((jobject) NULL);

          INT_CALL(object = PythonEncounterLOF());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldOther", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &value))
          {
            throwTypeError("getFieldOther", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOther", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
          {
            throwTypeError("getOther", result);
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

        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data)
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
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SphericalPolygonsSet::class$ = NULL;
          jmethodID *SphericalPolygonsSet::mids$ = NULL;
          bool SphericalPolygonsSet::live$ = false;

          jclass SphericalPolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_67979f0673f03afe] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/spherical/twod/S2Point;)V");
              mids$[mid_init$_ce07cf20f467033d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_83911a7bf86bdb7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_457d0c956b0d24c0] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_8b5349b7f7c4d1be] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
              mids$[mid_buildNew_c88003cfffbb6512] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_getBoundaryLoops_d751c1a57012b438] = env->getMethodID(cls, "getBoundaryLoops", "()Ljava/util/List;");
              mids$[mid_getEnclosingCap_be37d2c4f98ba0b4] = env->getMethodID(cls, "getEnclosingCap", "()Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
              mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_67979f0673f03afe, a0, a1.this$)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_ce07cf20f467033d, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_83911a7bf86bdb7d, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_457d0c956b0d24c0, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jint a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8b5349b7f7c4d1be, a0.this$, a1.this$, a2, a3, a4)) {}

          SphericalPolygonsSet SphericalPolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_c88003cfffbb6512], a0.this$));
          }

          ::java::util::List SphericalPolygonsSet::getBoundaryLoops() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBoundaryLoops_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphericalPolygonsSet::getEnclosingCap() const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_getEnclosingCap_be37d2c4f98ba0b4]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args);
          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args);
          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data);
          static PyGetSetDef t_SphericalPolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, boundaryLoops),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, enclosingCap),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalPolygonsSet__methods_[] = {
            DECLARE_METHOD(t_SphericalPolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getBoundaryLoops, METH_NOARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getEnclosingCap, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalPolygonsSet)[] = {
            { Py_tp_methods, t_SphericalPolygonsSet__methods_ },
            { Py_tp_init, (void *) t_SphericalPolygonsSet_init_ },
            { Py_tp_getset, t_SphericalPolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalPolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(SphericalPolygonsSet, t_SphericalPolygonsSet, SphericalPolygonsSet);
          PyObject *t_SphericalPolygonsSet::wrap_Object(const SphericalPolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SphericalPolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SphericalPolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalPolygonsSet), &PY_TYPE_DEF(SphericalPolygonsSet), module, "SphericalPolygonsSet", 0);
          }

          void t_SphericalPolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "class_", make_descriptor(SphericalPolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "wrapfn_", make_descriptor(t_SphericalPolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalPolygonsSet::initializeClass, 1)))
              return NULL;
            return t_SphericalPolygonsSet::wrap_Object(SphericalPolygonsSet(((t_SphericalPolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalPolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > a1((jobject) NULL);
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jdouble a4;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            SphericalPolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_SphericalPolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SphericalPolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Vertex));
          }

          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::twod::PY_TYPE(S2Point));
          }
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$SatelliteEphemeris::class$ = NULL;
        jmethodID *EphemerisFile$SatelliteEphemeris::mids$ = NULL;
        bool EphemerisFile$SatelliteEphemeris::live$ = false;

        jclass EphemerisFile$SatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$SatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_6c7bb9da59d24b03] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_b59efa08d1230cd1] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String EphemerisFile$SatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        jdouble EphemerisFile$SatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6c7bb9da59d24b03]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_b59efa08d1230cd1], a0.this$));
        }

        ::java::util::List EphemerisFile$SatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyGetSetDef t_EphemerisFile$SatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$SatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$SatelliteEphemeris)[] = {
          { Py_tp_methods, t_EphemerisFile$SatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$SatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$SatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$SatelliteEphemeris, t_EphemerisFile$SatelliteEphemeris, EphemerisFile$SatelliteEphemeris);
        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_Object(const EphemerisFile$SatelliteEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile$SatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$SatelliteEphemeris), &PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris), module, "EphemerisFile$SatelliteEphemeris", 0);
        }

        void t_EphemerisFile$SatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "class_", make_descriptor(EphemerisFile$SatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "wrapfn_", make_descriptor(t_EphemerisFile$SatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$SatelliteEphemeris::wrap_Object(EphemerisFile$SatelliteEphemeris(((t_EphemerisFile$SatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
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

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoAlmanac::class$ = NULL;
            jmethodID *GalileoAlmanac::mids$ = NULL;
            bool GalileoAlmanac::live$ = false;

            jclass GalileoAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealthE1_d6ab429752e7c267] = env->getMethodID(cls, "getHealthE1", "()I");
                mids$[mid_getHealthE5a_d6ab429752e7c267] = env->getMethodID(cls, "getHealthE5a", "()I");
                mids$[mid_getHealthE5b_d6ab429752e7c267] = env->getMethodID(cls, "getHealthE5b", "()I");
                mids$[mid_getIOD_d6ab429752e7c267] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_setDeltaInc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaInc", "(D)V");
                mids$[mid_setDeltaSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaSqrtA", "(D)V");
                mids$[mid_setHealthE1_8fd427ab23829bf5] = env->getMethodID(cls, "setHealthE1", "(I)V");
                mids$[mid_setHealthE5a_8fd427ab23829bf5] = env->getMethodID(cls, "setHealthE5a", "(I)V");
                mids$[mid_setHealthE5b_8fd427ab23829bf5] = env->getMethodID(cls, "setHealthE5b", "(I)V");
                mids$[mid_setIOD_8fd427ab23829bf5] = env->getMethodID(cls, "setIOD", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoAlmanac::GalileoAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint GalileoAlmanac::getHealthE1() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE1_d6ab429752e7c267]);
            }

            jint GalileoAlmanac::getHealthE5a() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5a_d6ab429752e7c267]);
            }

            jint GalileoAlmanac::getHealthE5b() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5b_d6ab429752e7c267]);
            }

            jint GalileoAlmanac::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_d6ab429752e7c267]);
            }

            void GalileoAlmanac::setDeltaInc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaInc_1ad26e8c8c0cd65b], a0);
            }

            void GalileoAlmanac::setDeltaSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaSqrtA_1ad26e8c8c0cd65b], a0);
            }

            void GalileoAlmanac::setHealthE1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE1_8fd427ab23829bf5], a0);
            }

            void GalileoAlmanac::setHealthE5a(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5a_8fd427ab23829bf5], a0);
            }

            void GalileoAlmanac::setHealthE5b(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5b_8fd427ab23829bf5], a0);
            }

            void GalileoAlmanac::setIOD(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIOD_8fd427ab23829bf5], a0);
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
            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg);
            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaInc),
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaSqrtA),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE1),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5a),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5b),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, iOD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoAlmanac__methods_[] = {
              DECLARE_METHOD(t_GalileoAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5b, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaInc, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaSqrtA, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE1, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5a, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5b, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setIOD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoAlmanac)[] = {
              { Py_tp_methods, t_GalileoAlmanac__methods_ },
              { Py_tp_init, (void *) t_GalileoAlmanac_init_ },
              { Py_tp_getset, t_GalileoAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GalileoAlmanac, t_GalileoAlmanac, GalileoAlmanac);

            void t_GalileoAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoAlmanac), &PY_TYPE_DEF(GalileoAlmanac), module, "GalileoAlmanac", 0);
            }

            void t_GalileoAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "class_", make_descriptor(GalileoAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "wrapfn_", make_descriptor(t_GalileoAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoAlmanac::initializeClass, 1)))
                return NULL;
              return t_GalileoAlmanac::wrap_Object(GalileoAlmanac(((t_GalileoAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GalileoAlmanac object((jobject) NULL);

              INT_CALL(object = GalileoAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5a());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5b());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaInc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaInc", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5b", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIOD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIOD", arg);
              return NULL;
            }

            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaInc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaInc", arg);
              return -1;
            }

            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaSqrtA", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE1());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE1", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5a());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5a", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5b());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5b", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIOD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iOD", arg);
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
#include "org/hipparchus/stat/projection/PCA.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {

        ::java::lang::Class *PCA::class$ = NULL;
        jmethodID *PCA::mids$ = NULL;
        bool PCA::live$ = false;

        jclass PCA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/projection/PCA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_7894216015228118] = env->getMethodID(cls, "<init>", "(IZZ)V");
            mids$[mid_fit_7b0eb81c6fb1791c] = env->getMethodID(cls, "fit", "([[D)Lorg/hipparchus/stat/projection/PCA;");
            mids$[mid_fitAndTransform_d9fb07d4cbf99fb5] = env->getMethodID(cls, "fitAndTransform", "([[D)[[D");
            mids$[mid_getCenter_be783177b060994b] = env->getMethodID(cls, "getCenter", "()[D");
            mids$[mid_getComponents_eda3f19b8225f78f] = env->getMethodID(cls, "getComponents", "()[[D");
            mids$[mid_getNumComponents_d6ab429752e7c267] = env->getMethodID(cls, "getNumComponents", "()I");
            mids$[mid_getVariance_be783177b060994b] = env->getMethodID(cls, "getVariance", "()[D");
            mids$[mid_isBiasCorrection_eee3de00fe971136] = env->getMethodID(cls, "isBiasCorrection", "()Z");
            mids$[mid_isScale_eee3de00fe971136] = env->getMethodID(cls, "isScale", "()Z");
            mids$[mid_transform_d9fb07d4cbf99fb5] = env->getMethodID(cls, "transform", "([[D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PCA::PCA(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        PCA::PCA(jint a0, jboolean a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7894216015228118, a0, a1, a2)) {}

        PCA PCA::fit(const JArray< JArray< jdouble > > & a0) const
        {
          return PCA(env->callObjectMethod(this$, mids$[mid_fit_7b0eb81c6fb1791c], a0.this$));
        }

        JArray< JArray< jdouble > > PCA::fitAndTransform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_fitAndTransform_d9fb07d4cbf99fb5], a0.this$));
        }

        JArray< jdouble > PCA::getCenter() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenter_be783177b060994b]));
        }

        JArray< JArray< jdouble > > PCA::getComponents() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getComponents_eda3f19b8225f78f]));
        }

        jint PCA::getNumComponents() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumComponents_d6ab429752e7c267]);
        }

        JArray< jdouble > PCA::getVariance() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVariance_be783177b060994b]));
        }

        jboolean PCA::isBiasCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isBiasCorrection_eee3de00fe971136]);
        }

        jboolean PCA::isScale() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isScale_eee3de00fe971136]);
        }

        JArray< JArray< jdouble > > PCA::transform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_transform_d9fb07d4cbf99fb5], a0.this$));
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
      namespace projection {
        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_getCenter(t_PCA *self);
        static PyObject *t_PCA_getComponents(t_PCA *self);
        static PyObject *t_PCA_getNumComponents(t_PCA *self);
        static PyObject *t_PCA_getVariance(t_PCA *self);
        static PyObject *t_PCA_isBiasCorrection(t_PCA *self);
        static PyObject *t_PCA_isScale(t_PCA *self);
        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data);
        static PyObject *t_PCA_get__center(t_PCA *self, void *data);
        static PyObject *t_PCA_get__components(t_PCA *self, void *data);
        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data);
        static PyObject *t_PCA_get__scale(t_PCA *self, void *data);
        static PyObject *t_PCA_get__variance(t_PCA *self, void *data);
        static PyGetSetDef t_PCA__fields_[] = {
          DECLARE_GET_FIELD(t_PCA, biasCorrection),
          DECLARE_GET_FIELD(t_PCA, center),
          DECLARE_GET_FIELD(t_PCA, components),
          DECLARE_GET_FIELD(t_PCA, numComponents),
          DECLARE_GET_FIELD(t_PCA, scale),
          DECLARE_GET_FIELD(t_PCA, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PCA__methods_[] = {
          DECLARE_METHOD(t_PCA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, fit, METH_O),
          DECLARE_METHOD(t_PCA, fitAndTransform, METH_O),
          DECLARE_METHOD(t_PCA, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getNumComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isBiasCorrection, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isScale, METH_NOARGS),
          DECLARE_METHOD(t_PCA, transform, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PCA)[] = {
          { Py_tp_methods, t_PCA__methods_ },
          { Py_tp_init, (void *) t_PCA_init_ },
          { Py_tp_getset, t_PCA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PCA)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PCA, t_PCA, PCA);

        void t_PCA::install(PyObject *module)
        {
          installType(&PY_TYPE(PCA), &PY_TYPE_DEF(PCA), module, "PCA", 0);
        }

        void t_PCA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "class_", make_descriptor(PCA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "wrapfn_", make_descriptor(t_PCA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PCA::initializeClass, 1)))
            return NULL;
          return t_PCA::wrap_Object(PCA(((t_PCA *) arg)->object.this$));
        }
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PCA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = PCA(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jboolean a2;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "IZZ", &a0, &a1, &a2))
              {
                INT_CALL(object = PCA(a0, a1, a2));
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

        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          PCA result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fit(a0));
            return t_PCA::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "fit", arg);
          return NULL;
        }

        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fitAndTransform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "fitAndTransform", arg);
          return NULL;
        }

        static PyObject *t_PCA_getCenter(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return result.wrap();
        }

        static PyObject *t_PCA_getComponents(t_PCA *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PCA_getNumComponents(t_PCA *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumComponents());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PCA_getVariance(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVariance());
          return result.wrap();
        }

        static PyObject *t_PCA_isBiasCorrection(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isBiasCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_isScale(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isScale());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.transform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "transform", arg);
          return NULL;
        }

        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isBiasCorrection());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__center(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return value.wrap();
        }

        static PyObject *t_PCA_get__components(t_PCA *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumComponents());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PCA_get__scale(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isScale());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__variance(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVariance());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistory::class$ = NULL;
              jmethodID *TrajectoryStateHistory::mids$ = NULL;
              bool TrajectoryStateHistory::live$ = false;

              jclass TrajectoryStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d3c76af6cc69a178] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Ljava/util/List;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                  mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
                  mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_10c9e19b4b3f8d44] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajectoryStates_d751c1a57012b438] = env->getMethodID(cls, "getTrajectoryStates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistory::TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a0, const ::java::util::List & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3c76af6cc69a178, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
              }

              ::org::orekit::bodies::OneAxisEllipsoid TrajectoryStateHistory::getBody() const
              {
                return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
              }

              ::java::util::List TrajectoryStateHistory::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
              }

              ::org::orekit::frames::Frame TrajectoryStateHistory::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
              }

              jint TrajectoryStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata TrajectoryStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_10c9e19b4b3f8d44]));
              }

              jdouble TrajectoryStateHistory::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
              }

              ::java::util::List TrajectoryStateHistory::getTrajectoryStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryStates_d751c1a57012b438]));
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
          namespace odm {
            namespace ocm {
              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, body),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, coordinates),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, frame),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, metadata),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, mu),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, start),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, stop),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, trajectoryStates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistory__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getBody, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMu, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStop, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getTrajectoryStates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistory)[] = {
                { Py_tp_methods, t_TrajectoryStateHistory__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistory_init_ },
                { Py_tp_getset, t_TrajectoryStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistory, t_TrajectoryStateHistory, TrajectoryStateHistory);

              void t_TrajectoryStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistory), &PY_TYPE_DEF(TrajectoryStateHistory), module, "TrajectoryStateHistory", 0);
              }

              void t_TrajectoryStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "class_", make_descriptor(TrajectoryStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "wrapfn_", make_descriptor(t_TrajectoryStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistory::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistory::wrap_Object(TrajectoryStateHistory(((t_TrajectoryStateHistory *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                TrajectoryStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kKkD", ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
                {
                  INT_CALL(object = TrajectoryStateHistory(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
                OBJ_CALL(result = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryState));
              }

              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
                OBJ_CALL(value = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PositionBuilder::class$ = NULL;
          jmethodID *PositionBuilder::mids$ = NULL;
          bool PositionBuilder::live$ = false;

          jclass PositionBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PositionBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4c6df0aba0b525ad] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_ab979f8de6ee37e2] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Position;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PositionBuilder::PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const ::org::orekit::estimation::measurements::ObservableSatellite & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_4c6df0aba0b525ad, a0.this$, a1, a2, a3.this$)) {}

          ::org::orekit::estimation::measurements::Position PositionBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Position(env->callObjectMethod(this$, mids$[mid_build_ab979f8de6ee37e2], a0.this$, a1.this$));
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
          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args);
          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args);
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data);
          static PyGetSetDef t_PositionBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PositionBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PositionBuilder__methods_[] = {
            DECLARE_METHOD(t_PositionBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PositionBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PositionBuilder)[] = {
            { Py_tp_methods, t_PositionBuilder__methods_ },
            { Py_tp_init, (void *) t_PositionBuilder_init_ },
            { Py_tp_getset, t_PositionBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PositionBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PositionBuilder, t_PositionBuilder, PositionBuilder);
          PyObject *t_PositionBuilder::wrap_Object(const PositionBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PositionBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PositionBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PositionBuilder), &PY_TYPE_DEF(PositionBuilder), module, "PositionBuilder", 0);
          }

          void t_PositionBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "class_", make_descriptor(PositionBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "wrapfn_", make_descriptor(t_PositionBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PositionBuilder::initializeClass, 1)))
              return NULL;
            return t_PositionBuilder::wrap_Object(PositionBuilder(((t_PositionBuilder *) arg)->object.this$));
          }
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PositionBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::estimation::measurements::ObservableSatellite a3((jobject) NULL);
            PositionBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PositionBuilder(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Position result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Position::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PositionBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data)
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
#include "org/orekit/data/PolynomialParser.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser::class$ = NULL;
      jmethodID *PolynomialParser::mids$ = NULL;
      bool PolynomialParser::live$ = false;

      jclass PolynomialParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c3124d70edc51ee2] = env->getMethodID(cls, "<init>", "(CLorg/orekit/data/PolynomialParser$Unit;)V");
          mids$[mid_parse_4bbf10387b1a6128] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialParser::PolynomialParser(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3124d70edc51ee2, a0, a1.this$)) {}

      JArray< jdouble > PolynomialParser::parse(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_parse_4bbf10387b1a6128], a0.this$));
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
      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg);

      static PyMethodDef t_PolynomialParser__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, parse, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser)[] = {
        { Py_tp_methods, t_PolynomialParser__methods_ },
        { Py_tp_init, (void *) t_PolynomialParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialParser, t_PolynomialParser, PolynomialParser);

      void t_PolynomialParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser), &PY_TYPE_DEF(PolynomialParser), module, "PolynomialParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "Unit", make_descriptor(&PY_TYPE_DEF(PolynomialParser$Unit)));
      }

      void t_PolynomialParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "class_", make_descriptor(PolynomialParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "wrapfn_", make_descriptor(t_PolynomialParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser::wrap_Object(PolynomialParser(((t_PolynomialParser *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PolynomialParser object((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          INT_CALL(object = PolynomialParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.parse(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "parse", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AbstractDetector::class$ = NULL;
        jmethodID *AbstractDetector::mids$ = NULL;
        bool AbstractDetector::live$ = false;
        jdouble AbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0e9e72f635f03ea9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_30a1635272b3efbb] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_f6dac0e72bf77fee] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_beb3e829b22ea7a4] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/AdaptableInterval;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxIter_6bba1a5a8d5f4501] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withThreshold_f6dac0e72bf77fee] = env->getMethodID(cls, "withThreshold", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_create_23ac4e704dde127b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler AbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0e9e72f635f03ea9]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87]));
        }

        jint AbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        jdouble AbstractDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_9981f74b2d109da6]);
        }

        void AbstractDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        jboolean AbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        AbstractDetector AbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_30a1635272b3efbb], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_f6dac0e72bf77fee], a0));
        }

        AbstractDetector AbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_beb3e829b22ea7a4], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxIter(jint a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_6bba1a5a8d5f4501], a0));
        }

        AbstractDetector AbstractDetector::withThreshold(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_f6dac0e72bf77fee], a0));
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
        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data);
        static PyGetSetDef t_AbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractDetector, forward),
          DECLARE_GET_FIELD(t_AbstractDetector, handler),
          DECLARE_GET_FIELD(t_AbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractDetector, threshold),
          DECLARE_GET_FIELD(t_AbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDetector)[] = {
          { Py_tp_methods, t_AbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDetector, t_AbstractDetector, AbstractDetector);
        PyObject *t_AbstractDetector::wrap_Object(const AbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDetector), &PY_TYPE_DEF(AbstractDetector), module, "AbstractDetector", 0);
        }

        void t_AbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "class_", make_descriptor(AbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "wrapfn_", make_descriptor(t_AbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractDetector::wrap_Object(AbstractDetector(((t_AbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::AdaptableInterval a0((jobject) NULL);
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAmbiguityAcceptance::class$ = NULL;
          jmethodID *PythonAmbiguityAcceptance::mids$ = NULL;
          bool PythonAmbiguityAcceptance::live$ = false;

          jclass PythonAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_accept_5ee686c7fe5c8130] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_numberOfCandidates_d6ab429752e7c267] = env->getMethodID(cls, "numberOfCandidates", "()I");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAmbiguityAcceptance::PythonAmbiguityAcceptance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonAmbiguityAcceptance::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAmbiguityAcceptance::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAmbiguityAcceptance::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self);
          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args);
          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data);
          static PyGetSetDef t_PythonAmbiguityAcceptance__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAmbiguityAcceptance, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_PythonAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_PythonAmbiguityAcceptance_init_ },
            { Py_tp_getset, t_PythonAmbiguityAcceptance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAmbiguityAcceptance, t_PythonAmbiguityAcceptance, PythonAmbiguityAcceptance);

          void t_PythonAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAmbiguityAcceptance), &PY_TYPE_DEF(PythonAmbiguityAcceptance), module, "PythonAmbiguityAcceptance", 1);
          }

          void t_PythonAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "class_", make_descriptor(PythonAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "wrapfn_", make_descriptor(t_PythonAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAmbiguityAcceptance::initializeClass);
            JNINativeMethod methods[] = {
              { "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonAmbiguityAcceptance_accept0 },
              { "numberOfCandidates", "()I", (void *) t_PythonAmbiguityAcceptance_numberOfCandidates1 },
              { "pythonDecRef", "()V", (void *) t_PythonAmbiguityAcceptance_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_PythonAmbiguityAcceptance::wrap_Object(PythonAmbiguityAcceptance(((t_PythonAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            PythonAmbiguityAcceptance object((jobject) NULL);

            INT_CALL(object = PythonAmbiguityAcceptance());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args)
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

          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("accept", result);
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

          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "numberOfCandidates", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("numberOfCandidates", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data)
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
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerAndMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerAndMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerAndMultiplexer::live$ = false;

      jclass ConvergenceCheckerAndMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerAndMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_cb974f0dd5d76f8e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerAndMultiplexer::ConvergenceCheckerAndMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

      jboolean ConvergenceCheckerAndMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_cb974f0dd5d76f8e], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerAndMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerAndMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerAndMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerAndMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerAndMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerAndMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerAndMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerAndMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerAndMultiplexer, t_ConvergenceCheckerAndMultiplexer, ConvergenceCheckerAndMultiplexer);
      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_Object(const ConvergenceCheckerAndMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerAndMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerAndMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer), module, "ConvergenceCheckerAndMultiplexer", 0);
      }

      void t_ConvergenceCheckerAndMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "class_", make_descriptor(ConvergenceCheckerAndMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerAndMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerAndMultiplexer::wrap_Object(ConvergenceCheckerAndMultiplexer(((t_ConvergenceCheckerAndMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerAndMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerAndMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Enum.h"
#include "java/io/Serializable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Enum::class$ = NULL;
    jmethodID *Enum::mids$ = NULL;
    bool Enum::live$ = false;

    jclass Enum::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Enum");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_cf96c9a6c4367385] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Enum;)I");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDeclaringClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_name_d2c8eb4129821f0e] = env->getMethodID(cls, "name", "()Ljava/lang/String;");
        mids$[mid_ordinal_d6ab429752e7c267] = env->getMethodID(cls, "ordinal", "()I");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_valueOf_b8b2bb3c4fb2b5bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
        mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Enum::compareTo(const Enum & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_cf96c9a6c4367385], a0.this$);
    }

    jboolean Enum::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Class Enum::getDeclaringClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_d5247e4b166c4ce8]));
    }

    jint Enum::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    ::java::lang::String Enum::name() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_name_d2c8eb4129821f0e]));
    }

    jint Enum::ordinal() const
    {
      return env->callIntMethod(this$, mids$[mid_ordinal_d6ab429752e7c267]);
    }

    ::java::lang::String Enum::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    Enum Enum::valueOf(const ::java::lang::Class & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Enum(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b8b2bb3c4fb2b5bc], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg);
    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_getDeclaringClass(t_Enum *self);
    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_name(t_Enum *self);
    static PyObject *t_Enum_ordinal(t_Enum *self);
    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data);
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data);
    static PyGetSetDef t_Enum__fields_[] = {
      DECLARE_GET_FIELD(t_Enum, declaringClass),
      DECLARE_GET_FIELD(t_Enum, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enum__methods_[] = {
      DECLARE_METHOD(t_Enum, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enum, compareTo, METH_O),
      DECLARE_METHOD(t_Enum, equals, METH_VARARGS),
      DECLARE_METHOD(t_Enum, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Enum, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Enum, name, METH_NOARGS),
      DECLARE_METHOD(t_Enum, ordinal, METH_NOARGS),
      DECLARE_METHOD(t_Enum, toString, METH_VARARGS),
      DECLARE_METHOD(t_Enum, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enum)[] = {
      { Py_tp_methods, t_Enum__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enum__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enum)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enum, t_Enum, Enum);
    PyObject *t_Enum::wrap_Object(const Enum& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enum::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enum::install(PyObject *module)
    {
      installType(&PY_TYPE(Enum), &PY_TYPE_DEF(Enum), module, "Enum", 0);
    }

    void t_Enum::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "class_", make_descriptor(Enum::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "wrapfn_", make_descriptor(t_Enum::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enum::initializeClass, 1)))
        return NULL;
      return t_Enum::wrap_Object(Enum(((t_Enum *) arg)->object.this$));
    }
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enum::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg)
    {
      Enum a0((jobject) NULL);
      PyTypeObject **p0;
      jint result;

      if (!parseArg(arg, "K", Enum::initializeClass, &a0, &p0, t_Enum::parameters_))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Enum_getDeclaringClass(t_Enum *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Enum_name(t_Enum *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.name());
      return j2p(result);
    }

    static PyObject *t_Enum_ordinal(t_Enum *self)
    {
      jint result;
      OBJ_CALL(result = self->object.ordinal());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::String a1((jobject) NULL);
      Enum result((jobject) NULL);

      if (!parseArgs(args, "Ks", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::lang::Enum::valueOf(a0, a1));
        return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : t_Enum::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *DiskGenerator::class$ = NULL;
          jmethodID *DiskGenerator::mids$ = NULL;
          bool DiskGenerator::live$ = false;

          jclass DiskGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/DiskGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_6deb4972134b40de] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DiskGenerator::DiskGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall DiskGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_6deb4972134b40de], a0.this$));
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
          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg);

          static PyMethodDef t_DiskGenerator__methods_[] = {
            DECLARE_METHOD(t_DiskGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiskGenerator)[] = {
            { Py_tp_methods, t_DiskGenerator__methods_ },
            { Py_tp_init, (void *) t_DiskGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiskGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DiskGenerator, t_DiskGenerator, DiskGenerator);

          void t_DiskGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(DiskGenerator), &PY_TYPE_DEF(DiskGenerator), module, "DiskGenerator", 0);
          }

          void t_DiskGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "class_", make_descriptor(DiskGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "wrapfn_", make_descriptor(t_DiskGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiskGenerator::initializeClass, 1)))
              return NULL;
            return t_DiskGenerator::wrap_Object(DiskGenerator(((t_DiskGenerator *) arg)->object.this$));
          }
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiskGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds)
          {
            DiskGenerator object((jobject) NULL);

            INT_CALL(object = DiskGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradient::class$ = NULL;
        jmethodID *FieldGradient::mids$ = NULL;
        bool FieldGradient::live$ = false;

        jclass FieldGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d464f1870c2dee26] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_8556964e7b03aae6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_181a8b55191d747b] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acos_181a8b55191d747b] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acosh_181a8b55191d747b] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_f71635cef52309f9] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_818cb502149d996f] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_c5ec9c9770fbafed] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asin_181a8b55191d747b] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asinh_181a8b55191d747b] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan_181a8b55191d747b] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan2_f71635cef52309f9] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atanh_181a8b55191d747b] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cbrt_181a8b55191d747b] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ceil_181a8b55191d747b] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_compose_19aa6e42ebe749f8] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_constant_69be3668a1731f68] = env->getStaticMethodID(cls, "constant", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_f71635cef52309f9] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_818cb502149d996f] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_c5ec9c9770fbafed] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cos_181a8b55191d747b] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cosh_181a8b55191d747b] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_f71635cef52309f9] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_818cb502149d996f] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_c5ec9c9770fbafed] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_181a8b55191d747b] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_expm1_181a8b55191d747b] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_floor_181a8b55191d747b] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_9dda00f40dc6c813] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_94ed2e0620f8833d] = env->getMethodID(cls, "getGradient", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_15bad9d0870b63aa] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPartialDerivative_dfcf702144fd7bc1] = env->getMethodID(cls, "getPartialDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_181a8b55191d747b] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_577649682b9910c1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_f71635cef52309f9] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_5aa710e8712c2450] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_779e5bd36bfdf19e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_192a35caaf4c5ce8] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldGradient;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_18ade1a9dd7b6368] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_364259e7e39bde20] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_38807bf33532dbca] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d88448cb5625c215] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_1a4b96b589b49371] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d46d1918e39c1423] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_f19fcea6a917962e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log_181a8b55191d747b] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log10_181a8b55191d747b] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log1p_181a8b55191d747b] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_f71635cef52309f9] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_818cb502149d996f] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_331eec1d3d8bd039] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_c5ec9c9770fbafed] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_negate_181a8b55191d747b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_818cb502149d996f] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_c5ec9c9770fbafed] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_f71635cef52309f9] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_818cb502149d996f] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_331eec1d3d8bd039] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_f71ff5cc067cec45] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_reciprocal_181a8b55191d747b] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_f71635cef52309f9] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_818cb502149d996f] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_c5ec9c9770fbafed] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rint_181a8b55191d747b] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rootN_331eec1d3d8bd039] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_scalb_331eec1d3d8bd039] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sign_181a8b55191d747b] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sin_181a8b55191d747b] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_181a8b55191d747b] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_181a8b55191d747b] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_f71635cef52309f9] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_818cb502149d996f] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_c5ec9c9770fbafed] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tan_181a8b55191d747b] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tanh_181a8b55191d747b] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_taylor_882fb3b536492986] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_c04968ee695d037c] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_181a8b55191d747b] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_toDerivativeStructure_b363d6ebd90353bf] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_181a8b55191d747b] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ulp_181a8b55191d747b] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_variable_13d0880ea2146b2e] = env->getStaticMethodID(cls, "variable", "(IILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldGradient::FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d464f1870c2dee26, a0.this$)) {}

        FieldGradient::FieldGradient(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8556964e7b03aae6, a0.this$, a1.this$)) {}

        FieldGradient FieldGradient::abs() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_abs_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::acos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acos_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::acosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acosh_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::add(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::add(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::asin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asin_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::asinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asinh_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::atan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::atan2(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan2_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::atanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atanh_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::cbrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cbrt_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::ceil() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ceil_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_compose_19aa6e42ebe749f8], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::constant(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_constant_69be3668a1731f68], a0, a1.this$));
        }

        FieldGradient FieldGradient::copySign(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::copySign(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::cos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cos_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::cosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cosh_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::divide(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::divide(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_c5ec9c9770fbafed], a0.this$));
        }

        jboolean FieldGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        FieldGradient FieldGradient::exp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_exp_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::expm1() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_expm1_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::floor() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_floor_181a8b55191d747b]));
        }

        jint FieldGradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::FieldGradientField FieldGradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradientField(env->callObjectMethod(this$, mids$[mid_getField_9dda00f40dc6c813]));
        }

        jint FieldGradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldGradient::getGradient() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGradient_94ed2e0620f8833d]));
        }

        jint FieldGradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_15bad9d0870b63aa], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_dfcf702144fd7bc1], a0));
        }

        FieldGradient FieldGradient::getPi() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_getPi_181a8b55191d747b]));
        }

        jdouble FieldGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
        }

        ::org::hipparchus::Field FieldGradient::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_577649682b9910c1]));
        }

        jint FieldGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        FieldGradient FieldGradient::hypot(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_hypot_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< jdouble > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5aa710e8712c2450], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_779e5bd36bfdf19e], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< FieldGradient > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_192a35caaf4c5ce8], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_18ade1a9dd7b6368], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_364259e7e39bde20], a0, a1.this$, a2, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_38807bf33532dbca], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d88448cb5625c215], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldGradient & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldGradient & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1a4b96b589b49371], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5, const FieldGradient & a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d46d1918e39c1423], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5, jdouble a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_f19fcea6a917962e], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldGradient FieldGradient::log() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::log10() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log10_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::log1p() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log1p_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::multiply(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::multiply(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::multiply(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_331eec1d3d8bd039], a0));
        }

        FieldGradient FieldGradient::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::negate() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_negate_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::newInstance(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::newInstance(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::pow(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::pow(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::pow(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_331eec1d3d8bd039], a0));
        }

        FieldGradient FieldGradient::pow(jdouble a0, const FieldGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_f71ff5cc067cec45], a0, a1.this$));
        }

        FieldGradient FieldGradient::reciprocal() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::remainder(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::remainder(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::rint() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rint_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::rootN(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rootN_331eec1d3d8bd039], a0));
        }

        FieldGradient FieldGradient::scalb(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_scalb_331eec1d3d8bd039], a0));
        }

        FieldGradient FieldGradient::sign() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sign_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::sin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sin_181a8b55191d747b]));
        }

        ::org::hipparchus::util::FieldSinCos FieldGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        FieldGradient FieldGradient::sinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sinh_181a8b55191d747b]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        FieldGradient FieldGradient::sqrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sqrt_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::subtract(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_f71635cef52309f9], a0.this$));
        }

        FieldGradient FieldGradient::subtract(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_818cb502149d996f], a0));
        }

        FieldGradient FieldGradient::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_c5ec9c9770fbafed], a0.this$));
        }

        FieldGradient FieldGradient::tan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tan_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::tanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tanh_181a8b55191d747b]));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_882fb3b536492986], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_c04968ee695d037c], a0.this$));
        }

        FieldGradient FieldGradient::toDegrees() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_181a8b55191d747b]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldGradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_b363d6ebd90353bf]));
        }

        FieldGradient FieldGradient::toRadians() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toRadians_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::ulp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ulp_181a8b55191d747b]));
        }

        FieldGradient FieldGradient::variable(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_variable_13d0880ea2146b2e], a0, a1, a2.this$));
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
        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args);
        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldGradient_abs(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_asin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self);
        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_cos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_exp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self);
        static PyObject *t_FieldGradient_floor(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_log(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log10(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self);
        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_negate(t_FieldGradient *self);
        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_rint(t_FieldGradient *self);
        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_sign(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_tan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data);
        static PyGetSetDef t_FieldGradient__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradient, exponent),
          DECLARE_GET_FIELD(t_FieldGradient, field),
          DECLARE_GET_FIELD(t_FieldGradient, freeParameters),
          DECLARE_GET_FIELD(t_FieldGradient, gradient),
          DECLARE_GET_FIELD(t_FieldGradient, order),
          DECLARE_GET_FIELD(t_FieldGradient, pi),
          DECLARE_GET_FIELD(t_FieldGradient, real),
          DECLARE_GET_FIELD(t_FieldGradient, value),
          DECLARE_GET_FIELD(t_FieldGradient, valueField),
          DECLARE_GET_FIELD(t_FieldGradient, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradient__methods_[] = {
          DECLARE_METHOD(t_FieldGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan2, METH_O),
          DECLARE_METHOD(t_FieldGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, hypot, METH_O),
          DECLARE_METHOD(t_FieldGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, rootN, METH_O),
          DECLARE_METHOD(t_FieldGradient, scalb, METH_O),
          DECLARE_METHOD(t_FieldGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradient)[] = {
          { Py_tp_methods, t_FieldGradient__methods_ },
          { Py_tp_init, (void *) t_FieldGradient_init_ },
          { Py_tp_getset, t_FieldGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradient, t_FieldGradient, FieldGradient);
        PyObject *t_FieldGradient::wrap_Object(const FieldGradient& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradient::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradient), &PY_TYPE_DEF(FieldGradient), module, "FieldGradient", 0);
        }

        void t_FieldGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "class_", make_descriptor(FieldGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "wrapfn_", make_descriptor(t_FieldGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradient::initializeClass, 1)))
            return NULL;
          return t_FieldGradient::wrap_Object(FieldGradient(((t_FieldGradient *) arg)->object.this$));
        }
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldGradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGradient(a0, a1));
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

        static PyObject *t_FieldGradient_abs(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_asin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::constant(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_cos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradient_exp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_floor(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getField(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldGradient > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient a6((jobject) NULL);
              PyTypeObject **p6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_, &a6, &p6, t_FieldGradient::parameters_, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_, &a6, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_log(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log10(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_negate(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldGradient a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::pow(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_rint(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_sign(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_tan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::variable(a0, a1, a2));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data)
        {
          FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareComparator::class$ = NULL;
          jmethodID *IntegerLeastSquareComparator::mids$ = NULL;
          bool IntegerLeastSquareComparator::live$ = false;

          jclass IntegerLeastSquareComparator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_compare_2260aa3646598a77] = env->getMethodID(cls, "compare", "(Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareComparator::IntegerLeastSquareComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          jint IntegerLeastSquareComparator::compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a1) const
          {
            return env->callIntMethod(this$, mids$[mid_compare_2260aa3646598a77], a0.this$, a1.this$);
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
          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareComparator__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareComparator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, compare, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareComparator)[] = {
            { Py_tp_methods, t_IntegerLeastSquareComparator__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareComparator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareComparator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareComparator, t_IntegerLeastSquareComparator, IntegerLeastSquareComparator);

          void t_IntegerLeastSquareComparator::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareComparator), &PY_TYPE_DEF(IntegerLeastSquareComparator), module, "IntegerLeastSquareComparator", 0);
          }

          void t_IntegerLeastSquareComparator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "class_", make_descriptor(IntegerLeastSquareComparator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "wrapfn_", make_descriptor(t_IntegerLeastSquareComparator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareComparator::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareComparator::wrap_Object(IntegerLeastSquareComparator(((t_IntegerLeastSquareComparator *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareComparator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds)
          {
            IntegerLeastSquareComparator object((jobject) NULL);

            INT_CALL(object = IntegerLeastSquareComparator());
            self->object = object;

            return 0;
          }

          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.compare(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "compare", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1D::class$ = NULL;
          jmethodID *Vector1D::mids$ = NULL;
          bool Vector1D::live$ = false;
          Vector1D *Vector1D::NEGATIVE_INFINITY = NULL;
          Vector1D *Vector1D::NaN = NULL;
          Vector1D *Vector1D::ONE = NULL;
          Vector1D *Vector1D::POSITIVE_INFINITY = NULL;
          Vector1D *Vector1D::ZERO = NULL;

          jclass Vector1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_019ccca59a692ed4] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_4d972016844dc9c6] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_c5455ea0fb40ead3] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_2f05e16d5bc3445f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_add_0184a754d67728b4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_add_b27957fc94d65e02] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_ea79b40fdf1a3436] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distance1_54eca2a6b3ac81a2] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_ea79b40fdf1a3436] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distanceSq_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_ea79b40fdf1a3436] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_dotProduct_54eca2a6b3ac81a2] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_72faff9b05f5ed5e] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_9981f74b2d109da6] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_9981f74b2d109da6] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getZero_dfd07178ba1b5f7f] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_dfd07178ba1b5f7f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_scalarMultiply_25cb5a9c7842cdb1] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_0184a754d67728b4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_b27957fc94d65e02] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NEGATIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              NaN = new Vector1D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ONE = new Vector1D(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              POSITIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ZERO = new Vector1D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1D::Vector1D(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_019ccca59a692ed4, a0, a1.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d972016844dc9c6, a0, a1.this$, a2, a3.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5455ea0fb40ead3, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5, jdouble a6, const Vector1D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2f05e16d5bc3445f, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector1D Vector1D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_0184a754d67728b4], a0.this$));
          }

          Vector1D Vector1D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_b27957fc94d65e02], a0, a1.this$));
          }

          jdouble Vector1D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
          }

          jdouble Vector1D::distance(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_ea79b40fdf1a3436], a0.this$, a1.this$);
          }

          jdouble Vector1D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector1D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector1D::distanceInf(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_ea79b40fdf1a3436], a0.this$, a1.this$);
          }

          jdouble Vector1D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector1D::distanceSq(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_ea79b40fdf1a3436], a0.this$, a1.this$);
          }

          jdouble Vector1D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_54eca2a6b3ac81a2], a0.this$);
          }

          jboolean Vector1D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jboolean Vector1D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_72faff9b05f5ed5e], a0.this$);
          }

          jdouble Vector1D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
          }

          jdouble Vector1D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
          }

          jdouble Vector1D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_9981f74b2d109da6]);
          }

          jdouble Vector1D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::Space Vector1D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
          }

          jdouble Vector1D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
          }

          Vector1D Vector1D::getZero() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_getZero_dfd07178ba1b5f7f]));
          }

          jint Vector1D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean Vector1D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
          }

          jboolean Vector1D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          Vector1D Vector1D::negate() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_negate_dfd07178ba1b5f7f]));
          }

          Vector1D Vector1D::scalarMultiply(jdouble a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_25cb5a9c7842cdb1], a0));
          }

          Vector1D Vector1D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_0184a754d67728b4], a0.this$));
          }

          Vector1D Vector1D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_b27957fc94d65e02], a0, a1.this$));
          }

          ::java::lang::String Vector1D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::java::lang::String Vector1D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
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
          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_getNorm(t_Vector1D *self);
          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self);
          static PyObject *t_Vector1D_getSpace(t_Vector1D *self);
          static PyObject *t_Vector1D_getX(t_Vector1D *self);
          static PyObject *t_Vector1D_getZero(t_Vector1D *self);
          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self);
          static PyObject *t_Vector1D_isNaN(t_Vector1D *self);
          static PyObject *t_Vector1D_negate(t_Vector1D *self);
          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data);
          static PyGetSetDef t_Vector1D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1D, infinite),
            DECLARE_GET_FIELD(t_Vector1D, naN),
            DECLARE_GET_FIELD(t_Vector1D, norm),
            DECLARE_GET_FIELD(t_Vector1D, norm1),
            DECLARE_GET_FIELD(t_Vector1D, normInf),
            DECLARE_GET_FIELD(t_Vector1D, normSq),
            DECLARE_GET_FIELD(t_Vector1D, space),
            DECLARE_GET_FIELD(t_Vector1D, x),
            DECLARE_GET_FIELD(t_Vector1D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1D__methods_[] = {
            DECLARE_METHOD(t_Vector1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, distance, METH_O),
            DECLARE_METHOD(t_Vector1D, distance1, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector1D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector1D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector1D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1D)[] = {
            { Py_tp_methods, t_Vector1D__methods_ },
            { Py_tp_init, (void *) t_Vector1D_init_ },
            { Py_tp_getset, t_Vector1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector1D, t_Vector1D, Vector1D);

          void t_Vector1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1D), &PY_TYPE_DEF(Vector1D), module, "Vector1D", 0);
          }

          void t_Vector1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "class_", make_descriptor(Vector1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "wrapfn_", make_descriptor(t_Vector1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NEGATIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NaN", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ONE", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "POSITIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ZERO", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ZERO)));
          }

          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1D::initializeClass, 1)))
              return NULL;
            return t_Vector1D::wrap_Object(Vector1D(((t_Vector1D *) arg)->object.this$));
          }
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Vector1D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector1D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector1D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                jdouble a6;
                Vector1D a7((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_getNorm(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getSpace(t_Vector1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector1D_getX(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getZero(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_isNaN(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_negate(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg)
          {
            jdouble a0;
            Vector1D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector1D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data)
          {
            Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposer::class$ = NULL;
      jmethodID *CholeskyDecomposer::mids$ = NULL;
      bool CholeskyDecomposer::live$ = false;

      jclass CholeskyDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_decompose_b099faee6eb73725] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposer::CholeskyDecomposer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b099faee6eb73725], a0.this$));
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
      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg);

      static PyMethodDef t_CholeskyDecomposer__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposer)[] = {
        { Py_tp_methods, t_CholeskyDecomposer__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposer, t_CholeskyDecomposer, CholeskyDecomposer);

      void t_CholeskyDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposer), &PY_TYPE_DEF(CholeskyDecomposer), module, "CholeskyDecomposer", 0);
      }

      void t_CholeskyDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "class_", make_descriptor(CholeskyDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "wrapfn_", make_descriptor(t_CholeskyDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposer::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposer::wrap_Object(CholeskyDecomposer(((t_CholeskyDecomposer *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        CholeskyDecomposer object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = CholeskyDecomposer(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadata::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadata::mids$ = NULL;
            bool AdditionalCovarianceMetadata::live$ = false;

            jclass AdditionalCovarianceMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDcpSensitivityVectorPosition_be783177b060994b] = env->getMethodID(cls, "getDcpSensitivityVectorPosition", "()[D");
                mids$[mid_getDcpSensitivityVectorVelocity_be783177b060994b] = env->getMethodID(cls, "getDcpSensitivityVectorVelocity", "()[D");
                mids$[mid_getDensityForecastUncertainty_9981f74b2d109da6] = env->getMethodID(cls, "getDensityForecastUncertainty", "()D");
                mids$[mid_getScreeningDataSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getScreeningDataSource", "()Ljava/lang/String;");
                mids$[mid_getcScaleFactor_9981f74b2d109da6] = env->getMethodID(cls, "getcScaleFactor", "()D");
                mids$[mid_getcScaleFactorMax_9981f74b2d109da6] = env->getMethodID(cls, "getcScaleFactorMax", "()D");
                mids$[mid_getcScaleFactorMin_9981f74b2d109da6] = env->getMethodID(cls, "getcScaleFactorMin", "()D");
                mids$[mid_setDcpSensitivityVectorPosition_a71c45509eaf92d1] = env->getMethodID(cls, "setDcpSensitivityVectorPosition", "([D)V");
                mids$[mid_setDcpSensitivityVectorVelocity_a71c45509eaf92d1] = env->getMethodID(cls, "setDcpSensitivityVectorVelocity", "([D)V");
                mids$[mid_setDensityForecastUncertainty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDensityForecastUncertainty", "(D)V");
                mids$[mid_setScreeningDataSource_105e1eadb709d9ac] = env->getMethodID(cls, "setScreeningDataSource", "(Ljava/lang/String;)V");
                mids$[mid_setcScaleFactor_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setcScaleFactor", "(D)V");
                mids$[mid_setcScaleFactorMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setcScaleFactorMax", "(D)V");
                mids$[mid_setcScaleFactorMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setcScaleFactorMin", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalCovarianceMetadata::AdditionalCovarianceMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorPosition() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorPosition_be783177b060994b]));
            }

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorVelocity() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorVelocity_be783177b060994b]));
            }

            jdouble AdditionalCovarianceMetadata::getDensityForecastUncertainty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDensityForecastUncertainty_9981f74b2d109da6]);
            }

            ::java::lang::String AdditionalCovarianceMetadata::getScreeningDataSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScreeningDataSource_d2c8eb4129821f0e]));
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactor_9981f74b2d109da6]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMax_9981f74b2d109da6]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMin_9981f74b2d109da6]);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorPosition(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorPosition_a71c45509eaf92d1], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorVelocity(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorVelocity_a71c45509eaf92d1], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDensityForecastUncertainty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDensityForecastUncertainty_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalCovarianceMetadata::setScreeningDataSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreeningDataSource_105e1eadb709d9ac], a0.this$);
            }

            void AdditionalCovarianceMetadata::setcScaleFactor(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactor_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMax_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMin_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalCovarianceMetadata::validate(jdouble a0) const
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
            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactor),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMax),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMin),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorPosition),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorVelocity),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, densityForecastUncertainty),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, screeningDataSource),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadata__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorPosition, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorVelocity, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDensityForecastUncertainty, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getScreeningDataSource, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactor, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorPosition, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorVelocity, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDensityForecastUncertainty, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setScreeningDataSource, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactor, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMax, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMin, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadata)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadata__methods_ },
              { Py_tp_init, (void *) t_AdditionalCovarianceMetadata_init_ },
              { Py_tp_getset, t_AdditionalCovarianceMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadata, t_AdditionalCovarianceMetadata, AdditionalCovarianceMetadata);

            void t_AdditionalCovarianceMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadata), &PY_TYPE_DEF(AdditionalCovarianceMetadata), module, "AdditionalCovarianceMetadata", 0);
            }

            void t_AdditionalCovarianceMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "class_", make_descriptor(AdditionalCovarianceMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadata::wrap_Object(AdditionalCovarianceMetadata(((t_AdditionalCovarianceMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdditionalCovarianceMetadata object((jobject) NULL);

              INT_CALL(object = AdditionalCovarianceMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorPosition());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorVelocity());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreeningDataSource());
              return j2p(result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorPosition", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorVelocity(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorVelocity", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDensityForecastUncertainty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDensityForecastUncertainty", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setScreeningDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreeningDataSource", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactor", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalCovarianceMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactor", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorPosition());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorPosition", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorVelocity());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorVelocity(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorVelocity", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDensityForecastUncertainty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "densityForecastUncertainty", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreeningDataSource());
              return j2p(value);
            }
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setScreeningDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screeningDataSource", arg);
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
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereKlobucharMessage::class$ = NULL;
          jmethodID *IonosphereKlobucharMessage::mids$ = NULL;
          bool IonosphereKlobucharMessage::live$ = false;
          JArray< ::org::orekit::utils::units::Unit > *IonosphereKlobucharMessage::S_PER_SC_N = NULL;

          jclass IonosphereKlobucharMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereKlobucharMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_be783177b060994b] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_be783177b060994b] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getRegionCode_1499ec5c6fba100b] = env->getMethodID(cls, "getRegionCode", "()Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_setAlphaI_4320462275d66e78] = env->getMethodID(cls, "setAlphaI", "(ID)V");
              mids$[mid_setBetaI_4320462275d66e78] = env->getMethodID(cls, "setBetaI", "(ID)V");
              mids$[mid_setRegionCode_a8f93a593cb0094f] = env->getMethodID(cls, "setRegionCode", "(Lorg/orekit/files/rinex/navigation/RegionCode;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              S_PER_SC_N = new JArray< ::org::orekit::utils::units::Unit >(env->getStaticObjectField(cls, "S_PER_SC_N", "[Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereKlobucharMessage::IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereKlobucharMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_be783177b060994b]));
          }

          JArray< jdouble > IonosphereKlobucharMessage::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_be783177b060994b]));
          }

          ::org::orekit::files::rinex::navigation::RegionCode IonosphereKlobucharMessage::getRegionCode() const
          {
            return ::org::orekit::files::rinex::navigation::RegionCode(env->callObjectMethod(this$, mids$[mid_getRegionCode_1499ec5c6fba100b]));
          }

          void IonosphereKlobucharMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_4320462275d66e78], a0, a1);
          }

          void IonosphereKlobucharMessage::setBetaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setBetaI_4320462275d66e78], a0, a1);
          }

          void IonosphereKlobucharMessage::setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRegionCode_a8f93a593cb0094f], a0.this$);
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
          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data);
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereKlobucharMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, alpha),
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, beta),
            DECLARE_GETSET_FIELD(t_IonosphereKlobucharMessage, regionCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereKlobucharMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereKlobucharMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getRegionCode, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setAlphaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setBetaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setRegionCode, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereKlobucharMessage)[] = {
            { Py_tp_methods, t_IonosphereKlobucharMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereKlobucharMessage_init_ },
            { Py_tp_getset, t_IonosphereKlobucharMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereKlobucharMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereKlobucharMessage, t_IonosphereKlobucharMessage, IonosphereKlobucharMessage);

          void t_IonosphereKlobucharMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereKlobucharMessage), &PY_TYPE_DEF(IonosphereKlobucharMessage), module, "IonosphereKlobucharMessage", 0);
          }

          void t_IonosphereKlobucharMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "class_", make_descriptor(IonosphereKlobucharMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "wrapfn_", make_descriptor(t_IonosphereKlobucharMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereKlobucharMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "S_PER_SC_N", make_descriptor(JArray<jobject>(IonosphereKlobucharMessage::S_PER_SC_N->this$).wrap(::org::orekit::utils::units::t_Unit::wrap_jobject)));
          }

          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereKlobucharMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereKlobucharMessage::wrap_Object(IonosphereKlobucharMessage(((t_IonosphereKlobucharMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereKlobucharMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereKlobucharMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereKlobucharMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self)
          {
            ::org::orekit::files::rinex::navigation::RegionCode result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(result);
          }

          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setBetaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBetaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::RegionCode a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_RegionCode::parameters_))
            {
              OBJ_CALL(self->object.setRegionCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRegionCode", arg);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(value);
          }
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &value))
              {
                INT_CALL(self->object.setRegionCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "regionCode", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *FieldDSSTThirdBodyDynamicContext::mids$ = NULL;
            bool FieldDSSTThirdBodyDynamicContext::live$ = false;

            jclass FieldDSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5c99a6a21acfe5d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha_08d37e3f77b7239d] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBB_08d37e3f77b7239d] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBBB_08d37e3f77b7239d] = env->getMethodID(cls, "getBBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_08d37e3f77b7239d] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_08d37e3f77b7239d] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_08d37e3f77b7239d] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getGamma_08d37e3f77b7239d] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHXXX_08d37e3f77b7239d] = env->getMethodID(cls, "getHXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKXXX_08d37e3f77b7239d] = env->getMethodID(cls, "getKXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_08d37e3f77b7239d] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_08d37e3f77b7239d] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoR3_08d37e3f77b7239d] = env->getMethodID(cls, "getMuoR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_08d37e3f77b7239d] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getR3_08d37e3f77b7239d] = env->getMethodID(cls, "getR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_08d37e3f77b7239d] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_08d37e3f77b7239d] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getb_08d37e3f77b7239d] = env->getMethodID(cls, "getb", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTThirdBodyDynamicContext::FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_5c99a6a21acfe5d5, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBBB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getHXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHXXX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getKXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKXXX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoR3_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getR3_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getb() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getb_08d37e3f77b7239d]));
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
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args);
            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_FieldDSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_FieldDSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_FieldDSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTThirdBodyDynamicContext, t_FieldDSSTThirdBodyDynamicContext, FieldDSSTThirdBodyDynamicContext);
            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_Object(const FieldDSSTThirdBodyDynamicContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTThirdBodyDynamicContext), &PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext), module, "FieldDSSTThirdBodyDynamicContext", 0);
            }

            void t_FieldDSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "class_", make_descriptor(FieldDSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_FieldDSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTThirdBodyDynamicContext::wrap_Object(FieldDSSTThirdBodyDynamicContext(((t_FieldDSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldDSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getb());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getb());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
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
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *StepFunction::class$ = NULL;
        jmethodID *StepFunction::mids$ = NULL;
        bool StepFunction::live$ = false;

        jclass StepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/StepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepFunction::StepFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

        jdouble StepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
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
        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg);

        static PyMethodDef t_StepFunction__methods_[] = {
          DECLARE_METHOD(t_StepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepFunction)[] = {
          { Py_tp_methods, t_StepFunction__methods_ },
          { Py_tp_init, (void *) t_StepFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepFunction, t_StepFunction, StepFunction);

        void t_StepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(StepFunction), &PY_TYPE_DEF(StepFunction), module, "StepFunction", 0);
        }

        void t_StepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "class_", make_descriptor(StepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "wrapfn_", make_descriptor(t_StepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepFunction::initializeClass, 1)))
            return NULL;
          return t_StepFunction::wrap_Object(StepFunction(((t_StepFunction *) arg)->object.this$));
        }
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          StepFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = StepFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GatheringSubscriber::class$ = NULL;
          jmethodID *GatheringSubscriber::mids$ = NULL;
          bool GatheringSubscriber::live$ = false;

          jclass GatheringSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GatheringSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getGeneratedMeasurements_815c7115fae241c1] = env->getMethodID(cls, "getGeneratedMeasurements", "()Ljava/util/SortedSet;");
              mids$[mid_handleGeneratedMeasurement_ccec3dc40c67aef1] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GatheringSubscriber::GatheringSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::SortedSet GatheringSubscriber::getGeneratedMeasurements() const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getGeneratedMeasurements_815c7115fae241c1]));
          }

          void GatheringSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_ccec3dc40c67aef1], a0.this$);
          }

          void GatheringSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
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
          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self);
          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg);
          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args);
          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data);
          static PyGetSetDef t_GatheringSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_GatheringSubscriber, generatedMeasurements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GatheringSubscriber__methods_[] = {
            DECLARE_METHOD(t_GatheringSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, getGeneratedMeasurements, METH_NOARGS),
            DECLARE_METHOD(t_GatheringSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GatheringSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GatheringSubscriber)[] = {
            { Py_tp_methods, t_GatheringSubscriber__methods_ },
            { Py_tp_init, (void *) t_GatheringSubscriber_init_ },
            { Py_tp_getset, t_GatheringSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GatheringSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GatheringSubscriber, t_GatheringSubscriber, GatheringSubscriber);

          void t_GatheringSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GatheringSubscriber), &PY_TYPE_DEF(GatheringSubscriber), module, "GatheringSubscriber", 0);
          }

          void t_GatheringSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "class_", make_descriptor(GatheringSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "wrapfn_", make_descriptor(t_GatheringSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GatheringSubscriber::initializeClass, 1)))
              return NULL;
            return t_GatheringSubscriber::wrap_Object(GatheringSubscriber(((t_GatheringSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GatheringSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds)
          {
            GatheringSubscriber object((jobject) NULL);

            INT_CALL(object = GatheringSubscriber());
            self->object = object;

            return 0;
          }

          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self)
          {
            ::java::util::SortedSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(result);
          }

          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data)
          {
            ::java::util::SortedSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(value);
          }
        }
      }
    }
  }
}
