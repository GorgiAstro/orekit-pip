#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldStepNormalizer::class$ = NULL;
        jmethodID *FieldStepNormalizer::mids$ = NULL;
        bool FieldStepNormalizer::live$ = false;

        jclass FieldStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87105576c0f42e5e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;)V");
            mids$[mid_init$_51301a8624eb8a31] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_4c94baa2fda3d373] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_3f72002b9371a037] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_22d6c75b64070b54] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_f31e7e3a46e05334] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87105576c0f42e5e, a0, a1.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_51301a8624eb8a31, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c94baa2fda3d373, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f72002b9371a037, a0, a1.this$, a2.this$, a3.this$)) {}

        void FieldStepNormalizer::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_22d6c75b64070b54], a0.this$);
        }

        void FieldStepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_f31e7e3a46e05334], a0.this$);
        }

        void FieldStepNormalizer::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args);
        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepNormalizer)[] = {
          { Py_tp_methods, t_FieldStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldStepNormalizer_init_ },
          { Py_tp_getset, t_FieldStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepNormalizer, t_FieldStepNormalizer, FieldStepNormalizer);
        PyObject *t_FieldStepNormalizer::wrap_Object(const FieldStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepNormalizer), &PY_TYPE_DEF(FieldStepNormalizer), module, "FieldStepNormalizer", 0);
        }

        void t_FieldStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "class_", make_descriptor(FieldStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "wrapfn_", make_descriptor(t_FieldStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldStepNormalizer::wrap_Object(FieldStepNormalizer(((t_FieldStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$IdentityPreconditioner::live$ = false;

            jclass NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_precondition_96bbba26ca51c0d1] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$IdentityPreconditioner::NonLinearConjugateGradientOptimizer$IdentityPreconditioner() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            JArray< jdouble > NonLinearConjugateGradientOptimizer$IdentityPreconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_96bbba26ca51c0d1], a0.this$, a1.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), module, "NonLinearConjugateGradientOptimizer$IdentityPreconditioner", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(NonLinearConjugateGradientOptimizer$IdentityPreconditioner(((t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds)
            {
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object((jobject) NULL);

              INT_CALL(object = NonLinearConjugateGradientOptimizer$IdentityPreconditioner());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
              return NULL;
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonal::class$ = NULL;
            jmethodID *DSSTZonal::mids$ = NULL;
            bool DSSTZonal::live$ = false;
            ::java::lang::String *DSSTZonal::SHORT_PERIOD_PREFIX = NULL;

            jclass DSSTZonal::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a30010a3362089e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_c746a94bc718e759] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;III)V");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_getProvider_137abdb234636c0e] = env->getMethodID(cls, "getProvider", "()Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a30010a3362089e6, a0.this$)) {}

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c746a94bc718e759, a0.this$, a1, a2, a3)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider DSSTZonal::getProvider() const
            {
              return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_137abdb234636c0e]));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTZonal::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
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
            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg);
            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data);
            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data);
            static PyGetSetDef t_DSSTZonal__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonal, parametersDrivers),
              DECLARE_GET_FIELD(t_DSSTZonal, provider),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonal__methods_[] = {
              DECLARE_METHOD(t_DSSTZonal, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, getProvider, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTZonal, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonal)[] = {
              { Py_tp_methods, t_DSSTZonal__methods_ },
              { Py_tp_init, (void *) t_DSSTZonal_init_ },
              { Py_tp_getset, t_DSSTZonal__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonal)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTZonal, t_DSSTZonal, DSSTZonal);

            void t_DSSTZonal::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonal), &PY_TYPE_DEF(DSSTZonal), module, "DSSTZonal", 0);
            }

            void t_DSSTZonal::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "class_", make_descriptor(DSSTZonal::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "wrapfn_", make_descriptor(t_DSSTZonal::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTZonal::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTZonal::SHORT_PERIOD_PREFIX)));
            }

            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonal::initializeClass, 1)))
                return NULL;
              return t_DSSTZonal::wrap_Object(DSSTZonal(((t_DSSTZonal *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonal::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                  {
                    INT_CALL(object = DSSTZonal(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  jint a1;
                  jint a2;
                  jint a3;
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "kIII", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTZonal(a0, a1, a2, a3));
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

            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);
              OBJ_CALL(result = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
              OBJ_CALL(value = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameDummyAlmanac::class$ = NULL;
          jmethodID *SubFrameDummyAlmanac::mids$ = NULL;
          bool SubFrameDummyAlmanac::live$ = false;

          jclass SubFrameDummyAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrameDummyAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameDummyAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameDummyAlmanac, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameDummyAlmanac)[] = {
            { Py_tp_methods, t_SubFrameDummyAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameDummyAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameDummyAlmanac, t_SubFrameDummyAlmanac, SubFrameDummyAlmanac);

          void t_SubFrameDummyAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameDummyAlmanac), &PY_TYPE_DEF(SubFrameDummyAlmanac), module, "SubFrameDummyAlmanac", 0);
          }

          void t_SubFrameDummyAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "class_", make_descriptor(SubFrameDummyAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "wrapfn_", make_descriptor(t_SubFrameDummyAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameDummyAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameDummyAlmanac::wrap_Object(SubFrameDummyAlmanac(((t_SubFrameDummyAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameDummyAlmanac::initializeClass, 0))
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02::class$ = NULL;
              jmethodID *SsrIgm02::mids$ = NULL;
              bool SsrIgm02::live$ = false;

              jclass SsrIgm02::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9a13639c682577c3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm02Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm02Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02::SsrIgm02(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_9a13639c682577c3, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm02::getSsrIgm02Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm02Data_6f5a75ccd8c04465]));
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
              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args);
              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self);
              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data);
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data);
              static PyGetSetDef t_SsrIgm02__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm02, ssrIgm02Data),
                DECLARE_GET_FIELD(t_SsrIgm02, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm02, getSsrIgm02Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02)[] = {
                { Py_tp_methods, t_SsrIgm02__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02_init_ },
                { Py_tp_getset, t_SsrIgm02__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm02, t_SsrIgm02, SsrIgm02);
              PyObject *t_SsrIgm02::wrap_Object(const SsrIgm02& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm02::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm02::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02), &PY_TYPE_DEF(SsrIgm02), module, "SsrIgm02", 0);
              }

              void t_SsrIgm02::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "class_", make_descriptor(SsrIgm02::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "wrapfn_", make_descriptor(t_SsrIgm02::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02::wrap_Object(SsrIgm02(((t_SsrIgm02 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm02 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm02(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *ModelObserver::class$ = NULL;
        jmethodID *ModelObserver::mids$ = NULL;
        bool ModelObserver::live$ = false;

        jclass ModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/ModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modelCalled_098d286a550578c0] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ModelObserver::modelCalled(const JArray< ::org::orekit::orbits::Orbit > & a0, const ::java::util::Map & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_modelCalled_098d286a550578c0], a0.this$, a1.this$);
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
      namespace leastsquares {
        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args);

        static PyMethodDef t_ModelObserver__methods_[] = {
          DECLARE_METHOD(t_ModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, modelCalled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ModelObserver)[] = {
          { Py_tp_methods, t_ModelObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ModelObserver, t_ModelObserver, ModelObserver);

        void t_ModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(ModelObserver), &PY_TYPE_DEF(ModelObserver), module, "ModelObserver", 0);
        }

        void t_ModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "class_", make_descriptor(ModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "wrapfn_", make_descriptor(t_ModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ModelObserver::initializeClass, 1)))
            return NULL;
          return t_ModelObserver::wrap_Object(ModelObserver(((t_ModelObserver *) arg)->object.this$));
        }
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args)
        {
          JArray< ::org::orekit::orbits::Orbit > a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[kK", ::org::orekit::orbits::Orbit::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(self->object.modelCalled(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "modelCalled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonGenerator::class$ = NULL;
            jmethodID *PythonGenerator::mids$ = NULL;
            bool PythonGenerator::live$ = false;

            jclass PythonGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_40338d1d67048bfb] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_40338d1d67048bfb] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_b3e3531a0f06efb9] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e8f51f84167aafbd] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_d0bc48d5b00dc40c] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_d0bc48d5b00dc40c] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_11b109bd155ca898] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_66298c6188053be6] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_11b109bd155ca898] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0fa09c18fee449d5] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_siToCcsdsName_92807efd57acb082] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_d68f2e10a4896937] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_34ebc3df083d2284] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_de3e021e7266b71e] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_ebeb70e5f85f1dc9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8e27d18ccaeb99ba] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_f12777dd1821e86a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_d298f8af5ad811ef] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_b4657dba79ed747b] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_ddc5f91684d983c2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_95abad989fa63d1a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_182383f649d6a00c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_636c0bbb96cab723] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_5e688138ffe60231] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonGenerator::PythonGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          namespace generation {
            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self);
            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args);
            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5);
            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0);
            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4);
            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0);
            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data);
            static PyGetSetDef t_PythonGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonGenerator)[] = {
              { Py_tp_methods, t_PythonGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonGenerator_init_ },
              { Py_tp_getset, t_PythonGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonGenerator, t_PythonGenerator, PythonGenerator);

            void t_PythonGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonGenerator), &PY_TYPE_DEF(PythonGenerator), module, "PythonGenerator", 1);
            }

            void t_PythonGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "class_", make_descriptor(PythonGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "wrapfn_", make_descriptor(t_PythonGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "close", "()V", (void *) t_PythonGenerator_close0 },
                { "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToCalendarString1 },
                { "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString2 },
                { "dateToString", "(IIIIID)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString3 },
                { "doubleToString", "(D)Ljava/lang/String;", (void *) t_PythonGenerator_doubleToString4 },
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_endMessage5 },
                { "enterSection", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_enterSection6 },
                { "exitSection", "()Ljava/lang/String;", (void *) t_PythonGenerator_exitSection7 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonGenerator_getFormat8 },
                { "getOutputName", "()Ljava/lang/String;", (void *) t_PythonGenerator_getOutputName9 },
                { "newLine", "()V", (void *) t_PythonGenerator_newLine10 },
                { "pythonDecRef", "()V", (void *) t_PythonGenerator_pythonDecRef11 },
                { "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;", (void *) t_PythonGenerator_siToCcsdsName12 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonGenerator_startMessage13 },
                { "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;", (void *) t_PythonGenerator_unitsListToString14 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonGenerator_writeComments15 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V", (void *) t_PythonGenerator_writeEntry16 },
                { "writeEntry", "(Ljava/lang/String;CZ)V", (void *) t_PythonGenerator_writeEntry17 },
                { "writeEntry", "(Ljava/lang/String;IZ)V", (void *) t_PythonGenerator_writeEntry18 },
                { "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V", (void *) t_PythonGenerator_writeEntry19 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry20 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry21 },
                { "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry22 },
                { "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V", (void *) t_PythonGenerator_writeEntry23 },
                { "writeRawData", "(C)V", (void *) t_PythonGenerator_writeRawData24 },
                { "writeRawData", "(Ljava/lang/CharSequence;)V", (void *) t_PythonGenerator_writeRawData25 },
              };
              env->registerNatives(cls, methods, 26);
            }

            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonGenerator::wrap_Object(PythonGenerator(((t_PythonGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds)
            {
              PythonGenerator object((jobject) NULL);

              INT_CALL(object = PythonGenerator());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "close", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToCalendarString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToCalendarString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "iiiiid", (int) a0, (int) a1, (int) a2, (int) a3, (int) a4, (double) a5);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "doubleToString", "d", (double) a0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("doubleToString", result);
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

            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "enterSection", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "exitSection", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("exitSection", result);
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

            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getOutputName", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getOutputName", result);
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

            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "newLine", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "siToCcsdsName", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("siToCcsdsName", result);
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

            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "unitsListToString", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("unitsListToString", result);
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

            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Enum::wrap_Object(::java::lang::Enum(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = c2p(a1);;
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OiO", o0, (int) a1, o2);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Double::wrap_Object(::java::lang::Double(a1));
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OdOO", o0, (double) a1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a1));
              PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *o4 = (a4 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOOO", o0, o1, o2, o3, o4);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = c2p(a0);;
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::lang::t_CharSequence::wrap_Object(::java::lang::CharSequence(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateObjectiveFunction::class$ = NULL;
        jmethodID *UnivariateObjectiveFunction::mids$ = NULL;
        bool UnivariateObjectiveFunction::live$ = false;

        jclass UnivariateObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c830af86b0bf906b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getObjectiveFunction_5387240bee5b3603] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateObjectiveFunction::UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c830af86b0bf906b, a0.this$)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariateObjectiveFunction::getObjectiveFunction() const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_5387240bee5b3603]));
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
      namespace univariate {
        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self);
        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data);
        static PyGetSetDef t_UnivariateObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateObjectiveFunction, objectiveFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, getObjectiveFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateObjectiveFunction)[] = {
          { Py_tp_methods, t_UnivariateObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_UnivariateObjectiveFunction_init_ },
          { Py_tp_getset, t_UnivariateObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateObjectiveFunction, t_UnivariateObjectiveFunction, UnivariateObjectiveFunction);

        void t_UnivariateObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateObjectiveFunction), &PY_TYPE_DEF(UnivariateObjectiveFunction), module, "UnivariateObjectiveFunction", 0);
        }

        void t_UnivariateObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "class_", make_descriptor(UnivariateObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "wrapfn_", make_descriptor(t_UnivariateObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateObjectiveFunction::wrap_Object(UnivariateObjectiveFunction(((t_UnivariateObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          UnivariateObjectiveFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            INT_CALL(object = UnivariateObjectiveFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self)
        {
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::analysis::UnivariateFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *FieldButcherArrayProvider::class$ = NULL;
        jmethodID *FieldButcherArrayProvider::mids$ = NULL;
        bool FieldButcherArrayProvider::live$ = false;

        jclass FieldButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/FieldButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldButcherArrayProvider::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args);
        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data);
        static PyGetSetDef t_FieldButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, c),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_FieldButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldButcherArrayProvider)[] = {
          { Py_tp_methods, t_FieldButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldButcherArrayProvider, t_FieldButcherArrayProvider, FieldButcherArrayProvider);
        PyObject *t_FieldButcherArrayProvider::wrap_Object(const FieldButcherArrayProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldButcherArrayProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldButcherArrayProvider), &PY_TYPE_DEF(FieldButcherArrayProvider), module, "FieldButcherArrayProvider", 0);
        }

        void t_FieldButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "class_", make_descriptor(FieldButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "wrapfn_", make_descriptor(t_FieldButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_FieldButcherArrayProvider::wrap_Object(FieldButcherArrayProvider(((t_FieldButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexLoader.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/util/Map.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/util/SortedSet.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexLoader::class$ = NULL;
        jmethodID *SinexLoader::mids$ = NULL;
        bool SinexLoader::live$ = false;

        jclass SinexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_579dcb2bf229954b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
            mids$[mid_init$_6889f18263b76403] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_init$_4449ecb3aa08e27f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_fillHistory_fcb7f5d6983b9f18] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
            mids$[mid_getCreationDate_85703d13e302437e] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDcbSatellite_4f9c8feccc3d9a44] = env->getMethodID(cls, "getDcbSatellite", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbSatellite;");
            mids$[mid_getDcbStation_2a0ca7547eaf333a] = env->getMethodID(cls, "getDcbStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbStation;");
            mids$[mid_getFileEpochEndTime_85703d13e302437e] = env->getMethodID(cls, "getFileEpochEndTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFileEpochStartTime_85703d13e302437e] = env->getMethodID(cls, "getFileEpochStartTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getITRFVersion_8a73c81b6e5084ce] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");
            mids$[mid_getParsedEop_6f5a75ccd8c04465] = env->getMethodID(cls, "getParsedEop", "()Ljava/util/Map;");
            mids$[mid_getStation_07ba7e9f9a463aac] = env->getMethodID(cls, "getStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station;");
            mids$[mid_getStations_6f5a75ccd8c04465] = env->getMethodID(cls, "getStations", "()Ljava/util/Map;");
            mids$[mid_setITRFVersion_99803b0791f320ff] = env->getMethodID(cls, "setITRFVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexLoader::SinexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_579dcb2bf229954b, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6889f18263b76403, a0.this$, a1.this$)) {}

        SinexLoader::SinexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4449ecb3aa08e27f, a0.this$, a1.this$, a2.this$)) {}

        void SinexLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fillHistory_fcb7f5d6983b9f18], a0.this$, a1.this$);
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getCreationDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_85703d13e302437e]));
        }

        ::org::orekit::files::sinex::DcbSatellite SinexLoader::getDcbSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbSatellite(env->callObjectMethod(this$, mids$[mid_getDcbSatellite_4f9c8feccc3d9a44], a0.this$));
        }

        ::org::orekit::files::sinex::DcbStation SinexLoader::getDcbStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbStation(env->callObjectMethod(this$, mids$[mid_getDcbStation_2a0ca7547eaf333a], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochEndTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochEndTime_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochStartTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochStartTime_85703d13e302437e]));
        }

        ::org::orekit::frames::ITRFVersion SinexLoader::getITRFVersion() const
        {
          return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_8a73c81b6e5084ce]));
        }

        ::java::util::Map SinexLoader::getParsedEop() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParsedEop_6f5a75ccd8c04465]));
        }

        ::org::orekit::files::sinex::Station SinexLoader::getStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::Station(env->callObjectMethod(this$, mids$[mid_getStation_07ba7e9f9a463aac], a0.this$));
        }

        ::java::util::Map SinexLoader::getStations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getStations_6f5a75ccd8c04465]));
        }

        void SinexLoader::setITRFVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setITRFVersion_99803b0791f320ff], a0);
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
        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args);
        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self);
        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data);
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data);
        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data);
        static PyGetSetDef t_SinexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_SinexLoader, creationDate),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochEndTime),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochStartTime),
          DECLARE_GETSET_FIELD(t_SinexLoader, iTRFVersion),
          DECLARE_GET_FIELD(t_SinexLoader, parsedEop),
          DECLARE_GET_FIELD(t_SinexLoader, stations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexLoader__methods_[] = {
          DECLARE_METHOD(t_SinexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, fillHistory, METH_VARARGS),
          DECLARE_METHOD(t_SinexLoader, getCreationDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getDcbSatellite, METH_O),
          DECLARE_METHOD(t_SinexLoader, getDcbStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getFileEpochEndTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getFileEpochStartTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getITRFVersion, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getParsedEop, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getStations, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, setITRFVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexLoader)[] = {
          { Py_tp_methods, t_SinexLoader__methods_ },
          { Py_tp_init, (void *) t_SinexLoader_init_ },
          { Py_tp_getset, t_SinexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexLoader, t_SinexLoader, SinexLoader);

        void t_SinexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexLoader), &PY_TYPE_DEF(SinexLoader), module, "SinexLoader", 0);
        }

        void t_SinexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "class_", make_descriptor(SinexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "wrapfn_", make_descriptor(t_SinexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexLoader::initializeClass, 1)))
            return NULL;
          return t_SinexLoader::wrap_Object(SinexLoader(((t_SinexLoader *) arg)->object.this$));
        }
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScales a1((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SinexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScales a2((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SinexLoader(a0, a1, a2));
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

        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::SortedSet a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
          {
            OBJ_CALL(self->object.fillHistory(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
          return NULL;
        }

        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbSatellite result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbSatellite(a0));
            return ::org::orekit::files::sinex::t_DcbSatellite::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbSatellite", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbStation result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbStation(a0));
            return ::org::orekit::files::sinex::t_DcbStation::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self)
        {
          ::org::orekit::frames::ITRFVersion result((jobject) NULL);
          OBJ_CALL(result = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate), ::org::orekit::files::sinex::PY_TYPE(SinexEopEntry));
        }

        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::Station result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getStation(a0));
            return ::org::orekit::files::sinex::t_Station::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sinex::PY_TYPE(Station));
        }

        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setITRFVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setITRFVersion", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data)
        {
          ::org::orekit::frames::ITRFVersion value((jobject) NULL);
          OBJ_CALL(value = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
        }
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setITRFVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iTRFVersion", arg);
          return -1;
        }

        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PolynomialRotation::class$ = NULL;
        jmethodID *PolynomialRotation::mids$ = NULL;
        bool PolynomialRotation::live$ = false;

        jclass PolynomialRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PolynomialRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2b5df60ab5fcc3a1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_init$_8a73e3626e76fc00] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_5bf59b7055ded983] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_ff297ae5ca0c9136] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b5df60ab5fcc3a1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a73e3626e76fc00, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::stream::Stream PolynomialRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_5bf59b7055ded983], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_ff297ae5ca0c9136], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self);
        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args);
        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data);
        static PyGetSetDef t_PolynomialRotation__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialRotation__methods_[] = {
          DECLARE_METHOD(t_PolynomialRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialRotation)[] = {
          { Py_tp_methods, t_PolynomialRotation__methods_ },
          { Py_tp_init, (void *) t_PolynomialRotation_init_ },
          { Py_tp_getset, t_PolynomialRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialRotation, t_PolynomialRotation, PolynomialRotation);

        void t_PolynomialRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialRotation), &PY_TYPE_DEF(PolynomialRotation), module, "PolynomialRotation", 0);
        }

        void t_PolynomialRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "class_", make_descriptor(PolynomialRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "wrapfn_", make_descriptor(t_PolynomialRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialRotation::initializeClass, 1)))
            return NULL;
          return t_PolynomialRotation::wrap_Object(PolynomialRotation(((t_PolynomialRotation *) arg)->object.this$));
        }
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skk[D", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
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

        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Tile::class$ = NULL;
          jmethodID *Tile::mids$ = NULL;
          bool Tile::live$ = false;

          jclass Tile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Tile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7c60a79ecda42317] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getCenter_82d0a9bcd06489bb] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getInterpolatedPoint_0003e28664361cbf] = env->getMethodID(cls, "getInterpolatedPoint", "(DD)Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getVertices_4d110bb7a71cb027] = env->getMethodID(cls, "getVertices", "()[Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tile::Tile(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2, const ::org::orekit::bodies::GeodeticPoint & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c60a79ecda42317, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::orekit::bodies::GeodeticPoint Tile::getCenter() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getCenter_82d0a9bcd06489bb]));
          }

          ::org::orekit::bodies::GeodeticPoint Tile::getInterpolatedPoint(jdouble a0, jdouble a1) const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getInterpolatedPoint_0003e28664361cbf], a0, a1));
          }

          JArray< ::org::orekit::bodies::GeodeticPoint > Tile::getVertices() const
          {
            return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_getVertices_4d110bb7a71cb027]));
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
        namespace tessellation {
          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tile_getCenter(t_Tile *self);
          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args);
          static PyObject *t_Tile_getVertices(t_Tile *self);
          static PyObject *t_Tile_get__center(t_Tile *self, void *data);
          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data);
          static PyGetSetDef t_Tile__fields_[] = {
            DECLARE_GET_FIELD(t_Tile, center),
            DECLARE_GET_FIELD(t_Tile, vertices),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tile__methods_[] = {
            DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, getCenter, METH_NOARGS),
            DECLARE_METHOD(t_Tile, getInterpolatedPoint, METH_VARARGS),
            DECLARE_METHOD(t_Tile, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
            { Py_tp_methods, t_Tile__methods_ },
            { Py_tp_init, (void *) t_Tile_init_ },
            { Py_tp_getset, t_Tile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tile)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tile, t_Tile, Tile);

          void t_Tile::install(PyObject *module)
          {
            installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          }

          void t_Tile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
              return NULL;
            return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
          }
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
            Tile object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Tile(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Tile_getCenter(t_Tile *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getInterpolatedPoint(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterpolatedPoint", args);
            return NULL;
          }

          static PyObject *t_Tile_getVertices(t_Tile *self)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }

          static PyObject *t_Tile_get__center(t_Tile *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposer::class$ = NULL;
      jmethodID *SingularValueDecomposer::mids$ = NULL;
      bool SingularValueDecomposer::live$ = false;

      jclass SingularValueDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_decompose_6832546eac694082] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposer::SingularValueDecomposer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_6832546eac694082], a0.this$));
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
      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg);

      static PyMethodDef t_SingularValueDecomposer__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposer)[] = {
        { Py_tp_methods, t_SingularValueDecomposer__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposer, t_SingularValueDecomposer, SingularValueDecomposer);

      void t_SingularValueDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposer), &PY_TYPE_DEF(SingularValueDecomposer), module, "SingularValueDecomposer", 0);
      }

      void t_SingularValueDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "class_", make_descriptor(SingularValueDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "wrapfn_", make_descriptor(t_SingularValueDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposer::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposer::wrap_Object(SingularValueDecomposer(((t_SingularValueDecomposer *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds)
      {
        SingularValueDecomposer object((jobject) NULL);

        INT_CALL(object = SingularValueDecomposer());
        self->object = object;

        return 0;
      }

      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg)
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
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AlignmentDetector::class$ = NULL;
        jmethodID *AlignmentDetector::mids$ = NULL;
        bool AlignmentDetector::live$ = false;

        jclass AlignmentDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AlignmentDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b7d008191a2939f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_cf0e2d78b0355533] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_a7bf0432bc4b56f6] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAlignAngle_dff5885c2c873297] = env->getMethodID(cls, "getAlignAngle", "()D");
            mids$[mid_getPVCoordinatesProvider_903aca6bb4523e29] = env->getMethodID(cls, "getPVCoordinatesProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_df65d8dc2cbadb50] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AlignmentDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlignmentDetector::AlignmentDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b7d008191a2939f8, a0.this$, a1.this$, a2)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cf0e2d78b0355533, a0, a1.this$, a2.this$, a3)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, jdouble a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a7bf0432bc4b56f6, a0, a1, a2.this$, a3)) {}

        jdouble AlignmentDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble AlignmentDetector::getAlignAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlignAngle_dff5885c2c873297]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AlignmentDetector::getPVCoordinatesProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVCoordinatesProvider_903aca6bb4523e29]));
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
        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args);
        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args);
        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data);
        static PyGetSetDef t_AlignmentDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AlignmentDetector, alignAngle),
          DECLARE_GET_FIELD(t_AlignmentDetector, pVCoordinatesProvider),
          DECLARE_GET_FIELD(t_AlignmentDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlignmentDetector__methods_[] = {
          DECLARE_METHOD(t_AlignmentDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, getAlignAngle, METH_NOARGS),
          DECLARE_METHOD(t_AlignmentDetector, getPVCoordinatesProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlignmentDetector)[] = {
          { Py_tp_methods, t_AlignmentDetector__methods_ },
          { Py_tp_init, (void *) t_AlignmentDetector_init_ },
          { Py_tp_getset, t_AlignmentDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlignmentDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AlignmentDetector, t_AlignmentDetector, AlignmentDetector);
        PyObject *t_AlignmentDetector::wrap_Object(const AlignmentDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlignmentDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlignmentDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AlignmentDetector), &PY_TYPE_DEF(AlignmentDetector), module, "AlignmentDetector", 0);
        }

        void t_AlignmentDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "class_", make_descriptor(AlignmentDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "wrapfn_", make_descriptor(t_AlignmentDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlignmentDetector::initializeClass, 1)))
            return NULL;
          return t_AlignmentDetector::wrap_Object(AlignmentDetector(((t_AlignmentDetector *) arg)->object.this$));
        }
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlignmentDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
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

        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AlignmentDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *NewtonRaphsonSolver::class$ = NULL;
        jmethodID *NewtonRaphsonSolver::mids$ = NULL;
        bool NewtonRaphsonSolver::live$ = false;

        jclass NewtonRaphsonSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/NewtonRaphsonSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_solve_b04629e6aaf4891e] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DD)D");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonRaphsonSolver::NewtonRaphsonSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        NewtonRaphsonSolver::NewtonRaphsonSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble NewtonRaphsonSolver::solve(jint a0, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_b04629e6aaf4891e], a0, a1.this$, a2, a3);
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
      namespace solvers {
        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args);
        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args);
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data);
        static PyGetSetDef t_NewtonRaphsonSolver__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonRaphsonSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonRaphsonSolver__methods_[] = {
          DECLARE_METHOD(t_NewtonRaphsonSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonRaphsonSolver)[] = {
          { Py_tp_methods, t_NewtonRaphsonSolver__methods_ },
          { Py_tp_init, (void *) t_NewtonRaphsonSolver_init_ },
          { Py_tp_getset, t_NewtonRaphsonSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonRaphsonSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver),
          NULL
        };

        DEFINE_TYPE(NewtonRaphsonSolver, t_NewtonRaphsonSolver, NewtonRaphsonSolver);
        PyObject *t_NewtonRaphsonSolver::wrap_Object(const NewtonRaphsonSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NewtonRaphsonSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NewtonRaphsonSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonRaphsonSolver), &PY_TYPE_DEF(NewtonRaphsonSolver), module, "NewtonRaphsonSolver", 0);
        }

        void t_NewtonRaphsonSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "class_", make_descriptor(NewtonRaphsonSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "wrapfn_", make_descriptor(t_NewtonRaphsonSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonRaphsonSolver::initializeClass, 1)))
            return NULL;
          return t_NewtonRaphsonSolver::wrap_Object(NewtonRaphsonSolver(((t_NewtonRaphsonSolver *) arg)->object.this$));
        }
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonRaphsonSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NewtonRaphsonSolver object((jobject) NULL);

              INT_CALL(object = NewtonRaphsonSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              NewtonRaphsonSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = NewtonRaphsonSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NewtonRaphsonSolver), (PyObject *) self, "solve", args, 2);
        }
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagatorBuilder::class$ = NULL;
        jmethodID *GLONASSNumericalPropagatorBuilder::mids$ = NULL;
        bool GLONASSNumericalPropagatorBuilder::live$ = false;

        jclass GLONASSNumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b497ba6a57c1bea6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Z)V");
            mids$[mid_init$_5ac92562e210e61f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_attitudeProvider_c29034d29782ca95] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_build_38606dad37802ca8] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
            mids$[mid_eci_5967e5ad557b9333] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_mass_fd7ec11afcb405eb] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b497ba6a57c1bea6, a0.this$, a1.this$, a2)) {}

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ac92562e210e61f, a0.this$, a1.this$, a2, a3.this$)) {}

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_c29034d29782ca95], a0.this$));
        }

        ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNumericalPropagatorBuilder::build() const
        {
          return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_build_38606dad37802ca8]));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_5967e5ad557b9333], a0.this$));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::mass(jdouble a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_fd7ec11afcb405eb], a0));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);

        static PyMethodDef t_GLONASSNumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, attitudeProvider, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, eci, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, mass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagatorBuilder, t_GLONASSNumericalPropagatorBuilder, GLONASSNumericalPropagatorBuilder);

        void t_GLONASSNumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagatorBuilder), &PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder), module, "GLONASSNumericalPropagatorBuilder", 0);
        }

        void t_GLONASSNumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "class_", make_descriptor(GLONASSNumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagatorBuilder::wrap_Object(GLONASSNumericalPropagatorBuilder(((t_GLONASSNumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.attitudeProvider(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.eci(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eci", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.mass(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldCombinedDerivatives::class$ = NULL;
        jmethodID *FieldCombinedDerivatives::mids$ = NULL;
        bool FieldCombinedDerivatives::live$ = false;

        jclass FieldCombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldCombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cbc98e7d0c0477db] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAdditionalDerivatives_226a0b2040b1d2e1] = env->getMethodID(cls, "getAdditionalDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMainStateDerivativesIncrements_226a0b2040b1d2e1] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldCombinedDerivatives::FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cbc98e7d0c0477db, a0.this$, a1.this$)) {}

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_226a0b2040b1d2e1]));
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
        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args);
        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data);
        static PyGetSetDef t_FieldCombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, mainStateDerivativesIncrements),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldCombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_FieldCombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldCombinedDerivatives)[] = {
          { Py_tp_methods, t_FieldCombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_FieldCombinedDerivatives_init_ },
          { Py_tp_getset, t_FieldCombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldCombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldCombinedDerivatives, t_FieldCombinedDerivatives, FieldCombinedDerivatives);
        PyObject *t_FieldCombinedDerivatives::wrap_Object(const FieldCombinedDerivatives& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldCombinedDerivatives::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldCombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldCombinedDerivatives), &PY_TYPE_DEF(FieldCombinedDerivatives), module, "FieldCombinedDerivatives", 0);
        }

        void t_FieldCombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "class_", make_descriptor(FieldCombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "wrapfn_", make_descriptor(t_FieldCombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldCombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_FieldCombinedDerivatives::wrap_Object(FieldCombinedDerivatives(((t_FieldCombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldCombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldCombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldCombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystem::class$ = NULL;
          jmethodID *TideSystem::mids$ = NULL;
          bool TideSystem::live$ = false;
          TideSystem *TideSystem::TIDE_FREE = NULL;
          TideSystem *TideSystem::UNKNOWN = NULL;
          TideSystem *TideSystem::ZERO_TIDE = NULL;

          jclass TideSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_c31cb90652bcfc12] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_values_73dc534173d04b87] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TIDE_FREE = new TideSystem(env->getStaticObjectField(cls, "TIDE_FREE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              UNKNOWN = new TideSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              ZERO_TIDE = new TideSystem(env->getStaticObjectField(cls, "ZERO_TIDE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TideSystem TideSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TideSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c31cb90652bcfc12], a0.this$));
          }

          JArray< TideSystem > TideSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TideSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_73dc534173d04b87]));
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
          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args);
          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TideSystem_values(PyTypeObject *type);
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data);
          static PyGetSetDef t_TideSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystem__methods_[] = {
            DECLARE_METHOD(t_TideSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TideSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystem)[] = {
            { Py_tp_methods, t_TideSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TideSystem, t_TideSystem, TideSystem);
          PyObject *t_TideSystem::wrap_Object(const TideSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TideSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TideSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystem), &PY_TYPE_DEF(TideSystem), module, "TideSystem", 0);
          }

          void t_TideSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "class_", make_descriptor(TideSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "wrapfn_", make_descriptor(t_TideSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TideSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "TIDE_FREE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::TIDE_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "UNKNOWN", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::UNKNOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "ZERO_TIDE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::ZERO_TIDE)));
          }

          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystem::initializeClass, 1)))
              return NULL;
            return t_TideSystem::wrap_Object(TideSystem(((t_TideSystem *) arg)->object.this$));
          }
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TideSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::valueOf(a0));
              return t_TideSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TideSystem_values(PyTypeObject *type)
          {
            JArray< TideSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TideSystem::wrap_jobject);
          }
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data)
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
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cos::class$ = NULL;
        jmethodID *Cos::mids$ = NULL;
        bool Cos::live$ = false;

        jclass Cos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cos::Cos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Cos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cos_value(t_Cos *self, PyObject *args);

        static PyMethodDef t_Cos__methods_[] = {
          DECLARE_METHOD(t_Cos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cos)[] = {
          { Py_tp_methods, t_Cos__methods_ },
          { Py_tp_init, (void *) t_Cos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cos, t_Cos, Cos);

        void t_Cos::install(PyObject *module)
        {
          installType(&PY_TYPE(Cos), &PY_TYPE_DEF(Cos), module, "Cos", 0);
        }

        void t_Cos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "class_", make_descriptor(Cos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "wrapfn_", make_descriptor(t_Cos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cos::initializeClass, 1)))
            return NULL;
          return t_Cos::wrap_Object(Cos(((t_Cos *) arg)->object.this$));
        }
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds)
        {
          Cos object((jobject) NULL);

          INT_CALL(object = Cos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cos_value(t_Cos *self, PyObject *args)
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader$LineParameters::class$ = NULL;
            jmethodID *DtcDataLoader$LineParameters::mids$ = NULL;
            bool DtcDataLoader$LineParameters::live$ = false;

            jclass DtcDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fdc72bfdba154d74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getDSTDTC_dff5885c2c873297] = env->getMethodID(cls, "getDSTDTC", "()D");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader$LineParameters::DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdc72bfdba154d74, a0.this$, a1)) {}

            jdouble DtcDataLoader$LineParameters::getDSTDTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data);
            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_DtcDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, dSTDTC),
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, date),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDSTDTC, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_DtcDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_DtcDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader$LineParameters, t_DtcDataLoader$LineParameters, DtcDataLoader$LineParameters);

            void t_DtcDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader$LineParameters), &PY_TYPE_DEF(DtcDataLoader$LineParameters), module, "DtcDataLoader$LineParameters", 0);
            }

            void t_DtcDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "class_", make_descriptor(DtcDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "wrapfn_", make_descriptor(t_DtcDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader$LineParameters::wrap_Object(DtcDataLoader$LineParameters(((t_DtcDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              DtcDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DtcDataLoader$LineParameters(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitType::class$ = NULL;
      jmethodID *OrbitType::mids$ = NULL;
      bool OrbitType::live$ = false;
      ::java::lang::String *OrbitType::A = NULL;
      OrbitType *OrbitType::CARTESIAN = NULL;
      OrbitType *OrbitType::CIRCULAR = NULL;
      ::java::lang::String *OrbitType::ECC = NULL;
      ::java::lang::String *OrbitType::ECC_ANOM = NULL;
      ::java::lang::String *OrbitType::ECC_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::ECC_LON_ARG = NULL;
      OrbitType *OrbitType::EQUINOCTIAL = NULL;
      ::java::lang::String *OrbitType::E_X = NULL;
      ::java::lang::String *OrbitType::E_Y = NULL;
      ::java::lang::String *OrbitType::H_X = NULL;
      ::java::lang::String *OrbitType::H_Y = NULL;
      ::java::lang::String *OrbitType::INC = NULL;
      OrbitType *OrbitType::KEPLERIAN = NULL;
      ::java::lang::String *OrbitType::MEAN_ANOM = NULL;
      ::java::lang::String *OrbitType::MEAN_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::MEAN_LON_ARG = NULL;
      ::java::lang::String *OrbitType::PA = NULL;
      ::java::lang::String *OrbitType::POS_X = NULL;
      ::java::lang::String *OrbitType::POS_Y = NULL;
      ::java::lang::String *OrbitType::POS_Z = NULL;
      ::java::lang::String *OrbitType::RAAN = NULL;
      ::java::lang::String *OrbitType::TRUE_ANOM = NULL;
      ::java::lang::String *OrbitType::TRUE_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::TRUE_LON_ARG = NULL;
      ::java::lang::String *OrbitType::VEL_X = NULL;
      ::java::lang::String *OrbitType::VEL_Y = NULL;
      ::java::lang::String *OrbitType::VEL_Z = NULL;

      jclass OrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToFieldOrbit_864f8e04b56fc910] = env->getMethodID(cls, "convertToFieldOrbit", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_4af4c6daa80bd4b5] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_58efaeb159657907] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_getDrivers_42a44f5869ea00ce] = env->getMethodID(cls, "getDrivers", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/utils/ParameterDriversList;");
          mids$[mid_isPositionAngleBased_b108b35ef48e27bd] = env->getMethodID(cls, "isPositionAngleBased", "()Z");
          mids$[mid_mapArrayToOrbit_224b9961b25c8b67] = env->getMethodID(cls, "mapArrayToOrbit", "([D[DLorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/frames/Frame;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_mapArrayToOrbit_d64c9807d7fa0073] = env->getMethodID(cls, "mapArrayToOrbit", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_mapOrbitToArray_000eb2abc9546b49] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[D[D)V");
          mids$[mid_mapOrbitToArray_57f5a1d6e45b457f] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_normalize_e005a63f56a3e571] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_normalize_0bafaa780f7922ce] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_valueOf_a59515854432acbe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/OrbitType;");
          mids$[mid_values_d1659fce81d7c2f6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/OrbitType;");
          mids$[mid_scale_12ab47efff96b2ed] = env->getMethodID(cls, "scale", "(DLorg/orekit/orbits/Orbit;)[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new ::java::lang::String(env->getStaticObjectField(cls, "A", "Ljava/lang/String;"));
          CARTESIAN = new OrbitType(env->getStaticObjectField(cls, "CARTESIAN", "Lorg/orekit/orbits/OrbitType;"));
          CIRCULAR = new OrbitType(env->getStaticObjectField(cls, "CIRCULAR", "Lorg/orekit/orbits/OrbitType;"));
          ECC = new ::java::lang::String(env->getStaticObjectField(cls, "ECC", "Ljava/lang/String;"));
          ECC_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_ANOM", "Ljava/lang/String;"));
          ECC_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LAT_ARG", "Ljava/lang/String;"));
          ECC_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LON_ARG", "Ljava/lang/String;"));
          EQUINOCTIAL = new OrbitType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/orbits/OrbitType;"));
          E_X = new ::java::lang::String(env->getStaticObjectField(cls, "E_X", "Ljava/lang/String;"));
          E_Y = new ::java::lang::String(env->getStaticObjectField(cls, "E_Y", "Ljava/lang/String;"));
          H_X = new ::java::lang::String(env->getStaticObjectField(cls, "H_X", "Ljava/lang/String;"));
          H_Y = new ::java::lang::String(env->getStaticObjectField(cls, "H_Y", "Ljava/lang/String;"));
          INC = new ::java::lang::String(env->getStaticObjectField(cls, "INC", "Ljava/lang/String;"));
          KEPLERIAN = new OrbitType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/orbits/OrbitType;"));
          MEAN_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_ANOM", "Ljava/lang/String;"));
          MEAN_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LAT_ARG", "Ljava/lang/String;"));
          MEAN_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LON_ARG", "Ljava/lang/String;"));
          PA = new ::java::lang::String(env->getStaticObjectField(cls, "PA", "Ljava/lang/String;"));
          POS_X = new ::java::lang::String(env->getStaticObjectField(cls, "POS_X", "Ljava/lang/String;"));
          POS_Y = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Y", "Ljava/lang/String;"));
          POS_Z = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Z", "Ljava/lang/String;"));
          RAAN = new ::java::lang::String(env->getStaticObjectField(cls, "RAAN", "Ljava/lang/String;"));
          TRUE_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_ANOM", "Ljava/lang/String;"));
          TRUE_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LAT_ARG", "Ljava/lang/String;"));
          TRUE_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LON_ARG", "Ljava/lang/String;"));
          VEL_X = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_X", "Ljava/lang/String;"));
          VEL_Y = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Y", "Ljava/lang/String;"));
          VEL_Z = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Z", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertToFieldOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertToFieldOrbit_864f8e04b56fc910], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertType(const ::org::orekit::orbits::FieldOrbit & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertType_4af4c6daa80bd4b5], a0.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::convertType(const ::org::orekit::orbits::Orbit & a0) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_convertType_58efaeb159657907], a0.this$));
      }

      ::org::orekit::utils::ParameterDriversList OrbitType::getDrivers(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getDrivers_42a44f5869ea00ce], a0, a1.this$, a2.this$));
      }

      jboolean OrbitType::isPositionAngleBased() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPositionAngleBased_b108b35ef48e27bd]);
      }

      ::org::orekit::orbits::Orbit OrbitType::mapArrayToOrbit(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_224b9961b25c8b67], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_d64c9807d7fa0073], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_000eb2abc9546b49], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_57f5a1d6e45b457f], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::normalize(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::FieldOrbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_normalize_e005a63f56a3e571], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::normalize(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_normalize_0bafaa780f7922ce], a0.this$, a1.this$));
      }

      OrbitType OrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a59515854432acbe], a0.this$));
      }

      JArray< OrbitType > OrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_d1659fce81d7c2f6]));
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
      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self);
      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrbitType_values(PyTypeObject *type);
      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data);
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data);
      static PyGetSetDef t_OrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitType, positionAngleBased),
        DECLARE_GET_FIELD(t_OrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitType__methods_[] = {
        DECLARE_METHOD(t_OrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertToFieldOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertType, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, getDrivers, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, isPositionAngleBased, METH_NOARGS),
        DECLARE_METHOD(t_OrbitType, mapArrayToOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, mapOrbitToArray, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, normalize, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitType)[] = {
        { Py_tp_methods, t_OrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrbitType, t_OrbitType, OrbitType);
      PyObject *t_OrbitType::wrap_Object(const OrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitType), &PY_TYPE_DEF(OrbitType), module, "OrbitType", 0);
      }

      void t_OrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "class_", make_descriptor(OrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "wrapfn_", make_descriptor(t_OrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "A", make_descriptor(j2p(*OrbitType::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CARTESIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CARTESIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CIRCULAR", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CIRCULAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC", make_descriptor(j2p(*OrbitType::ECC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_ANOM", make_descriptor(j2p(*OrbitType::ECC_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LAT_ARG", make_descriptor(j2p(*OrbitType::ECC_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LON_ARG", make_descriptor(j2p(*OrbitType::ECC_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "EQUINOCTIAL", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_X", make_descriptor(j2p(*OrbitType::E_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_Y", make_descriptor(j2p(*OrbitType::E_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_X", make_descriptor(j2p(*OrbitType::H_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_Y", make_descriptor(j2p(*OrbitType::H_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "INC", make_descriptor(j2p(*OrbitType::INC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "KEPLERIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::KEPLERIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_ANOM", make_descriptor(j2p(*OrbitType::MEAN_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LAT_ARG", make_descriptor(j2p(*OrbitType::MEAN_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LON_ARG", make_descriptor(j2p(*OrbitType::MEAN_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "PA", make_descriptor(j2p(*OrbitType::PA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_X", make_descriptor(j2p(*OrbitType::POS_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Y", make_descriptor(j2p(*OrbitType::POS_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Z", make_descriptor(j2p(*OrbitType::POS_Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "RAAN", make_descriptor(j2p(*OrbitType::RAAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_ANOM", make_descriptor(j2p(*OrbitType::TRUE_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LAT_ARG", make_descriptor(j2p(*OrbitType::TRUE_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LON_ARG", make_descriptor(j2p(*OrbitType::TRUE_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_X", make_descriptor(j2p(*OrbitType::VEL_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Y", make_descriptor(j2p(*OrbitType::VEL_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Z", make_descriptor(j2p(*OrbitType::VEL_Z)));
      }

      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitType::initializeClass, 1)))
          return NULL;
        return t_OrbitType::wrap_Object(OrbitType(((t_OrbitType *) arg)->object.this$));
      }
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.convertToFieldOrbit(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertToFieldOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertType", args);
        return NULL;
      }

      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

        if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getDrivers(a0, a1, a2));
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDrivers", args);
        return NULL;
      }

      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 6:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            jdouble a4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "[D[DKkDk", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "[K[KKKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapArrayToOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KK[K[K", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);

            if (!parseArgs(args, "kK[D[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapOrbitToArray", args);
        return NULL;
      }

      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "normalize", args);
        return NULL;
      }

      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::OrbitType::valueOf(a0));
          return t_OrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrbitType_values(PyTypeObject *type)
      {
        JArray< OrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::OrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_OrbitType::wrap_jobject);
      }
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorConverter::class$ = NULL;
        jmethodID *PropagatorConverter::mids$ = NULL;
        bool PropagatorConverter::live$ = false;

        jclass PropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_a2b4413ea9476c3c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_4513d66a76c09bcc] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e744c80c7015525e] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_47fabeaccf7f6a1b] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_a2b4413ea9476c3c], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_4513d66a76c09bcc], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_e744c80c7015525e], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_47fabeaccf7f6a1b], a0.this$, a1, a2, a3.this$));
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
      namespace conversion {
        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args);

        static PyMethodDef t_PropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, convert, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorConverter)[] = {
          { Py_tp_methods, t_PropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorConverter, t_PropagatorConverter, PropagatorConverter);

        void t_PropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorConverter), &PY_TYPE_DEF(PropagatorConverter), module, "PropagatorConverter", 0);
        }

        void t_PropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "class_", make_descriptor(PropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "wrapfn_", make_descriptor(t_PropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PropagatorConverter::wrap_Object(PropagatorConverter(((t_PropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContributionContext::class$ = NULL;
            jmethodID *AbstractGaussianContributionContext::mids$ = NULL;
            bool AbstractGaussianContributionContext::live$ = false;

            jclass AbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCo2AB_dff5885c2c873297] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOOA_dff5885c2c873297] = env->getMethodID(cls, "getOOA", "()D");
                mids$[mid_getOOAB_dff5885c2c873297] = env->getMethodID(cls, "getOOAB", "()D");
                mids$[mid_getOoBpo_dff5885c2c873297] = env->getMethodID(cls, "getOoBpo", "()D");
                mids$[mid_getOoMU_dff5885c2c873297] = env->getMethodID(cls, "getOoMU", "()D");
                mids$[mid_getTon2a_dff5885c2c873297] = env->getMethodID(cls, "getTon2a", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AbstractGaussianContributionContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getOOA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOA_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getOOAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOAB_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getOoBpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoBpo_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getOoMU() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoMU_dff5885c2c873297]);
            }

            jdouble AbstractGaussianContributionContext::getTon2a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTon2a_dff5885c2c873297]);
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
            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_AbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ton2a),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_AbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContributionContext, t_AbstractGaussianContributionContext, AbstractGaussianContributionContext);

            void t_AbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContributionContext), &PY_TYPE_DEF(AbstractGaussianContributionContext), module, "AbstractGaussianContributionContext", 0);
            }

            void t_AbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "class_", make_descriptor(AbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_AbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContributionContext::wrap_Object(AbstractGaussianContributionContext(((t_AbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoBpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoMU());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTon2a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoBpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoMU());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTon2a());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
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
              mids$[mid_getEvolution_062be8de687c12a1] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
              mids$[mid_getInnovation_2ea852026e26e1f5] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getPredictedMeasurements_a21ede573a286b55] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)[Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedProcess::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_062be8de687c12a1], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector UnscentedProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_2ea852026e26e1f5], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::linear::RealVector > UnscentedProcess::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::hipparchus::filtering::kalman::Measurement & a1) const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_a21ede573a286b55], a0.this$, a1.this$));
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03::class$ = NULL;
              jmethodID *SsrIgm03::mids$ = NULL;
              bool SsrIgm03::live$ = false;

              jclass SsrIgm03::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a7c0ee5e8ca605b6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm03Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm03Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03::SsrIgm03(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_a7c0ee5e8ca605b6, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm03::getSsrIgm03Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm03Data_6f5a75ccd8c04465]));
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
              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args);
              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self);
              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data);
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data);
              static PyGetSetDef t_SsrIgm03__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm03, ssrIgm03Data),
                DECLARE_GET_FIELD(t_SsrIgm03, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm03, getSsrIgm03Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03)[] = {
                { Py_tp_methods, t_SsrIgm03__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03_init_ },
                { Py_tp_getset, t_SsrIgm03__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm03, t_SsrIgm03, SsrIgm03);
              PyObject *t_SsrIgm03::wrap_Object(const SsrIgm03& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm03::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm03::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03), &PY_TYPE_DEF(SsrIgm03), module, "SsrIgm03", 0);
              }

              void t_SsrIgm03::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "class_", make_descriptor(SsrIgm03::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "wrapfn_", make_descriptor(t_SsrIgm03::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03::wrap_Object(SsrIgm03(((t_SsrIgm03 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm03 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm03(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *ConstantAzimuthAiming::class$ = NULL;
          jmethodID *ConstantAzimuthAiming::mids$ = NULL;
          bool ConstantAzimuthAiming::live$ = false;

          jclass ConstantAzimuthAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/ConstantAzimuthAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_48cd945bba9df75e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_alongTileDirection_cb13d5b31f03b28f] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_2afa36052df4765d] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantAzimuthAiming::ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48cd945bba9df75e, a0.this$, a1)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantAzimuthAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_cb13d5b31f03b28f], a0.this$, a1.this$));
          }

          ::java::util::List ConstantAzimuthAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_2afa36052df4765d]));
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
        namespace tessellation {
          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args);
          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self);
          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data);
          static PyGetSetDef t_ConstantAzimuthAiming__fields_[] = {
            DECLARE_GET_FIELD(t_ConstantAzimuthAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConstantAzimuthAiming__methods_[] = {
            DECLARE_METHOD(t_ConstantAzimuthAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantAzimuthAiming)[] = {
            { Py_tp_methods, t_ConstantAzimuthAiming__methods_ },
            { Py_tp_init, (void *) t_ConstantAzimuthAiming_init_ },
            { Py_tp_getset, t_ConstantAzimuthAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantAzimuthAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantAzimuthAiming, t_ConstantAzimuthAiming, ConstantAzimuthAiming);

          void t_ConstantAzimuthAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantAzimuthAiming), &PY_TYPE_DEF(ConstantAzimuthAiming), module, "ConstantAzimuthAiming", 0);
          }

          void t_ConstantAzimuthAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "class_", make_descriptor(ConstantAzimuthAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "wrapfn_", make_descriptor(t_ConstantAzimuthAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantAzimuthAiming::initializeClass, 1)))
              return NULL;
            return t_ConstantAzimuthAiming::wrap_Object(ConstantAzimuthAiming(((t_ConstantAzimuthAiming *) arg)->object.this$));
          }
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantAzimuthAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            jdouble a1;
            ConstantAzimuthAiming object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantAzimuthAiming(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataLoader::class$ = NULL;
      jmethodID *DataLoader::mids$ = NULL;
      bool DataLoader::live$ = false;

      jclass DataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
      }

      jboolean DataLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args);
      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self);

      static PyMethodDef t_DataLoader__methods_[] = {
        DECLARE_METHOD(t_DataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_DataLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataLoader)[] = {
        { Py_tp_methods, t_DataLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataLoader, t_DataLoader, DataLoader);

      void t_DataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(DataLoader), &PY_TYPE_DEF(DataLoader), module, "DataLoader", 0);
      }

      void t_DataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "class_", make_descriptor(DataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "wrapfn_", make_descriptor(t_DataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataLoader::initializeClass, 1)))
          return NULL;
        return t_DataLoader::wrap_Object(DataLoader(((t_DataLoader *) arg)->object.this$));
      }
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args)
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

      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *MaxGapInterpolationGrid::class$ = NULL;
            jmethodID *MaxGapInterpolationGrid::mids$ = NULL;
            bool MaxGapInterpolationGrid::live$ = false;

            jclass MaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getGridPoints_432c7f020b618085] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MaxGapInterpolationGrid::MaxGapInterpolationGrid(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

            JArray< jdouble > MaxGapInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_432c7f020b618085], a0, a1));
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
            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_MaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_MaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_MaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_MaxGapInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MaxGapInterpolationGrid, t_MaxGapInterpolationGrid, MaxGapInterpolationGrid);

            void t_MaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(MaxGapInterpolationGrid), &PY_TYPE_DEF(MaxGapInterpolationGrid), module, "MaxGapInterpolationGrid", 0);
            }

            void t_MaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "class_", make_descriptor(MaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_MaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_MaxGapInterpolationGrid::wrap_Object(MaxGapInterpolationGrid(((t_MaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              MaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MaxGapInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationDataSet::class$ = NULL;
          jmethodID *CombinedObservationDataSet::mids$ = NULL;
          bool CombinedObservationDataSet::live$ = false;

          jclass CombinedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_78879f88aa7807cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/time/AbsoluteDate;DLjava/util/List;)V");
              mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getObservationData_2afa36052df4765d] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getPrnNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getPrnNumber", "()I");
              mids$[mid_getRcvrClkOffset_dff5885c2c873297] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationDataSet::CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78879f88aa7807cd, a0.this$, a1, a2.this$, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate CombinedObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
          }

          ::java::util::List CombinedObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_2afa36052df4765d]));
          }

          jint CombinedObservationDataSet::getPrnNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrnNumber_570ce0828f81a2c1]);
          }

          jdouble CombinedObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_dff5885c2c873297]);
          }

          ::org::orekit::gnss::SatelliteSystem CombinedObservationDataSet::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
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
          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data);
          static PyGetSetDef t_CombinedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, date),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, prnNumber),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, satelliteSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getPrnNumber, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getSatelliteSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationDataSet)[] = {
            { Py_tp_methods, t_CombinedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationDataSet_init_ },
            { Py_tp_getset, t_CombinedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationDataSet, t_CombinedObservationDataSet, CombinedObservationDataSet);

          void t_CombinedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationDataSet), &PY_TYPE_DEF(CombinedObservationDataSet), module, "CombinedObservationDataSet", 0);
          }

          void t_CombinedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "class_", make_descriptor(CombinedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "wrapfn_", make_descriptor(t_CombinedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationDataSet::wrap_Object(CombinedObservationDataSet(((t_CombinedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "KIkDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CombinedObservationData));
          }

          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrnNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrnNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
