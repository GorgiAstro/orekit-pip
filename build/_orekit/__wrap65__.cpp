#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
            mids$[mid_init$_d41b45a1d6944ab5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getFixedStepHandler_550251c6089b1a99] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_e6d4d3215c30992a] = env->getMethodID(cls, "getFixedTimeStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_handleStep_9eedcf3b856fcc75] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_requiresDenseOutput_e470b6d9e0d979db] = env->getMethodID(cls, "requiresDenseOutput", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOrekitStepNormalizer::FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d41b45a1d6944ab5, a0.this$, a1.this$)) {}

        void FieldOrekitStepNormalizer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_52154b94d63e10ed], a0.this$);
        }

        ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler FieldOrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_550251c6089b1a99]));
        }

        ::org::hipparchus::CalculusFieldElement FieldOrekitStepNormalizer::getFixedTimeStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFixedTimeStep_e6d4d3215c30992a]));
        }

        void FieldOrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9eedcf3b856fcc75], a0.this$);
        }

        void FieldOrekitStepNormalizer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        jboolean FieldOrekitStepNormalizer::requiresDenseOutput() const
        {
          return env->callBooleanMethod(this$, mids$[mid_requiresDenseOutput_e470b6d9e0d979db]);
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
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AltCovarianceType::class$ = NULL;
            jmethodID *AltCovarianceType::mids$ = NULL;
            bool AltCovarianceType::live$ = false;
            AltCovarianceType *AltCovarianceType::CSIG3EIGVEC3 = NULL;
            AltCovarianceType *AltCovarianceType::XYZ = NULL;

            jclass AltCovarianceType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AltCovarianceType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_99426c53cc012d11] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_values_f00fd7821527bc05] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CSIG3EIGVEC3 = new AltCovarianceType(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                XYZ = new AltCovarianceType(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AltCovarianceType AltCovarianceType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AltCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_99426c53cc012d11], a0.this$));
            }

            JArray< AltCovarianceType > AltCovarianceType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AltCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_f00fd7821527bc05]));
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
            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args);
            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AltCovarianceType_values(PyTypeObject *type);
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data);
            static PyGetSetDef t_AltCovarianceType__fields_[] = {
              DECLARE_GET_FIELD(t_AltCovarianceType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AltCovarianceType__methods_[] = {
              DECLARE_METHOD(t_AltCovarianceType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AltCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AltCovarianceType)[] = {
              { Py_tp_methods, t_AltCovarianceType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AltCovarianceType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AltCovarianceType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AltCovarianceType, t_AltCovarianceType, AltCovarianceType);
            PyObject *t_AltCovarianceType::wrap_Object(const AltCovarianceType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AltCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AltCovarianceType::install(PyObject *module)
            {
              installType(&PY_TYPE(AltCovarianceType), &PY_TYPE_DEF(AltCovarianceType), module, "AltCovarianceType", 0);
            }

            void t_AltCovarianceType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "class_", make_descriptor(AltCovarianceType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "wrapfn_", make_descriptor(t_AltCovarianceType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AltCovarianceType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "CSIG3EIGVEC3", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::CSIG3EIGVEC3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "XYZ", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::XYZ)));
            }

            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AltCovarianceType::initializeClass, 1)))
                return NULL;
              return t_AltCovarianceType::wrap_Object(AltCovarianceType(((t_AltCovarianceType *) arg)->object.this$));
            }
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AltCovarianceType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AltCovarianceType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::valueOf(a0));
                return t_AltCovarianceType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AltCovarianceType_values(PyTypeObject *type)
            {
              JArray< AltCovarianceType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::values());
              return JArray<jobject>(result.this$).wrap(t_AltCovarianceType::wrap_jobject);
            }
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data)
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
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PythonAccelerationModel::class$ = NULL;
        jmethodID *PythonAccelerationModel::mids$ = NULL;
        bool PythonAccelerationModel::live$ = false;

        jclass PythonAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PythonAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_signedAmplitude_4368a5d862927c08] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
            mids$[mid_signedAmplitude_79518d097c897d26] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAccelerationModel::PythonAccelerationModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAccelerationModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAccelerationModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAccelerationModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace empirical {
        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self);
        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args);
        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data);
        static PyGetSetDef t_PythonAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAccelerationModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PythonAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAccelerationModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAccelerationModel)[] = {
          { Py_tp_methods, t_PythonAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PythonAccelerationModel_init_ },
          { Py_tp_getset, t_PythonAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAccelerationModel, t_PythonAccelerationModel, PythonAccelerationModel);

        void t_PythonAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAccelerationModel), &PY_TYPE_DEF(PythonAccelerationModel), module, "PythonAccelerationModel", 1);
        }

        void t_PythonAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "class_", make_descriptor(PythonAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "wrapfn_", make_descriptor(t_PythonAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAccelerationModel::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAccelerationModel_getParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonAccelerationModel_pythonDecRef1 },
            { "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAccelerationModel_signedAmplitude2 },
            { "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonAccelerationModel_signedAmplitude3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PythonAccelerationModel::wrap_Object(PythonAccelerationModel(((t_PythonAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          PythonAccelerationModel object((jobject) NULL);

          INT_CALL(object = PythonAccelerationModel());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("signedAmplitude", result);
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

        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("signedAmplitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data)
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
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonLibrationOrbit::class$ = NULL;
      jmethodID *PythonLibrationOrbit::mids$ = NULL;
      bool PythonLibrationOrbit::live$ = false;

      jclass PythonLibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonLibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_76483bf6754c478b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_b7336fc2717b0a2c] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLibrationOrbit::PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_76483bf6754c478b, a0.this$, a1.this$, a2)) {}

      void PythonLibrationOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonLibrationOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonLibrationOrbit::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self);
      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args);
      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data);
      static PyGetSetDef t_PythonLibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLibrationOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonLibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLibrationOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLibrationOrbit)[] = {
        { Py_tp_methods, t_PythonLibrationOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonLibrationOrbit_init_ },
        { Py_tp_getset, t_PythonLibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLibrationOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(PythonLibrationOrbit, t_PythonLibrationOrbit, PythonLibrationOrbit);

      void t_PythonLibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLibrationOrbit), &PY_TYPE_DEF(PythonLibrationOrbit), module, "PythonLibrationOrbit", 1);
      }

      void t_PythonLibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "class_", make_descriptor(PythonLibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "wrapfn_", make_descriptor(t_PythonLibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLibrationOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonLibrationOrbit_applyCorrectionOnPV0 },
          { "pythonDecRef", "()V", (void *) t_PythonLibrationOrbit_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonLibrationOrbit::wrap_Object(PythonLibrationOrbit(((t_PythonLibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
        jdouble a2;
        PythonLibrationOrbit object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonLibrationOrbit(a0, a1, a2));
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

      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args)
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

      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::orbits::t_CR3BPDifferentialCorrection::wrap_Object(::org::orekit::orbits::CR3BPDifferentialCorrection(a0));
        PyObject *result = PyObject_CallMethod(obj, "applyCorrectionOnPV", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
        {
          throwTypeError("applyCorrectionOnPV", result);
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

      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisMessage::class$ = NULL;
              jmethodID *RtcmEphemerisMessage::mids$ = NULL;
              bool RtcmEphemerisMessage::live$ = false;

              jclass RtcmEphemerisMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_79d2efd84f17a200] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;)V");
                  mids$[mid_getEphemerisData_bf04007dc728a360] = env->getMethodID(cls, "getEphemerisData", "()Lorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisMessage::RtcmEphemerisMessage(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData & a1) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_79d2efd84f17a200, a0, a1.this$)) {}

              ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData RtcmEphemerisMessage::getEphemerisData() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->callObjectMethod(this$, mids$[mid_getEphemerisData_bf04007dc728a360]));
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
              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args);
              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self);
              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data);
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data);
              static PyGetSetDef t_RtcmEphemerisMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, ephemerisData),
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, getEphemerisData, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisMessage)[] = {
                { Py_tp_methods, t_RtcmEphemerisMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisMessage_init_ },
                { Py_tp_getset, t_RtcmEphemerisMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisMessage, t_RtcmEphemerisMessage, RtcmEphemerisMessage);
              PyObject *t_RtcmEphemerisMessage::wrap_Object(const RtcmEphemerisMessage& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RtcmEphemerisMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RtcmEphemerisMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisMessage), &PY_TYPE_DEF(RtcmEphemerisMessage), module, "RtcmEphemerisMessage", 0);
              }

              void t_RtcmEphemerisMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "class_", make_descriptor(RtcmEphemerisMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "wrapfn_", make_descriptor(t_RtcmEphemerisMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisMessage::wrap_Object(RtcmEphemerisMessage(((t_RtcmEphemerisMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData a1((jobject) NULL);
                RtcmEphemerisMessage object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RtcmEphemerisMessage(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemerisData());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(result);
              }
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemerisData());
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(value);
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
#include "org/orekit/errors/OrekitParseException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitParseException::class$ = NULL;
      jmethodID *OrekitParseException::mids$ = NULL;
      bool OrekitParseException::live$ = false;

      jclass OrekitParseException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitParseException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitParseException::OrekitParseException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::text::ParseException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitParseException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitParseException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitParseException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitParseException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitParseException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data);
      static PyGetSetDef t_OrekitParseException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitParseException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitParseException, message),
        DECLARE_GET_FIELD(t_OrekitParseException, parts),
        DECLARE_GET_FIELD(t_OrekitParseException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitParseException__methods_[] = {
        DECLARE_METHOD(t_OrekitParseException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitParseException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitParseException)[] = {
        { Py_tp_methods, t_OrekitParseException__methods_ },
        { Py_tp_init, (void *) t_OrekitParseException_init_ },
        { Py_tp_getset, t_OrekitParseException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitParseException)[] = {
        &PY_TYPE_DEF(::java::text::ParseException),
        NULL
      };

      DEFINE_TYPE(OrekitParseException, t_OrekitParseException, OrekitParseException);

      void t_OrekitParseException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitParseException), &PY_TYPE_DEF(OrekitParseException), module, "OrekitParseException", 0);
      }

      void t_OrekitParseException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "class_", make_descriptor(OrekitParseException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "wrapfn_", make_descriptor(t_OrekitParseException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitParseException::initializeClass, 1)))
          return NULL;
        return t_OrekitParseException::wrap_Object(OrekitParseException(((t_OrekitParseException *) arg)->object.this$));
      }
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitParseException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitParseException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitParseException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory::class$ = NULL;
        jmethodID *DSFactory::mids$ = NULL;
        bool DSFactory::live$ = false;

        jclass DSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_build_a99895f2c956a8f6] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_constant_c8b983f259312c1e] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getCompiler_b0ae8cc686efdcbe] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_82fd98fd27d2098b] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/DSFactory$DSField;");
            mids$[mid_variable_d59d7a8c1b43c3a7] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSFactory::DSFactory(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_a99895f2c956a8f6], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_c8b983f259312c1e], a0));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler DSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_b0ae8cc686efdcbe]));
        }

        ::org::hipparchus::analysis::differentiation::DSFactory$DSField DSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory$DSField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_82fd98fd27d2098b]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_d59d7a8c1b43c3a7], a0, a1));
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
        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self);
        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self);
        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args);
        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data);
        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data);
        static PyGetSetDef t_DSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory, compiler),
          DECLARE_GET_FIELD(t_DSFactory, derivativeField),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory__methods_[] = {
          DECLARE_METHOD(t_DSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, build, METH_O),
          DECLARE_METHOD(t_DSFactory, constant, METH_O),
          DECLARE_METHOD(t_DSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory)[] = {
          { Py_tp_methods, t_DSFactory__methods_ },
          { Py_tp_init, (void *) t_DSFactory_init_ },
          { Py_tp_getset, t_DSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory, t_DSFactory, DSFactory);

        void t_DSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory), &PY_TYPE_DEF(DSFactory), module, "DSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "DSField", make_descriptor(&PY_TYPE_DEF(DSFactory$DSField)));
        }

        void t_DSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "class_", make_descriptor(DSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "wrapfn_", make_descriptor(t_DSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory::initializeClass, 1)))
            return NULL;
          return t_DSFactory::wrap_Object(DSFactory(((t_DSFactory *) arg)->object.this$));
        }
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          DSFactory object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = DSFactory(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.build(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(result);
        }

        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.variable(a0, a1));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }

        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Euclidean2D::class$ = NULL;
          jmethodID *Euclidean2D::mids$ = NULL;
          bool Euclidean2D::live$ = false;

          jclass Euclidean2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Euclidean2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_715413d689596e63] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");
              mids$[mid_getSubSpace_14585c1b88a8af3b] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          Euclidean2D Euclidean2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_715413d689596e63]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Euclidean1D Euclidean2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Euclidean1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_14585c1b88a8af3b]));
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
          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data);
          static PyGetSetDef t_Euclidean2D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean2D, dimension),
            DECLARE_GET_FIELD(t_Euclidean2D, instance),
            DECLARE_GET_FIELD(t_Euclidean2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean2D__methods_[] = {
            DECLARE_METHOD(t_Euclidean2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean2D)[] = {
            { Py_tp_methods, t_Euclidean2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean2D, t_Euclidean2D, Euclidean2D);

          void t_Euclidean2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean2D), &PY_TYPE_DEF(Euclidean2D), module, "Euclidean2D", 0);
          }

          void t_Euclidean2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "class_", make_descriptor(Euclidean2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "wrapfn_", make_descriptor(t_Euclidean2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean2D::initializeClass, 1)))
              return NULL;
            return t_Euclidean2D::wrap_Object(Euclidean2D(((t_Euclidean2D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type)
          {
            Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Euclidean2D::getInstance());
            return t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data)
          {
            Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean2D::wrap_Object(value);
          }

          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *EnumeratedIntegerDistribution::class$ = NULL;
        jmethodID *EnumeratedIntegerDistribution::mids$ = NULL;
        bool EnumeratedIntegerDistribution::live$ = false;

        jclass EnumeratedIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
            mids$[mid_init$_cb8d8fd22da64a82] = env->getMethodID(cls, "<init>", "([I[D)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_a6156df500549a58] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_cb8d8fd22da64a82, a0.this$, a1.this$)) {}

        jdouble EnumeratedIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        ::java::util::List EnumeratedIntegerDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_a6156df500549a58]));
        }

        jint EnumeratedIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint EnumeratedIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean EnumeratedIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble EnumeratedIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedIntegerDistribution)[] = {
          { Py_tp_methods, t_EnumeratedIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedIntegerDistribution_init_ },
          { Py_tp_getset, t_EnumeratedIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedIntegerDistribution, t_EnumeratedIntegerDistribution, EnumeratedIntegerDistribution);

        void t_EnumeratedIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedIntegerDistribution), &PY_TYPE_DEF(EnumeratedIntegerDistribution), module, "EnumeratedIntegerDistribution", 0);
        }

        void t_EnumeratedIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "class_", make_descriptor(EnumeratedIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "wrapfn_", make_descriptor(t_EnumeratedIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedIntegerDistribution::wrap_Object(EnumeratedIntegerDistribution(((t_EnumeratedIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jint > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0, a1));
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

        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data)
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
#include "org/hipparchus/distribution/continuous/LogNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogNormalDistribution::class$ = NULL;
        jmethodID *LogNormalDistribution::mids$ = NULL;
        bool LogNormalDistribution::live$ = false;

        jclass LogNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_456d9a2f64d6b28d] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getShape_456d9a2f64d6b28d] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_824133ce4aec3505] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogNormalDistribution::LogNormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble LogNormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble LogNormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble LogNormalDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_456d9a2f64d6b28d]);
        }

        jdouble LogNormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble LogNormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble LogNormalDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_456d9a2f64d6b28d]);
        }

        jdouble LogNormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble LogNormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean LogNormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble LogNormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
        }

        jdouble LogNormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_824133ce4aec3505], a0, a1);
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
      namespace continuous {
        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data);
        static PyGetSetDef t_LogNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogNormalDistribution, location),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogNormalDistribution, shape),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_LogNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogNormalDistribution)[] = {
          { Py_tp_methods, t_LogNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_LogNormalDistribution_init_ },
          { Py_tp_getset, t_LogNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogNormalDistribution, t_LogNormalDistribution, LogNormalDistribution);

        void t_LogNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogNormalDistribution), &PY_TYPE_DEF(LogNormalDistribution), module, "LogNormalDistribution", 0);
        }

        void t_LogNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "class_", make_descriptor(LogNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "wrapfn_", make_descriptor(t_LogNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_LogNormalDistribution::wrap_Object(LogNormalDistribution(((t_LogNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LogNormalDistribution object((jobject) NULL);

              INT_CALL(object = LogNormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1, a2));
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

        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *DateBasedManeuverTriggers::class$ = NULL;
          jmethodID *DateBasedManeuverTriggers::mids$ = NULL;
          bool DateBasedManeuverTriggers::live$ = false;
          ::java::lang::String *DateBasedManeuverTriggers::DEFAULT_NAME = NULL;

          jclass DateBasedManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_076f09dda44638d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_init$_44d04d6a1ac9a60f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
              mids$[mid_getEndDate_aaa854c403487cf3] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStartDate_aaa854c403487cf3] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_convertIntervalDetector_cd5483ed245bd65f] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_076f09dda44638d8, a0.this$, a1)) {}

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_44d04d6a1ac9a60f, a0.this$, a1.this$, a2)) {}

          jdouble DateBasedManeuverTriggers::getDuration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_aaa854c403487cf3]));
          }

          ::java::lang::String DateBasedManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::java::util::List DateBasedManeuverTriggers::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_aaa854c403487cf3]));
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
          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args);
          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data);
          static PyGetSetDef t_DateBasedManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, duration),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, endDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, name),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parametersDrivers),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, startDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DateBasedManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_DateBasedManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, of_, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getDuration, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getName, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DateBasedManeuverTriggers)[] = {
            { Py_tp_methods, t_DateBasedManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_DateBasedManeuverTriggers_init_ },
            { Py_tp_getset, t_DateBasedManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DateBasedManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(DateBasedManeuverTriggers, t_DateBasedManeuverTriggers, DateBasedManeuverTriggers);
          PyObject *t_DateBasedManeuverTriggers::wrap_Object(const DateBasedManeuverTriggers& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DateBasedManeuverTriggers::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DateBasedManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(DateBasedManeuverTriggers), &PY_TYPE_DEF(DateBasedManeuverTriggers), module, "DateBasedManeuverTriggers", 0);
          }

          void t_DateBasedManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "class_", make_descriptor(DateBasedManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "wrapfn_", make_descriptor(t_DateBasedManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            env->getClass(DateBasedManeuverTriggers::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "DEFAULT_NAME", make_descriptor(j2p(*DateBasedManeuverTriggers::DEFAULT_NAME)));
          }

          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DateBasedManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_DateBasedManeuverTriggers::wrap_Object(DateBasedManeuverTriggers(((t_DateBasedManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DateBasedManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble a1;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
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

          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDuration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getName", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDuration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator$Parametric::class$ = NULL;
        jmethodID *HarmonicOscillator$Parametric::mids$ = NULL;
        bool HarmonicOscillator$Parametric::live$ = false;

        jclass HarmonicOscillator$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator$Parametric::HarmonicOscillator$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > HarmonicOscillator$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble HarmonicOscillator$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args);
        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator$Parametric__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator$Parametric)[] = {
          { Py_tp_methods, t_HarmonicOscillator$Parametric__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator$Parametric, t_HarmonicOscillator$Parametric, HarmonicOscillator$Parametric);

        void t_HarmonicOscillator$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator$Parametric), &PY_TYPE_DEF(HarmonicOscillator$Parametric), module, "HarmonicOscillator$Parametric", 0);
        }

        void t_HarmonicOscillator$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "class_", make_descriptor(HarmonicOscillator$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "wrapfn_", make_descriptor(t_HarmonicOscillator$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator$Parametric::wrap_Object(HarmonicOscillator$Parametric(((t_HarmonicOscillator$Parametric *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds)
        {
          HarmonicOscillator$Parametric object((jobject) NULL);

          INT_CALL(object = HarmonicOscillator$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersKey::class$ = NULL;
            jmethodID *SpacecraftParametersKey::mids$ = NULL;
            bool SpacecraftParametersKey::live$ = false;
            SpacecraftParametersKey *SpacecraftParametersKey::COMMENT = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_COEFF = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::MASS = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_COEFF = NULL;

            jclass SpacecraftParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_2af9cb2c7a28b83c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)Z");
                mids$[mid_valueOf_69f702e734d2f199] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");
                mids$[mid_values_00864d635520c9f3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SpacecraftParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                MASS = new SpacecraftParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SpacecraftParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_2af9cb2c7a28b83c], a0.this$, a1.this$, a2.this$);
            }

            SpacecraftParametersKey SpacecraftParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SpacecraftParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_69f702e734d2f199], a0.this$));
            }

            JArray< SpacecraftParametersKey > SpacecraftParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SpacecraftParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_00864d635520c9f3]));
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
            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type);
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data);
            static PyGetSetDef t_SpacecraftParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_SpacecraftParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParametersKey__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersKey)[] = {
              { Py_tp_methods, t_SpacecraftParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SpacecraftParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersKey, t_SpacecraftParametersKey, SpacecraftParametersKey);
            PyObject *t_SpacecraftParametersKey::wrap_Object(const SpacecraftParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SpacecraftParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SpacecraftParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersKey), &PY_TYPE_DEF(SpacecraftParametersKey), module, "SpacecraftParametersKey", 0);
            }

            void t_SpacecraftParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "class_", make_descriptor(SpacecraftParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "wrapfn_", make_descriptor(t_SpacecraftParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SpacecraftParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "COMMENT", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_COEFF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "MASS", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_COEFF)));
            }

            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersKey::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersKey::wrap_Object(SpacecraftParametersKey(((t_SpacecraftParametersKey *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SpacecraftParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::valueOf(a0));
                return t_SpacecraftParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type)
            {
              JArray< SpacecraftParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_SpacecraftParametersKey::wrap_jobject);
            }
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *MessageObserver::class$ = NULL;
          jmethodID *MessageObserver::mids$ = NULL;
          bool MessageObserver::live$ = false;

          jclass MessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/MessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_messageAvailable_221655a0ec01abd2] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MessageObserver::messageAvailable(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::messages::ParsedMessage & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_messageAvailable_221655a0ec01abd2], a0.this$, a1.this$);
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
        namespace ntrip {
          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args);

          static PyMethodDef t_MessageObserver__methods_[] = {
            DECLARE_METHOD(t_MessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, messageAvailable, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageObserver)[] = {
            { Py_tp_methods, t_MessageObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageObserver, t_MessageObserver, MessageObserver);

          void t_MessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageObserver), &PY_TYPE_DEF(MessageObserver), module, "MessageObserver", 0);
          }

          void t_MessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "class_", make_descriptor(MessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "wrapfn_", make_descriptor(t_MessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageObserver::initializeClass, 1)))
              return NULL;
            return t_MessageObserver::wrap_Object(MessageObserver(((t_MessageObserver *) arg)->object.this$));
          }
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::messages::ParsedMessage a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.messageAvailable(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "messageAvailable", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldBoundedPropagator::class$ = NULL;
      jmethodID *FieldBoundedPropagator::mids$ = NULL;
      bool FieldBoundedPropagator::live$ = false;

      jclass FieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_09b0a926600dfc14] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_09b0a926600dfc14] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_09b0a926600dfc14]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_09b0a926600dfc14]));
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
      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args);
      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_FieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, minDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBoundedPropagator)[] = {
        { Py_tp_methods, t_FieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldPropagator),
        NULL
      };

      DEFINE_TYPE(FieldBoundedPropagator, t_FieldBoundedPropagator, FieldBoundedPropagator);
      PyObject *t_FieldBoundedPropagator::wrap_Object(const FieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBoundedPropagator), &PY_TYPE_DEF(FieldBoundedPropagator), module, "FieldBoundedPropagator", 0);
      }

      void t_FieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "class_", make_descriptor(FieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "wrapfn_", make_descriptor(t_FieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldBoundedPropagator::wrap_Object(FieldBoundedPropagator(((t_FieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Character.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Character::class$ = NULL;
    jmethodID *Character::mids$ = NULL;
    bool Character::live$ = false;
    jint Character::BYTES = (jint) 0;
    jbyte Character::COMBINING_SPACING_MARK = (jbyte) 0;
    jbyte Character::CONNECTOR_PUNCTUATION = (jbyte) 0;
    jbyte Character::CONTROL = (jbyte) 0;
    jbyte Character::CURRENCY_SYMBOL = (jbyte) 0;
    jbyte Character::DASH_PUNCTUATION = (jbyte) 0;
    jbyte Character::DECIMAL_DIGIT_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_ARABIC_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_NONSPACING_MARK = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_UNDEFINED = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_WHITESPACE = (jbyte) 0;
    jbyte Character::ENCLOSING_MARK = (jbyte) 0;
    jbyte Character::END_PUNCTUATION = (jbyte) 0;
    jbyte Character::FINAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::FORMAT = (jbyte) 0;
    jbyte Character::INITIAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::LETTER_NUMBER = (jbyte) 0;
    jbyte Character::LINE_SEPARATOR = (jbyte) 0;
    jbyte Character::LOWERCASE_LETTER = (jbyte) 0;
    jbyte Character::MATH_SYMBOL = (jbyte) 0;
    jint Character::MAX_CODE_POINT = (jint) 0;
    jchar Character::MAX_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MAX_LOW_SURROGATE = (jchar) 0;
    jint Character::MAX_RADIX = (jint) 0;
    jchar Character::MAX_SURROGATE = (jchar) 0;
    jchar Character::MAX_VALUE = (jchar) 0;
    jint Character::MIN_CODE_POINT = (jint) 0;
    jchar Character::MIN_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MIN_LOW_SURROGATE = (jchar) 0;
    jint Character::MIN_RADIX = (jint) 0;
    jint Character::MIN_SUPPLEMENTARY_CODE_POINT = (jint) 0;
    jchar Character::MIN_SURROGATE = (jchar) 0;
    jchar Character::MIN_VALUE = (jchar) 0;
    jbyte Character::MODIFIER_LETTER = (jbyte) 0;
    jbyte Character::MODIFIER_SYMBOL = (jbyte) 0;
    jbyte Character::NON_SPACING_MARK = (jbyte) 0;
    jbyte Character::OTHER_LETTER = (jbyte) 0;
    jbyte Character::OTHER_NUMBER = (jbyte) 0;
    jbyte Character::OTHER_PUNCTUATION = (jbyte) 0;
    jbyte Character::OTHER_SYMBOL = (jbyte) 0;
    jbyte Character::PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::PRIVATE_USE = (jbyte) 0;
    jint Character::SIZE = (jint) 0;
    jbyte Character::SPACE_SEPARATOR = (jbyte) 0;
    jbyte Character::START_PUNCTUATION = (jbyte) 0;
    jbyte Character::SURROGATE = (jbyte) 0;
    jbyte Character::TITLECASE_LETTER = (jbyte) 0;
    ::java::lang::Class *Character::TYPE = NULL;
    jbyte Character::UNASSIGNED = (jbyte) 0;
    jbyte Character::UPPERCASE_LETTER = (jbyte) 0;

    jclass Character::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Character");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_be0046d7f7239695] = env->getMethodID(cls, "<init>", "(C)V");
        mids$[mid_charCount_38565d58479aa24a] = env->getStaticMethodID(cls, "charCount", "(I)I");
        mids$[mid_charValue_29e026b9d068f1c7] = env->getMethodID(cls, "charValue", "()C");
        mids$[mid_codePointAt_3d8664f3fe7532d9] = env->getStaticMethodID(cls, "codePointAt", "([CI)I");
        mids$[mid_codePointAt_0bdb7007ef94b15e] = env->getStaticMethodID(cls, "codePointAt", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointAt_a7dcb595f3e6fbfc] = env->getStaticMethodID(cls, "codePointAt", "([CII)I");
        mids$[mid_codePointBefore_3d8664f3fe7532d9] = env->getStaticMethodID(cls, "codePointBefore", "([CI)I");
        mids$[mid_codePointBefore_0bdb7007ef94b15e] = env->getStaticMethodID(cls, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointBefore_a7dcb595f3e6fbfc] = env->getStaticMethodID(cls, "codePointBefore", "([CII)I");
        mids$[mid_codePointCount_a7dcb595f3e6fbfc] = env->getStaticMethodID(cls, "codePointCount", "([CII)I");
        mids$[mid_codePointCount_0b8a9d9908fcde8d] = env->getStaticMethodID(cls, "codePointCount", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_codePointOf_5d6fce34d596f8f0] = env->getStaticMethodID(cls, "codePointOf", "(Ljava/lang/String;)I");
        mids$[mid_compare_edc01deaecaf3b63] = env->getStaticMethodID(cls, "compare", "(CC)I");
        mids$[mid_compareTo_feaeef792645bb35] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Character;)I");
        mids$[mid_digit_c3e6094108d475ef] = env->getStaticMethodID(cls, "digit", "(CI)I");
        mids$[mid_digit_d9790ac9eecfe931] = env->getStaticMethodID(cls, "digit", "(II)I");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forDigit_5fbdcc3da1bdb333] = env->getStaticMethodID(cls, "forDigit", "(II)C");
        mids$[mid_getDirectionality_4e6484d999e31d98] = env->getStaticMethodID(cls, "getDirectionality", "(C)B");
        mids$[mid_getDirectionality_1f47c6a92c9478c9] = env->getStaticMethodID(cls, "getDirectionality", "(I)B");
        mids$[mid_getName_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "getName", "(I)Ljava/lang/String;");
        mids$[mid_getNumericValue_2681da20b1beaea7] = env->getStaticMethodID(cls, "getNumericValue", "(C)I");
        mids$[mid_getNumericValue_38565d58479aa24a] = env->getStaticMethodID(cls, "getNumericValue", "(I)I");
        mids$[mid_getType_2681da20b1beaea7] = env->getStaticMethodID(cls, "getType", "(C)I");
        mids$[mid_getType_38565d58479aa24a] = env->getStaticMethodID(cls, "getType", "(I)I");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_2681da20b1beaea7] = env->getStaticMethodID(cls, "hashCode", "(C)I");
        mids$[mid_highSurrogate_52047e692b58eb87] = env->getStaticMethodID(cls, "highSurrogate", "(I)C");
        mids$[mid_isAlphabetic_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isAlphabetic", "(I)Z");
        mids$[mid_isBmpCodePoint_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isBmpCodePoint", "(I)Z");
        mids$[mid_isDefined_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isDefined", "(C)Z");
        mids$[mid_isDefined_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isDefined", "(I)Z");
        mids$[mid_isDigit_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isDigit", "(C)Z");
        mids$[mid_isDigit_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isDigit", "(I)Z");
        mids$[mid_isHighSurrogate_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isHighSurrogate", "(C)Z");
        mids$[mid_isISOControl_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isISOControl", "(C)Z");
        mids$[mid_isISOControl_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isISOControl", "(I)Z");
        mids$[mid_isIdentifierIgnorable_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(C)Z");
        mids$[mid_isIdentifierIgnorable_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(I)Z");
        mids$[mid_isIdeographic_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isIdeographic", "(I)Z");
        mids$[mid_isJavaIdentifierPart_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(C)Z");
        mids$[mid_isJavaIdentifierPart_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(I)Z");
        mids$[mid_isJavaIdentifierStart_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(C)Z");
        mids$[mid_isJavaIdentifierStart_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(I)Z");
        mids$[mid_isJavaLetter_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isJavaLetter", "(C)Z");
        mids$[mid_isJavaLetterOrDigit_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isJavaLetterOrDigit", "(C)Z");
        mids$[mid_isLetter_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isLetter", "(C)Z");
        mids$[mid_isLetter_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isLetter", "(I)Z");
        mids$[mid_isLetterOrDigit_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isLetterOrDigit", "(C)Z");
        mids$[mid_isLetterOrDigit_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isLetterOrDigit", "(I)Z");
        mids$[mid_isLowSurrogate_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isLowSurrogate", "(C)Z");
        mids$[mid_isLowerCase_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isLowerCase", "(C)Z");
        mids$[mid_isLowerCase_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isLowerCase", "(I)Z");
        mids$[mid_isMirrored_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isMirrored", "(C)Z");
        mids$[mid_isMirrored_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isMirrored", "(I)Z");
        mids$[mid_isSpace_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isSpace", "(C)Z");
        mids$[mid_isSpaceChar_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isSpaceChar", "(C)Z");
        mids$[mid_isSpaceChar_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isSpaceChar", "(I)Z");
        mids$[mid_isSupplementaryCodePoint_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isSupplementaryCodePoint", "(I)Z");
        mids$[mid_isSurrogate_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isSurrogate", "(C)Z");
        mids$[mid_isSurrogatePair_02a07f55b7dbf98b] = env->getStaticMethodID(cls, "isSurrogatePair", "(CC)Z");
        mids$[mid_isTitleCase_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isTitleCase", "(C)Z");
        mids$[mid_isTitleCase_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isTitleCase", "(I)Z");
        mids$[mid_isUnicodeIdentifierPart_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(C)Z");
        mids$[mid_isUnicodeIdentifierPart_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(I)Z");
        mids$[mid_isUnicodeIdentifierStart_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(C)Z");
        mids$[mid_isUnicodeIdentifierStart_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(I)Z");
        mids$[mid_isUpperCase_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isUpperCase", "(C)Z");
        mids$[mid_isUpperCase_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isUpperCase", "(I)Z");
        mids$[mid_isValidCodePoint_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isValidCodePoint", "(I)Z");
        mids$[mid_isWhitespace_490c9f5ddce460a1] = env->getStaticMethodID(cls, "isWhitespace", "(C)Z");
        mids$[mid_isWhitespace_e95e4c7cd3dd17ff] = env->getStaticMethodID(cls, "isWhitespace", "(I)Z");
        mids$[mid_lowSurrogate_52047e692b58eb87] = env->getStaticMethodID(cls, "lowSurrogate", "(I)C");
        mids$[mid_offsetByCodePoints_0b8a9d9908fcde8d] = env->getStaticMethodID(cls, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_offsetByCodePoints_3eb6658f3c13cf78] = env->getStaticMethodID(cls, "offsetByCodePoints", "([CIIII)I");
        mids$[mid_reverseBytes_14a065e19b24d2b2] = env->getStaticMethodID(cls, "reverseBytes", "(C)C");
        mids$[mid_toChars_4f8b778f6b7240e5] = env->getStaticMethodID(cls, "toChars", "(I)[C");
        mids$[mid_toChars_ab656bff88aa3eb0] = env->getStaticMethodID(cls, "toChars", "(I[CI)I");
        mids$[mid_toCodePoint_edc01deaecaf3b63] = env->getStaticMethodID(cls, "toCodePoint", "(CC)I");
        mids$[mid_toLowerCase_14a065e19b24d2b2] = env->getStaticMethodID(cls, "toLowerCase", "(C)C");
        mids$[mid_toLowerCase_38565d58479aa24a] = env->getStaticMethodID(cls, "toLowerCase", "(I)I");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_1e1a62b6126a9504] = env->getStaticMethodID(cls, "toString", "(C)Ljava/lang/String;");
        mids$[mid_toString_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toTitleCase_14a065e19b24d2b2] = env->getStaticMethodID(cls, "toTitleCase", "(C)C");
        mids$[mid_toTitleCase_38565d58479aa24a] = env->getStaticMethodID(cls, "toTitleCase", "(I)I");
        mids$[mid_toUpperCase_14a065e19b24d2b2] = env->getStaticMethodID(cls, "toUpperCase", "(C)C");
        mids$[mid_toUpperCase_38565d58479aa24a] = env->getStaticMethodID(cls, "toUpperCase", "(I)I");
        mids$[mid_valueOf_f904144d696baa24] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/Character;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        COMBINING_SPACING_MARK = env->getStaticByteField(cls, "COMBINING_SPACING_MARK");
        CONNECTOR_PUNCTUATION = env->getStaticByteField(cls, "CONNECTOR_PUNCTUATION");
        CONTROL = env->getStaticByteField(cls, "CONTROL");
        CURRENCY_SYMBOL = env->getStaticByteField(cls, "CURRENCY_SYMBOL");
        DASH_PUNCTUATION = env->getStaticByteField(cls, "DASH_PUNCTUATION");
        DECIMAL_DIGIT_NUMBER = env->getStaticByteField(cls, "DECIMAL_DIGIT_NUMBER");
        DIRECTIONALITY_ARABIC_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_ARABIC_NUMBER");
        DIRECTIONALITY_BOUNDARY_NEUTRAL = env->getStaticByteField(cls, "DIRECTIONALITY_BOUNDARY_NEUTRAL");
        DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER");
        DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR");
        DIRECTIONALITY_FIRST_STRONG_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_FIRST_STRONG_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT");
        DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING");
        DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE");
        DIRECTIONALITY_NONSPACING_MARK = env->getStaticByteField(cls, "DIRECTIONALITY_NONSPACING_MARK");
        DIRECTIONALITY_OTHER_NEUTRALS = env->getStaticByteField(cls, "DIRECTIONALITY_OTHER_NEUTRALS");
        DIRECTIONALITY_PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_PARAGRAPH_SEPARATOR");
        DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT");
        DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT");
        DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC");
        DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING");
        DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE");
        DIRECTIONALITY_SEGMENT_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_SEGMENT_SEPARATOR");
        DIRECTIONALITY_UNDEFINED = env->getStaticByteField(cls, "DIRECTIONALITY_UNDEFINED");
        DIRECTIONALITY_WHITESPACE = env->getStaticByteField(cls, "DIRECTIONALITY_WHITESPACE");
        ENCLOSING_MARK = env->getStaticByteField(cls, "ENCLOSING_MARK");
        END_PUNCTUATION = env->getStaticByteField(cls, "END_PUNCTUATION");
        FINAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "FINAL_QUOTE_PUNCTUATION");
        FORMAT = env->getStaticByteField(cls, "FORMAT");
        INITIAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "INITIAL_QUOTE_PUNCTUATION");
        LETTER_NUMBER = env->getStaticByteField(cls, "LETTER_NUMBER");
        LINE_SEPARATOR = env->getStaticByteField(cls, "LINE_SEPARATOR");
        LOWERCASE_LETTER = env->getStaticByteField(cls, "LOWERCASE_LETTER");
        MATH_SYMBOL = env->getStaticByteField(cls, "MATH_SYMBOL");
        MAX_CODE_POINT = env->getStaticIntField(cls, "MAX_CODE_POINT");
        MAX_HIGH_SURROGATE = env->getStaticCharField(cls, "MAX_HIGH_SURROGATE");
        MAX_LOW_SURROGATE = env->getStaticCharField(cls, "MAX_LOW_SURROGATE");
        MAX_RADIX = env->getStaticIntField(cls, "MAX_RADIX");
        MAX_SURROGATE = env->getStaticCharField(cls, "MAX_SURROGATE");
        MAX_VALUE = env->getStaticCharField(cls, "MAX_VALUE");
        MIN_CODE_POINT = env->getStaticIntField(cls, "MIN_CODE_POINT");
        MIN_HIGH_SURROGATE = env->getStaticCharField(cls, "MIN_HIGH_SURROGATE");
        MIN_LOW_SURROGATE = env->getStaticCharField(cls, "MIN_LOW_SURROGATE");
        MIN_RADIX = env->getStaticIntField(cls, "MIN_RADIX");
        MIN_SUPPLEMENTARY_CODE_POINT = env->getStaticIntField(cls, "MIN_SUPPLEMENTARY_CODE_POINT");
        MIN_SURROGATE = env->getStaticCharField(cls, "MIN_SURROGATE");
        MIN_VALUE = env->getStaticCharField(cls, "MIN_VALUE");
        MODIFIER_LETTER = env->getStaticByteField(cls, "MODIFIER_LETTER");
        MODIFIER_SYMBOL = env->getStaticByteField(cls, "MODIFIER_SYMBOL");
        NON_SPACING_MARK = env->getStaticByteField(cls, "NON_SPACING_MARK");
        OTHER_LETTER = env->getStaticByteField(cls, "OTHER_LETTER");
        OTHER_NUMBER = env->getStaticByteField(cls, "OTHER_NUMBER");
        OTHER_PUNCTUATION = env->getStaticByteField(cls, "OTHER_PUNCTUATION");
        OTHER_SYMBOL = env->getStaticByteField(cls, "OTHER_SYMBOL");
        PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "PARAGRAPH_SEPARATOR");
        PRIVATE_USE = env->getStaticByteField(cls, "PRIVATE_USE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        SPACE_SEPARATOR = env->getStaticByteField(cls, "SPACE_SEPARATOR");
        START_PUNCTUATION = env->getStaticByteField(cls, "START_PUNCTUATION");
        SURROGATE = env->getStaticByteField(cls, "SURROGATE");
        TITLECASE_LETTER = env->getStaticByteField(cls, "TITLECASE_LETTER");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        UNASSIGNED = env->getStaticByteField(cls, "UNASSIGNED");
        UPPERCASE_LETTER = env->getStaticByteField(cls, "UPPERCASE_LETTER");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Character::Character(jchar a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be0046d7f7239695, a0)) {}

    jint Character::charCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_charCount_38565d58479aa24a], a0);
    }

    jchar Character::charValue() const
    {
      return env->callCharMethod(this$, mids$[mid_charValue_29e026b9d068f1c7]);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_3d8664f3fe7532d9], a0.this$, a1);
    }

    jint Character::codePointAt(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_0bdb7007ef94b15e], a0.this$, a1);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_3d8664f3fe7532d9], a0.this$, a1);
    }

    jint Character::codePointBefore(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_0bdb7007ef94b15e], a0.this$, a1);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_0b8a9d9908fcde8d], a0.this$, a1, a2);
    }

    jint Character::codePointOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointOf_5d6fce34d596f8f0], a0.this$);
    }

    jint Character::compare(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_edc01deaecaf3b63], a0, a1);
    }

    jint Character::compareTo(const Character & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_feaeef792645bb35], a0.this$);
    }

    jint Character::digit(jchar a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_c3e6094108d475ef], a0, a1);
    }

    jint Character::digit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_d9790ac9eecfe931], a0, a1);
    }

    jboolean Character::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jchar Character::forDigit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_forDigit_5fbdcc3da1bdb333], a0, a1);
    }

    jbyte Character::getDirectionality(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_4e6484d999e31d98], a0);
    }

    jbyte Character::getDirectionality(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_1f47c6a92c9478c9], a0);
    }

    ::java::lang::String Character::getName(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getName_90cbcc0b7a5ddae9], a0));
    }

    jint Character::getNumericValue(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_2681da20b1beaea7], a0);
    }

    jint Character::getNumericValue(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_38565d58479aa24a], a0);
    }

    jint Character::getType(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_2681da20b1beaea7], a0);
    }

    jint Character::getType(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_38565d58479aa24a], a0);
    }

    jint Character::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Character::hashCode(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_2681da20b1beaea7], a0);
    }

    jchar Character::highSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_highSurrogate_52047e692b58eb87], a0);
    }

    jboolean Character::isAlphabetic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isAlphabetic_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isBmpCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isBmpCodePoint_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isDefined(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_490c9f5ddce460a1], a0);
    }

    jboolean Character::isDefined(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_490c9f5ddce460a1], a0);
    }

    jboolean Character::isDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isHighSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isHighSurrogate_490c9f5ddce460a1], a0);
    }

    jboolean Character::isISOControl(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_490c9f5ddce460a1], a0);
    }

    jboolean Character::isISOControl(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isIdentifierIgnorable(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_490c9f5ddce460a1], a0);
    }

    jboolean Character::isIdentifierIgnorable(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isIdeographic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdeographic_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isJavaIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_490c9f5ddce460a1], a0);
    }

    jboolean Character::isJavaIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isJavaIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_490c9f5ddce460a1], a0);
    }

    jboolean Character::isJavaIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isJavaLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetter_490c9f5ddce460a1], a0);
    }

    jboolean Character::isJavaLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetterOrDigit_490c9f5ddce460a1], a0);
    }

    jboolean Character::isLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_490c9f5ddce460a1], a0);
    }

    jboolean Character::isLetter(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_490c9f5ddce460a1], a0);
    }

    jboolean Character::isLetterOrDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isLowSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowSurrogate_490c9f5ddce460a1], a0);
    }

    jboolean Character::isLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_490c9f5ddce460a1], a0);
    }

    jboolean Character::isLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isMirrored(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_490c9f5ddce460a1], a0);
    }

    jboolean Character::isMirrored(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isSpace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpace_490c9f5ddce460a1], a0);
    }

    jboolean Character::isSpaceChar(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_490c9f5ddce460a1], a0);
    }

    jboolean Character::isSpaceChar(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isSupplementaryCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSupplementaryCodePoint_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogate_490c9f5ddce460a1], a0);
    }

    jboolean Character::isSurrogatePair(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogatePair_02a07f55b7dbf98b], a0, a1);
    }

    jboolean Character::isTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_490c9f5ddce460a1], a0);
    }

    jboolean Character::isTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_490c9f5ddce460a1], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_490c9f5ddce460a1], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_490c9f5ddce460a1], a0);
    }

    jboolean Character::isUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isValidCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isValidCodePoint_e95e4c7cd3dd17ff], a0);
    }

    jboolean Character::isWhitespace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_490c9f5ddce460a1], a0);
    }

    jboolean Character::isWhitespace(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_e95e4c7cd3dd17ff], a0);
    }

    jchar Character::lowSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_lowSurrogate_52047e692b58eb87], a0);
    }

    jint Character::offsetByCodePoints(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_0b8a9d9908fcde8d], a0.this$, a1, a2);
    }

    jint Character::offsetByCodePoints(const JArray< jchar > & a0, jint a1, jint a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_3eb6658f3c13cf78], a0.this$, a1, a2, a3, a4);
    }

    jchar Character::reverseBytes(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_reverseBytes_14a065e19b24d2b2], a0);
    }

    JArray< jchar > Character::toChars(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_toChars_4f8b778f6b7240e5], a0));
    }

    jint Character::toChars(jint a0, const JArray< jchar > & a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toChars_ab656bff88aa3eb0], a0, a1.this$, a2);
    }

    jint Character::toCodePoint(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toCodePoint_edc01deaecaf3b63], a0, a1);
    }

    jchar Character::toLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toLowerCase_14a065e19b24d2b2], a0);
    }

    jint Character::toLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toLowerCase_38565d58479aa24a], a0);
    }

    ::java::lang::String Character::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Character::toString(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_1e1a62b6126a9504], a0));
    }

    ::java::lang::String Character::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_90cbcc0b7a5ddae9], a0));
    }

    jchar Character::toTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toTitleCase_14a065e19b24d2b2], a0);
    }

    jint Character::toTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toTitleCase_38565d58479aa24a], a0);
    }

    jchar Character::toUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toUpperCase_14a065e19b24d2b2], a0);
    }

    jint Character::toUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUpperCase_38565d58479aa24a], a0);
    }

    Character Character::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Character(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f904144d696baa24], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_charValue(t_Character *self);
    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg);
    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_equals(t_Character *self, PyObject *args);
    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args);
    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toString(t_Character *self, PyObject *args);
    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Character__methods_[] = {
      DECLARE_METHOD(t_Character, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charValue, METH_NOARGS),
      DECLARE_METHOD(t_Character, codePointAt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointBefore, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointCount, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, compareTo, METH_O),
      DECLARE_METHOD(t_Character, digit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, equals, METH_VARARGS),
      DECLARE_METHOD(t_Character, forDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getDirectionality, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, getNumericValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getType, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Character, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, highSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isAlphabetic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isBmpCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isDefined, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isHighSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isISOControl, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdentifierIgnorable, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdeographic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetter, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetterOrDigit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetterOrDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isMirrored, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpace, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpaceChar, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSupplementaryCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogatePair, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isValidCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isWhitespace, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, lowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, offsetByCodePoints, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, toChars, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toCodePoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toString, METH_VARARGS),
      DECLARE_METHOD(t_Character, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, valueOf, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Character)[] = {
      { Py_tp_methods, t_Character__methods_ },
      { Py_tp_init, (void *) t_Character_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Character)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Character, t_Character, Character);

    void t_Character::install(PyObject *module)
    {
      installType(&PY_TYPE(Character), &PY_TYPE_DEF(Character), module, "Character", 0);
    }

    void t_Character::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "class_", make_descriptor(Character::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "wrapfn_", make_descriptor(unboxCharacter));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "boxfn_", make_descriptor(boxCharacter));
      env->getClass(Character::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "BYTES", make_descriptor(Character::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "COMBINING_SPACING_MARK", make_descriptor(Character::COMBINING_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONNECTOR_PUNCTUATION", make_descriptor(Character::CONNECTOR_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONTROL", make_descriptor(Character::CONTROL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CURRENCY_SYMBOL", make_descriptor(Character::CURRENCY_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DASH_PUNCTUATION", make_descriptor(Character::DASH_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DECIMAL_DIGIT_NUMBER", make_descriptor(Character::DECIMAL_DIGIT_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_ARABIC_NUMBER", make_descriptor(Character::DIRECTIONALITY_ARABIC_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_BOUNDARY_NEUTRAL", make_descriptor(Character::DIRECTIONALITY_BOUNDARY_NEUTRAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_FIRST_STRONG_ISOLATE", make_descriptor(Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_NONSPACING_MARK", make_descriptor(Character::DIRECTIONALITY_NONSPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_OTHER_NEUTRALS", make_descriptor(Character::DIRECTIONALITY_OTHER_NEUTRALS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_PARAGRAPH_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_SEGMENT_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_SEGMENT_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_UNDEFINED", make_descriptor(Character::DIRECTIONALITY_UNDEFINED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_WHITESPACE", make_descriptor(Character::DIRECTIONALITY_WHITESPACE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "ENCLOSING_MARK", make_descriptor(Character::ENCLOSING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "END_PUNCTUATION", make_descriptor(Character::END_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FINAL_QUOTE_PUNCTUATION", make_descriptor(Character::FINAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FORMAT", make_descriptor(Character::FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "INITIAL_QUOTE_PUNCTUATION", make_descriptor(Character::INITIAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LETTER_NUMBER", make_descriptor(Character::LETTER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LINE_SEPARATOR", make_descriptor(Character::LINE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LOWERCASE_LETTER", make_descriptor(Character::LOWERCASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MATH_SYMBOL", make_descriptor(Character::MATH_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_CODE_POINT", make_descriptor(Character::MAX_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_HIGH_SURROGATE", make_descriptor(Character::MAX_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_LOW_SURROGATE", make_descriptor(Character::MAX_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_RADIX", make_descriptor(Character::MAX_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_SURROGATE", make_descriptor(Character::MAX_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_VALUE", make_descriptor(Character::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_CODE_POINT", make_descriptor(Character::MIN_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_HIGH_SURROGATE", make_descriptor(Character::MIN_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_LOW_SURROGATE", make_descriptor(Character::MIN_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_RADIX", make_descriptor(Character::MIN_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SUPPLEMENTARY_CODE_POINT", make_descriptor(Character::MIN_SUPPLEMENTARY_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SURROGATE", make_descriptor(Character::MIN_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_VALUE", make_descriptor(Character::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_LETTER", make_descriptor(Character::MODIFIER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_SYMBOL", make_descriptor(Character::MODIFIER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "NON_SPACING_MARK", make_descriptor(Character::NON_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_LETTER", make_descriptor(Character::OTHER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_NUMBER", make_descriptor(Character::OTHER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_PUNCTUATION", make_descriptor(Character::OTHER_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_SYMBOL", make_descriptor(Character::OTHER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PARAGRAPH_SEPARATOR", make_descriptor(Character::PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PRIVATE_USE", make_descriptor(Character::PRIVATE_USE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SIZE", make_descriptor(Character::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SPACE_SEPARATOR", make_descriptor(Character::SPACE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "START_PUNCTUATION", make_descriptor(Character::START_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SURROGATE", make_descriptor(Character::SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TITLECASE_LETTER", make_descriptor(Character::TITLECASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Character::TYPE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UNASSIGNED", make_descriptor(Character::UNASSIGNED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UPPERCASE_LETTER", make_descriptor(Character::UPPERCASE_LETTER));
    }

    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Character::initializeClass, 1)))
        return NULL;
      return t_Character::wrap_Object(Character(((t_Character *) arg)->object.this$));
    }
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Character::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds)
    {
      jchar a0;
      Character object((jobject) NULL);

      if (!parseArgs(args, "C", &a0))
      {
        INT_CALL(object = Character(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::charCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "charCount", arg);
      return NULL;
    }

    static PyObject *t_Character_charValue(t_Character *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.charValue());
      return c2p(result);
    }

    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointAt", args);
      return NULL;
    }

    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointBefore", args);
      return NULL;
    }

    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::codePointOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "codePointOf", arg);
      return NULL;
    }

    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg)
    {
      Character a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Character), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "digit", args);
      return NULL;
    }

    static PyObject *t_Character_equals(t_Character *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jchar result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::forDigit(a0, a1));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "forDigit", args);
      return NULL;
    }

    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jbyte result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jbyte result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDirectionality", args);
      return NULL;
    }

    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::getName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "getName", arg);
      return NULL;
    }

    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumericValue", args);
      return NULL;
    }

    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getType", args);
      return NULL;
    }

    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jint result;

      if (!parseArgs(args, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::highSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "highSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isAlphabetic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isAlphabetic", arg);
      return NULL;
    }

    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isBmpCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isBmpCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDefined", args);
      return NULL;
    }

    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isHighSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isHighSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isISOControl", args);
      return NULL;
    }

    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isIdentifierIgnorable", args);
      return NULL;
    }

    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isIdeographic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isIdeographic", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetter(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetter", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetterOrDigit(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetterOrDigit", arg);
      return NULL;
    }

    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetter", args);
      return NULL;
    }

    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetterOrDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isLowSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isLowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isMirrored", args);
      return NULL;
    }

    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSpace(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSpace", arg);
      return NULL;
    }

    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isSpaceChar", args);
      return NULL;
    }

    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSupplementaryCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSupplementaryCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jboolean result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogatePair(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogatePair", args);
      return NULL;
    }

    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isValidCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isValidCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isWhitespace", args);
      return NULL;
    }

    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::lowSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "lowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint result;

          if (!parseArgs(args, "[CIIII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jchar result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::reverseBytes(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint result;

          if (!parseArgs(args, "I[CI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toChars", args);
      return NULL;
    }

    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::toCodePoint(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toCodePoint", args);
      return NULL;
    }

    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_toString(t_Character *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      Character result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::valueOf(a0));
        return t_Character::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableFunction::mids$ = NULL;
        bool MultivariateDifferentiableFunction::live$ = false;

        jclass MultivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_5d4ac565bbe32c28] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure MultivariateDifferentiableFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_value_5d4ac565bbe32c28], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableFunction, t_MultivariateDifferentiableFunction, MultivariateDifferentiableFunction);

        void t_MultivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableFunction), &PY_TYPE_DEF(MultivariateDifferentiableFunction), module, "MultivariateDifferentiableFunction", 0);
        }

        void t_MultivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "class_", make_descriptor(MultivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableFunction::wrap_Object(MultivariateDifferentiableFunction(((t_MultivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$HeaderLineWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter$HeaderLineWriter::mids$ = NULL;
        bool StreamingCpfWriter$HeaderLineWriter::live$ = false;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H1 = NULL;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H2 = NULL;

        jclass StreamingCpfWriter$HeaderLineWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getIdentifier", "()Ljava/lang/String;");
            mids$[mid_valueOf_1f85c44552666353] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_values_bfaf4dbeaa804633] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_write_b524ba023c473843] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ilrs/CPFHeader;Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            H1 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H1", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            H2 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H2", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String StreamingCpfWriter$HeaderLineWriter::getIdentifier() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIdentifier_0090f7797e403f43]));
        }

        StreamingCpfWriter$HeaderLineWriter StreamingCpfWriter$HeaderLineWriter::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StreamingCpfWriter$HeaderLineWriter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1f85c44552666353], a0.this$));
        }

        JArray< StreamingCpfWriter$HeaderLineWriter > StreamingCpfWriter$HeaderLineWriter::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StreamingCpfWriter$HeaderLineWriter >(env->callStaticObjectMethod(cls, mids$[mid_values_bfaf4dbeaa804633]));
        }

        void StreamingCpfWriter$HeaderLineWriter::write(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::java::lang::Appendable & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_write_b524ba023c473843], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyGetSetDef t_StreamingCpfWriter$HeaderLineWriter__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, identifier),
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingCpfWriter$HeaderLineWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, of_, METH_VARARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, getIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, values, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$HeaderLineWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$HeaderLineWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StreamingCpfWriter$HeaderLineWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$HeaderLineWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$HeaderLineWriter, t_StreamingCpfWriter$HeaderLineWriter, StreamingCpfWriter$HeaderLineWriter);
        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(const StreamingCpfWriter$HeaderLineWriter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StreamingCpfWriter$HeaderLineWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$HeaderLineWriter), &PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter), module, "StreamingCpfWriter$HeaderLineWriter", 0);
        }

        void t_StreamingCpfWriter$HeaderLineWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "class_", make_descriptor(StreamingCpfWriter$HeaderLineWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "boxfn_", make_descriptor(boxObject));
          env->getClass(StreamingCpfWriter$HeaderLineWriter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H1", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H2", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H2)));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(StreamingCpfWriter$HeaderLineWriter(((t_StreamingCpfWriter$HeaderLineWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIdentifier());
          return j2p(result);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StreamingCpfWriter$HeaderLineWriter result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::valueOf(a0));
            return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type)
        {
          JArray< StreamingCpfWriter$HeaderLineWriter > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::values());
          return JArray<jobject>(result.this$).wrap(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
          ::java::lang::Appendable a1((jobject) NULL);
          ::org::orekit::time::TimeScale a2((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIdentifier());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *PythonWeatherModel::class$ = NULL;
          jmethodID *PythonWeatherModel::mids$ = NULL;
          bool PythonWeatherModel::live$ = false;

          jclass PythonWeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/PythonWeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_weatherParameters_82dcc83e88ee1b1f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonWeatherModel::PythonWeatherModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonWeatherModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonWeatherModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonWeatherModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        namespace weather {
          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self);
          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args);
          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1);
          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data);
          static PyGetSetDef t_PythonWeatherModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonWeatherModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonWeatherModel__methods_[] = {
            DECLARE_METHOD(t_PythonWeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonWeatherModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonWeatherModel)[] = {
            { Py_tp_methods, t_PythonWeatherModel__methods_ },
            { Py_tp_init, (void *) t_PythonWeatherModel_init_ },
            { Py_tp_getset, t_PythonWeatherModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonWeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonWeatherModel, t_PythonWeatherModel, PythonWeatherModel);

          void t_PythonWeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonWeatherModel), &PY_TYPE_DEF(PythonWeatherModel), module, "PythonWeatherModel", 1);
          }

          void t_PythonWeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "class_", make_descriptor(PythonWeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "wrapfn_", make_descriptor(t_PythonWeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonWeatherModel::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonWeatherModel_pythonDecRef0 },
              { "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonWeatherModel_weatherParameters1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonWeatherModel::initializeClass, 1)))
              return NULL;
            return t_PythonWeatherModel::wrap_Object(PythonWeatherModel(((t_PythonWeatherModel *) arg)->object.this$));
          }
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonWeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds)
          {
            PythonWeatherModel object((jobject) NULL);

            INT_CALL(object = PythonWeatherModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args)
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

          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "weatherParameters", "dO", (double) a0, o1);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data)
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
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagationType::class$ = NULL;
      jmethodID *PropagationType::mids$ = NULL;
      bool PropagationType::live$ = false;
      PropagationType *PropagationType::MEAN = NULL;
      PropagationType *PropagationType::OSCULATING = NULL;

      jclass PropagationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c8d3c34103499618] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/PropagationType;");
          mids$[mid_values_8460ec0f36fd5d38] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/PropagationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MEAN = new PropagationType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/propagation/PropagationType;"));
          OSCULATING = new PropagationType(env->getStaticObjectField(cls, "OSCULATING", "Lorg/orekit/propagation/PropagationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagationType PropagationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PropagationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8d3c34103499618], a0.this$));
      }

      JArray< PropagationType > PropagationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PropagationType >(env->callStaticObjectMethod(cls, mids$[mid_values_8460ec0f36fd5d38]));
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
      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args);
      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PropagationType_values(PyTypeObject *type);
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data);
      static PyGetSetDef t_PropagationType__fields_[] = {
        DECLARE_GET_FIELD(t_PropagationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagationType__methods_[] = {
        DECLARE_METHOD(t_PropagationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PropagationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagationType)[] = {
        { Py_tp_methods, t_PropagationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PropagationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PropagationType, t_PropagationType, PropagationType);
      PyObject *t_PropagationType::wrap_Object(const PropagationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PropagationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PropagationType::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagationType), &PY_TYPE_DEF(PropagationType), module, "PropagationType", 0);
      }

      void t_PropagationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "class_", make_descriptor(PropagationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "wrapfn_", make_descriptor(t_PropagationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PropagationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "MEAN", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "OSCULATING", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::OSCULATING)));
      }

      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagationType::initializeClass, 1)))
          return NULL;
        return t_PropagationType::wrap_Object(PropagationType(((t_PropagationType *) arg)->object.this$));
      }
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PropagationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::PropagationType::valueOf(a0));
          return t_PropagationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PropagationType_values(PyTypeObject *type)
      {
        JArray< PropagationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::propagation::PropagationType::values());
        return JArray<jobject>(result.this$).wrap(t_PropagationType::wrap_jobject);
      }
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *WriterBuilder::class$ = NULL;
          jmethodID *WriterBuilder::mids$ = NULL;
          bool WriterBuilder::live$ = false;

          jclass WriterBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/WriterBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_959fe257032a39c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmWriter_3bc79a526fe3c540] = env->getMethodID(cls, "buildAcmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmWriter;");
              mids$[mid_buildAemWriter_e853fc2ae52d968b] = env->getMethodID(cls, "buildAemWriter", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;");
              mids$[mid_buildApmWriter_39f253e8e0b26d00] = env->getMethodID(cls, "buildApmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmWriter;");
              mids$[mid_buildCdmWriter_719e26a78bb19078] = env->getMethodID(cls, "buildCdmWriter", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmWriter;");
              mids$[mid_buildNdmWriter_9f7a9aac1c186ca9] = env->getMethodID(cls, "buildNdmWriter", "()Lorg/orekit/files/ccsds/ndm/NdmWriter;");
              mids$[mid_buildOcmWriter_0df4db3aea0d0e9a] = env->getMethodID(cls, "buildOcmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;");
              mids$[mid_buildOemWriter_c0622beff38b848b] = env->getMethodID(cls, "buildOemWriter", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;");
              mids$[mid_buildOmmWriter_5788069e49ca1216] = env->getMethodID(cls, "buildOmmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmWriter;");
              mids$[mid_buildOpmWriter_9a873e800e2abf29] = env->getMethodID(cls, "buildOpmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmWriter;");
              mids$[mid_buildTdmWriter_7d4bdebf83311232] = env->getMethodID(cls, "buildTdmWriter", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmWriter;");
              mids$[mid_create_6e256950fdd422f6] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/WriterBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WriterBuilder::WriterBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          WriterBuilder::WriterBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_959fe257032a39c0, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter WriterBuilder::buildAcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter(env->callObjectMethod(this$, mids$[mid_buildAcmWriter_3bc79a526fe3c540]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter WriterBuilder::buildAemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter(env->callObjectMethod(this$, mids$[mid_buildAemWriter_e853fc2ae52d968b]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter WriterBuilder::buildApmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter(env->callObjectMethod(this$, mids$[mid_buildApmWriter_39f253e8e0b26d00]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmWriter WriterBuilder::buildCdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmWriter(env->callObjectMethod(this$, mids$[mid_buildCdmWriter_719e26a78bb19078]));
          }

          ::org::orekit::files::ccsds::ndm::NdmWriter WriterBuilder::buildNdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmWriter(env->callObjectMethod(this$, mids$[mid_buildNdmWriter_9f7a9aac1c186ca9]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter WriterBuilder::buildOcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter(env->callObjectMethod(this$, mids$[mid_buildOcmWriter_0df4db3aea0d0e9a]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter WriterBuilder::buildOemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter(env->callObjectMethod(this$, mids$[mid_buildOemWriter_c0622beff38b848b]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter WriterBuilder::buildOmmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter(env->callObjectMethod(this$, mids$[mid_buildOmmWriter_5788069e49ca1216]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter WriterBuilder::buildOpmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter(env->callObjectMethod(this$, mids$[mid_buildOpmWriter_9a873e800e2abf29]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmWriter WriterBuilder::buildTdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmWriter(env->callObjectMethod(this$, mids$[mid_buildTdmWriter_7d4bdebf83311232]));
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
          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args);
          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data);
          static PyGetSetDef t_WriterBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_WriterBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WriterBuilder__methods_[] = {
            DECLARE_METHOD(t_WriterBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildApmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildCdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildNdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOmmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOpmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildTdmWriter, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WriterBuilder)[] = {
            { Py_tp_methods, t_WriterBuilder__methods_ },
            { Py_tp_init, (void *) t_WriterBuilder_init_ },
            { Py_tp_getset, t_WriterBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WriterBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(WriterBuilder, t_WriterBuilder, WriterBuilder);
          PyObject *t_WriterBuilder::wrap_Object(const WriterBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WriterBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WriterBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(WriterBuilder), &PY_TYPE_DEF(WriterBuilder), module, "WriterBuilder", 0);
          }

          void t_WriterBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "class_", make_descriptor(WriterBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "wrapfn_", make_descriptor(t_WriterBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WriterBuilder::initializeClass, 1)))
              return NULL;
            return t_WriterBuilder::wrap_Object(WriterBuilder(((t_WriterBuilder *) arg)->object.this$));
          }
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WriterBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                WriterBuilder object((jobject) NULL);

                INT_CALL(object = WriterBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                WriterBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = WriterBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemWriter());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmWriter());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmWriter());
            return ::org::orekit::files::ccsds::ndm::t_NdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemWriter());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmWriter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmWriter::wrap_Object(result);
          }
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data)
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
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader::mids$ = NULL;
      bool UTCTAIOffsetsLoader::live$ = false;

      jclass UTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self);

      static PyMethodDef t_UTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader, t_UTCTAIOffsetsLoader, UTCTAIOffsetsLoader);

      void t_UTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader), &PY_TYPE_DEF(UTCTAIOffsetsLoader), module, "UTCTAIOffsetsLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser)));
      }

      void t_UTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "class_", make_descriptor(UTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader::wrap_Object(UTCTAIOffsetsLoader(((t_UTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L2Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L2Frame::class$ = NULL;
      jmethodID *L2Frame::mids$ = NULL;
      bool L2Frame::live$ = false;

      jclass L2Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L2Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43ec4ee4a0809dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L2Frame::L2Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_43ec4ee4a0809dae, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L2Frame__methods_[] = {
        DECLARE_METHOD(t_L2Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L2Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L2Frame)[] = {
        { Py_tp_methods, t_L2Frame__methods_ },
        { Py_tp_init, (void *) t_L2Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L2Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L2Frame, t_L2Frame, L2Frame);

      void t_L2Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L2Frame), &PY_TYPE_DEF(L2Frame), module, "L2Frame", 0);
      }

      void t_L2Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "class_", make_descriptor(L2Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "wrapfn_", make_descriptor(t_L2Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L2Frame::initializeClass, 1)))
          return NULL;
        return t_L2Frame::wrap_Object(L2Frame(((t_L2Frame *) arg)->object.this$));
      }
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L2Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L2Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L2Frame(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonTideSystemProvider::class$ = NULL;
          jmethodID *PythonTideSystemProvider::mids$ = NULL;
          bool PythonTideSystemProvider::live$ = false;

          jclass PythonTideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonTideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTideSystemProvider::PythonTideSystemProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonTideSystemProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonTideSystemProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonTideSystemProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self);
          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args);
          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data);
          static PyGetSetDef t_PythonTideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTideSystemProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_PythonTideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTideSystemProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTideSystemProvider)[] = {
            { Py_tp_methods, t_PythonTideSystemProvider__methods_ },
            { Py_tp_init, (void *) t_PythonTideSystemProvider_init_ },
            { Py_tp_getset, t_PythonTideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTideSystemProvider, t_PythonTideSystemProvider, PythonTideSystemProvider);

          void t_PythonTideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTideSystemProvider), &PY_TYPE_DEF(PythonTideSystemProvider), module, "PythonTideSystemProvider", 1);
          }

          void t_PythonTideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "class_", make_descriptor(PythonTideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "wrapfn_", make_descriptor(t_PythonTideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTideSystemProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonTideSystemProvider_getTideSystem0 },
              { "pythonDecRef", "()V", (void *) t_PythonTideSystemProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_PythonTideSystemProvider::wrap_Object(PythonTideSystemProvider(((t_PythonTideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonTideSystemProvider object((jobject) NULL);

            INT_CALL(object = PythonTideSystemProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticClockModifier::mids$ = NULL;
          bool AbstractRelativisticClockModifier::live$ = false;

          jclass AbstractRelativisticClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_relativisticCorrection_b9e7854a808aa131] = env->getMethodID(cls, "relativisticCorrection", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_getScaleFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getScaleFactor", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticClockModifier::AbstractRelativisticClockModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticClockModifier, t_AbstractRelativisticClockModifier, AbstractRelativisticClockModifier);

          void t_AbstractRelativisticClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticClockModifier), &PY_TYPE_DEF(AbstractRelativisticClockModifier), module, "AbstractRelativisticClockModifier", 0);
          }

          void t_AbstractRelativisticClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "class_", make_descriptor(AbstractRelativisticClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticClockModifier::wrap_Object(AbstractRelativisticClockModifier(((t_AbstractRelativisticClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds)
          {
            AbstractRelativisticClockModifier object((jobject) NULL);

            INT_CALL(object = AbstractRelativisticClockModifier());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenUtilities::class$ = NULL;
              jmethodID *HansenUtilities::mids$ = NULL;
              bool HansenUtilities::live$ = false;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ONE = NULL;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ZERO = NULL;

              jclass HansenUtilities::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_buildIdentityMatrix2_6e6d1d93619046bf] = env->getStaticMethodID(cls, "buildIdentityMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildIdentityMatrix4_6e6d1d93619046bf] = env->getStaticMethodID(cls, "buildIdentityMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix2_6e6d1d93619046bf] = env->getStaticMethodID(cls, "buildZeroMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix4_6e6d1d93619046bf] = env->getStaticMethodID(cls, "buildZeroMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ONE = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  ZERO = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix2_6e6d1d93619046bf]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix4_6e6d1d93619046bf]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix2_6e6d1d93619046bf]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix4_6e6d1d93619046bf]));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type);

              static PyMethodDef t_HansenUtilities__methods_[] = {
                DECLARE_METHOD(t_HansenUtilities, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix4, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix4, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenUtilities)[] = {
                { Py_tp_methods, t_HansenUtilities__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenUtilities)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenUtilities, t_HansenUtilities, HansenUtilities);

              void t_HansenUtilities::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenUtilities), &PY_TYPE_DEF(HansenUtilities), module, "HansenUtilities", 0);
              }

              void t_HansenUtilities::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "class_", make_descriptor(HansenUtilities::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "wrapfn_", make_descriptor(t_HansenUtilities::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "boxfn_", make_descriptor(boxObject));
                env->getClass(HansenUtilities::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ONE", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ZERO", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ZERO)));
              }

              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenUtilities::initializeClass, 1)))
                  return NULL;
                return t_HansenUtilities::wrap_Object(HansenUtilities(((t_HansenUtilities *) arg)->object.this$));
              }
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenUtilities::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
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
#include "org/hipparchus/Field.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *Field::class$ = NULL;
    jmethodID *Field::mids$ = NULL;
    bool Field::live$ = false;

    jclass Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/Field");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getOne_7e89936bdf79375b] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
        mids$[mid_getZero_7e89936bdf79375b] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement Field::getOne() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getOne_7e89936bdf79375b]));
    }

    ::java::lang::Class Field::getRuntimeClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
    }

    ::org::hipparchus::FieldElement Field::getZero() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getZero_7e89936bdf79375b]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_of_(t_Field *self, PyObject *args);
    static PyObject *t_Field_getOne(t_Field *self);
    static PyObject *t_Field_getRuntimeClass(t_Field *self);
    static PyObject *t_Field_getZero(t_Field *self);
    static PyObject *t_Field_get__one(t_Field *self, void *data);
    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data);
    static PyObject *t_Field_get__zero(t_Field *self, void *data);
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data);
    static PyGetSetDef t_Field__fields_[] = {
      DECLARE_GET_FIELD(t_Field, one),
      DECLARE_GET_FIELD(t_Field, runtimeClass),
      DECLARE_GET_FIELD(t_Field, zero),
      DECLARE_GET_FIELD(t_Field, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Field__methods_[] = {
      DECLARE_METHOD(t_Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, of_, METH_VARARGS),
      DECLARE_METHOD(t_Field, getOne, METH_NOARGS),
      DECLARE_METHOD(t_Field, getRuntimeClass, METH_NOARGS),
      DECLARE_METHOD(t_Field, getZero, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Field)[] = {
      { Py_tp_methods, t_Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Field__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Field)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Field, t_Field, Field);
    PyObject *t_Field::wrap_Object(const Field& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Field), &PY_TYPE_DEF(Field), module, "Field", 0);
    }

    void t_Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "class_", make_descriptor(Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "wrapfn_", make_descriptor(t_Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Field::initializeClass, 1)))
        return NULL;
      return t_Field::wrap_Object(Field(((t_Field *) arg)->object.this$));
    }
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Field_of_(t_Field *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Field_getOne(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getOne());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_Field_getRuntimeClass(t_Field *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Field_getZero(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getZero());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Field_get__one(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getOne());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }

    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_Field_get__zero(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getZero());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *EquationsMapper::class$ = NULL;
      jmethodID *EquationsMapper::mids$ = NULL;
      bool EquationsMapper::live$ = false;

      jclass EquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/EquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_80b30eca57d4b68d] = env->getMethodID(cls, "extractEquationData", "(I[D)[D");
          mids$[mid_getNumberOfEquations_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_f2f64475e4580546] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_36eab4ec72c89a55] = env->getMethodID(cls, "insertEquationData", "(I[D[D)V");
          mids$[mid_mapStateAndDerivative_e891eead609e86c7] = env->getMethodID(cls, "mapStateAndDerivative", "(D[D[D)Lorg/hipparchus/ode/ODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > EquationsMapper::extractEquationData(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractEquationData_80b30eca57d4b68d], a0, a1.this$));
      }

      jint EquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_f2f64475e4580546]);
      }

      jint EquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_f2f64475e4580546]);
      }

      void EquationsMapper::insertEquationData(jint a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_36eab4ec72c89a55], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative EquationsMapper::mapStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_e891eead609e86c7], a0, a1.this$, a2.this$));
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
      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data);
      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data);
      static PyGetSetDef t_EquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_EquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_EquationsMapper, totalDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquationsMapper__methods_[] = {
        DECLARE_METHOD(t_EquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquationsMapper)[] = {
        { Py_tp_methods, t_EquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EquationsMapper, t_EquationsMapper, EquationsMapper);

      void t_EquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(EquationsMapper), &PY_TYPE_DEF(EquationsMapper), module, "EquationsMapper", 0);
      }

      void t_EquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "class_", make_descriptor(EquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "wrapfn_", make_descriptor(t_EquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquationsMapper::initializeClass, 1)))
          return NULL;
        return t_EquationsMapper::wrap_Object(EquationsMapper(((t_EquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "I[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Calibration::class$ = NULL;
        jmethodID *CRD$Calibration::mids$ = NULL;
        bool CRD$Calibration::live$ = false;

        jclass CRD$Calibration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Calibration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89dd5677feda5af6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDelayShift_456d9a2f64d6b28d] = env->getMethodID(cls, "getDelayShift", "()D");
            mids$[mid_getDetectorChannel_f2f64475e4580546] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getKurtosis_456d9a2f64d6b28d] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getNumberOfPointsRecorded_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfPointsRecorded", "()I");
            mids$[mid_getNumberOfPointsUsed_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfPointsUsed", "()I");
            mids$[mid_getOneWayDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getOneWayDistance", "()D");
            mids$[mid_getPeakMinusMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getReturnRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getRms_456d9a2f64d6b28d] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getShiftTypeIndicator_f2f64475e4580546] = env->getMethodID(cls, "getShiftTypeIndicator", "()I");
            mids$[mid_getSkew_456d9a2f64d6b28d] = env->getMethodID(cls, "getSkew", "()D");
            mids$[mid_getSpan_f2f64475e4580546] = env->getMethodID(cls, "getSpan", "()I");
            mids$[mid_getSystemConfigurationId_0090f7797e403f43] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getSystemDelay_456d9a2f64d6b28d] = env->getMethodID(cls, "getSystemDelay", "()D");
            mids$[mid_getTypeIndicator_f2f64475e4580546] = env->getMethodID(cls, "getTypeIndicator", "()I");
            mids$[mid_getTypeOfData_f2f64475e4580546] = env->getMethodID(cls, "getTypeOfData", "()I");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Calibration::CRD$Calibration(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89dd5677feda5af6, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::org::orekit::time::AbsoluteDate CRD$Calibration::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jdouble CRD$Calibration::getDelayShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDelayShift_456d9a2f64d6b28d]);
        }

        jint CRD$Calibration::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_f2f64475e4580546]);
        }

        jdouble CRD$Calibration::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_456d9a2f64d6b28d]);
        }

        jint CRD$Calibration::getNumberOfPointsRecorded() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsRecorded_f2f64475e4580546]);
        }

        jint CRD$Calibration::getNumberOfPointsUsed() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsUsed_f2f64475e4580546]);
        }

        jdouble CRD$Calibration::getOneWayDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOneWayDistance_456d9a2f64d6b28d]);
        }

        jdouble CRD$Calibration::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_456d9a2f64d6b28d]);
        }

        jdouble CRD$Calibration::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_456d9a2f64d6b28d]);
        }

        jdouble CRD$Calibration::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_456d9a2f64d6b28d]);
        }

        jint CRD$Calibration::getShiftTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getShiftTypeIndicator_f2f64475e4580546]);
        }

        jdouble CRD$Calibration::getSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkew_456d9a2f64d6b28d]);
        }

        jint CRD$Calibration::getSpan() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpan_f2f64475e4580546]);
        }

        ::java::lang::String CRD$Calibration::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_0090f7797e403f43]));
        }

        jdouble CRD$Calibration::getSystemDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSystemDelay_456d9a2f64d6b28d]);
        }

        jint CRD$Calibration::getTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeIndicator_f2f64475e4580546]);
        }

        jint CRD$Calibration::getTypeOfData() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeOfData_f2f64475e4580546]);
        }

        ::java::lang::String CRD$Calibration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$Calibration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args);
        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data);
        static PyGetSetDef t_CRD$Calibration__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Calibration, date),
          DECLARE_GET_FIELD(t_CRD$Calibration, delayShift),
          DECLARE_GET_FIELD(t_CRD$Calibration, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$Calibration, kurtosis),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsRecorded),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsUsed),
          DECLARE_GET_FIELD(t_CRD$Calibration, oneWayDistance),
          DECLARE_GET_FIELD(t_CRD$Calibration, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$Calibration, returnRate),
          DECLARE_GET_FIELD(t_CRD$Calibration, rms),
          DECLARE_GET_FIELD(t_CRD$Calibration, shiftTypeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, skew),
          DECLARE_GET_FIELD(t_CRD$Calibration, span),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemDelay),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeOfData),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Calibration__methods_[] = {
          DECLARE_METHOD(t_CRD$Calibration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDelayShift, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsRecorded, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsUsed, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getOneWayDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getShiftTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSpan, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemDelay, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeOfData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Calibration)[] = {
          { Py_tp_methods, t_CRD$Calibration__methods_ },
          { Py_tp_init, (void *) t_CRD$Calibration_init_ },
          { Py_tp_getset, t_CRD$Calibration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Calibration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Calibration, t_CRD$Calibration, CRD$Calibration);

        void t_CRD$Calibration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Calibration), &PY_TYPE_DEF(CRD$Calibration), module, "CRD$Calibration", 0);
        }

        void t_CRD$Calibration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "class_", make_descriptor(CRD$Calibration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "wrapfn_", make_descriptor(t_CRD$Calibration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Calibration::initializeClass, 1)))
            return NULL;
          return t_CRD$Calibration::wrap_Object(CRD$Calibration(((t_CRD$Calibration *) arg)->object.this$));
        }
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Calibration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$Calibration object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$Calibration(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDelayShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpan());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeOfData());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$Calibration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDelayShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpan());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeOfData());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
