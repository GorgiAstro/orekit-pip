#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *ConstantProcessNoise::class$ = NULL;
        jmethodID *ConstantProcessNoise::mids$ = NULL;
        bool ConstantProcessNoise::live$ = false;

        jclass ConstantProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/ConstantProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_c3bc1da258610908] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getProcessNoiseMatrix_70abd86226561523] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_c3bc1da258610908, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix ConstantProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70abd86226561523], a0.this$, a1.this$));
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
        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args);

        static PyMethodDef t_ConstantProcessNoise__methods_[] = {
          DECLARE_METHOD(t_ConstantProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantProcessNoise)[] = {
          { Py_tp_methods, t_ConstantProcessNoise__methods_ },
          { Py_tp_init, (void *) t_ConstantProcessNoise_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(ConstantProcessNoise, t_ConstantProcessNoise, ConstantProcessNoise);

        void t_ConstantProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantProcessNoise), &PY_TYPE_DEF(ConstantProcessNoise), module, "ConstantProcessNoise", 0);
        }

        void t_ConstantProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "class_", make_descriptor(ConstantProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "wrapfn_", make_descriptor(t_ConstantProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantProcessNoise::initializeClass, 1)))
            return NULL;
          return t_ConstantProcessNoise::wrap_Object(ConstantProcessNoise(((t_ConstantProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = ConstantProcessNoise(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConstantProcessNoise(a0, a1));
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

        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(ConstantProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldUnivariateIntegrator::class$ = NULL;
        jmethodID *FieldUnivariateIntegrator::mids$ = NULL;
        bool FieldUnivariateIntegrator::live$ = false;

        jclass FieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_ef1d0d591cd17bf9] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint FieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jint FieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
        }

        jint FieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_d6ab429752e7c267]);
        }

        jint FieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_d6ab429752e7c267]);
        }

        jdouble FieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_ef1d0d591cd17bf9], a0, a1.this$, a2.this$, a3.this$));
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
      namespace integration {
        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_FieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_FieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateIntegrator, t_FieldUnivariateIntegrator, FieldUnivariateIntegrator);
        PyObject *t_FieldUnivariateIntegrator::wrap_Object(const FieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateIntegrator), &PY_TYPE_DEF(FieldUnivariateIntegrator), module, "FieldUnivariateIntegrator", 0);
        }

        void t_FieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "class_", make_descriptor(FieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateIntegrator::wrap_Object(FieldUnivariateIntegrator(((t_FieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/BaseRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *BaseRandomGenerator::class$ = NULL;
      jmethodID *BaseRandomGenerator::mids$ = NULL;
      bool BaseRandomGenerator::live$ = false;

      jclass BaseRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/BaseRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_1eaf6eb0a3f3163f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_clearCache_ff7cb6c242604316] = env->getMethodID(cls, "clearCache", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BaseRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint BaseRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong BaseRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_1eaf6eb0a3f3163f], a0);
      }

      void BaseRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void BaseRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
      }

      ::java::lang::String BaseRandomGenerator::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self);
      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args);
      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args);
      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_BaseRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_BaseRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_BaseRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextInt, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, nextLong, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, setSeed, METH_VARARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseRandomGenerator)[] = {
        { Py_tp_methods, t_BaseRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseRandomGenerator, t_BaseRandomGenerator, BaseRandomGenerator);

      void t_BaseRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseRandomGenerator), &PY_TYPE_DEF(BaseRandomGenerator), module, "BaseRandomGenerator", 0);
      }

      void t_BaseRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "class_", make_descriptor(BaseRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "wrapfn_", make_descriptor(t_BaseRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_BaseRandomGenerator::wrap_Object(BaseRandomGenerator(((t_BaseRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextInt(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jlong a0;
        jlong result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.nextLong(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BaseRandomGenerator), (PyObject *) self, "toString", args, 2);
      }

      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *RungeKuttaFieldIntegrator::mids$ = NULL;
        bool RungeKuttaFieldIntegrator::live$ = false;

        jclass RungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_08d37e3f77b7239d] = env->getMethodID(cls, "getDefaultStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_7e5884a5ebca9afb] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_singleStep_770e649b440853fc] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_89a7d1b6c5e4fe60] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_17af2a8a707ea45d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement RungeKuttaFieldIntegrator::getDefaultStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDefaultStep_08d37e3f77b7239d]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative RungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7e5884a5ebca9afb], a0.this$, a1.this$, a2.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > RungeKuttaFieldIntegrator::singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_singleStep_770e649b440853fc], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self);
        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, defaultStep),
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaFieldIntegrator, t_RungeKuttaFieldIntegrator, RungeKuttaFieldIntegrator);
        PyObject *t_RungeKuttaFieldIntegrator::wrap_Object(const RungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaFieldIntegrator), &PY_TYPE_DEF(RungeKuttaFieldIntegrator), module, "RungeKuttaFieldIntegrator", 0);
        }

        void t_RungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "class_", make_descriptor(RungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaFieldIntegrator::wrap_Object(RungeKuttaFieldIntegrator(((t_RungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getDefaultStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(RungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, "KK[KK", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getDefaultStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexField::class$ = NULL;
      jmethodID *FieldComplexField::mids$ = NULL;
      bool FieldComplexField::live$ = false;

      jclass FieldComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_7d898f94829740ba] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getOne_082d0eb1eb81e571] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_082d0eb1eb81e571] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FieldComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      FieldComplexField FieldComplexField::getField(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplexField(env->callStaticObjectMethod(cls, mids$[mid_getField_7d898f94829740ba], a0.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getOne() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getOne_082d0eb1eb81e571]));
      }

      ::java::lang::Class FieldComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getZero() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getZero_082d0eb1eb81e571]));
      }

      jint FieldComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data);
      static PyGetSetDef t_FieldComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexField, one),
        DECLARE_GET_FIELD(t_FieldComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_FieldComplexField, zero),
        DECLARE_GET_FIELD(t_FieldComplexField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexField__methods_[] = {
        DECLARE_METHOD(t_FieldComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, getField, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexField)[] = {
        { Py_tp_methods, t_FieldComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexField, t_FieldComplexField, FieldComplexField);
      PyObject *t_FieldComplexField::wrap_Object(const FieldComplexField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexField), &PY_TYPE_DEF(FieldComplexField), module, "FieldComplexField", 0);
      }

      void t_FieldComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "class_", make_descriptor(FieldComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "wrapfn_", make_descriptor(t_FieldComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexField::initializeClass, 1)))
          return NULL;
        return t_FieldComplexField::wrap_Object(FieldComplexField(((t_FieldComplexField *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexField result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplexField::getField(a0));
          return t_FieldComplexField::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getField", arg);
        return NULL;
      }

      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result);
      }

      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "hashCode", args, 2);
      }
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *BodiesElements::class$ = NULL;
      jmethodID *BodiesElements::mids$ = NULL;
      bool BodiesElements::live$ = false;

      jclass BodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/BodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7476437870c07590] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD)V");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLJu_9981f74b2d109da6] = env->getMethodID(cls, "getLJu", "()D");
          mids$[mid_getLJuDot_9981f74b2d109da6] = env->getMethodID(cls, "getLJuDot", "()D");
          mids$[mid_getLMa_9981f74b2d109da6] = env->getMethodID(cls, "getLMa", "()D");
          mids$[mid_getLMaDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMaDot", "()D");
          mids$[mid_getLMe_9981f74b2d109da6] = env->getMethodID(cls, "getLMe", "()D");
          mids$[mid_getLMeDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMeDot", "()D");
          mids$[mid_getLNe_9981f74b2d109da6] = env->getMethodID(cls, "getLNe", "()D");
          mids$[mid_getLNeDot_9981f74b2d109da6] = env->getMethodID(cls, "getLNeDot", "()D");
          mids$[mid_getLSa_9981f74b2d109da6] = env->getMethodID(cls, "getLSa", "()D");
          mids$[mid_getLSaDot_9981f74b2d109da6] = env->getMethodID(cls, "getLSaDot", "()D");
          mids$[mid_getLUr_9981f74b2d109da6] = env->getMethodID(cls, "getLUr", "()D");
          mids$[mid_getLUrDot_9981f74b2d109da6] = env->getMethodID(cls, "getLUrDot", "()D");
          mids$[mid_getLVe_9981f74b2d109da6] = env->getMethodID(cls, "getLVe", "()D");
          mids$[mid_getLVeDot_9981f74b2d109da6] = env->getMethodID(cls, "getLVeDot", "()D");
          mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
          mids$[mid_getPaDot_9981f74b2d109da6] = env->getMethodID(cls, "getPaDot", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodiesElements::BodiesElements(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jdouble a16, jdouble a17, jdouble a18, jdouble a19, jdouble a20, jdouble a21, jdouble a22, jdouble a23, jdouble a24, jdouble a25, jdouble a26, jdouble a27, jdouble a28, jdouble a29, jdouble a30, jdouble a31) : ::org::orekit::data::DelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_7476437870c07590, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31)) {}

      jdouble BodiesElements::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLJu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJu_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLJuDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJuDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLMa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMa_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLMaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMaDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLMe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMe_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLMeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMeDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLNe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNe_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLNeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNeDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLSa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSa_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLSaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSaDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLUr() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUr_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLUrDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUrDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLVe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVe_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getLVeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVeDot_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getPa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
      }

      jdouble BodiesElements::getPaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPaDot_9981f74b2d109da6]);
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
      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data);
      static PyGetSetDef t_BodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_BodiesElements, lE),
        DECLARE_GET_FIELD(t_BodiesElements, lEDot),
        DECLARE_GET_FIELD(t_BodiesElements, lJu),
        DECLARE_GET_FIELD(t_BodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMa),
        DECLARE_GET_FIELD(t_BodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMe),
        DECLARE_GET_FIELD(t_BodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lNe),
        DECLARE_GET_FIELD(t_BodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lSa),
        DECLARE_GET_FIELD(t_BodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lUr),
        DECLARE_GET_FIELD(t_BodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_BodiesElements, lVe),
        DECLARE_GET_FIELD(t_BodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_BodiesElements, pa),
        DECLARE_GET_FIELD(t_BodiesElements, paDot),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodiesElements__methods_[] = {
        DECLARE_METHOD(t_BodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodiesElements)[] = {
        { Py_tp_methods, t_BodiesElements__methods_ },
        { Py_tp_init, (void *) t_BodiesElements_init_ },
        { Py_tp_getset, t_BodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::DelaunayArguments),
        NULL
      };

      DEFINE_TYPE(BodiesElements, t_BodiesElements, BodiesElements);

      void t_BodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(BodiesElements), &PY_TYPE_DEF(BodiesElements), module, "BodiesElements", 0);
      }

      void t_BodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "class_", make_descriptor(BodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "wrapfn_", make_descriptor(t_BodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodiesElements::initializeClass, 1)))
          return NULL;
        return t_BodiesElements::wrap_Object(BodiesElements(((t_BodiesElements *) arg)->object.this$));
      }
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        jdouble a13;
        jdouble a14;
        jdouble a15;
        jdouble a16;
        jdouble a17;
        jdouble a18;
        jdouble a19;
        jdouble a20;
        jdouble a21;
        jdouble a22;
        jdouble a23;
        jdouble a24;
        jdouble a25;
        jdouble a26;
        jdouble a27;
        jdouble a28;
        jdouble a29;
        jdouble a30;
        jdouble a31;
        BodiesElements object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19, &a20, &a21, &a22, &a23, &a24, &a25, &a26, &a27, &a28, &a29, &a30, &a31))
        {
          INT_CALL(object = BodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJuDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUr());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUrDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJuDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUr());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUrDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPaDot());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceMatrixProvider::class$ = NULL;
      jmethodID *StateCovarianceMatrixProvider::mids$ = NULL;
      bool StateCovarianceMatrixProvider::live$ = false;

      jclass StateCovarianceMatrixProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceMatrixProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_24d07a6522da6a8c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/StateCovariance;)V");
          mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getCovarianceOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getCovarianceOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStateCovariance_6871abce780d547a] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_c07146296e899a7b] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_065963527341f5be] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceMatrixProvider::StateCovarianceMatrixProvider(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::propagation::MatricesHarvester & a2, const ::org::orekit::propagation::StateCovariance & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24d07a6522da6a8c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      JArray< jdouble > StateCovarianceMatrixProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
      }

      ::org::orekit::orbits::OrbitType StateCovarianceMatrixProvider::getCovarianceOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getCovarianceOrbitType_495f818d3570b7f5]));
      }

      ::java::lang::String StateCovarianceMatrixProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_6871abce780d547a], a0.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_c07146296e899a7b], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_065963527341f5be], a0.this$, a1.this$, a2.this$));
      }

      void StateCovarianceMatrixProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
      }

      jboolean StateCovarianceMatrixProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data);
      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data);
      static PyGetSetDef t_StateCovarianceMatrixProvider__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, covarianceOrbitType),
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceMatrixProvider__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getCovarianceOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getStateCovariance, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceMatrixProvider)[] = {
        { Py_tp_methods, t_StateCovarianceMatrixProvider__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceMatrixProvider_init_ },
        { Py_tp_getset, t_StateCovarianceMatrixProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceMatrixProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovarianceMatrixProvider, t_StateCovarianceMatrixProvider, StateCovarianceMatrixProvider);

      void t_StateCovarianceMatrixProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceMatrixProvider), &PY_TYPE_DEF(StateCovarianceMatrixProvider), module, "StateCovarianceMatrixProvider", 0);
      }

      void t_StateCovarianceMatrixProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "class_", make_descriptor(StateCovarianceMatrixProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_StateCovarianceMatrixProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceMatrixProvider::wrap_Object(StateCovarianceMatrixProvider(((t_StateCovarianceMatrixProvider *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester a2((jobject) NULL);
        ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
        StateCovarianceMatrixProvider object((jobject) NULL);

        if (!parseArgs(args, "sskk", ::org::orekit::propagation::MatricesHarvester::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = StateCovarianceMatrixProvider(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::orbits::OrbitType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1, a2));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStateCovariance", args);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args)
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

      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer::class$ = NULL;
        jmethodID *DumpReplayer::mids$ = NULL;
        bool DumpReplayer::live$ = false;

        jclass DumpReplayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createRugged_081a982fcf11ceb9] = env->getMethodID(cls, "createRugged", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_execute_4abd1aa4f892a0d8] = env->getMethodID(cls, "execute", "(Lorg/orekit/rugged/api/Rugged;)[Lorg/orekit/rugged/errors/DumpReplayer$Result;");
            mids$[mid_parse_44d81342f3d8a712] = env->getMethodID(cls, "parse", "(Ljava/io/File;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DumpReplayer::DumpReplayer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::rugged::api::Rugged DumpReplayer::createRugged() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_createRugged_081a982fcf11ceb9]));
        }

        JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > DumpReplayer::execute(const ::org::orekit::rugged::api::Rugged & a0) const
        {
          return JArray< ::org::orekit::rugged::errors::DumpReplayer$Result >(env->callObjectMethod(this$, mids$[mid_execute_4abd1aa4f892a0d8], a0.this$));
        }

        void DumpReplayer::parse(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_parse_44d81342f3d8a712], a0.this$);
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
      namespace errors {
        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self);
        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg);
        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg);

        static PyMethodDef t_DumpReplayer__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, createRugged, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer, execute, METH_O),
          DECLARE_METHOD(t_DumpReplayer, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer)[] = {
          { Py_tp_methods, t_DumpReplayer__methods_ },
          { Py_tp_init, (void *) t_DumpReplayer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer, t_DumpReplayer, DumpReplayer);

        void t_DumpReplayer::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer), &PY_TYPE_DEF(DumpReplayer), module, "DumpReplayer", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "Result", make_descriptor(&PY_TYPE_DEF(DumpReplayer$Result)));
        }

        void t_DumpReplayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "class_", make_descriptor(DumpReplayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "wrapfn_", make_descriptor(t_DumpReplayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer::wrap_Object(DumpReplayer(((t_DumpReplayer *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds)
        {
          DumpReplayer object((jobject) NULL);

          INT_CALL(object = DumpReplayer());
          self->object = object;

          return 0;
        }

        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.createRugged());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::Rugged a0((jobject) NULL);
          JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::api::Rugged::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.execute(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::rugged::errors::t_DumpReplayer$Result::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "execute", arg);
          return NULL;
        }

        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(self->object.parse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoNavigationMessage::class$ = NULL;
            jmethodID *GalileoNavigationMessage::mids$ = NULL;
            bool GalileoNavigationMessage::live$ = false;

            jclass GalileoNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getBGDE1E5a_9981f74b2d109da6] = env->getMethodID(cls, "getBGDE1E5a", "()D");
                mids$[mid_getBGDE5bE1_9981f74b2d109da6] = env->getMethodID(cls, "getBGDE5bE1", "()D");
                mids$[mid_getDataSource_d6ab429752e7c267] = env->getMethodID(cls, "getDataSource", "()I");
                mids$[mid_getIODNav_d6ab429752e7c267] = env->getMethodID(cls, "getIODNav", "()I");
                mids$[mid_getSisa_9981f74b2d109da6] = env->getMethodID(cls, "getSisa", "()D");
                mids$[mid_getSvHealth_9981f74b2d109da6] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_setBGDE1E5a_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBGDE1E5a", "(D)V");
                mids$[mid_setBGDE5bE1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBGDE5bE1", "(D)V");
                mids$[mid_setDataSource_8fd427ab23829bf5] = env->getMethodID(cls, "setDataSource", "(I)V");
                mids$[mid_setIODNav_8fd427ab23829bf5] = env->getMethodID(cls, "setIODNav", "(I)V");
                mids$[mid_setSisa_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSisa", "(D)V");
                mids$[mid_setSvHealth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvHealth", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoNavigationMessage::GalileoNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble GalileoNavigationMessage::getBGDE1E5a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE1E5a_9981f74b2d109da6]);
            }

            jdouble GalileoNavigationMessage::getBGDE5bE1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE5bE1_9981f74b2d109da6]);
            }

            jint GalileoNavigationMessage::getDataSource() const
            {
              return env->callIntMethod(this$, mids$[mid_getDataSource_d6ab429752e7c267]);
            }

            jint GalileoNavigationMessage::getIODNav() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODNav_d6ab429752e7c267]);
            }

            jdouble GalileoNavigationMessage::getSisa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSisa_9981f74b2d109da6]);
            }

            jdouble GalileoNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_9981f74b2d109da6]);
            }

            void GalileoNavigationMessage::setBGDE1E5a(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE1E5a_1ad26e8c8c0cd65b], a0);
            }

            void GalileoNavigationMessage::setBGDE5bE1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE5bE1_1ad26e8c8c0cd65b], a0);
            }

            void GalileoNavigationMessage::setDataSource(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataSource_8fd427ab23829bf5], a0);
            }

            void GalileoNavigationMessage::setIODNav(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODNav_8fd427ab23829bf5], a0);
            }

            void GalileoNavigationMessage::setSisa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisa_1ad26e8c8c0cd65b], a0);
            }

            void GalileoNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE1E5a),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE5bE1),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, dataSource),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, iODNav),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, sisa),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, svHealth),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GalileoNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE1E5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE5bE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getDataSource, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getIODNav, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSisa, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE1E5a, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE5bE1, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setDataSource, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setIODNav, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSisa, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSvHealth, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoNavigationMessage)[] = {
              { Py_tp_methods, t_GalileoNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GalileoNavigationMessage_init_ },
              { Py_tp_getset, t_GalileoNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GalileoNavigationMessage, t_GalileoNavigationMessage, GalileoNavigationMessage);

            void t_GalileoNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoNavigationMessage), &PY_TYPE_DEF(GalileoNavigationMessage), module, "GalileoNavigationMessage", 0);
            }

            void t_GalileoNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "class_", make_descriptor(GalileoNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "wrapfn_", make_descriptor(t_GalileoNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GalileoNavigationMessage::wrap_Object(GalileoNavigationMessage(((t_GalileoNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GalileoNavigationMessage object((jobject) NULL);

              INT_CALL(object = GalileoNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDataSource());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODNav());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSisa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE1E5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE1E5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE5bE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE5bE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataSource", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODNav(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODNav", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSisa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisa", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE1E5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE1E5a", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE5bE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE5bE1", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDataSource());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataSource", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODNav());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODNav(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODNav", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSisa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSisa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisa", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *HermiteRuleFactory::class$ = NULL;
          jmethodID *HermiteRuleFactory::mids$ = NULL;
          bool HermiteRuleFactory::live$ = false;

          jclass HermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/HermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HermiteRuleFactory::HermiteRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_HermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_HermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HermiteRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HermiteRuleFactory)[] = {
            { Py_tp_methods, t_HermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_HermiteRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(HermiteRuleFactory, t_HermiteRuleFactory, HermiteRuleFactory);

          void t_HermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(HermiteRuleFactory), &PY_TYPE_DEF(HermiteRuleFactory), module, "HermiteRuleFactory", 0);
          }

          void t_HermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "class_", make_descriptor(HermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "wrapfn_", make_descriptor(t_HermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_HermiteRuleFactory::wrap_Object(HermiteRuleFactory(((t_HermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            HermiteRuleFactory object((jobject) NULL);

            INT_CALL(object = HermiteRuleFactory());
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
#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *DeSitterRelativity::class$ = NULL;
        jmethodID *DeSitterRelativity::mids$ = NULL;
        bool DeSitterRelativity::live$ = false;
        ::java::lang::String *DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass DeSitterRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/DeSitterRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6a627f83556e9294] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEarth_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSun_a1474f5cfab89b5e] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DeSitterRelativity::DeSitterRelativity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        DeSitterRelativity::DeSitterRelativity(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a627f83556e9294, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean DeSitterRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getEarth() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_a1474f5cfab89b5e]));
        }

        ::java::util::List DeSitterRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getSun() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_a1474f5cfab89b5e]));
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
        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args);
        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data);
        static PyGetSetDef t_DeSitterRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_DeSitterRelativity, earth),
          DECLARE_GET_FIELD(t_DeSitterRelativity, parametersDrivers),
          DECLARE_GET_FIELD(t_DeSitterRelativity, sun),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DeSitterRelativity__methods_[] = {
          DECLARE_METHOD(t_DeSitterRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DeSitterRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getEarth, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getSun, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DeSitterRelativity)[] = {
          { Py_tp_methods, t_DeSitterRelativity__methods_ },
          { Py_tp_init, (void *) t_DeSitterRelativity_init_ },
          { Py_tp_getset, t_DeSitterRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DeSitterRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DeSitterRelativity, t_DeSitterRelativity, DeSitterRelativity);

        void t_DeSitterRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(DeSitterRelativity), &PY_TYPE_DEF(DeSitterRelativity), module, "DeSitterRelativity", 0);
        }

        void t_DeSitterRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "class_", make_descriptor(DeSitterRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "wrapfn_", make_descriptor(t_DeSitterRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "boxfn_", make_descriptor(boxObject));
          env->getClass(DeSitterRelativity::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DeSitterRelativity::initializeClass, 1)))
            return NULL;
          return t_DeSitterRelativity::wrap_Object(DeSitterRelativity(((t_DeSitterRelativity *) arg)->object.this$));
        }
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DeSitterRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DeSitterRelativity object((jobject) NULL);

              INT_CALL(object = DeSitterRelativity());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              DeSitterRelativity object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DeSitterRelativity(a0, a1));
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

        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args)
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

        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042::class$ = NULL;
              jmethodID *Rtcm1042::mids$ = NULL;
              bool Rtcm1042::live$ = false;

              jclass Rtcm1042::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ed8870f8d6f25684] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042::Rtcm1042(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_ed8870f8d6f25684, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args);
              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data);
              static PyGetSetDef t_Rtcm1042__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1042, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042)[] = {
                { Py_tp_methods, t_Rtcm1042__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042_init_ },
                { Py_tp_getset, t_Rtcm1042__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1042, t_Rtcm1042, Rtcm1042);
              PyObject *t_Rtcm1042::wrap_Object(const Rtcm1042& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1042::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1042::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042), &PY_TYPE_DEF(Rtcm1042), module, "Rtcm1042", 0);
              }

              void t_Rtcm1042::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "class_", make_descriptor(Rtcm1042::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "wrapfn_", make_descriptor(t_Rtcm1042::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042::wrap_Object(Rtcm1042(((t_Rtcm1042 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data a1((jobject) NULL);
                Rtcm1042 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1042(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1042Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_e3154aa04494b880] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics UnnormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_e3154aa04494b880], a0.this$));
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider, t_UnnormalizedSphericalHarmonicsProvider, UnnormalizedSphericalHarmonicsProvider);

          void t_UnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider), module, "UnnormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "UnnormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)));
          }

          void t_UnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(UnnormalizedSphericalHarmonicsProvider(((t_UnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonGroundPointing::class$ = NULL;
      jmethodID *PythonGroundPointing::mids$ = NULL;
      bool PythonGroundPointing::live$ = false;

      jclass PythonGroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonGroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a7994cbd5adb7dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonGroundPointing::PythonGroundPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_9a7994cbd5adb7dc, a0.this$, a1.this$)) {}

      void PythonGroundPointing::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonGroundPointing::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonGroundPointing::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self);
      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data);
      static PyGetSetDef t_PythonGroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_PythonGroundPointing, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonGroundPointing__methods_[] = {
        DECLARE_METHOD(t_PythonGroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonGroundPointing, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonGroundPointing)[] = {
        { Py_tp_methods, t_PythonGroundPointing__methods_ },
        { Py_tp_init, (void *) t_PythonGroundPointing_init_ },
        { Py_tp_getset, t_PythonGroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonGroundPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(PythonGroundPointing, t_PythonGroundPointing, PythonGroundPointing);

      void t_PythonGroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonGroundPointing), &PY_TYPE_DEF(PythonGroundPointing), module, "PythonGroundPointing", 1);
      }

      void t_PythonGroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "class_", make_descriptor(PythonGroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "wrapfn_", make_descriptor(t_PythonGroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonGroundPointing::initializeClass);
        JNINativeMethod methods[] = {
          { "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV0 },
          { "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV1 },
          { "pythonDecRef", "()V", (void *) t_PythonGroundPointing_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonGroundPointing::initializeClass, 1)))
          return NULL;
        return t_PythonGroundPointing::wrap_Object(PythonGroundPointing(((t_PythonGroundPointing *) arg)->object.this$));
      }
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonGroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        PythonGroundPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonGroundPointing(a0, a1));
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

      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args)
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data)
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
#include "java/io/PrintWriter.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/PrintWriter.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintWriter::class$ = NULL;
    jmethodID *PrintWriter::mids$ = NULL;
    bool PrintWriter::live$ = false;

    jclass PrintWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_da52d6defb468793] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_13af21b8af50a8bb] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;)V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e73c97ae824bba63] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_0d7a9075a057453b] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_0fa1a9b187f87b6f] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;Z)V");
        mids$[mid_append_c90d048eaa594b5d] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintWriter;");
        mids$[mid_append_95d4763637eca9e0] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
        mids$[mid_append_b7c0e741810c3eb3] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
        mids$[mid_checkError_eee3de00fe971136] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_313b00b400d6fbde] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_format_cfdd53ddc61245c9] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_print_e22e96b35f4145e4] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_105e1eadb709d9ac] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_b35db77cae58639e] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_e8d07df586815a42] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_1ad26e8c8c0cd65b] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_11c95dcd1c301708] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_8fd427ab23829bf5] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_83ee235bb1e64e94] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_f5bbab7e97879358] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_313b00b400d6fbde] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_printf_cfdd53ddc61245c9] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_println_ff7cb6c242604316] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_e22e96b35f4145e4] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_105e1eadb709d9ac] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_b35db77cae58639e] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_e8d07df586815a42] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_1ad26e8c8c0cd65b] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_11c95dcd1c301708] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_8fd427ab23829bf5] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_83ee235bb1e64e94] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_f5bbab7e97879358] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_e22e96b35f4145e4] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_105e1eadb709d9ac] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_6f10578448832e2a] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_c9a77c84756b106b] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");
        mids$[mid_setError_ff7cb6c242604316] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_ff7cb6c242604316] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintWriter::PrintWriter(const ::java::io::File & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_da52d6defb468793, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_13af21b8af50a8bb, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_e73c97ae824bba63, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0d7a9075a057453b, a0.this$, a1)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0fa1a9b187f87b6f, a0.this$, a1)) {}

    PrintWriter PrintWriter::append(jchar a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_c90d048eaa594b5d], a0));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_95d4763637eca9e0], a0.this$));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_b7c0e741810c3eb3], a0.this$, a1, a2));
    }

    jboolean PrintWriter::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_eee3de00fe971136]);
    }

    void PrintWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void PrintWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    PrintWriter PrintWriter::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_313b00b400d6fbde], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_cfdd53ddc61245c9], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e22e96b35f4145e4], a0.this$);
    }

    void PrintWriter::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_105e1eadb709d9ac], a0.this$);
    }

    void PrintWriter::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_b35db77cae58639e], a0);
    }

    void PrintWriter::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e8d07df586815a42], a0);
    }

    void PrintWriter::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_1ad26e8c8c0cd65b], a0);
    }

    void PrintWriter::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_11c95dcd1c301708], a0);
    }

    void PrintWriter::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_8fd427ab23829bf5], a0);
    }

    void PrintWriter::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_83ee235bb1e64e94], a0.this$);
    }

    void PrintWriter::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f5bbab7e97879358], a0);
    }

    PrintWriter PrintWriter::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_313b00b400d6fbde], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_cfdd53ddc61245c9], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_ff7cb6c242604316]);
    }

    void PrintWriter::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e22e96b35f4145e4], a0.this$);
    }

    void PrintWriter::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_105e1eadb709d9ac], a0.this$);
    }

    void PrintWriter::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_b35db77cae58639e], a0);
    }

    void PrintWriter::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e8d07df586815a42], a0);
    }

    void PrintWriter::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_1ad26e8c8c0cd65b], a0);
    }

    void PrintWriter::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_11c95dcd1c301708], a0);
    }

    void PrintWriter::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_8fd427ab23829bf5], a0);
    }

    void PrintWriter::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_83ee235bb1e64e94], a0.this$);
    }

    void PrintWriter::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f5bbab7e97879358], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e22e96b35f4145e4], a0.this$);
    }

    void PrintWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_105e1eadb709d9ac], a0.this$);
    }

    void PrintWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_6f10578448832e2a], a0.this$, a1, a2);
    }

    void PrintWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_c9a77c84756b106b], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self);
    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args);

    static PyMethodDef t_PrintWriter__methods_[] = {
      DECLARE_METHOD(t_PrintWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintWriter)[] = {
      { Py_tp_methods, t_PrintWriter__methods_ },
      { Py_tp_init, (void *) t_PrintWriter_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(PrintWriter, t_PrintWriter, PrintWriter);

    void t_PrintWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintWriter), &PY_TYPE_DEF(PrintWriter), module, "PrintWriter", 0);
    }

    void t_PrintWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "class_", make_descriptor(PrintWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "wrapfn_", make_descriptor(t_PrintWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintWriter::initializeClass, 1)))
        return NULL;
      return t_PrintWriter::wrap_Object(PrintWriter(((t_PrintWriter *) arg)->object.this$));
    }
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Writer::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
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

    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovariance::class$ = NULL;
      jmethodID *StateCovariance::mids$ = NULL;
      bool StateCovariance::live$ = false;
      jint StateCovariance::STATE_DIMENSION = (jint) 0;

      jclass StateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_364094d938b5284f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_1d150244ba48542f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_05096ea8054f78aa] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceFrame_b4ed24579e601754] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceType_0b475d17b02f53b1] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_checkFrameAndOrbitTypeConsistency_4384175164eee214] = env->getStaticMethodID(cls, "checkFrameAndOrbitTypeConsistency", "(Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_4b777b7213a5ce76] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStm_156b13240f4ab451] = env->getStaticMethodID(cls, "getStm", "(Lorg/orekit/orbits/Orbit;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_shiftedBy_3d494d6bca0f31f7] = env->getMethodID(cls, "shiftedBy", "(Lorg/orekit/orbits/Orbit;D)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_364094d938b5284f, a0.this$, a1.this$, a2.this$)) {}

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d150244ba48542f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_05096ea8054f78aa], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_b4ed24579e601754], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceType(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_0b475d17b02f53b1], a0.this$, a1.this$, a2.this$));
      }

      void StateCovariance::checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame & a0, const ::org::orekit::orbits::OrbitType & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFrameAndOrbitTypeConsistency_4384175164eee214], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate StateCovariance::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      ::org::orekit::frames::Frame StateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::frames::LOF StateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_4b777b7213a5ce76]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_b2eebabce70526d8]));
      }

      ::org::orekit::orbits::OrbitType StateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
      }

      ::org::orekit::orbits::PositionAngleType StateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getStm(const ::org::orekit::orbits::Orbit & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_getStm_156b13240f4ab451], a0.this$, a1));
      }

      StateCovariance StateCovariance::shiftedBy(const ::org::orekit::orbits::Orbit & a0, jdouble a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_3d494d6bca0f31f7], a0.this$, a1));
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
      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data);
      static PyGetSetDef t_StateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovariance, date),
        DECLARE_GET_FIELD(t_StateCovariance, frame),
        DECLARE_GET_FIELD(t_StateCovariance, lOF),
        DECLARE_GET_FIELD(t_StateCovariance, matrix),
        DECLARE_GET_FIELD(t_StateCovariance, orbitType),
        DECLARE_GET_FIELD(t_StateCovariance, positionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovariance__methods_[] = {
        DECLARE_METHOD(t_StateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, checkFrameAndOrbitTypeConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getStm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovariance)[] = {
        { Py_tp_methods, t_StateCovariance__methods_ },
        { Py_tp_init, (void *) t_StateCovariance_init_ },
        { Py_tp_getset, t_StateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovariance, t_StateCovariance, StateCovariance);

      void t_StateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovariance), &PY_TYPE_DEF(StateCovariance), module, "StateCovariance", 0);
      }

      void t_StateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "class_", make_descriptor(StateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "wrapfn_", make_descriptor(t_StateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "boxfn_", make_descriptor(boxObject));
        env->getClass(StateCovariance::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "STATE_DIMENSION", make_descriptor(StateCovariance::STATE_DIMENSION));
      }

      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovariance::initializeClass, 1)))
          return NULL;
        return t_StateCovariance::wrap_Object(StateCovariance(((t_StateCovariance *) arg)->object.this$));
      }
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::LOF a2((jobject) NULL);
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkkKK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::StateCovariance::checkFrameAndOrbitTypeConsistency(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkFrameAndOrbitTypeConsistency", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::propagation::StateCovariance::getStm(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getStm", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElements::class$ = NULL;
            jmethodID *KeplerianElements::mids$ = NULL;
            bool KeplerianElements::live$ = false;

            jclass KeplerianElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_generateKeplerianOrbit_73126f4606780eb9] = env->getMethodID(cls, "generateKeplerianOrbit", "(Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/KeplerianOrbit;");
                mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAnomaly_9981f74b2d109da6] = env->getMethodID(cls, "getAnomaly", "()D");
                mids$[mid_getAnomalyType_a6db4e6edefda4be] = env->getMethodID(cls, "getAnomalyType", "()Lorg/orekit/orbits/PositionAngleType;");
                mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getRaan_9981f74b2d109da6] = env->getMethodID(cls, "getRaan", "()D");
                mids$[mid_setA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setA", "(D)V");
                mids$[mid_setAnomaly_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAnomaly", "(D)V");
                mids$[mid_setAnomalyType_266be23fd67cbce4] = env->getMethodID(cls, "setAnomalyType", "(Lorg/orekit/orbits/PositionAngleType;)V");
                mids$[mid_setE_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setI_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setI", "(D)V");
                mids$[mid_setMeanMotion_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMeanMotion", "(D)V");
                mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
                mids$[mid_setPa_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setRaan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRaan", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KeplerianElements::KeplerianElements() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::orekit::orbits::KeplerianOrbit KeplerianElements::generateKeplerianOrbit(const ::org::orekit::frames::Frame & a0) const
            {
              return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_73126f4606780eb9], a0.this$));
            }

            jdouble KeplerianElements::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
            }

            jdouble KeplerianElements::getAnomaly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAnomaly_9981f74b2d109da6]);
            }

            ::org::orekit::orbits::PositionAngleType KeplerianElements::getAnomalyType() const
            {
              return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getAnomalyType_a6db4e6edefda4be]));
            }

            jdouble KeplerianElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate KeplerianElements::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
            }

            jdouble KeplerianElements::getI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
            }

            jdouble KeplerianElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble KeplerianElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
            }

            jdouble KeplerianElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
            }

            jdouble KeplerianElements::getRaan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRaan_9981f74b2d109da6]);
            }

            void KeplerianElements::setA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setAnomaly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomaly_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setAnomalyType(const ::org::orekit::orbits::PositionAngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomalyType_266be23fd67cbce4], a0.this$);
            }

            void KeplerianElements::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
            }

            void KeplerianElements::setI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setMeanMotion(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMeanMotion_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setMu(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMu_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::setRaan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRaan_1ad26e8c8c0cd65b], a0);
            }

            void KeplerianElements::validate(jdouble a0) const
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
          namespace odm {
            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args);
            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyGetSetDef t_KeplerianElements__fields_[] = {
              DECLARE_GETSET_FIELD(t_KeplerianElements, a),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomaly),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomalyType),
              DECLARE_GETSET_FIELD(t_KeplerianElements, e),
              DECLARE_GETSET_FIELD(t_KeplerianElements, epoch),
              DECLARE_GETSET_FIELD(t_KeplerianElements, i),
              DECLARE_GETSET_FIELD(t_KeplerianElements, meanMotion),
              DECLARE_GETSET_FIELD(t_KeplerianElements, mu),
              DECLARE_GETSET_FIELD(t_KeplerianElements, pa),
              DECLARE_GETSET_FIELD(t_KeplerianElements, raan),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElements__methods_[] = {
              DECLARE_METHOD(t_KeplerianElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, generateKeplerianOrbit, METH_O),
              DECLARE_METHOD(t_KeplerianElements, getA, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomaly, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomalyType, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getI, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getRaan, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, setA, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomaly, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomalyType, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setE, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setEpoch, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setI, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMeanMotion, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMu, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setPa, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setRaan, METH_O),
              DECLARE_METHOD(t_KeplerianElements, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElements)[] = {
              { Py_tp_methods, t_KeplerianElements__methods_ },
              { Py_tp_init, (void *) t_KeplerianElements_init_ },
              { Py_tp_getset, t_KeplerianElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElements)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(KeplerianElements, t_KeplerianElements, KeplerianElements);

            void t_KeplerianElements::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElements), &PY_TYPE_DEF(KeplerianElements), module, "KeplerianElements", 0);
            }

            void t_KeplerianElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "class_", make_descriptor(KeplerianElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "wrapfn_", make_descriptor(t_KeplerianElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElements::initializeClass, 1)))
                return NULL;
              return t_KeplerianElements::wrap_Object(KeplerianElements(((t_KeplerianElements *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds)
            {
              KeplerianElements object((jobject) NULL);

              INT_CALL(object = KeplerianElements());
              self->object = object;

              return 0;
            }

            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateKeplerianOrbit(a0));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateKeplerianOrbit", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAnomaly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self)
            {
              ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRaan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAnomaly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomaly", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
              {
                OBJ_CALL(self->object.setAnomalyType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomalyType", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMeanMotion(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMeanMotion", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMu(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMu", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRaan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRaan", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KeplerianElements), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAnomaly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAnomaly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomaly", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
            }
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAnomalyType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomalyType", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMeanMotion(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "meanMotion", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMu(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mu", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRaan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRaan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "raan", arg);
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
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationData::class$ = NULL;
          jmethodID *CombinedObservationData::mids$ = NULL;
          bool CombinedObservationData::live$ = false;

          jclass CombinedObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b05419e16af2bb8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/MeasurementType;DDLjava/util/List;)V");
              mids$[mid_getCombinationType_e3548afeab4652b3] = env->getMethodID(cls, "getCombinationType", "()Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_getCombinedMHzFrequency_9981f74b2d109da6] = env->getMethodID(cls, "getCombinedMHzFrequency", "()D");
              mids$[mid_getMeasurementType_0c31fda13b2c1960] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
              mids$[mid_getUsedObservationData_d751c1a57012b438] = env->getMethodID(cls, "getUsedObservationData", "()Ljava/util/List;");
              mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationData::CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::MeasurementType & a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b05419e16af2bb8e, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::gnss::CombinationType CombinedObservationData::getCombinationType() const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinationType(env->callObjectMethod(this$, mids$[mid_getCombinationType_e3548afeab4652b3]));
          }

          jdouble CombinedObservationData::getCombinedMHzFrequency() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCombinedMHzFrequency_9981f74b2d109da6]);
          }

          ::org::orekit::gnss::MeasurementType CombinedObservationData::getMeasurementType() const
          {
            return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_0c31fda13b2c1960]));
          }

          ::java::util::List CombinedObservationData::getUsedObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUsedObservationData_d751c1a57012b438]));
          }

          jdouble CombinedObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
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
          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data);
          static PyGetSetDef t_CombinedObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationData, combinationType),
            DECLARE_GET_FIELD(t_CombinedObservationData, combinedMHzFrequency),
            DECLARE_GET_FIELD(t_CombinedObservationData, measurementType),
            DECLARE_GET_FIELD(t_CombinedObservationData, usedObservationData),
            DECLARE_GET_FIELD(t_CombinedObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationData__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinationType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinedMHzFrequency, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getMeasurementType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getUsedObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationData)[] = {
            { Py_tp_methods, t_CombinedObservationData__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationData_init_ },
            { Py_tp_getset, t_CombinedObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationData, t_CombinedObservationData, CombinedObservationData);

          void t_CombinedObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationData), &PY_TYPE_DEF(CombinedObservationData), module, "CombinedObservationData", 0);
          }

          void t_CombinedObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "class_", make_descriptor(CombinedObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "wrapfn_", make_descriptor(t_CombinedObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationData::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationData::wrap_Object(CombinedObservationData(((t_CombinedObservationData *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::MeasurementType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationData object((jobject) NULL);

            if (!parseArgs(args, "KKDDK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_MeasurementType::parameters_, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationData(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self)
          {
            ::org::orekit::gnss::MeasurementType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::gnss::MeasurementType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WideLaneCombination::class$ = NULL;
          jmethodID *WideLaneCombination::mids$ = NULL;
          bool WideLaneCombination::live$ = false;

          jclass WideLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WideLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
        namespace gnss {
          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_WideLaneCombination__methods_[] = {
            DECLARE_METHOD(t_WideLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WideLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WideLaneCombination)[] = {
            { Py_tp_methods, t_WideLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WideLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(WideLaneCombination, t_WideLaneCombination, WideLaneCombination);

          void t_WideLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(WideLaneCombination), &PY_TYPE_DEF(WideLaneCombination), module, "WideLaneCombination", 0);
          }

          void t_WideLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "class_", make_descriptor(WideLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "wrapfn_", make_descriptor(t_WideLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WideLaneCombination::initializeClass, 1)))
              return NULL;
            return t_WideLaneCombination::wrap_Object(WideLaneCombination(((t_WideLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WideLaneCombination::initializeClass, 0))
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
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "java/lang/String.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericRefraction::class$ = NULL;
        jmethodID *AtmosphericRefraction::mids$ = NULL;
        bool AtmosphericRefraction::live$ = false;

        jclass AtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyCorrection_1ebaacadb4fd5fdc] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_computeGridCorrectionFunctions_2510fce1121ae68c] = env->getMethodID(cls, "computeGridCorrectionFunctions", "([[Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_configureCorrectionGrid_bb9ef741884b06c3] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_deactivateComputation_ff7cb6c242604316] = env->getMethodID(cls, "deactivateComputation", "()V");
            mids$[mid_getBifLine_1e2b7801affc4124] = env->getMethodID(cls, "getBifLine", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getBifPixel_1e2b7801affc4124] = env->getMethodID(cls, "getBifPixel", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getComputationParameters_a4dab8a3ecc47708] = env->getMethodID(cls, "getComputationParameters", "()Lorg/orekit/rugged/refraction/AtmosphericComputationParameters;");
            mids$[mid_isSameContext_910b338373e83420] = env->getMethodID(cls, "isSameContext", "(Ljava/lang/String;II)Ljava/lang/Boolean;");
            mids$[mid_mustBeComputed_eee3de00fe971136] = env->getMethodID(cls, "mustBeComputed", "()Z");
            mids$[mid_reactivateComputation_ff7cb6c242604316] = env->getMethodID(cls, "reactivateComputation", "()V");
            mids$[mid_setGridSteps_b5d23e6c0858e8ed] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint AtmosphericRefraction::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_1ebaacadb4fd5fdc], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        void AtmosphericRefraction::computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_computeGridCorrectionFunctions_2510fce1121ae68c], a0.this$);
        }

        void AtmosphericRefraction::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_bb9ef741884b06c3], a0.this$, a1, a2);
        }

        void AtmosphericRefraction::deactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_deactivateComputation_ff7cb6c242604316]);
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifLine() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifLine_1e2b7801affc4124]));
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifPixel() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifPixel_1e2b7801affc4124]));
        }

        ::org::orekit::rugged::refraction::AtmosphericComputationParameters AtmosphericRefraction::getComputationParameters() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericComputationParameters(env->callObjectMethod(this$, mids$[mid_getComputationParameters_a4dab8a3ecc47708]));
        }

        ::java::lang::Boolean AtmosphericRefraction::isSameContext(const ::java::lang::String & a0, jint a1, jint a2) const
        {
          return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isSameContext_910b338373e83420], a0.this$, a1, a2));
        }

        jboolean AtmosphericRefraction::mustBeComputed() const
        {
          return env->callBooleanMethod(this$, mids$[mid_mustBeComputed_eee3de00fe971136]);
        }

        void AtmosphericRefraction::reactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_reactivateComputation_ff7cb6c242604316]);
        }

        void AtmosphericRefraction::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_b5d23e6c0858e8ed], a0, a1);
        }

        void AtmosphericRefraction::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_1ad26e8c8c0cd65b], a0);
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
      namespace refraction {
        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data);
        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_AtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifLine),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifPixel),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, computationParameters),
          DECLARE_SET_FIELD(t_AtmosphericRefraction, inverseLocMargin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_AtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, applyCorrection, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, computeGridCorrectionFunctions, METH_O),
          DECLARE_METHOD(t_AtmosphericRefraction, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, deactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifLine, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifPixel, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getComputationParameters, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, isSameContext, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, mustBeComputed, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, reactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefraction)[] = {
          { Py_tp_methods, t_AtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericRefraction, t_AtmosphericRefraction, AtmosphericRefraction);

        void t_AtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericRefraction), &PY_TYPE_DEF(AtmosphericRefraction), module, "AtmosphericRefraction", 0);
        }

        void t_AtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "class_", make_descriptor(AtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "wrapfn_", make_descriptor(t_AtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_AtmosphericRefraction::wrap_Object(AtmosphericRefraction(((t_AtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "applyCorrection", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg)
        {
          JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > a0((jobject) NULL);

          if (!parseArg(arg, "[[k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.computeGridCorrectionFunctions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "computeGridCorrectionFunctions", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.deactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters result((jobject) NULL);
          OBJ_CALL(result = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Boolean result((jobject) NULL);

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isSameContext(a0, a1, a2));
            return ::java::lang::t_Boolean::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isSameContext", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.mustBeComputed());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.reactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters value((jobject) NULL);
          OBJ_CALL(value = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(value);
        }

        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader::class$ = NULL;
      jmethodID *JPLEphemeridesLoader::mids$ = NULL;
      bool JPLEphemeridesLoader::live$ = false;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES = NULL;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES = NULL;

      jclass JPLEphemeridesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c2eb18e5f7e24ef] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)V");
          mids$[mid_init$_e667cb27874bfd41] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getLoadedAstronomicalUnit_9981f74b2d109da6] = env->getMethodID(cls, "getLoadedAstronomicalUnit", "()D");
          mids$[mid_getLoadedConstant_185800def9fcd7d5] = env->getMethodID(cls, "getLoadedConstant", "([Ljava/lang/String;)D");
          mids$[mid_getLoadedEarthMoonMassRatio_9981f74b2d109da6] = env->getMethodID(cls, "getLoadedEarthMoonMassRatio", "()D");
          mids$[mid_getLoadedGravitationalCoefficient_45844783763090ed] = env->getMethodID(cls, "getLoadedGravitationalCoefficient", "(Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)D");
          mids$[mid_getMaxChunksDuration_9981f74b2d109da6] = env->getMethodID(cls, "getMaxChunksDuration", "()D");
          mids$[mid_loadCelestialBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DE_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_DE_SUPPORTED_NAMES", "Ljava/lang/String;"));
          DEFAULT_INPOP_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INPOP_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_8c2eb18e5f7e24ef, a0.this$, a1.this$)) {}

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e667cb27874bfd41, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      jdouble JPLEphemeridesLoader::getLoadedAstronomicalUnit() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedAstronomicalUnit_9981f74b2d109da6]);
      }

      jdouble JPLEphemeridesLoader::getLoadedConstant(const JArray< ::java::lang::String > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedConstant_185800def9fcd7d5], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getLoadedEarthMoonMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedEarthMoonMassRatio_9981f74b2d109da6]);
      }

      jdouble JPLEphemeridesLoader::getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedGravitationalCoefficient_45844783763090ed], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getMaxChunksDuration() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxChunksDuration_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::CelestialBody JPLEphemeridesLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_0ed99bba3e5bd60c], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedAstronomicalUnit),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedEarthMoonMassRatio),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, maxChunksDuration),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedAstronomicalUnit, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedConstant, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedEarthMoonMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedGravitationalCoefficient, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getMaxChunksDuration, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader__methods_ },
        { Py_tp_init, (void *) t_JPLEphemeridesLoader_init_ },
        { Py_tp_getset, t_JPLEphemeridesLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader, t_JPLEphemeridesLoader, JPLEphemeridesLoader);

      void t_JPLEphemeridesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader), &PY_TYPE_DEF(JPLEphemeridesLoader), module, "JPLEphemeridesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "RawPVProvider", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "EphemerisType", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType)));
      }

      void t_JPLEphemeridesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "class_", make_descriptor(JPLEphemeridesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_DE_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_INPOP_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES)));
      }

      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader::wrap_Object(JPLEphemeridesLoader(((t_JPLEphemeridesLoader *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            ::org::orekit::frames::Frame a4((jobject) NULL);
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sKkkk", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_, &a2, &a3, &a4))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1, a2, a3, a4));
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

      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        JArray< ::java::lang::String > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[s", &a0))
        {
          OBJ_CALL(result = self->object.getLoadedConstant(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedConstant", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &p0, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
        {
          OBJ_CALL(result = self->object.getLoadedGravitationalCoefficient(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedGravitationalCoefficient", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodies::class$ = NULL;
      jmethodID *CelestialBodies::mids$ = NULL;
      bool CelestialBodies::live$ = false;

      jclass CelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_a1474f5cfab89b5e] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_a1474f5cfab89b5e] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_a1474f5cfab89b5e] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_a1474f5cfab89b5e] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_a1474f5cfab89b5e] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_a1474f5cfab89b5e] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_a1474f5cfab89b5e] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_a1474f5cfab89b5e] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_a1474f5cfab89b5e] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_a1474f5cfab89b5e] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_0ed99bba3e5bd60c], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_a1474f5cfab89b5e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg);
      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data);
      static PyGetSetDef t_CelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodies, earth),
        DECLARE_GET_FIELD(t_CelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodies, mars),
        DECLARE_GET_FIELD(t_CelestialBodies, mercury),
        DECLARE_GET_FIELD(t_CelestialBodies, moon),
        DECLARE_GET_FIELD(t_CelestialBodies, neptune),
        DECLARE_GET_FIELD(t_CelestialBodies, pluto),
        DECLARE_GET_FIELD(t_CelestialBodies, saturn),
        DECLARE_GET_FIELD(t_CelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, sun),
        DECLARE_GET_FIELD(t_CelestialBodies, uranus),
        DECLARE_GET_FIELD(t_CelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodies__methods_[] = {
        DECLARE_METHOD(t_CelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_CelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodies)[] = {
        { Py_tp_methods, t_CelestialBodies__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodies, t_CelestialBodies, CelestialBodies);

      void t_CelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodies), &PY_TYPE_DEF(CelestialBodies), module, "CelestialBodies", 0);
      }

      void t_CelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "class_", make_descriptor(CelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "wrapfn_", make_descriptor(t_CelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodies::initializeClass, 1)))
          return NULL;
        return t_CelestialBodies::wrap_Object(CelestialBodies(((t_CelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringListConsumer::class$ = NULL;
            jmethodID *ParseToken$StringListConsumer::mids$ = NULL;
            bool ParseToken$StringListConsumer::live$ = false;

            jclass ParseToken$StringListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_aa335fea495d60e0] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_aa335fea495d60e0], a0.this$);
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
            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringListConsumer, t_ParseToken$StringListConsumer, ParseToken$StringListConsumer);

            void t_ParseToken$StringListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringListConsumer), &PY_TYPE_DEF(ParseToken$StringListConsumer), module, "ParseToken$StringListConsumer", 0);
            }

            void t_ParseToken$StringListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "class_", make_descriptor(ParseToken$StringListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringListConsumer::wrap_Object(ParseToken$StringListConsumer(((t_ParseToken$StringListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldBivariateFunction::class$ = NULL;
      jmethodID *FieldBivariateFunction::mids$ = NULL;
      bool FieldBivariateFunction::live$ = false;

      jclass FieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldBivariateFunction_ca0f320a8e0098be] = env->getMethodID(cls, "toCalculusFieldBivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldBivariateFunction;");
          mids$[mid_value_b5ecd7df9e053968] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldBivariateFunction FieldBivariateFunction::toCalculusFieldBivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldBivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldBivariateFunction_ca0f320a8e0098be], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_b5ecd7df9e053968], a0.this$, a1.this$));
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
      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args);

      static PyMethodDef t_FieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, toCalculusFieldBivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBivariateFunction)[] = {
        { Py_tp_methods, t_FieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBivariateFunction, t_FieldBivariateFunction, FieldBivariateFunction);

      void t_FieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBivariateFunction), &PY_TYPE_DEF(FieldBivariateFunction), module, "FieldBivariateFunction", 0);
      }

      void t_FieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "class_", make_descriptor(FieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "wrapfn_", make_descriptor(t_FieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldBivariateFunction::wrap_Object(FieldBivariateFunction(((t_FieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldBivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldBivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldBivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldBivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1::mids$ = NULL;
        bool FieldUnivariateDerivative1::live$ = false;

        jclass FieldUnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d464f1870c2dee26] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_bab44dcbad09a0fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_28456803a1233651] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acos_28456803a1233651] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acosh_28456803a1233651] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_ad962816bc471afa] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_5a873a2b6b7af023] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_efb2ef1838b62779] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asin_28456803a1233651] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asinh_28456803a1233651] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan_28456803a1233651] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan2_ad962816bc471afa] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atanh_28456803a1233651] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cbrt_28456803a1233651] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ceil_28456803a1233651] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_compose_250beacb1bcf3596] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_ad962816bc471afa] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_5a873a2b6b7af023] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_efb2ef1838b62779] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cos_28456803a1233651] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cosh_28456803a1233651] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_ad962816bc471afa] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_5a873a2b6b7af023] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_efb2ef1838b62779] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_28456803a1233651] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_expm1_28456803a1233651] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_floor_28456803a1233651] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getDerivative_dfcf702144fd7bc1] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_c65083f18abb6dd9] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_08d37e3f77b7239d] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_28456803a1233651] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_577649682b9910c1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_ad962816bc471afa] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_ff408147359b3809] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_4c54bad9057439f4] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_e5f866783d0ac7c3] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_ff1b1bd76c30eb3e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_9bb9b703adeca923] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_d688a630c2ac9889] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_0da297e7feef7338] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_952549c2b1b1f3e1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_383714d3607d70d9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_e96596fe91d81510] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log_28456803a1233651] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log10_28456803a1233651] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log1p_28456803a1233651] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_ad962816bc471afa] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_5a873a2b6b7af023] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_3b60cfe5e5898f19] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_efb2ef1838b62779] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_negate_28456803a1233651] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_newInstance_5a873a2b6b7af023] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_ad962816bc471afa] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_5a873a2b6b7af023] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_3b60cfe5e5898f19] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_0c9723ed28b0459d] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_reciprocal_28456803a1233651] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_ad962816bc471afa] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_5a873a2b6b7af023] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_efb2ef1838b62779] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rint_28456803a1233651] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rootN_3b60cfe5e5898f19] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_scalb_3b60cfe5e5898f19] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sign_28456803a1233651] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sin_28456803a1233651] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_28456803a1233651] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_28456803a1233651] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_ad962816bc471afa] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_5a873a2b6b7af023] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_efb2ef1838b62779] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tan_28456803a1233651] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tanh_28456803a1233651] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_taylor_e3d0ff3c0584eadf] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_a3b854adede8eaaa] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_28456803a1233651] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_b363d6ebd90353bf] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_28456803a1233651] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ulp_28456803a1233651] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d464f1870c2dee26, a0.this$)) {}

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_bab44dcbad09a0fe, a0.this$, a1.this$)) {}

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::abs() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_efb2ef1838b62779], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan2(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cbrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ceil() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_250beacb1bcf3596], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_efb2ef1838b62779], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_efb2ef1838b62779], a0.this$));
        }

        jboolean FieldUnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::exp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::expm1() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::floor() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_28456803a1233651]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_dfcf702144fd7bc1], a0));
        }

        jint FieldUnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field FieldUnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_c65083f18abb6dd9]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_08d37e3f77b7239d]));
        }

        jint FieldUnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::getPi() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_28456803a1233651]));
        }

        jdouble FieldUnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative1::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_577649682b9910c1]));
        }

        jint FieldUnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::hypot(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_ff408147359b3809], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_4c54bad9057439f4], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< FieldUnivariateDerivative1 > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_e5f866783d0ac7c3], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_ff1b1bd76c30eb3e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_9bb9b703adeca923], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_d688a630c2ac9889], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_0da297e7feef7338], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative1 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative1 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_952549c2b1b1f3e1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5, const FieldUnivariateDerivative1 & a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_383714d3607d70d9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5, jdouble a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_e96596fe91d81510], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log10() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log1p() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_3b60cfe5e5898f19], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_efb2ef1838b62779], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::negate() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_3b60cfe5e5898f19], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0, const FieldUnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_0c9723ed28b0459d], a0, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::reciprocal() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_efb2ef1838b62779], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rint() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rootN(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_3b60cfe5e5898f19], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::scalb(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_3b60cfe5e5898f19], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sign() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_28456803a1233651]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_28456803a1233651]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sqrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_ad962816bc471afa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_5a873a2b6b7af023], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_efb2ef1838b62779], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_28456803a1233651]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_e3d0ff3c0584eadf], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_a3b854adede8eaaa], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toDegrees() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_28456803a1233651]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_b363d6ebd90353bf]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toRadians() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_28456803a1233651]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ulp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_28456803a1233651]));
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
        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative1_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1, t_FieldUnivariateDerivative1, FieldUnivariateDerivative1);
        PyObject *t_FieldUnivariateDerivative1::wrap_Object(const FieldUnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1), &PY_TYPE_DEF(FieldUnivariateDerivative1), module, "FieldUnivariateDerivative1", 0);
        }

        void t_FieldUnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "class_", make_descriptor(FieldUnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1::wrap_Object(FieldUnivariateDerivative1(((t_FieldUnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0, a1));
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

        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &p6, t_FieldUnivariateDerivative1::parameters_, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1::pow(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data)
        {
          FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data)
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFile::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFile::mids$ = NULL;
        bool PythonAttitudeEphemerisFile::live$ = false;

        jclass PythonAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFile::PythonAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAttitudeEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAttitudeEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAttitudeEphemerisFile::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self);
        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFile, t_PythonAttitudeEphemerisFile, PythonAttitudeEphemerisFile);

        void t_PythonAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFile), &PY_TYPE_DEF(PythonAttitudeEphemerisFile), module, "PythonAttitudeEphemerisFile", 1);
        }

        void t_PythonAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "class_", make_descriptor(PythonAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonAttitudeEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFile::wrap_Object(PythonAttitudeEphemerisFile(((t_PythonAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data)
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_relativisticCorrection_d9ef56512f9ba161] = env->getMethodID(cls, "relativisticCorrection", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_getScaleFactor_9981f74b2d109da6] = env->getMethodID(cls, "getScaleFactor", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticClockModifier::AbstractRelativisticClockModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearEvolution::class$ = NULL;
          jmethodID *NonLinearEvolution::mids$ = NULL;
          bool NonLinearEvolution::live$ = false;

          jclass NonLinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0f79bfbd7ed738c5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_9981f74b2d109da6] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NonLinearEvolution::NonLinearEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f79bfbd7ed738c5, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector NonLinearEvolution::getCurrentState() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCurrentState_92d7e8d8d3f1dfcf]));
          }

          jdouble NonLinearEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_9981f74b2d109da6]);
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b2eebabce70526d8]));
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
        namespace extended {
          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data);
          static PyGetSetDef t_NonLinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentState),
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentTime),
            DECLARE_GET_FIELD(t_NonLinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_NonLinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_NonLinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearEvolution__methods_[] = {
            DECLARE_METHOD(t_NonLinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentState, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearEvolution)[] = {
            { Py_tp_methods, t_NonLinearEvolution__methods_ },
            { Py_tp_init, (void *) t_NonLinearEvolution_init_ },
            { Py_tp_getset, t_NonLinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearEvolution, t_NonLinearEvolution, NonLinearEvolution);

          void t_NonLinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearEvolution), &PY_TYPE_DEF(NonLinearEvolution), module, "NonLinearEvolution", 0);
          }

          void t_NonLinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "class_", make_descriptor(NonLinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "wrapfn_", make_descriptor(t_NonLinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearEvolution::initializeClass, 1)))
              return NULL;
            return t_NonLinearEvolution::wrap_Object(NonLinearEvolution(((t_NonLinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            NonLinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "Dkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = NonLinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201::class$ = NULL;
              jmethodID *SsrIm201::mids$ = NULL;
              bool SsrIm201::live$ = false;

              jclass SsrIm201::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6630119f2ec8d783] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header;Ljava/util/List;)V");
                  mids$[mid_getIonosphericModel_ccd9f2307c146513] = env->getMethodID(cls, "getIonosphericModel", "()Lorg/orekit/models/earth/ionosphere/SsrVtecIonosphericModel;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201::SsrIm201(jint a0, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_6630119f2ec8d783, a0, a1.this$, a2.this$)) {}

              ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel SsrIm201::getIonosphericModel() const
              {
                return ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel(env->callObjectMethod(this$, mids$[mid_getIonosphericModel_ccd9f2307c146513]));
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
            namespace subtype {
              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args);
              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self);
              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data);
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data);
              static PyGetSetDef t_SsrIm201__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIm201, ionosphericModel),
                DECLARE_GET_FIELD(t_SsrIm201, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201__methods_[] = {
                DECLARE_METHOD(t_SsrIm201, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIm201, getIonosphericModel, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201)[] = {
                { Py_tp_methods, t_SsrIm201__methods_ },
                { Py_tp_init, (void *) t_SsrIm201_init_ },
                { Py_tp_getset, t_SsrIm201__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIm201, t_SsrIm201, SsrIm201);
              PyObject *t_SsrIm201::wrap_Object(const SsrIm201& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIm201::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIm201::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201), &PY_TYPE_DEF(SsrIm201), module, "SsrIm201", 0);
              }

              void t_SsrIm201::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "class_", make_descriptor(SsrIm201::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "wrapfn_", make_descriptor(t_SsrIm201::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201::wrap_Object(SsrIm201(((t_SsrIm201 *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                SsrIm201 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIm201(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(result);
              }
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(value);
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
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractFrames::class$ = NULL;
      jmethodID *PythonAbstractFrames::mids$ = NULL;
      bool PythonAbstractFrames::live$ = false;

      jclass PythonAbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d68fa0e4fc7f6cf2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractFrames::PythonAbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_d68fa0e4fc7f6cf2, a0.this$, a1.this$)) {}

      void PythonAbstractFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractFrames::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self);
      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data);
      static PyGetSetDef t_PythonAbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractFrames__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFrames)[] = {
        { Py_tp_methods, t_PythonAbstractFrames__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractFrames_init_ },
        { Py_tp_getset, t_PythonAbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(PythonAbstractFrames, t_PythonAbstractFrames, PythonAbstractFrames);

      void t_PythonAbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractFrames), &PY_TYPE_DEF(PythonAbstractFrames), module, "PythonAbstractFrames", 1);
      }

      void t_PythonAbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "class_", make_descriptor(PythonAbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "wrapfn_", make_descriptor(t_PythonAbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractFrames_getEOPHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractFrames_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractFrames::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractFrames::wrap_Object(PythonAbstractFrames(((t_PythonAbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        PythonAbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = PythonAbstractFrames(a0, a1));
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

      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data)
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
            mids$[mid_convert_1713a56b457259e7] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_94ab750de1114aab] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed6ecec71abaa7e7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_f1a727d7b3be4da6] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_1713a56b457259e7], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_94ab750de1114aab], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_ed6ecec71abaa7e7], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_f1a727d7b3be4da6], a0.this$, a1, a2, a3.this$));
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesPhaseModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8e9682f0daaca68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesPhaseModifier::OnBoardAntennaInterSatellitesPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9682f0daaca68, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OnBoardAntennaInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesPhaseModifier, t_OnBoardAntennaInterSatellitesPhaseModifier, OnBoardAntennaInterSatellitesPhaseModifier);

          void t_OnBoardAntennaInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesPhaseModifier), module, "OnBoardAntennaInterSatellitesPhaseModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_Object(OnBoardAntennaInterSatellitesPhaseModifier(((t_OnBoardAntennaInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data)
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
