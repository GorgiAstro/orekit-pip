#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TDistribution::class$ = NULL;
        jmethodID *TDistribution::mids$ = NULL;
        bool TDistribution::live$ = false;

        jclass TDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_557b8123390d8d0c] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDistribution::TDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        TDistribution::TDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble TDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble TDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble TDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_557b8123390d8d0c]);
        }

        jdouble TDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble TDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble TDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble TDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean TDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble TDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self);
        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data);
        static PyGetSetDef t_TDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_TDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDistribution__methods_[] = {
          DECLARE_METHOD(t_TDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDistribution)[] = {
          { Py_tp_methods, t_TDistribution__methods_ },
          { Py_tp_init, (void *) t_TDistribution_init_ },
          { Py_tp_getset, t_TDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TDistribution, t_TDistribution, TDistribution);

        void t_TDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TDistribution), &PY_TYPE_DEF(TDistribution), module, "TDistribution", 0);
        }

        void t_TDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "class_", make_descriptor(TDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "wrapfn_", make_descriptor(t_TDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDistribution::initializeClass, 1)))
            return NULL;
          return t_TDistribution::wrap_Object(TDistribution(((t_TDistribution *) arg)->object.this$));
        }
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = TDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = TDistribution(a0, a1));
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

        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
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
            mids$[mid_init$_d88ba13dc070d10b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_b38c15e176684020] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_b4ea14898e256f1c] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acos_b4ea14898e256f1c] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acosh_b4ea14898e256f1c] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_67f4f82d7b8b744f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_3f2e158de9526a72] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_6d1056b1d1edff6b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asin_b4ea14898e256f1c] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asinh_b4ea14898e256f1c] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan_b4ea14898e256f1c] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan2_67f4f82d7b8b744f] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atanh_b4ea14898e256f1c] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cbrt_b4ea14898e256f1c] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ceil_b4ea14898e256f1c] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_compose_9fd7df53ee321921] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_67f4f82d7b8b744f] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_3f2e158de9526a72] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_6d1056b1d1edff6b] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cos_b4ea14898e256f1c] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cosh_b4ea14898e256f1c] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_67f4f82d7b8b744f] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_3f2e158de9526a72] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_6d1056b1d1edff6b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_b4ea14898e256f1c] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_expm1_b4ea14898e256f1c] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_floor_b4ea14898e256f1c] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getDerivative_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_146b60b5cdae04b0] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_613c8f46c659f636] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_b4ea14898e256f1c] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_20f98801541dcec1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_67f4f82d7b8b744f] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_360dfcbb1818a79e] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_000fbcee29cfb91a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_3581273c54d7dbe0] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_0a93d6e3a8b0e31e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_80a62b824f329503] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_01e0669ea4fb1053] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_54adcc7e034cf733] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_9135c7a0b16e07ab] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_498747925f19b890] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_444637aa8445bb57] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log_b4ea14898e256f1c] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log10_b4ea14898e256f1c] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log1p_b4ea14898e256f1c] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_67f4f82d7b8b744f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_3f2e158de9526a72] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_ca783a406dbffafa] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_6d1056b1d1edff6b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_negate_b4ea14898e256f1c] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_newInstance_3f2e158de9526a72] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_67f4f82d7b8b744f] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_3f2e158de9526a72] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_ca783a406dbffafa] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_d5b95cca2a28af0a] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_reciprocal_b4ea14898e256f1c] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_67f4f82d7b8b744f] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_3f2e158de9526a72] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_6d1056b1d1edff6b] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rint_b4ea14898e256f1c] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rootN_ca783a406dbffafa] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_scalb_ca783a406dbffafa] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sign_b4ea14898e256f1c] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sin_b4ea14898e256f1c] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_b4ea14898e256f1c] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_b4ea14898e256f1c] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_67f4f82d7b8b744f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_3f2e158de9526a72] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_6d1056b1d1edff6b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tan_b4ea14898e256f1c] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tanh_b4ea14898e256f1c] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_taylor_94d37e81a3238af8] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_6672ad854985cb64] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_b4ea14898e256f1c] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_5997f22f8d76210e] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_b4ea14898e256f1c] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ulp_b4ea14898e256f1c] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d88ba13dc070d10b, a0.this$)) {}

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_b38c15e176684020, a0.this$, a1.this$)) {}

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::abs() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_6d1056b1d1edff6b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan2(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cbrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ceil() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_9fd7df53ee321921], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_6d1056b1d1edff6b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_6d1056b1d1edff6b], a0.this$));
        }

        jboolean FieldUnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::exp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::expm1() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::floor() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_b4ea14898e256f1c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_8b3a1c735adfa4bc], a0));
        }

        jint FieldUnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field FieldUnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_146b60b5cdae04b0]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_613c8f46c659f636]));
        }

        jint FieldUnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::getPi() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_b4ea14898e256f1c]));
        }

        jdouble FieldUnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative1::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_20f98801541dcec1]));
        }

        jint FieldUnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::hypot(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_360dfcbb1818a79e], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_000fbcee29cfb91a], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< FieldUnivariateDerivative1 > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_3581273c54d7dbe0], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_0a93d6e3a8b0e31e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_80a62b824f329503], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_01e0669ea4fb1053], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_54adcc7e034cf733], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative1 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative1 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_9135c7a0b16e07ab], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5, const FieldUnivariateDerivative1 & a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_498747925f19b890], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5, jdouble a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_444637aa8445bb57], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log10() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log1p() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_ca783a406dbffafa], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_6d1056b1d1edff6b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::negate() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_ca783a406dbffafa], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0, const FieldUnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_d5b95cca2a28af0a], a0, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::reciprocal() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_6d1056b1d1edff6b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rint() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rootN(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_ca783a406dbffafa], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::scalb(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_ca783a406dbffafa], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sign() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_b4ea14898e256f1c]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_b4ea14898e256f1c]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sqrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_67f4f82d7b8b744f], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_3f2e158de9526a72], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_6d1056b1d1edff6b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_b4ea14898e256f1c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_94d37e81a3238af8], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_6672ad854985cb64], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toDegrees() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_b4ea14898e256f1c]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_5997f22f8d76210e]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toRadians() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_b4ea14898e256f1c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ulp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_b4ea14898e256f1c]));
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
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolator::class$ = NULL;
        jmethodID *BicubicInterpolator::mids$ = NULL;
        bool BicubicInterpolator::live$ = false;

        jclass BicubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_78b4fa08d8d71630] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BicubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolator::BicubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction BicubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_78b4fa08d8d71630], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolator)[] = {
          { Py_tp_methods, t_BicubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolator, t_BicubicInterpolator, BicubicInterpolator);

        void t_BicubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolator), &PY_TYPE_DEF(BicubicInterpolator), module, "BicubicInterpolator", 0);
        }

        void t_BicubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "class_", make_descriptor(BicubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "wrapfn_", make_descriptor(t_BicubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolator::wrap_Object(BicubicInterpolator(((t_BicubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BicubicInterpolator object((jobject) NULL);

          INT_CALL(object = BicubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BicubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray::class$ = NULL;
      jmethodID *ResizableDoubleArray::mids$ = NULL;
      bool ResizableDoubleArray::live$ = false;

      jclass ResizableDoubleArray::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_79cfe3f564275380] = env->getMethodID(cls, "<init>", "(IDD)V");
          mids$[mid_init$_15b0310ad3557c3c] = env->getMethodID(cls, "<init>", "(IDDLorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;[D)V");
          mids$[mid_addElement_10f281d777284cea] = env->getMethodID(cls, "addElement", "(D)V");
          mids$[mid_addElementRolling_7e960cd6eee376d8] = env->getMethodID(cls, "addElementRolling", "(D)D");
          mids$[mid_addElements_cc18240f4a737f14] = env->getMethodID(cls, "addElements", "([D)V");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_compute_23a245537fd5b882] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/util/MathArrays$Function;)D");
          mids$[mid_contract_0640e6acf969ed28] = env->getMethodID(cls, "contract", "()V");
          mids$[mid_copy_1ec432f6c6474a51] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/util/ResizableDoubleArray;");
          mids$[mid_discardFrontElements_a3da1a935cb37f7b] = env->getMethodID(cls, "discardFrontElements", "(I)V");
          mids$[mid_discardMostRecentElements_a3da1a935cb37f7b] = env->getMethodID(cls, "discardMostRecentElements", "(I)V");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCapacity_412668abc8d889e9] = env->getMethodID(cls, "getCapacity", "()I");
          mids$[mid_getContractionCriterion_557b8123390d8d0c] = env->getMethodID(cls, "getContractionCriterion", "()D");
          mids$[mid_getElement_69cfb132c661aca4] = env->getMethodID(cls, "getElement", "(I)D");
          mids$[mid_getElements_a53a7513ecedada2] = env->getMethodID(cls, "getElements", "()[D");
          mids$[mid_getExpansionFactor_557b8123390d8d0c] = env->getMethodID(cls, "getExpansionFactor", "()D");
          mids$[mid_getExpansionMode_c799c969d6a3c220] = env->getMethodID(cls, "getExpansionMode", "()Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_getNumElements_412668abc8d889e9] = env->getMethodID(cls, "getNumElements", "()I");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_setElement_89aad365fb0ed8da] = env->getMethodID(cls, "setElement", "(ID)V");
          mids$[mid_setNumElements_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumElements", "(I)V");
          mids$[mid_substituteMostRecentElement_7e960cd6eee376d8] = env->getMethodID(cls, "substituteMostRecentElement", "(D)D");
          mids$[mid_checkContractExpand_ab23f4ae0fb33968] = env->getMethodID(cls, "checkContractExpand", "(DD)V");
          mids$[mid_getArrayRef_a53a7513ecedada2] = env->getMethodID(cls, "getArrayRef", "()[D");
          mids$[mid_getStartIndex_412668abc8d889e9] = env->getMethodID(cls, "getStartIndex", "()I");
          mids$[mid_expand_0640e6acf969ed28] = env->getMethodID(cls, "expand", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray::ResizableDoubleArray() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ResizableDoubleArray::ResizableDoubleArray(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_79cfe3f564275380, a0, a1, a2)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15b0310ad3557c3c, a0, a1, a2, a3.this$, a4.this$)) {}

      void ResizableDoubleArray::addElement(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElement_10f281d777284cea], a0);
      }

      jdouble ResizableDoubleArray::addElementRolling(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_addElementRolling_7e960cd6eee376d8], a0);
      }

      void ResizableDoubleArray::addElements(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElements_cc18240f4a737f14], a0.this$);
      }

      void ResizableDoubleArray::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
      }

      jdouble ResizableDoubleArray::compute(const ::org::hipparchus::util::MathArrays$Function & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_compute_23a245537fd5b882], a0.this$);
      }

      void ResizableDoubleArray::contract() const
      {
        env->callVoidMethod(this$, mids$[mid_contract_0640e6acf969ed28]);
      }

      ResizableDoubleArray ResizableDoubleArray::copy() const
      {
        return ResizableDoubleArray(env->callObjectMethod(this$, mids$[mid_copy_1ec432f6c6474a51]));
      }

      void ResizableDoubleArray::discardFrontElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardFrontElements_a3da1a935cb37f7b], a0);
      }

      void ResizableDoubleArray::discardMostRecentElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardMostRecentElements_a3da1a935cb37f7b], a0);
      }

      jboolean ResizableDoubleArray::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint ResizableDoubleArray::getCapacity() const
      {
        return env->callIntMethod(this$, mids$[mid_getCapacity_412668abc8d889e9]);
      }

      jdouble ResizableDoubleArray::getContractionCriterion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getContractionCriterion_557b8123390d8d0c]);
      }

      jdouble ResizableDoubleArray::getElement(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElement_69cfb132c661aca4], a0);
      }

      JArray< jdouble > ResizableDoubleArray::getElements() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_a53a7513ecedada2]));
      }

      jdouble ResizableDoubleArray::getExpansionFactor() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExpansionFactor_557b8123390d8d0c]);
      }

      ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode ResizableDoubleArray::getExpansionMode() const
      {
        return ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode(env->callObjectMethod(this$, mids$[mid_getExpansionMode_c799c969d6a3c220]));
      }

      jint ResizableDoubleArray::getNumElements() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumElements_412668abc8d889e9]);
      }

      jint ResizableDoubleArray::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      void ResizableDoubleArray::setElement(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setElement_89aad365fb0ed8da], a0, a1);
      }

      void ResizableDoubleArray::setNumElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNumElements_a3da1a935cb37f7b], a0);
      }

      jdouble ResizableDoubleArray::substituteMostRecentElement(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_substituteMostRecentElement_7e960cd6eee376d8], a0);
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
      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data);
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data);
      static PyGetSetDef t_ResizableDoubleArray__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray, capacity),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, contractionCriterion),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, elements),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionFactor),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionMode),
        DECLARE_GETSET_FIELD(t_ResizableDoubleArray, numElements),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, addElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElementRolling, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, clear, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, compute, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, contract, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, copy, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, discardFrontElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, discardMostRecentElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, equals, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getCapacity, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getContractionCriterion, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, getElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionFactor, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionMode, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getNumElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setElement, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setNumElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, substituteMostRecentElement, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray)[] = {
        { Py_tp_methods, t_ResizableDoubleArray__methods_ },
        { Py_tp_init, (void *) t_ResizableDoubleArray_init_ },
        { Py_tp_getset, t_ResizableDoubleArray__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray, t_ResizableDoubleArray, ResizableDoubleArray);

      void t_ResizableDoubleArray::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray), &PY_TYPE_DEF(ResizableDoubleArray), module, "ResizableDoubleArray", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "ExpansionMode", make_descriptor(&PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode)));
      }

      void t_ResizableDoubleArray::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "class_", make_descriptor(ResizableDoubleArray::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "wrapfn_", make_descriptor(t_ResizableDoubleArray::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray::wrap_Object(ResizableDoubleArray(((t_ResizableDoubleArray *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ResizableDoubleArray object((jobject) NULL);

            INT_CALL(object = ResizableDoubleArray());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDD", &a0, &a1, &a2))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< jdouble > a4((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDDK[D", ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::parameters_, &a4))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2, a3, a4));
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

      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.addElement(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.addElementRolling(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addElementRolling", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.addElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg)
      {
        ::org::hipparchus::util::MathArrays$Function a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::hipparchus::util::MathArrays$Function::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.contract());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self)
      {
        ResizableDoubleArray result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_ResizableDoubleArray::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardFrontElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardFrontElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardMostRecentElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardMostRecentElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCapacity());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getElements());
        return result.wrap();
      }

      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumElements());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setElement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setElement", args);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setNumElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setNumElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.substituteMostRecentElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "substituteMostRecentElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCapacity());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getElements());
        return value.wrap();
      }

      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(value);
      }

      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumElements());
        return PyLong_FromLong((long) value);
      }
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setNumElements(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "numElements", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Data::class$ = NULL;
              jmethodID *SsrIgm01Data::mids$ = NULL;
              bool SsrIgm01Data::live$ = false;

              jclass SsrIgm01Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_412668abc8d889e9] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_58d117cad6f91792] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_a3da1a935cb37f7b] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_9a400e8af37b7414] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Data::SsrIgm01Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIgm01Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm01Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_58d117cad6f91792]));
              }

              void SsrIgm01Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_a3da1a935cb37f7b], a0);
              }

              void SsrIgm01Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_9a400e8af37b7414], a0.this$);
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
              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm01Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Data)[] = {
                { Py_tp_methods, t_SsrIgm01Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Data_init_ },
                { Py_tp_getset, t_SsrIgm01Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Data, t_SsrIgm01Data, SsrIgm01Data);

              void t_SsrIgm01Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Data), &PY_TYPE_DEF(SsrIgm01Data), module, "SsrIgm01Data", 0);
              }

              void t_SsrIgm01Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "class_", make_descriptor(SsrIgm01Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "wrapfn_", make_descriptor(t_SsrIgm01Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Data::wrap_Object(SsrIgm01Data(((t_SsrIgm01Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Data object((jobject) NULL);

                INT_CALL(object = SsrIgm01Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractFieldODEDetector::class$ = NULL;
        jmethodID *AbstractFieldODEDetector::mids$ = NULL;
        bool AbstractFieldODEDetector::live$ = false;
        jdouble AbstractFieldODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractFieldODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractFieldODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractFieldODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractFieldODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_8677e670f9e68e2e] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_b77ca012966a5dd0] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_e651d05ccb464edb] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_f12d4ed2528168bc] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_9395159e7dce049c] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_50da3c2e6691fad8] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_5cf9441a828d17d8] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxIter_365982a4db146285] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withSolver_fe5c5b8b4e18fdc1] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withThreshold_50da3c2e6691fad8] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_create_6399bb5ecfdc159d] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement AbstractFieldODEDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_8677e670f9e68e2e], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler AbstractFieldODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_b77ca012966a5dd0]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval AbstractFieldODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_e651d05ccb464edb]));
        }

        jint AbstractFieldODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver AbstractFieldODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_f12d4ed2528168bc]));
        }

        void AbstractFieldODEDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
        }

        jboolean AbstractFieldODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_9395159e7dce049c], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_50da3c2e6691fad8], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_5cf9441a828d17d8], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxIter(jint a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_365982a4db146285], a0));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_fe5c5b8b4e18fdc1], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_50da3c2e6691fad8], a0.this$));
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
      namespace events {
        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data);
        static PyGetSetDef t_AbstractFieldODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEDetector)[] = {
          { Py_tp_methods, t_AbstractFieldODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEDetector, t_AbstractFieldODEDetector, AbstractFieldODEDetector);
        PyObject *t_AbstractFieldODEDetector::wrap_Object(const AbstractFieldODEDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractFieldODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEDetector), &PY_TYPE_DEF(AbstractFieldODEDetector), module, "AbstractFieldODEDetector", 0);
        }

        void t_AbstractFieldODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "class_", make_descriptor(AbstractFieldODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "wrapfn_", make_descriptor(t_AbstractFieldODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractFieldODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractFieldODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEDetector::wrap_Object(AbstractFieldODEDetector(((t_AbstractFieldODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args)
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

        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *HolmesFeatherstoneAttractionModel::class$ = NULL;
        jmethodID *HolmesFeatherstoneAttractionModel::mids$ = NULL;
        bool HolmesFeatherstoneAttractionModel::live$ = false;

        jclass HolmesFeatherstoneAttractionModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cb3e6c602ff511eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getMu_b0b988f941da47d8] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
            mids$[mid_gradient_67cb4b664c333873] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");
            mids$[mid_gradient_e6b613f6a8d3aa0e] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_nonCentralPart_53ff1fab7c351985] = env->getMethodID(cls, "nonCentralPart", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");
            mids$[mid_value_53ff1fab7c351985] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HolmesFeatherstoneAttractionModel::HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb3e6c602ff511eb, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean HolmesFeatherstoneAttractionModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b0b988f941da47d8], a0.this$);
        }

        ::java::util::List HolmesFeatherstoneAttractionModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::forces::gravity::potential::TideSystem HolmesFeatherstoneAttractionModel::getTideSystem() const
        {
          return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_7d9a2a298dcb49fa]));
        }

        JArray< jdouble > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_67cb4b664c333873], a0.this$, a1.this$, a2));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_gradient_e6b613f6a8d3aa0e], a0.this$, a1.this$, a2.this$));
        }

        jdouble HolmesFeatherstoneAttractionModel::nonCentralPart(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_nonCentralPart_53ff1fab7c351985], a0.this$, a1.this$, a2);
        }

        jdouble HolmesFeatherstoneAttractionModel::value(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_53ff1fab7c351985], a0.this$, a1.this$, a2);
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
        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyGetSetDef t_HolmesFeatherstoneAttractionModel__fields_[] = {
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, mu),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, parametersDrivers),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, tideSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HolmesFeatherstoneAttractionModel__methods_[] = {
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getMu, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getTideSystem, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, nonCentralPart, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HolmesFeatherstoneAttractionModel)[] = {
          { Py_tp_methods, t_HolmesFeatherstoneAttractionModel__methods_ },
          { Py_tp_init, (void *) t_HolmesFeatherstoneAttractionModel_init_ },
          { Py_tp_getset, t_HolmesFeatherstoneAttractionModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HolmesFeatherstoneAttractionModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HolmesFeatherstoneAttractionModel, t_HolmesFeatherstoneAttractionModel, HolmesFeatherstoneAttractionModel);

        void t_HolmesFeatherstoneAttractionModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HolmesFeatherstoneAttractionModel), &PY_TYPE_DEF(HolmesFeatherstoneAttractionModel), module, "HolmesFeatherstoneAttractionModel", 0);
        }

        void t_HolmesFeatherstoneAttractionModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "class_", make_descriptor(HolmesFeatherstoneAttractionModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "wrapfn_", make_descriptor(t_HolmesFeatherstoneAttractionModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 1)))
            return NULL;
          return t_HolmesFeatherstoneAttractionModel::wrap_Object(HolmesFeatherstoneAttractionModel(((t_HolmesFeatherstoneAttractionModel *) arg)->object.this$));
        }
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a1((jobject) NULL);
          HolmesFeatherstoneAttractionModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = HolmesFeatherstoneAttractionModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.nonCentralPart(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "nonCentralPart", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDoubleHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedDoubleHermiteInterpolator::mids$ = NULL;
      bool TimeStampedDoubleHermiteInterpolator::live$ = false;

      jclass TimeStampedDoubleHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDoubleHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_8887b9e89013d909] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedDouble;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedDoubleHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDoubleHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDoubleHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDoubleHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedDoubleHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDoubleHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedDoubleHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDoubleHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedDoubleHermiteInterpolator, t_TimeStampedDoubleHermiteInterpolator, TimeStampedDoubleHermiteInterpolator);
      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_Object(const TimeStampedDoubleHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedDoubleHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDoubleHermiteInterpolator), &PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator), module, "TimeStampedDoubleHermiteInterpolator", 0);
      }

      void t_TimeStampedDoubleHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "class_", make_descriptor(TimeStampedDoubleHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedDoubleHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDoubleHermiteInterpolator::wrap_Object(TimeStampedDoubleHermiteInterpolator(((t_TimeStampedDoubleHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedDoubleHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
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
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventOccurrence::class$ = NULL;
        jmethodID *FieldEventOccurrence::mids$ = NULL;
        bool FieldEventOccurrence::live$ = false;

        jclass FieldEventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5fc17a229c6925f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAction_2ecf57a2edb373ef] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_f6fb52dfb87d3553] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_getStopTime_613c8f46c659f636] = env->getMethodID(cls, "getStopTime", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventOccurrence::FieldEventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5fc17a229c6925f, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::ode::events::Action FieldEventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_2ecf57a2edb373ef]));
        }

        ::org::hipparchus::ode::FieldODEState FieldEventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_getNewState_f6fb52dfb87d3553]));
        }

        ::org::hipparchus::CalculusFieldElement FieldEventOccurrence::getStopTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getStopTime_613c8f46c659f636]));
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
      namespace events {
        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args);
        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, stopTime),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventOccurrence__methods_ },
          { Py_tp_init, (void *) t_FieldEventOccurrence_init_ },
          { Py_tp_getset, t_FieldEventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventOccurrence, t_FieldEventOccurrence, FieldEventOccurrence);
        PyObject *t_FieldEventOccurrence::wrap_Object(const FieldEventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventOccurrence), &PY_TYPE_DEF(FieldEventOccurrence), module, "FieldEventOccurrence", 0);
        }

        void t_FieldEventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "class_", make_descriptor(FieldEventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "wrapfn_", make_descriptor(t_FieldEventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventOccurrence::wrap_Object(FieldEventOccurrence(((t_FieldEventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldEventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldBrouwerLyddanePropagator::class$ = NULL;
        jmethodID *FieldBrouwerLyddanePropagator::mids$ = NULL;
        bool FieldBrouwerLyddanePropagator::live$ = false;

        jclass FieldBrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e1027e6668c8208] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_9b656d076a4d2789] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_99cf2c440abdfaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_38335f7b1fe61fc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_97907d506e451588] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_e87b6a768cdcf8f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_b9cbff40120896c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_0ff0b3e400576b55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_b2558ce47031fa19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_64c0f5b0e2fdabea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_2a9edbe7aceb100e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_0b72d5dce7fcac4a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_e413f4035c489bc9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_bdbbab21a21bfa46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_b06f522d9cdf543e] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_5fac578b3283ffb2] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_83cbf0b9564fa83b] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_getM2_557b8123390d8d0c] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getM2_b0b988f941da47d8] = env->getMethodID(cls, "getM2", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_583cf00f45bb6ce5] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_9c62e0ce1624c4ca] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_239ff49419dc21a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_resetIntermediateState_9d68be2ff2b1080e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6e1027e6668c8208, a0.this$, a1.this$, a2)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9b656d076a4d2789, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_99cf2c440abdfaef, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_38335f7b1fe61fc7, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_97907d506e451588, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e87b6a768cdcf8f5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b9cbff40120896c7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0ff0b3e400576b55, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b2558ce47031fa19, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_64c0f5b0e2fdabea, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2a9edbe7aceb100e, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0b72d5dce7fcac4a, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e413f4035c489bc9, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_bdbbab21a21bfa46, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_b06f522d9cdf543e], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_5fac578b3283ffb2], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_83cbf0b9564fa83b], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        jdouble FieldBrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_557b8123390d8d0c]);
        }

        jdouble FieldBrouwerLyddanePropagator::getM2(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_b0b988f941da47d8], a0.this$);
        }

        ::java::util::List FieldBrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_583cf00f45bb6ce5], a0.this$, a1.this$));
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_9c62e0ce1624c4ca], a0.this$, a1.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_239ff49419dc21a7], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_FieldBrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getM2, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_FieldBrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_FieldBrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_FieldBrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldBrouwerLyddanePropagator, t_FieldBrouwerLyddanePropagator, FieldBrouwerLyddanePropagator);
        PyObject *t_FieldBrouwerLyddanePropagator::wrap_Object(const FieldBrouwerLyddanePropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBrouwerLyddanePropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBrouwerLyddanePropagator), &PY_TYPE_DEF(FieldBrouwerLyddanePropagator), module, "FieldBrouwerLyddanePropagator", 0);
        }

        void t_FieldBrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "class_", make_descriptor(FieldBrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_FieldBrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_FieldBrouwerLyddanePropagator::wrap_Object(FieldBrouwerLyddanePropagator(((t_FieldBrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getM2(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getM2", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data)
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
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_3e890111f4b9c11a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_values_2c377e1b1c33803e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_selectTransformer_4e84fa72fb7b710b] = env->getMethodID(cls, "selectTransformer", "(Lorg/hipparchus/ode/events/Transformer;DZ)Lorg/hipparchus/ode/events/Transformer;");
            mids$[mid_isTriggeredOnIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "isTriggeredOnIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3e890111f4b9c11a], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_2c377e1b1c33803e]));
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
      namespace events {
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractStorelessUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractStorelessUnivariateStatistic::mids$ = NULL;
        bool AbstractStorelessUnivariateStatistic::live$ = false;

        jclass AbstractStorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_0a0ee925e68176d0] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractStorelessUnivariateStatistic::AbstractStorelessUnivariateStatistic() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void AbstractStorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic AbstractStorelessUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_0a0ee925e68176d0]));
        }

        jboolean AbstractStorelessUnivariateStatistic::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        jdouble AbstractStorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
        }

        jint AbstractStorelessUnivariateStatistic::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        void AbstractStorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
        }

        ::java::lang::String AbstractStorelessUnivariateStatistic::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_AbstractStorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractStorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractStorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, equals, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractStorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractStorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) t_AbstractStorelessUnivariateStatistic_init_ },
          { Py_tp_getset, t_AbstractStorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractStorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractStorelessUnivariateStatistic, t_AbstractStorelessUnivariateStatistic, AbstractStorelessUnivariateStatistic);

        void t_AbstractStorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractStorelessUnivariateStatistic), &PY_TYPE_DEF(AbstractStorelessUnivariateStatistic), module, "AbstractStorelessUnivariateStatistic", 0);
        }

        void t_AbstractStorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "class_", make_descriptor(AbstractStorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractStorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractStorelessUnivariateStatistic::wrap_Object(AbstractStorelessUnivariateStatistic(((t_AbstractStorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds)
        {
          AbstractStorelessUnivariateStatistic object((jobject) NULL);

          INT_CALL(object = AbstractStorelessUnivariateStatistic());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_StorelessUnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler$Archive$EntryStream::class$ = NULL;
      jmethodID *ZipJarCrawler$Archive$EntryStream::mids$ = NULL;
      bool ZipJarCrawler$Archive$EntryStream::live$ = false;

      jclass ZipJarCrawler$Archive$EntryStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler$Archive$EntryStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_available_412668abc8d889e9] = env->getMethodID(cls, "available", "()I");
          mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isDirectory_89b302893bdbe1f1] = env->getMethodID(cls, "isDirectory", "()Z");
          mids$[mid_mark_a3da1a935cb37f7b] = env->getMethodID(cls, "mark", "(I)V");
          mids$[mid_markSupported_89b302893bdbe1f1] = env->getMethodID(cls, "markSupported", "()Z");
          mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
          mids$[mid_read_67c88f2bf4e7f8b2] = env->getMethodID(cls, "read", "([B)I");
          mids$[mid_read_68a76742c8623fb3] = env->getMethodID(cls, "read", "([BII)I");
          mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ZipJarCrawler$Archive$EntryStream::available() const
      {
        return env->callIntMethod(this$, mids$[mid_available_412668abc8d889e9]);
      }

      void ZipJarCrawler$Archive$EntryStream::close() const
      {
        env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
      }

      ::java::lang::String ZipJarCrawler$Archive$EntryStream::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jboolean ZipJarCrawler$Archive$EntryStream::isDirectory() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDirectory_89b302893bdbe1f1]);
      }

      void ZipJarCrawler$Archive$EntryStream::mark(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_mark_a3da1a935cb37f7b], a0);
      }

      jboolean ZipJarCrawler$Archive$EntryStream::markSupported() const
      {
        return env->callBooleanMethod(this$, mids$[mid_markSupported_89b302893bdbe1f1]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read() const
      {
        return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_read_67c88f2bf4e7f8b2], a0.this$);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_read_68a76742c8623fb3], a0.this$, a1, a2);
      }

      void ZipJarCrawler$Archive$EntryStream::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
      }

      jlong ZipJarCrawler$Archive$EntryStream::skip(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
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
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyGetSetDef t_ZipJarCrawler$Archive$EntryStream__fields_[] = {
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, directory),
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ZipJarCrawler$Archive$EntryStream__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, available, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, close, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, getName, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, isDirectory, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, mark, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, markSupported, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, read, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, reset, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, skip, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler$Archive$EntryStream)[] = {
        { Py_tp_methods, t_ZipJarCrawler$Archive$EntryStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ZipJarCrawler$Archive$EntryStream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler$Archive$EntryStream)[] = {
        &PY_TYPE_DEF(::java::io::InputStream),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler$Archive$EntryStream, t_ZipJarCrawler$Archive$EntryStream, ZipJarCrawler$Archive$EntryStream);

      void t_ZipJarCrawler$Archive$EntryStream::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler$Archive$EntryStream), &PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream), module, "ZipJarCrawler$Archive$EntryStream", 0);
      }

      void t_ZipJarCrawler$Archive$EntryStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "class_", make_descriptor(ZipJarCrawler$Archive$EntryStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "wrapfn_", make_descriptor(t_ZipJarCrawler$Archive$EntryStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler$Archive$EntryStream::wrap_Object(ZipJarCrawler$Archive$EntryStream(((t_ZipJarCrawler$Archive$EntryStream *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.available());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "available", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.close());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "close", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDirectory());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.mark(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "mark", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.markSupported());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "markSupported", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.read());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(result = self->object.read(a0));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.read(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "read", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "reset", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jlong a0;
        jlong result;

        if (!parseArgs(args, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "skip", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDirectory());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
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
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAdaptableInterval::class$ = NULL;
        jmethodID *PythonAdaptableInterval::mids$ = NULL;
        bool PythonAdaptableInterval::live$ = false;

        jclass PythonAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_1bbf81d80c47ecdd] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdaptableInterval::PythonAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self);
        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdaptableInterval, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdaptableInterval, t_PythonAdaptableInterval, PythonAdaptableInterval);

        void t_PythonAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdaptableInterval), &PY_TYPE_DEF(PythonAdaptableInterval), module, "PythonAdaptableInterval", 1);
        }

        void t_PythonAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "class_", make_descriptor(PythonAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "wrapfn_", make_descriptor(t_PythonAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonAdaptableInterval::wrap_Object(PythonAdaptableInterval(((t_PythonAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data)
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
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_f4ad805a81234b49] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_clearCache_0640e6acf969ed28] = env->getMethodID(cls, "clearCache", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BaseRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint BaseRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong BaseRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_f4ad805a81234b49], a0);
      }

      void BaseRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void BaseRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
      }

      ::java::lang::String BaseRandomGenerator::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Data::class$ = NULL;
              jmethodID *SsrIgm07Data::mids$ = NULL;
              bool SsrIgm07Data::live$ = false;

              jclass SsrIgm07Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSsrUra_557b8123390d8d0c] = env->getMethodID(cls, "getSsrUra", "()D");
                  mids$[mid_setSsrUra_10f281d777284cea] = env->getMethodID(cls, "setSsrUra", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Data::SsrIgm07Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble SsrIgm07Data::getSsrUra() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSsrUra_557b8123390d8d0c]);
              }

              void SsrIgm07Data::setSsrUra(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUra_10f281d777284cea], a0);
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
              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self);
              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg);
              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data);
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm07Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm07Data, ssrUra),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, getSsrUra, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm07Data, setSsrUra, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Data)[] = {
                { Py_tp_methods, t_SsrIgm07Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Data_init_ },
                { Py_tp_getset, t_SsrIgm07Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Data, t_SsrIgm07Data, SsrIgm07Data);

              void t_SsrIgm07Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Data), &PY_TYPE_DEF(SsrIgm07Data), module, "SsrIgm07Data", 0);
              }

              void t_SsrIgm07Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "class_", make_descriptor(SsrIgm07Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "wrapfn_", make_descriptor(t_SsrIgm07Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Data::wrap_Object(SsrIgm07Data(((t_SsrIgm07Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Data object((jobject) NULL);

                INT_CALL(object = SsrIgm07Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSsrUra());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSsrUra(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUra", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSsrUra());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSsrUra(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUra", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManBasis::class$ = NULL;
              jmethodID *ManBasis::mids$ = NULL;
              bool ManBasis::live$ = false;
              ManBasis *ManBasis::ANTICIPATED = NULL;
              ManBasis *ManBasis::CANDIDATE = NULL;
              ManBasis *ManBasis::DETERMINED_OD = NULL;
              ManBasis *ManBasis::DETERMINED_TLM = NULL;
              ManBasis *ManBasis::OTHER = NULL;
              ManBasis *ManBasis::PLANNED = NULL;
              ManBasis *ManBasis::SIMULATED = NULL;

              jclass ManBasis::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManBasis");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_601f657342437f42] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_values_01b9d82fe6b7ac38] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANTICIPATED = new ManBasis(env->getStaticObjectField(cls, "ANTICIPATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  CANDIDATE = new ManBasis(env->getStaticObjectField(cls, "CANDIDATE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_OD = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_TLM = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_TLM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  OTHER = new ManBasis(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  PLANNED = new ManBasis(env->getStaticObjectField(cls, "PLANNED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  SIMULATED = new ManBasis(env->getStaticObjectField(cls, "SIMULATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ManBasis ManBasis::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManBasis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_601f657342437f42], a0.this$));
              }

              JArray< ManBasis > ManBasis::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManBasis >(env->callStaticObjectMethod(cls, mids$[mid_values_01b9d82fe6b7ac38]));
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
              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args);
              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManBasis_values(PyTypeObject *type);
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data);
              static PyGetSetDef t_ManBasis__fields_[] = {
                DECLARE_GET_FIELD(t_ManBasis, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManBasis__methods_[] = {
                DECLARE_METHOD(t_ManBasis, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManBasis, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManBasis)[] = {
                { Py_tp_methods, t_ManBasis__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManBasis__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManBasis)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManBasis, t_ManBasis, ManBasis);
              PyObject *t_ManBasis::wrap_Object(const ManBasis& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManBasis::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManBasis::install(PyObject *module)
              {
                installType(&PY_TYPE(ManBasis), &PY_TYPE_DEF(ManBasis), module, "ManBasis", 0);
              }

              void t_ManBasis::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "class_", make_descriptor(ManBasis::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "wrapfn_", make_descriptor(t_ManBasis::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManBasis::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "ANTICIPATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::ANTICIPATED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "CANDIDATE", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::CANDIDATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_OD", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_TLM", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_TLM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "OTHER", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "PLANNED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::PLANNED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "SIMULATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::SIMULATED)));
              }

              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManBasis::initializeClass, 1)))
                  return NULL;
                return t_ManBasis::wrap_Object(ManBasis(((t_ManBasis *) arg)->object.this$));
              }
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManBasis::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManBasis result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::valueOf(a0));
                  return t_ManBasis::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManBasis_values(PyTypeObject *type)
              {
                JArray< ManBasis > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::values());
                return JArray<jobject>(result.this$).wrap(t_ManBasis::wrap_jobject);
              }
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data)
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
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAbstractDetector::class$ = NULL;
        jmethodID *FieldAbstractDetector::mids$ = NULL;
        bool FieldAbstractDetector::live$ = false;
        jdouble FieldAbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint FieldAbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble FieldAbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae75cc14adc9e750] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_24041a63d01af092] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_613c8f46c659f636] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_35911919dc220bc4] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_0a1f25400b8daf9b] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_0d4709daf17db1df] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxIter_e5b65867a369c327] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withThreshold_69b40d753e9def53] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_create_ac1c597f89a746d9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae75cc14adc9e750]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_24041a63d01af092]));
        }

        jint FieldAbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_613c8f46c659f636]));
        }

        void FieldAbstractDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        jboolean FieldAbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        FieldAbstractDetector FieldAbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_35911919dc220bc4], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(jdouble a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_0a1f25400b8daf9b], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_0d4709daf17db1df], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxIter(jint a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_e5b65867a369c327], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_69b40d753e9def53], a0.this$));
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
        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data);
        static PyGetSetDef t_FieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractDetector, forward),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, handler),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractDetector)[] = {
          { Py_tp_methods, t_FieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractDetector, t_FieldAbstractDetector, FieldAbstractDetector);
        PyObject *t_FieldAbstractDetector::wrap_Object(const FieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractDetector), &PY_TYPE_DEF(FieldAbstractDetector), module, "FieldAbstractDetector", 0);
        }

        void t_FieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "class_", make_descriptor(FieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "wrapfn_", make_descriptor(t_FieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldAbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(FieldAbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(FieldAbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldAbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractDetector::wrap_Object(FieldAbstractDetector(((t_FieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args)
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

        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg)
        {
          jint a0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *HarmonicAccelerationModel::class$ = NULL;
        jmethodID *HarmonicAccelerationModel::mids$ = NULL;
        bool HarmonicAccelerationModel::live$ = false;

        jclass HarmonicAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/HarmonicAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dda4b4bb0ac4a0dc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_4ad317f7598a10a9] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_810dcb8f9f5d191a] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicAccelerationModel::HarmonicAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dda4b4bb0ac4a0dc, a0.this$, a1.this$, a2, a3)) {}

        ::java::util::List HarmonicAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void HarmonicAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_4ad317f7598a10a9], a0.this$, a1.this$));
        }

        jdouble HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_810dcb8f9f5d191a], a0.this$, a1.this$);
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
        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self);
        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data);
        static PyGetSetDef t_HarmonicAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_HarmonicAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HarmonicAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_HarmonicAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicAccelerationModel)[] = {
          { Py_tp_methods, t_HarmonicAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_HarmonicAccelerationModel_init_ },
          { Py_tp_getset, t_HarmonicAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicAccelerationModel, t_HarmonicAccelerationModel, HarmonicAccelerationModel);

        void t_HarmonicAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicAccelerationModel), &PY_TYPE_DEF(HarmonicAccelerationModel), module, "HarmonicAccelerationModel", 0);
        }

        void t_HarmonicAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "class_", make_descriptor(HarmonicAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "wrapfn_", make_descriptor(t_HarmonicAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_HarmonicAccelerationModel::wrap_Object(HarmonicAccelerationModel(((t_HarmonicAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jint a3;
          HarmonicAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = HarmonicAccelerationModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args)
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

        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PolynomialThrustSegment::class$ = NULL;
          jmethodID *PolynomialThrustSegment::mids$ = NULL;
          bool PolynomialThrustSegment::live$ = false;

          jclass PolynomialThrustSegment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b857e5cc8567e4ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
              mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3343973a86caeaa4] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolynomialThrustSegment::PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b857e5cc8567e4ee, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3df461fe15362b2b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::FieldAbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3343973a86caeaa4], a0.this$));
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
          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args);

          static PyMethodDef t_PolynomialThrustSegment__methods_[] = {
            DECLARE_METHOD(t_PolynomialThrustSegment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolynomialThrustSegment)[] = {
            { Py_tp_methods, t_PolynomialThrustSegment__methods_ },
            { Py_tp_init, (void *) t_PolynomialThrustSegment_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolynomialThrustSegment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolynomialThrustSegment, t_PolynomialThrustSegment, PolynomialThrustSegment);

          void t_PolynomialThrustSegment::install(PyObject *module)
          {
            installType(&PY_TYPE(PolynomialThrustSegment), &PY_TYPE_DEF(PolynomialThrustSegment), module, "PolynomialThrustSegment", 0);
          }

          void t_PolynomialThrustSegment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "class_", make_descriptor(PolynomialThrustSegment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "wrapfn_", make_descriptor(t_PolynomialThrustSegment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolynomialThrustSegment::initializeClass, 1)))
              return NULL;
            return t_PolynomialThrustSegment::wrap_Object(PolynomialThrustSegment(((t_PolynomialThrustSegment *) arg)->object.this$));
          }
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolynomialThrustSegment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
            PolynomialThrustSegment object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PolynomialThrustSegment(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGauss::class$ = NULL;
        jmethodID *IodGauss::mids$ = NULL;
        bool IodGauss::live$ = false;

        jclass IodGauss::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGauss");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_3e39f730636f7cb8] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_826da74c81b95475] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_859de450efe65f47] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGauss::IodGauss(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_3e39f730636f7cb8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_826da74c81b95475], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a9) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_859de450efe65f47], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
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
      namespace iod {
        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args);

        static PyMethodDef t_IodGauss__methods_[] = {
          DECLARE_METHOD(t_IodGauss, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGauss)[] = {
          { Py_tp_methods, t_IodGauss__methods_ },
          { Py_tp_init, (void *) t_IodGauss_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGauss)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGauss, t_IodGauss, IodGauss);

        void t_IodGauss::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGauss), &PY_TYPE_DEF(IodGauss), module, "IodGauss", 0);
        }

        void t_IodGauss::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "class_", make_descriptor(IodGauss::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "wrapfn_", make_descriptor(t_IodGauss::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGauss::initializeClass, 1)))
            return NULL;
          return t_IodGauss::wrap_Object(IodGauss(((t_IodGauss *) arg)->object.this$));
        }
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGauss::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGauss object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGauss(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a9((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AbstractMeasurement::class$ = NULL;
        jmethodID *AbstractMeasurement::mids$ = NULL;
        bool AbstractMeasurement::live$ = false;

        jclass AbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_eae039ee8c8a4a4d] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_a53a7513ecedada2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getCoordinates_35bdb952e4a028e2] = env->getStaticMethodID(cls, "getCoordinates", "(Lorg/orekit/propagation/SpacecraftState;II)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_a53a7513ecedada2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_0d9551367f7ecdef] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_89b302893bdbe1f1] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_ed2afdb8506b9742] = env->getMethodID(cls, "setEnabled", "(Z)V");
            mids$[mid_signalTimeOfFlight_8b2d535c90fd2ca6] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signalTimeOfFlight_9011d63fcb2c1242] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_addParameterDriver_558cfe74a49f563f] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_6f472135bf397672], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement AbstractMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_eae039ee8c8a4a4d], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase AbstractMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_71d69ca0f7c280a7], a0, a1, a2.this$));
        }

        JArray< jdouble > AbstractMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_a53a7513ecedada2]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates AbstractMeasurement::getCoordinates(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getCoordinates_35bdb952e4a028e2], a0.this$, a1, a2));
        }

        ::org::orekit::time::AbsoluteDate AbstractMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jint AbstractMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        ::java::util::List AbstractMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_0d9551367f7ecdef]));
        }

        JArray< jdouble > AbstractMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_a53a7513ecedada2]));
        }

        ::java::util::List AbstractMeasurement::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::java::util::List AbstractMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_0d9551367f7ecdef]));
        }

        JArray< jdouble > AbstractMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2]));
        }

        jboolean AbstractMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_89b302893bdbe1f1]);
        }

        void AbstractMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_ed2afdb8506b9742], a0);
        }

        ::org::hipparchus::CalculusFieldElement AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_signalTimeOfFlight_8b2d535c90fd2ca6], a0.this$, a1.this$, a2.this$));
        }

        jdouble AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_signalTimeOfFlight_9011d63fcb2c1242], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data);
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data);
        static PyGetSetDef t_AbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_AbstractMeasurement, date),
          DECLARE_GET_FIELD(t_AbstractMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_AbstractMeasurement, enabled),
          DECLARE_GET_FIELD(t_AbstractMeasurement, modifiers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, observedValue),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parametersDrivers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, satellites),
          DECLARE_GET_FIELD(t_AbstractMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_AbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getCoordinates, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, setEnabled, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, signalTimeOfFlight, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurement)[] = {
          { Py_tp_methods, t_AbstractMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMeasurement, t_AbstractMeasurement, AbstractMeasurement);
        PyObject *t_AbstractMeasurement::wrap_Object(const AbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMeasurement), &PY_TYPE_DEF(AbstractMeasurement), module, "AbstractMeasurement", 0);
        }

        void t_AbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "class_", make_descriptor(AbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "wrapfn_", make_descriptor(t_AbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_AbstractMeasurement::wrap_Object(AbstractMeasurement(((t_AbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          jint a2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kII", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::getCoordinates(a0, a1, a2));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError(type, "getCoordinates", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kkk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "signalTimeOfFlight", args);
          return NULL;
        }
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEStateAndDerivative::class$ = NULL;
      jmethodID *ODEStateAndDerivative::mids$ = NULL;
      bool ODEStateAndDerivative::live$ = false;

      jclass ODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d1fab4f16ef74ba5] = env->getMethodID(cls, "<init>", "(D[D[D)V");
          mids$[mid_init$_3af222968dd38947] = env->getMethodID(cls, "<init>", "(D[D[D[[D[[D)V");
          mids$[mid_getCompleteDerivative_a53a7513ecedada2] = env->getMethodID(cls, "getCompleteDerivative", "()[D");
          mids$[mid_getPrimaryDerivative_a53a7513ecedada2] = env->getMethodID(cls, "getPrimaryDerivative", "()[D");
          mids$[mid_getSecondaryDerivative_1da5c9e77f24f269] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_d1fab4f16ef74ba5, a0, a1.this$, a2.this$)) {}

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_3af222968dd38947, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< jdouble > ODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_a53a7513ecedada2]));
      }

      JArray< jdouble > ODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_a53a7513ecedada2]));
      }

      JArray< jdouble > ODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_1da5c9e77f24f269], a0));
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
      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ODEState),
        NULL
      };

      DEFINE_TYPE(ODEStateAndDerivative, t_ODEStateAndDerivative, ODEStateAndDerivative);

      void t_ODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEStateAndDerivative), &PY_TYPE_DEF(ODEStateAndDerivative), module, "ODEStateAndDerivative", 0);
      }

      void t_ODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "class_", make_descriptor(ODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "wrapfn_", make_descriptor(t_ODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ODEStateAndDerivative::wrap_Object(ODEStateAndDerivative(((t_ODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D[[D[[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return value.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthIntegrator::mids$ = NULL;
        bool AdamsBashforthIntegrator::live$ = false;

        jclass AdamsBashforthIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d5ce2896eb0273f] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_0d23f64daa74287b] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_e7930007697328a4] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_04cf5a46fd40d06d] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3d5ce2896eb0273f, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0d23f64daa74287b, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsBashforthIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegrator, t_AdamsBashforthIntegrator, AdamsBashforthIntegrator);

        void t_AdamsBashforthIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegrator), &PY_TYPE_DEF(AdamsBashforthIntegrator), module, "AdamsBashforthIntegrator", 0);
        }

        void t_AdamsBashforthIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "class_", make_descriptor(AdamsBashforthIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegrator::wrap_Object(AdamsBashforthIntegrator(((t_AdamsBashforthIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter$Iterator::class$ = NULL;
      jmethodID *MultidimensionalCounter$Iterator::mids$ = NULL;
      bool MultidimensionalCounter$Iterator::live$ = false;

      jclass MultidimensionalCounter$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCount_412668abc8d889e9] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getCount_0092017e99012694] = env->getMethodID(cls, "getCount", "(I)I");
          mids$[mid_getCounts_1b41cf9ebf653611] = env->getMethodID(cls, "getCounts", "()[I");
          mids$[mid_hasNext_89b302893bdbe1f1] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_next_c8619d445fbf1e9f] = env->getMethodID(cls, "next", "()Ljava/lang/Integer;");
          mids$[mid_remove_0640e6acf969ed28] = env->getMethodID(cls, "remove", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MultidimensionalCounter$Iterator::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_412668abc8d889e9]);
      }

      jint MultidimensionalCounter$Iterator::getCount(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_0092017e99012694], a0);
      }

      JArray< jint > MultidimensionalCounter$Iterator::getCounts() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_1b41cf9ebf653611]));
      }

      jboolean MultidimensionalCounter$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_89b302893bdbe1f1]);
      }

      ::java::lang::Integer MultidimensionalCounter$Iterator::next() const
      {
        return ::java::lang::Integer(env->callObjectMethod(this$, mids$[mid_next_c8619d445fbf1e9f]));
      }

      void MultidimensionalCounter$Iterator::remove() const
      {
        env->callVoidMethod(this$, mids$[mid_remove_0640e6acf969ed28]);
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
      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, count),
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, counts),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter$Iterator__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCount, METH_VARARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCounts, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, next, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, remove, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter$Iterator)[] = {
        { Py_tp_methods, t_MultidimensionalCounter$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultidimensionalCounter$Iterator__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_iterator_next< ::java::util::t_Iterator,::java::lang::t_Integer >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter$Iterator, t_MultidimensionalCounter$Iterator, MultidimensionalCounter$Iterator);

      void t_MultidimensionalCounter$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter$Iterator), &PY_TYPE_DEF(MultidimensionalCounter$Iterator), module, "MultidimensionalCounter$Iterator", 0);
      }

      void t_MultidimensionalCounter$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "class_", make_descriptor(MultidimensionalCounter$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "wrapfn_", make_descriptor(t_MultidimensionalCounter$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter$Iterator::wrap_Object(MultidimensionalCounter$Iterator(((t_MultidimensionalCounter$Iterator *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.getCount());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getCount(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", args);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCounts());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self)
      {
        ::java::lang::Integer result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Integer::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self)
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCounts());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
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
          mids$[mid_getAbsoluteDate_f1fe4daf77c66560] = env->getMethodID(cls, "getAbsoluteDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getAfter_e661fe3ba2fafb22] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_e661fe3ba2fafb22] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeSpanMap$Transition::getAbsoluteDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getAbsoluteDate_f1fe4daf77c66560]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_e661fe3ba2fafb22]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_e661fe3ba2fafb22]));
      }

      ::org::orekit::time::AbsoluteDate FieldTimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *NelderMeadSimplex::class$ = NULL;
            jmethodID *NelderMeadSimplex::mids$ = NULL;
            bool NelderMeadSimplex::live$ = false;

            jclass NelderMeadSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_0536af1b89c263e5] = env->getMethodID(cls, "<init>", "([DDDDD)V");
                mids$[mid_init$_b2e19060b99cf780] = env->getMethodID(cls, "<init>", "([[DDDDD)V");
                mids$[mid_init$_0d23f64daa74287b] = env->getMethodID(cls, "<init>", "(IDDDD)V");
                mids$[mid_init$_850a0e81dbd48ad1] = env->getMethodID(cls, "<init>", "(IDDDDD)V");
                mids$[mid_iterate_5af60315979aa937] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_0536af1b89c263e5, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_b2e19060b99cf780, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_0d23f64daa74287b, a0, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_850a0e81dbd48ad1, a0, a1, a2, a3, a4, a5)) {}

            void NelderMeadSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_5af60315979aa937], a0.this$, a1.this$);
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
          namespace noderiv {
            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args);

            static PyMethodDef t_NelderMeadSimplex__methods_[] = {
              DECLARE_METHOD(t_NelderMeadSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NelderMeadSimplex)[] = {
              { Py_tp_methods, t_NelderMeadSimplex__methods_ },
              { Py_tp_init, (void *) t_NelderMeadSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NelderMeadSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(NelderMeadSimplex, t_NelderMeadSimplex, NelderMeadSimplex);

            void t_NelderMeadSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(NelderMeadSimplex), &PY_TYPE_DEF(NelderMeadSimplex), module, "NelderMeadSimplex", 0);
            }

            void t_NelderMeadSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "class_", make_descriptor(NelderMeadSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "wrapfn_", make_descriptor(t_NelderMeadSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NelderMeadSimplex::initializeClass, 1)))
                return NULL;
              return t_NelderMeadSimplex::wrap_Object(NelderMeadSimplex(((t_NelderMeadSimplex *) arg)->object.this$));
            }
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NelderMeadSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4, a5));
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

            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(NelderMeadSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonODEIntegratorBuilder::mids$ = NULL;
        bool PythonODEIntegratorBuilder::live$ = false;

        jclass PythonODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonODEIntegratorBuilder::PythonODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self);
        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonODEIntegratorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonODEIntegratorBuilder, t_PythonODEIntegratorBuilder, PythonODEIntegratorBuilder);

        void t_PythonODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonODEIntegratorBuilder), &PY_TYPE_DEF(PythonODEIntegratorBuilder), module, "PythonODEIntegratorBuilder", 1);
        }

        void t_PythonODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "class_", make_descriptor(PythonODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;", (void *) t_PythonODEIntegratorBuilder_buildIntegrator0 },
            { "pythonDecRef", "()V", (void *) t_PythonODEIntegratorBuilder_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonODEIntegratorBuilder::wrap_Object(PythonODEIntegratorBuilder(((t_PythonODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data)
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
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatInSystem::class$ = NULL;
      jmethodID *SatInSystem::mids$ = NULL;
      bool SatInSystem::live$ = false;

      jclass SatInSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatInSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6f72787e871feff6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;I)V");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
          mids$[mid_getSystem_8b86408cc2633961] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getTwoDigitsRinexPRN_412668abc8d889e9] = env->getMethodID(cls, "getTwoDigitsRinexPRN", "()I");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatInSystem::SatInSystem(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f72787e871feff6, a0.this$, a1)) {}

      jboolean SatInSystem::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint SatInSystem::getPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
      }

      ::org::orekit::gnss::SatelliteSystem SatInSystem::getSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_8b86408cc2633961]));
      }

      jint SatInSystem::getTwoDigitsRinexPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getTwoDigitsRinexPRN_412668abc8d889e9]);
      }

      jint SatInSystem::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data);
      static PyGetSetDef t_SatInSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatInSystem, pRN),
        DECLARE_GET_FIELD(t_SatInSystem, system),
        DECLARE_GET_FIELD(t_SatInSystem, twoDigitsRinexPRN),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatInSystem__methods_[] = {
        DECLARE_METHOD(t_SatInSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, equals, METH_VARARGS),
        DECLARE_METHOD(t_SatInSystem, getPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getSystem, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getTwoDigitsRinexPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatInSystem)[] = {
        { Py_tp_methods, t_SatInSystem__methods_ },
        { Py_tp_init, (void *) t_SatInSystem_init_ },
        { Py_tp_getset, t_SatInSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatInSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatInSystem, t_SatInSystem, SatInSystem);

      void t_SatInSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatInSystem), &PY_TYPE_DEF(SatInSystem), module, "SatInSystem", 0);
      }

      void t_SatInSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "class_", make_descriptor(SatInSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "wrapfn_", make_descriptor(t_SatInSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatInSystem::initializeClass, 1)))
          return NULL;
        return t_SatInSystem::wrap_Object(SatInSystem(((t_SatInSystem *) arg)->object.this$));
      }
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatInSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        SatInSystem object((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
        {
          INT_CALL(object = SatInSystem(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPRN());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) value);
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
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_signedAmplitude_810dcb8f9f5d191a] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
            mids$[mid_signedAmplitude_4ad317f7598a10a9] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAccelerationModel::PythonAccelerationModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAccelerationModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAccelerationModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAccelerationModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_9e26256fb0d384a2]);
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
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *InertialFrameId::class$ = NULL;
        jmethodID *InertialFrameId::mids$ = NULL;
        bool InertialFrameId::live$ = false;
        InertialFrameId *InertialFrameId::EME2000 = NULL;
        InertialFrameId *InertialFrameId::GCRF = NULL;
        InertialFrameId *InertialFrameId::MOD = NULL;
        InertialFrameId *InertialFrameId::TOD = NULL;
        InertialFrameId *InertialFrameId::VEIS1950 = NULL;

        jclass InertialFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/InertialFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_8368c8e86423f205] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/InertialFrameId;");
            mids$[mid_values_d35bcdfa55e31363] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/InertialFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EME2000 = new InertialFrameId(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/rugged/api/InertialFrameId;"));
            GCRF = new InertialFrameId(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/rugged/api/InertialFrameId;"));
            MOD = new InertialFrameId(env->getStaticObjectField(cls, "MOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            TOD = new InertialFrameId(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            VEIS1950 = new InertialFrameId(env->getStaticObjectField(cls, "VEIS1950", "Lorg/orekit/rugged/api/InertialFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialFrameId InertialFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return InertialFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8368c8e86423f205], a0.this$));
        }

        JArray< InertialFrameId > InertialFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< InertialFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_d35bcdfa55e31363]));
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
      namespace api {
        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args);
        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_InertialFrameId_values(PyTypeObject *type);
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data);
        static PyGetSetDef t_InertialFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_InertialFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialFrameId__methods_[] = {
          DECLARE_METHOD(t_InertialFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_InertialFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialFrameId)[] = {
          { Py_tp_methods, t_InertialFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_InertialFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(InertialFrameId, t_InertialFrameId, InertialFrameId);
        PyObject *t_InertialFrameId::wrap_Object(const InertialFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InertialFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InertialFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialFrameId), &PY_TYPE_DEF(InertialFrameId), module, "InertialFrameId", 0);
        }

        void t_InertialFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "class_", make_descriptor(InertialFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "wrapfn_", make_descriptor(t_InertialFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(InertialFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "EME2000", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::EME2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "GCRF", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::GCRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "MOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::MOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "TOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::TOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "VEIS1950", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::VEIS1950)));
        }

        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialFrameId::initializeClass, 1)))
            return NULL;
          return t_InertialFrameId::wrap_Object(InertialFrameId(((t_InertialFrameId *) arg)->object.this$));
        }
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          InertialFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::valueOf(a0));
            return t_InertialFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_InertialFrameId_values(PyTypeObject *type)
        {
          JArray< InertialFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_InertialFrameId::wrap_jobject);
        }
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
