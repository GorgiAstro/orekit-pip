#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *IntegerDistribution::class$ = NULL;
      jmethodID *IntegerDistribution::mids$ = NULL;
      bool IntegerDistribution::live$ = false;

      jclass IntegerDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/IntegerDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
          mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
          mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
          mids$[mid_inverseCumulativeProbability_12ebab281ee35c98] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
          mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
          mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");
          mids$[mid_probability_a84e4ee1da3f1ab8] = env->getMethodID(cls, "probability", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IntegerDistribution::cumulativeProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
      }

      jdouble IntegerDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
      }

      jdouble IntegerDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
      }

      jint IntegerDistribution::getSupportLowerBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
      }

      jint IntegerDistribution::getSupportUpperBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
      }

      jint IntegerDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_12ebab281ee35c98], a0);
      }

      jboolean IntegerDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
      }

      jdouble IntegerDistribution::logProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
      }

      jdouble IntegerDistribution::probability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
      }

      jdouble IntegerDistribution::probability(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_a84e4ee1da3f1ab8], a0, a1);
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
      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args);
      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data);
      static PyGetSetDef t_IntegerDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalMean),
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportConnected),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IntegerDistribution__methods_[] = {
        DECLARE_METHOD(t_IntegerDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, logProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntegerDistribution)[] = {
        { Py_tp_methods, t_IntegerDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IntegerDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntegerDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntegerDistribution, t_IntegerDistribution, IntegerDistribution);

      void t_IntegerDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(IntegerDistribution), &PY_TYPE_DEF(IntegerDistribution), module, "IntegerDistribution", 0);
      }

      void t_IntegerDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "class_", make_descriptor(IntegerDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "wrapfn_", make_descriptor(t_IntegerDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntegerDistribution::initializeClass, 1)))
          return NULL;
        return t_IntegerDistribution::wrap_Object(IntegerDistribution(((t_IntegerDistribution *) arg)->object.this$));
      }
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntegerDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.logProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jdouble result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.probability(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.probability(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getConditionNumber_456d9a2f64d6b28d] = env->getMethodID(cls, "getConditionNumber", "()D");
          mids$[mid_getCovariance_2461b653ab91779b] = env->getMethodID(cls, "getCovariance", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getInverseConditionNumber_456d9a2f64d6b28d] = env->getMethodID(cls, "getInverseConditionNumber", "()D");
          mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getRank_f2f64475e4580546] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getS_7116bbecdd8ceb21] = env->getMethodID(cls, "getS", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSingularValues_7cdc325af0834901] = env->getMethodID(cls, "getSingularValues", "()[D");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_7116bbecdd8ceb21] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getUT_7116bbecdd8ceb21] = env->getMethodID(cls, "getUT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_7116bbecdd8ceb21] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_7116bbecdd8ceb21] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposition::SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      jdouble SingularValueDecomposition::getConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getConditionNumber_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getCovariance(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_2461b653ab91779b], a0));
      }

      jdouble SingularValueDecomposition::getInverseConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInverseConditionNumber_456d9a2f64d6b28d]);
      }

      jdouble SingularValueDecomposition::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
      }

      jint SingularValueDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getS() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getS_7116bbecdd8ceb21]));
      }

      JArray< jdouble > SingularValueDecomposition::getSingularValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSingularValues_7cdc325af0834901]));
      }

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getUT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getUT_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_7116bbecdd8ceb21]));
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractCycleSlipDetector::class$ = NULL;
          jmethodID *PythonAbstractCycleSlipDetector::mids$ = NULL;
          bool PythonAbstractCycleSlipDetector::live$ = false;

          jclass PythonAbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cycleSlipDataSet_caa451652427585a] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getMaxTimeBeetween2Measurement_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getResults_a6156df500549a58] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_manageData_a74883e6a7063961] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_setName_7d9ccf00009ef79e] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void PythonAbstractCycleSlipDetector::cycleSlipDataSet(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::gnss::Frequency & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_cycleSlipDataSet_caa451652427585a], a0.this$, a1.this$, a2, a3.this$);
          }

          void PythonAbstractCycleSlipDetector::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jdouble PythonAbstractCycleSlipDetector::getMaxTimeBeetween2Measurement() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxTimeBeetween2Measurement_456d9a2f64d6b28d]);
          }

          jint PythonAbstractCycleSlipDetector::getMinMeasurementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getMinMeasurementNumber_f2f64475e4580546]);
          }

          ::java::util::List PythonAbstractCycleSlipDetector::getResults() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getResults_a6156df500549a58]));
          }

          jlong PythonAbstractCycleSlipDetector::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractCycleSlipDetector::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }

          ::java::lang::String PythonAbstractCycleSlipDetector::setName(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_setName_7d9ccf00009ef79e], a0, a1.this$));
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
          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyGetSetDef t_PythonAbstractCycleSlipDetector__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, maxTimeBeetween2Measurement),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, minMeasurementNumber),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, results),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cycleSlipDataSet, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMaxTimeBeetween2Measurement, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMinMeasurementNumber, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getResults, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, setName, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_PythonAbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PythonAbstractCycleSlipDetector__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PythonAbstractCycleSlipDetector, t_PythonAbstractCycleSlipDetector, PythonAbstractCycleSlipDetector);

          void t_PythonAbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractCycleSlipDetector), &PY_TYPE_DEF(PythonAbstractCycleSlipDetector), module, "PythonAbstractCycleSlipDetector", 1);
          }

          void t_PythonAbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "class_", make_descriptor(PythonAbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_PythonAbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractCycleSlipDetector::initializeClass);
            JNINativeMethod methods[] = {
              { "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V", (void *) t_PythonAbstractCycleSlipDetector_manageData0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractCycleSlipDetector_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractCycleSlipDetector::wrap_Object(PythonAbstractCycleSlipDetector(((t_PythonAbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::gnss::Frequency a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "skDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::Frequency::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.cycleSlipDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "cycleSlipDataSet", args);
            return NULL;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getResults());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.setName(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setName", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "manageData", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getResults());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarC::class$ = NULL;
          jmethodID *FieldCopolarC::mids$ = NULL;
          bool FieldCopolarC::live$ = false;

          jclass FieldCopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_e6d4d3215c30992a] = env->getMethodID(cls, "dc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nc_e6d4d3215c30992a] = env->getMethodID(cls, "nc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sc_e6d4d3215c30992a] = env->getMethodID(cls, "sc", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::dc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dc_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::nc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nc_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::sc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sc_e6d4d3215c30992a]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args);
          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data);
          static PyGetSetDef t_FieldCopolarC__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarC, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarC__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarC)[] = {
            { Py_tp_methods, t_FieldCopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarC__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarC, t_FieldCopolarC, FieldCopolarC);
          PyObject *t_FieldCopolarC::wrap_Object(const FieldCopolarC& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarC::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarC), &PY_TYPE_DEF(FieldCopolarC), module, "FieldCopolarC", 0);
          }

          void t_FieldCopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "class_", make_descriptor(FieldCopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "wrapfn_", make_descriptor(t_FieldCopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarC::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarC::wrap_Object(FieldCopolarC(((t_FieldCopolarC *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data)
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
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ComparableMeasurement::class$ = NULL;
        jmethodID *ComparableMeasurement::mids$ = NULL;
        bool ComparableMeasurement::live$ = false;

        jclass ComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compareTo_5d68114462a4e82e] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_getObservedValue_7cdc325af0834901] = env->getMethodID(cls, "getObservedValue", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint ComparableMeasurement::compareTo(const ComparableMeasurement & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_5d68114462a4e82e], a0.this$);
        }

        JArray< jdouble > ComparableMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_7cdc325af0834901]));
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
        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg);
        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self);
        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data);
        static PyGetSetDef t_ComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ComparableMeasurement, observedValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_ComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, compareTo, METH_O),
          DECLARE_METHOD(t_ComparableMeasurement, getObservedValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ComparableMeasurement)[] = {
          { Py_tp_methods, t_ComparableMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ComparableMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
          NULL
        };

        DEFINE_TYPE(ComparableMeasurement, t_ComparableMeasurement, ComparableMeasurement);

        void t_ComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ComparableMeasurement), &PY_TYPE_DEF(ComparableMeasurement), module, "ComparableMeasurement", 0);
        }

        void t_ComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "class_", make_descriptor(ComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "wrapfn_", make_descriptor(t_ComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_ComparableMeasurement::wrap_Object(ComparableMeasurement(((t_ComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg)
        {
          ComparableMeasurement a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "k", ComparableMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
          return NULL;
        }

        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldFixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FieldFixedNumberInterpolationGrid::mids$ = NULL;
            bool FieldFixedNumberInterpolationGrid::live$ = false;

            jclass FieldFixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a69d58691b2f6a42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
                mids$[mid_getGridPoints_492e97ecdce43bb1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldFixedNumberInterpolationGrid::FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a69d58691b2f6a42, a0.this$, a1)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldFixedNumberInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_492e97ecdce43bb1], a0.this$, a1.this$));
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
            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldFixedNumberInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldFixedNumberInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldFixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldFixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldFixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldFixedNumberInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldFixedNumberInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldFixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldFixedNumberInterpolationGrid, t_FieldFixedNumberInterpolationGrid, FieldFixedNumberInterpolationGrid);
            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_Object(const FieldFixedNumberInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldFixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldFixedNumberInterpolationGrid), &PY_TYPE_DEF(FieldFixedNumberInterpolationGrid), module, "FieldFixedNumberInterpolationGrid", 0);
            }

            void t_FieldFixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "class_", make_descriptor(FieldFixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FieldFixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldFixedNumberInterpolationGrid::wrap_Object(FieldFixedNumberInterpolationGrid(((t_FieldFixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldFixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldFixedNumberInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data)
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
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *VersionedITRF::class$ = NULL;
      jmethodID *VersionedITRF::mids$ = NULL;
      bool VersionedITRF::live$ = false;

      jclass VersionedITRF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/VersionedITRF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getITRFVersion_f157e1cf87d45e2d] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion VersionedITRF::getITRFVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_f157e1cf87d45e2d]));
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
      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self);
      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data);
      static PyGetSetDef t_VersionedITRF__fields_[] = {
        DECLARE_GET_FIELD(t_VersionedITRF, iTRFVersion),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VersionedITRF__methods_[] = {
        DECLARE_METHOD(t_VersionedITRF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, getITRFVersion, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VersionedITRF)[] = {
        { Py_tp_methods, t_VersionedITRF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VersionedITRF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VersionedITRF)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(VersionedITRF, t_VersionedITRF, VersionedITRF);

      void t_VersionedITRF::install(PyObject *module)
      {
        installType(&PY_TYPE(VersionedITRF), &PY_TYPE_DEF(VersionedITRF), module, "VersionedITRF", 0);
      }

      void t_VersionedITRF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "class_", make_descriptor(VersionedITRF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "wrapfn_", make_descriptor(t_VersionedITRF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VersionedITRF::initializeClass, 1)))
          return NULL;
        return t_VersionedITRF::wrap_Object(VersionedITRF(((t_VersionedITRF *) arg)->object.this$));
      }
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VersionedITRF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractPropagator.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractPropagator::class$ = NULL;
      jmethodID *AbstractPropagator::mids$ = NULL;
      bool AbstractPropagator::live$ = false;

      jclass AbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_a44bf32d2051f26b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setupMatricesComputation_01864381ad74adf6] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");
          mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_setStartDate_e82d68cd9f886886] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_updateAdditionalStates_81fc6fb6078d2aa7] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_initializePropagation_7ae3461a92a43152] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_e82d68cd9f886886] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getStartDate_aaa854c403487cf3] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getHarvester_951a1d304cf6ca43] = env->getMethodID(cls, "getHarvester", "()Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_updateUnmanagedStates_81fc6fb6078d2aa7] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_stateChanged_2b88003f931f70a7] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a], a0.this$);
      }

      ::java::util::List AbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_a6156df500549a58]));
      }

      ::org::orekit::attitudes::AttitudeProvider AbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
      }

      ::org::orekit::frames::Frame AbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
      }

      JArray< ::java::lang::String > AbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer AbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_a44bf32d2051f26b]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbstractPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      jboolean AbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_889031abe87f3b14], a0.this$));
      }

      void AbstractPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
      }

      void AbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
      }

      ::org::orekit::propagation::MatricesHarvester AbstractPropagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_01864381ad74adf6], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data);
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data);
      static PyGetSetDef t_AbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_AbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_AbstractPropagator, frame),
        DECLARE_GET_FIELD(t_AbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_AbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_AbstractPropagator, multiplexer),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_AbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractPropagator)[] = {
        { Py_tp_methods, t_AbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractPropagator, t_AbstractPropagator, AbstractPropagator);

      void t_AbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractPropagator), &PY_TYPE_DEF(AbstractPropagator), module, "AbstractPropagator", 0);
      }

      void t_AbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "class_", make_descriptor(AbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "wrapfn_", make_descriptor(t_AbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_AbstractPropagator::wrap_Object(AbstractPropagator(((t_AbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver::live$ = false;

        jclass BracketedRealFieldUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getRelativeAccuracy_e6d4d3215c30992a] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_5c3995ef461ab33a] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_bd9fc31bb28b152c] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_5fff218b4cf3ea84] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");
            mids$[mid_solveInterval_a9462a1ad9e05468] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_e6d4d3215c30992a]));
        }

        jint BracketedRealFieldUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_e6d4d3215c30992a]));
        }

        jint BracketedRealFieldUnivariateSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_5c3995ef461ab33a], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_bd9fc31bb28b152c], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_5fff218b4cf3ea84], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_a9462a1ad9e05468], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver, t_BracketedRealFieldUnivariateSolver, BracketedRealFieldUnivariateSolver);
        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_Object(const BracketedRealFieldUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver), module, "BracketedRealFieldUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval)));
        }

        void t_BracketedRealFieldUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "class_", make_descriptor(BracketedRealFieldUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver::wrap_Object(BracketedRealFieldUnivariateSolver(((t_BracketedRealFieldUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedGenerator::class$ = NULL;
      jmethodID *PythonTimeStampedGenerator::mids$ = NULL;
      bool PythonTimeStampedGenerator::live$ = false;

      jclass PythonTimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_generate_b7149ea6787a6f3c] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedGenerator::PythonTimeStampedGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeStampedGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeStampedGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeStampedGenerator::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args);
      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self);
      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data);
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data);
      static PyGetSetDef t_PythonTimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedGenerator)[] = {
        { Py_tp_methods, t_PythonTimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedGenerator_init_ },
        { Py_tp_getset, t_PythonTimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedGenerator, t_PythonTimeStampedGenerator, PythonTimeStampedGenerator);
      PyObject *t_PythonTimeStampedGenerator::wrap_Object(const PythonTimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedGenerator), &PY_TYPE_DEF(PythonTimeStampedGenerator), module, "PythonTimeStampedGenerator", 1);
      }

      void t_PythonTimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "class_", make_descriptor(PythonTimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "wrapfn_", make_descriptor(t_PythonTimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonTimeStampedGenerator_generate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedGenerator::wrap_Object(PythonTimeStampedGenerator(((t_PythonTimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedGenerator object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("generate", result);
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

      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data)
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
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CartesianOrbit::class$ = NULL;
      jmethodID *CartesianOrbit::mids$ = NULL;
      bool CartesianOrbit::live$ = false;

      jclass CartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c42dca2c1e36096d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_e115ec145d0ee229] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_3712bdf29907e736] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianOrbit::CartesianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_c42dca2c1e36096d, a0.this$, a1.this$, a2)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e115ec145d0ee229, a0.this$, a1.this$, a2.this$, a3)) {}

      void CartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_c8fa6ba58ef7126b], a0.this$, a1, a2.this$);
      }

      jdouble CartesianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble CartesianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::OrbitType CartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean CartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      CartesianOrbit CartesianOrbit::shiftedBy(jdouble a0) const
      {
        return CartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_3712bdf29907e736], a0));
      }

      ::java::lang::String CartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data);
      static PyGetSetDef t_CartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianOrbit, a),
        DECLARE_GET_FIELD(t_CartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, e),
        DECLARE_GET_FIELD(t_CartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hx),
        DECLARE_GET_FIELD(t_CartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hy),
        DECLARE_GET_FIELD(t_CartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, i),
        DECLARE_GET_FIELD(t_CartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lE),
        DECLARE_GET_FIELD(t_CartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lM),
        DECLARE_GET_FIELD(t_CartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lv),
        DECLARE_GET_FIELD(t_CartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_CartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianOrbit)[] = {
        { Py_tp_methods, t_CartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_CartesianOrbit_init_ },
        { Py_tp_getset, t_CartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CartesianOrbit, t_CartesianOrbit, CartesianOrbit);

      void t_CartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianOrbit), &PY_TYPE_DEF(CartesianOrbit), module, "CartesianOrbit", 0);
      }

      void t_CartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "class_", make_descriptor(CartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "wrapfn_", make_descriptor(t_CartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_CartesianOrbit::wrap_Object(CartesianOrbit(((t_CartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble a0;
        CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffect::class$ = NULL;
          jmethodID *PythonParametricModelEffect::mids$ = NULL;
          bool PythonParametricModelEffect::live$ = false;

          jclass PythonParametricModelEffect::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_79833a4daf329f8b] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffect::PythonParametricModelEffect() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonParametricModelEffect::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonParametricModelEffect::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonParametricModelEffect::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self);
          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args);
          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffect__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffect, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffect__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffect, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffect, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffect)[] = {
            { Py_tp_methods, t_PythonParametricModelEffect__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffect_init_ },
            { Py_tp_getset, t_PythonParametricModelEffect__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffect)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffect, t_PythonParametricModelEffect, PythonParametricModelEffect);

          void t_PythonParametricModelEffect::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffect), &PY_TYPE_DEF(PythonParametricModelEffect), module, "PythonParametricModelEffect", 1);
          }

          void t_PythonParametricModelEffect::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "class_", make_descriptor(PythonParametricModelEffect::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "wrapfn_", make_descriptor(t_PythonParametricModelEffect::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffect::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonParametricModelEffect_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffect_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffect::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffect::wrap_Object(PythonParametricModelEffect(((t_PythonParametricModelEffect *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffect::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffect object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffect());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args)
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

          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data)
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
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouGeo::class$ = NULL;
        jmethodID *BeidouGeo::mids$ = NULL;
        bool BeidouGeo::live$ = false;

        jclass BeidouGeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouGeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65fb710ff0be7da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouGeo::BeidouGeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_65fb710ff0be7da1, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouGeo__methods_[] = {
          DECLARE_METHOD(t_BeidouGeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouGeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouGeo)[] = {
          { Py_tp_methods, t_BeidouGeo__methods_ },
          { Py_tp_init, (void *) t_BeidouGeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouGeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouGeo, t_BeidouGeo, BeidouGeo);

        void t_BeidouGeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouGeo), &PY_TYPE_DEF(BeidouGeo), module, "BeidouGeo", 0);
        }

        void t_BeidouGeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "class_", make_descriptor(BeidouGeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "wrapfn_", make_descriptor(t_BeidouGeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouGeo::initializeClass, 1)))
            return NULL;
          return t_BeidouGeo::wrap_Object(BeidouGeo(((t_BeidouGeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouGeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouGeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouGeo(a0, a1, a2, a3));
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_compare_78c893983933e0d0] = env->getMethodID(cls, "compare", "(Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareComparator::IntegerLeastSquareComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          jint IntegerLeastSquareComparator::compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a1) const
          {
            return env->callIntMethod(this$, mids$[mid_compare_78c893983933e0d0], a0.this$, a1.this$);
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
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Opm::class$ = NULL;
              jmethodID *Opm::mids$ = NULL;
              bool Opm::live$ = false;
              ::java::lang::String *Opm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Opm::ROOT = NULL;

              jclass Opm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Opm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c312acee610c8d08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_generateCartesianOrbit_7b54ade357cb34f6] = env->getMethodID(cls, "generateCartesianOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
                  mids$[mid_generateKeplerianOrbit_073190698893349f] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_dd3e4a8d51055f1f] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_getData_68c414576c8d207e] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmData;");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManeuver_c348bbaee3991177] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_a6156df500549a58] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_e7e2c53afeab821b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;");
                  mids$[mid_getNbManeuvers_f2f64475e4580546] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_hasManeuvers_e470b6d9e0d979db] = env->getMethodID(cls, "hasManeuvers", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Opm::Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_c312acee610c8d08, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::orbits::CartesianOrbit Opm::generateCartesianOrbit() const
              {
                return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_generateCartesianOrbit_7b54ade357cb34f6]));
              }

              ::org::orekit::orbits::KeplerianOrbit Opm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_073190698893349f]));
              }

              ::org::orekit::propagation::SpacecraftState Opm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_dd3e4a8d51055f1f]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::OpmData Opm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::OpmData(env->callObjectMethod(this$, mids$[mid_getData_68c414576c8d207e]));
              }

              ::org::orekit::time::AbsoluteDate Opm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver Opm::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_c348bbaee3991177], a0));
              }

              ::java::util::List Opm::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata Opm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_e7e2c53afeab821b]));
              }

              jint Opm::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_f2f64475e4580546]);
              }

              ::org::orekit::utils::TimeStampedPVCoordinates Opm::getPVCoordinates() const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6890805957bea2cd]));
              }

              jboolean Opm::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_e470b6d9e0d979db]);
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
            namespace opm {
              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args);
              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self);
              static PyObject *t_Opm_getData(t_Opm *self);
              static PyObject *t_Opm_getDate(t_Opm *self);
              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg);
              static PyObject *t_Opm_getManeuvers(t_Opm *self);
              static PyObject *t_Opm_getMetadata(t_Opm *self);
              static PyObject *t_Opm_getNbManeuvers(t_Opm *self);
              static PyObject *t_Opm_getPVCoordinates(t_Opm *self);
              static PyObject *t_Opm_hasManeuvers(t_Opm *self);
              static PyObject *t_Opm_get__data(t_Opm *self, void *data);
              static PyObject *t_Opm_get__date(t_Opm *self, void *data);
              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data);
              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data);
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data);
              static PyGetSetDef t_Opm__fields_[] = {
                DECLARE_GET_FIELD(t_Opm, data),
                DECLARE_GET_FIELD(t_Opm, date),
                DECLARE_GET_FIELD(t_Opm, maneuvers),
                DECLARE_GET_FIELD(t_Opm, metadata),
                DECLARE_GET_FIELD(t_Opm, nbManeuvers),
                DECLARE_GET_FIELD(t_Opm, pVCoordinates),
                DECLARE_GET_FIELD(t_Opm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Opm__methods_[] = {
                DECLARE_METHOD(t_Opm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Opm, generateCartesianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getManeuver, METH_O),
                DECLARE_METHOD(t_Opm, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getPVCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_Opm, hasManeuvers, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Opm)[] = {
                { Py_tp_methods, t_Opm__methods_ },
                { Py_tp_init, (void *) t_Opm_init_ },
                { Py_tp_getset, t_Opm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Opm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Opm, t_Opm, Opm);
              PyObject *t_Opm::wrap_Object(const Opm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Opm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Opm::install(PyObject *module)
              {
                installType(&PY_TYPE(Opm), &PY_TYPE_DEF(Opm), module, "Opm", 0);
              }

              void t_Opm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "class_", make_descriptor(Opm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "wrapfn_", make_descriptor(t_Opm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Opm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Opm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "ROOT", make_descriptor(j2p(*Opm::ROOT)));
              }

              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Opm::initializeClass, 1)))
                  return NULL;
                return t_Opm::wrap_Object(Opm(((t_Opm *) arg)->object.this$));
              }
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Opm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Opm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Opm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateCartesianOrbit());
                return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Opm_getData(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(result);
              }

              static PyObject *t_Opm_getDate(t_Opm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_Opm_getManeuvers(t_Opm *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_Opm_getMetadata(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(result);
              }

              static PyObject *t_Opm_getNbManeuvers(t_Opm *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Opm_getPVCoordinates(t_Opm *self)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }

              static PyObject *t_Opm_hasManeuvers(t_Opm *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Opm_get__data(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(value);
              }

              static PyObject *t_Opm_get__date(t_Opm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(value);
              }

              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
                OBJ_CALL(value = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
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
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedPCVS::class$ = NULL;
        jmethodID *AppliedPCVS::mids$ = NULL;
        bool AppliedPCVS::live$ = false;

        jclass AppliedPCVS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedPCVS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6714f1ed69431720] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgPCVS_0090f7797e403f43] = env->getMethodID(cls, "getProgPCVS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourcePCVS_0090f7797e403f43] = env->getMethodID(cls, "getSourcePCVS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedPCVS::AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6714f1ed69431720, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedPCVS::getProgPCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgPCVS_0090f7797e403f43]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedPCVS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
        }

        ::java::lang::String AppliedPCVS::getSourcePCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourcePCVS_0090f7797e403f43]));
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
        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data);
        static PyGetSetDef t_AppliedPCVS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedPCVS, progPCVS),
          DECLARE_GET_FIELD(t_AppliedPCVS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedPCVS, sourcePCVS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedPCVS__methods_[] = {
          DECLARE_METHOD(t_AppliedPCVS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, getProgPCVS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSourcePCVS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedPCVS)[] = {
          { Py_tp_methods, t_AppliedPCVS__methods_ },
          { Py_tp_init, (void *) t_AppliedPCVS_init_ },
          { Py_tp_getset, t_AppliedPCVS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedPCVS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedPCVS, t_AppliedPCVS, AppliedPCVS);

        void t_AppliedPCVS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedPCVS), &PY_TYPE_DEF(AppliedPCVS), module, "AppliedPCVS", 0);
        }

        void t_AppliedPCVS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "class_", make_descriptor(AppliedPCVS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "wrapfn_", make_descriptor(t_AppliedPCVS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedPCVS::initializeClass, 1)))
            return NULL;
          return t_AppliedPCVS::wrap_Object(AppliedPCVS(((t_AppliedPCVS *) arg)->object.this$));
        }
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedPCVS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedPCVS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedPCVS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgPCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourcePCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgPCVS());
          return j2p(value);
        }

        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourcePCVS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractKalmanEstimator::class$ = NULL;
        jmethodID *AbstractKalmanEstimator::mids$ = NULL;
        bool AbstractKalmanEstimator::live$ = false;

        jclass AbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOrbitalParametersDrivers_2ede96f23730e099] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPropagationParametersDrivers_2ede96f23730e099] = env->getMethodID(cls, "getPropagationParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate AbstractKalmanEstimator::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint AbstractKalmanEstimator::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_2ede96f23730e099], a0));
        }

        ::org::hipparchus::linear::RealMatrix AbstractKalmanEstimator::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector AbstractKalmanEstimator::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getPropagationParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_2ede96f23730e099], a0));
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
        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_AbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentDate),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPropagationParametersDrivers, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_AbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanEstimator, t_AbstractKalmanEstimator, AbstractKalmanEstimator);

        void t_AbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanEstimator), &PY_TYPE_DEF(AbstractKalmanEstimator), module, "AbstractKalmanEstimator", 0);
        }

        void t_AbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "class_", make_descriptor(AbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "wrapfn_", make_descriptor(t_AbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanEstimator::wrap_Object(AbstractKalmanEstimator(((t_AbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagationParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagationParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPSystem::class$ = NULL;
      jmethodID *CR3BPSystem::mids$ = NULL;
      bool CR3BPSystem::live$ = false;

      jclass CR3BPSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ea08a17df0e3a74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)V");
          mids$[mid_init$_15b685b75bc6e517] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;DD)V");
          mids$[mid_getDdim_456d9a2f64d6b28d] = env->getMethodID(cls, "getDdim", "()D");
          mids$[mid_getGamma_fc49ba8792d2b7aa] = env->getMethodID(cls, "getGamma", "(Lorg/orekit/utils/LagrangianPoints;)D");
          mids$[mid_getLPosition_070629510bda410a] = env->getMethodID(cls, "getLPosition", "(Lorg/orekit/utils/LagrangianPoints;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMassRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getMassRatio", "()D");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPrimary_798caa59db6076aa] = env->getMethodID(cls, "getPrimary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getRealAPV_6bdea4a9586f6eb5] = env->getMethodID(cls, "getRealAPV", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getRotatingFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getRotatingFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSecondary_798caa59db6076aa] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getTdim_456d9a2f64d6b28d] = env->getMethodID(cls, "getTdim", "()D");
          mids$[mid_getVdim_456d9a2f64d6b28d] = env->getMethodID(cls, "getVdim", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ea08a17df0e3a74, a0.this$, a1.this$, a2)) {}

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15b685b75bc6e517, a0.this$, a1.this$, a2, a3)) {}

      jdouble CR3BPSystem::getDdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdim_456d9a2f64d6b28d]);
      }

      jdouble CR3BPSystem::getGamma(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_fc49ba8792d2b7aa], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPSystem::getLPosition(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLPosition_070629510bda410a], a0.this$));
      }

      jdouble CR3BPSystem::getMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMassRatio_456d9a2f64d6b28d]);
      }

      ::java::lang::String CR3BPSystem::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getPrimary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPrimary_798caa59db6076aa]));
      }

      ::org::orekit::utils::AbsolutePVCoordinates CR3BPSystem::getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getRealAPV_6bdea4a9586f6eb5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame CR3BPSystem::getRotatingFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRotatingFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getSecondary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSecondary_798caa59db6076aa]));
      }

      jdouble CR3BPSystem::getTdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdim_456d9a2f64d6b28d]);
      }

      jdouble CR3BPSystem::getVdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdim_456d9a2f64d6b28d]);
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
      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args);
      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data);
      static PyGetSetDef t_CR3BPSystem__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPSystem, ddim),
        DECLARE_GET_FIELD(t_CR3BPSystem, massRatio),
        DECLARE_GET_FIELD(t_CR3BPSystem, name),
        DECLARE_GET_FIELD(t_CR3BPSystem, primary),
        DECLARE_GET_FIELD(t_CR3BPSystem, rotatingFrame),
        DECLARE_GET_FIELD(t_CR3BPSystem, secondary),
        DECLARE_GET_FIELD(t_CR3BPSystem, tdim),
        DECLARE_GET_FIELD(t_CR3BPSystem, vdim),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPSystem__methods_[] = {
        DECLARE_METHOD(t_CR3BPSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, getDdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getGamma, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getLPosition, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getName, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRealAPV, METH_VARARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRotatingFrame, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getSecondary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getTdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getVdim, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPSystem)[] = {
        { Py_tp_methods, t_CR3BPSystem__methods_ },
        { Py_tp_init, (void *) t_CR3BPSystem_init_ },
        { Py_tp_getset, t_CR3BPSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPSystem, t_CR3BPSystem, CR3BPSystem);

      void t_CR3BPSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPSystem), &PY_TYPE_DEF(CR3BPSystem), module, "CR3BPSystem", 0);
      }

      void t_CR3BPSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "class_", make_descriptor(CR3BPSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "wrapfn_", make_descriptor(t_CR3BPSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPSystem::initializeClass, 1)))
          return NULL;
        return t_CR3BPSystem::wrap_Object(CR3BPSystem(((t_CR3BPSystem *) arg)->object.this$));
      }
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkDD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2, a3));
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

      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getGamma(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGamma", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getLPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLPosition", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args)
      {
        ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getRealAPV(a0, a1, a2));
          return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRealAPV", args);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdim());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame5B::class$ = NULL;
          jmethodID *SubFrame5B::mids$ = NULL;
          bool SubFrame5B::live$ = false;

          jclass SubFrame5B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame5B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReservedA10_f2f64475e4580546] = env->getMethodID(cls, "getReservedA10", "()I");
              mids$[mid_getReservedB10_f2f64475e4580546] = env->getMethodID(cls, "getReservedB10", "()I");
              mids$[mid_getSvHealth_38565d58479aa24a] = env->getMethodID(cls, "getSvHealth", "(I)I");
              mids$[mid_getTOA_f2f64475e4580546] = env->getMethodID(cls, "getTOA", "()I");
              mids$[mid_getWeekNumber_f2f64475e4580546] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame5B::getReservedA10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA10_f2f64475e4580546]);
          }

          jint SubFrame5B::getReservedB10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB10_f2f64475e4580546]);
          }

          jint SubFrame5B::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_38565d58479aa24a], a0);
          }

          jint SubFrame5B::getTOA() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOA_f2f64475e4580546]);
          }

          jint SubFrame5B::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_f2f64475e4580546]);
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
          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg);
          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data);
          static PyGetSetDef t_SubFrame5B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame5B, reservedA10),
            DECLARE_GET_FIELD(t_SubFrame5B, reservedB10),
            DECLARE_GET_FIELD(t_SubFrame5B, tOA),
            DECLARE_GET_FIELD(t_SubFrame5B, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame5B__methods_[] = {
            DECLARE_METHOD(t_SubFrame5B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, getReservedA10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getReservedB10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getSvHealth, METH_O),
            DECLARE_METHOD(t_SubFrame5B, getTOA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame5B)[] = {
            { Py_tp_methods, t_SubFrame5B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame5B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame5B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame5B, t_SubFrame5B, SubFrame5B);

          void t_SubFrame5B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame5B), &PY_TYPE_DEF(SubFrame5B), module, "SubFrame5B", 0);
          }

          void t_SubFrame5B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "class_", make_descriptor(SubFrame5B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "wrapfn_", make_descriptor(t_SubFrame5B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame5B::initializeClass, 1)))
              return NULL;
            return t_SubFrame5B::wrap_Object(SubFrame5B(((t_SubFrame5B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame5B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonDatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonDatesSelector::class$ = NULL;
      jmethodID *PythonDatesSelector::mids$ = NULL;
      bool PythonDatesSelector::live$ = false;

      jclass PythonDatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonDatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_selectDates_b7149ea6787a6f3c] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDatesSelector::PythonDatesSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonDatesSelector::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonDatesSelector::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonDatesSelector::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self);
      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args);
      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data);
      static PyGetSetDef t_PythonDatesSelector__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDatesSelector, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDatesSelector__methods_[] = {
        DECLARE_METHOD(t_PythonDatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDatesSelector, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDatesSelector)[] = {
        { Py_tp_methods, t_PythonDatesSelector__methods_ },
        { Py_tp_init, (void *) t_PythonDatesSelector_init_ },
        { Py_tp_getset, t_PythonDatesSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDatesSelector, t_PythonDatesSelector, PythonDatesSelector);

      void t_PythonDatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDatesSelector), &PY_TYPE_DEF(PythonDatesSelector), module, "PythonDatesSelector", 1);
      }

      void t_PythonDatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "class_", make_descriptor(PythonDatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "wrapfn_", make_descriptor(t_PythonDatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDatesSelector::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDatesSelector_pythonDecRef0 },
          { "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonDatesSelector_selectDates1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDatesSelector::initializeClass, 1)))
          return NULL;
        return t_PythonDatesSelector::wrap_Object(PythonDatesSelector(((t_PythonDatesSelector *) arg)->object.this$));
      }
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds)
      {
        PythonDatesSelector object((jobject) NULL);

        INT_CALL(object = PythonDatesSelector());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args)
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

      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "selectDates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("selectDates", result);
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

      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008::class$ = NULL;
          jmethodID *JB2008::mids$ = NULL;
          bool JB2008::live$ = false;

          jclass JB2008::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_659e747bd3adf751] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_bb07b2e79fbd40d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_10897b7932924806] = env->getMethodID(cls, "getDensity", "(DDDDDDDDDDDDDDD)D");
              mids$[mid_getDensity_415ce2e049156dda] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDDDDDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_659e747bd3adf751, a0.this$, a1.this$, a2.this$)) {}

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb07b2e79fbd40d8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble JB2008::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          jdouble JB2008::getDensity(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_10897b7932924806], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_415ce2e049156dda], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          }

          ::org::orekit::frames::Frame JB2008::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args);
          static PyObject *t_JB2008_getFrame(t_JB2008 *self);
          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data);
          static PyGetSetDef t_JB2008__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008__methods_[] = {
            DECLARE_METHOD(t_JB2008, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_JB2008, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008)[] = {
            { Py_tp_methods, t_JB2008__methods_ },
            { Py_tp_init, (void *) t_JB2008_init_ },
            { Py_tp_getset, t_JB2008__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JB2008, t_JB2008, JB2008);

          void t_JB2008::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008), &PY_TYPE_DEF(JB2008), module, "JB2008", 0);
          }

          void t_JB2008::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "class_", make_descriptor(JB2008::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "wrapfn_", make_descriptor(t_JB2008::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008::initializeClass, 1)))
              return NULL;
            return t_JB2008::wrap_Object(JB2008(((t_JB2008 *) arg)->object.this$));
          }
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = JB2008(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = JB2008(a0, a1, a2, a3));
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

          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 15:
              {
                jdouble a0;
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
                jdouble result;

                if (!parseArgs(args, "DDDDDDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKKKDDDDDDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_JB2008_getFrame(t_JB2008 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesFieldIntegratorBuilder::live$ = false;

        jclass ThreeEighthesFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ThreeEighthesFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegratorBuilder, t_ThreeEighthesFieldIntegratorBuilder, ThreeEighthesFieldIntegratorBuilder);
        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(const ThreeEighthesFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder), module, "ThreeEighthesFieldIntegratorBuilder", 0);
        }

        void t_ThreeEighthesFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "class_", make_descriptor(ThreeEighthesFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(ThreeEighthesFieldIntegratorBuilder(((t_ThreeEighthesFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
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

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleConsumer::mids$ = NULL;
            bool ParseToken$DoubleConsumer::live$ = false;

            jclass ParseToken$DoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleConsumer::accept(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleConsumer, t_ParseToken$DoubleConsumer, ParseToken$DoubleConsumer);

            void t_ParseToken$DoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleConsumer), &PY_TYPE_DEF(ParseToken$DoubleConsumer), module, "ParseToken$DoubleConsumer", 0);
            }

            void t_ParseToken$DoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "class_", make_descriptor(ParseToken$DoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleConsumer::wrap_Object(ParseToken$DoubleConsumer(((t_ParseToken$DoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
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
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearKalmanFilter::class$ = NULL;
          jmethodID *LinearKalmanFilter::mids$ = NULL;
          bool LinearKalmanFilter::live$ = false;

          jclass LinearKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ae6bcf5fefbfefd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/linear/LinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_01cd341bc5eb698c] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearKalmanFilter::LinearKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::linear::LinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_4ae6bcf5fefbfefd, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate LinearKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_01cd341bc5eb698c], a0.this$));
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
        namespace linear {
          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args);
          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args);
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data);
          static PyGetSetDef t_LinearKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_LinearKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_LinearKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearKalmanFilter)[] = {
            { Py_tp_methods, t_LinearKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_LinearKalmanFilter_init_ },
            { Py_tp_getset, t_LinearKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(LinearKalmanFilter, t_LinearKalmanFilter, LinearKalmanFilter);
          PyObject *t_LinearKalmanFilter::wrap_Object(const LinearKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearKalmanFilter), &PY_TYPE_DEF(LinearKalmanFilter), module, "LinearKalmanFilter", 0);
          }

          void t_LinearKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "class_", make_descriptor(LinearKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "wrapfn_", make_descriptor(t_LinearKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_LinearKalmanFilter::wrap_Object(LinearKalmanFilter(((t_LinearKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            LinearKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::linear::LinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::linear::t_LinearProcess::parameters_, &a2))
            {
              INT_CALL(object = LinearKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(LinearKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Phase::class$ = NULL;
          jmethodID *Phase::mids$ = NULL;
          bool Phase::live$ = false;
          ::java::lang::String *Phase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *Phase::MEASUREMENT_TYPE = NULL;

          jclass Phase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Phase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2a546e8c3408b03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Phase::Phase(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a2a546e8c3408b03, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}

          ::org::orekit::utils::ParameterDriver Phase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f]));
          }

          jdouble Phase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_456d9a2f64d6b28d]);
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
          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args);
          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self);
          static PyObject *t_Phase_getWavelength(t_Phase *self);
          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data);
          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data);
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data);
          static PyGetSetDef t_Phase__fields_[] = {
            DECLARE_GET_FIELD(t_Phase, ambiguityDriver),
            DECLARE_GET_FIELD(t_Phase, wavelength),
            DECLARE_GET_FIELD(t_Phase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Phase__methods_[] = {
            DECLARE_METHOD(t_Phase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, of_, METH_VARARGS),
            DECLARE_METHOD(t_Phase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_Phase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Phase)[] = {
            { Py_tp_methods, t_Phase__methods_ },
            { Py_tp_init, (void *) t_Phase_init_ },
            { Py_tp_getset, t_Phase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Phase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
            NULL
          };

          DEFINE_TYPE(Phase, t_Phase, Phase);
          PyObject *t_Phase::wrap_Object(const Phase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Phase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Phase::install(PyObject *module)
          {
            installType(&PY_TYPE(Phase), &PY_TYPE_DEF(Phase), module, "Phase", 0);
          }

          void t_Phase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "class_", make_descriptor(Phase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "wrapfn_", make_descriptor(t_Phase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "boxfn_", make_descriptor(boxObject));
            env->getClass(Phase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "AMBIGUITY_NAME", make_descriptor(j2p(*Phase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "MEASUREMENT_TYPE", make_descriptor(j2p(*Phase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Phase::initializeClass, 1)))
              return NULL;
            return t_Phase::wrap_Object(Phase(((t_Phase *) arg)->object.this$));
          }
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Phase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            Phase object((jobject) NULL);

            if (!parseArgs(args, "kkDDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = Phase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_Phase_getWavelength(t_Phase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
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
          mids$[mid_init$_7257d660d04722f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_f2f64475e4580546] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_9b4010550f8e9669] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolatingTransformProvider::InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7257d660d04722f8, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint InterpolatingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_f2f64475e4580546]);
      }

      ::org::orekit::frames::TransformProvider InterpolatingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_9b4010550f8e9669]));
      }

      jdouble InterpolatingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Transform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
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
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer$Result::class$ = NULL;
        jmethodID *DumpReplayer$Result::mids$ = NULL;
        bool DumpReplayer$Result::live$ = false;

        jclass DumpReplayer$Result::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer$Result");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getExpected_dfd7647d9110ac9f] = env->getMethodID(cls, "getExpected", "()Ljava/lang/Object;");
            mids$[mid_getReplayed_dfd7647d9110ac9f] = env->getMethodID(cls, "getReplayed", "()Ljava/lang/Object;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::Object DumpReplayer$Result::getExpected() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getExpected_dfd7647d9110ac9f]));
        }

        ::java::lang::Object DumpReplayer$Result::getReplayed() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getReplayed_dfd7647d9110ac9f]));
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
        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data);
        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data);
        static PyGetSetDef t_DumpReplayer$Result__fields_[] = {
          DECLARE_GET_FIELD(t_DumpReplayer$Result, expected),
          DECLARE_GET_FIELD(t_DumpReplayer$Result, replayed),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpReplayer$Result__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer$Result, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, getExpected, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer$Result, getReplayed, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer$Result)[] = {
          { Py_tp_methods, t_DumpReplayer$Result__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpReplayer$Result__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer$Result)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer$Result, t_DumpReplayer$Result, DumpReplayer$Result);

        void t_DumpReplayer$Result::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer$Result), &PY_TYPE_DEF(DumpReplayer$Result), module, "DumpReplayer$Result", 0);
        }

        void t_DumpReplayer$Result::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "class_", make_descriptor(DumpReplayer$Result::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "wrapfn_", make_descriptor(t_DumpReplayer$Result::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer$Result::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer$Result::wrap_Object(DumpReplayer$Result(((t_DumpReplayer$Result *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer$Result::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(value);
        }

        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1Frame::class$ = NULL;
      jmethodID *L1Frame::mids$ = NULL;
      bool L1Frame::live$ = false;

      jclass L1Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43ec4ee4a0809dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1Frame::L1Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_43ec4ee4a0809dae, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L1Frame__methods_[] = {
        DECLARE_METHOD(t_L1Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1Frame)[] = {
        { Py_tp_methods, t_L1Frame__methods_ },
        { Py_tp_init, (void *) t_L1Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L1Frame, t_L1Frame, L1Frame);

      void t_L1Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L1Frame), &PY_TYPE_DEF(L1Frame), module, "L1Frame", 0);
      }

      void t_L1Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "class_", make_descriptor(L1Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "wrapfn_", make_descriptor(t_L1Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1Frame::initializeClass, 1)))
          return NULL;
        return t_L1Frame::wrap_Object(L1Frame(((t_L1Frame *) arg)->object.this$));
      }
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1Frame(a0, a1));
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
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FastMath::class$ = NULL;
      jmethodID *FastMath::mids$ = NULL;
      bool FastMath::live$ = false;
      jdouble FastMath::E = (jdouble) 0;
      jdouble FastMath::PI = (jdouble) 0;

      jclass FastMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FastMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_IEEEremainder_824133ce4aec3505] = env->getStaticMethodID(cls, "IEEEremainder", "(DD)D");
          mids$[mid_IEEEremainder_e6afc264a8ab5469] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_IEEEremainder_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_abs_0ba5fed9597b693e] = env->getStaticMethodID(cls, "abs", "(D)D");
          mids$[mid_abs_1b04dd3cb8ced99e] = env->getStaticMethodID(cls, "abs", "(F)F");
          mids$[mid_abs_38565d58479aa24a] = env->getStaticMethodID(cls, "abs", "(I)I");
          mids$[mid_abs_955f7541fca701ab] = env->getStaticMethodID(cls, "abs", "(J)J");
          mids$[mid_abs_d3398190482814dc] = env->getStaticMethodID(cls, "abs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_absExact_38565d58479aa24a] = env->getStaticMethodID(cls, "absExact", "(I)I");
          mids$[mid_absExact_955f7541fca701ab] = env->getStaticMethodID(cls, "absExact", "(J)J");
          mids$[mid_acos_0ba5fed9597b693e] = env->getStaticMethodID(cls, "acos", "(D)D");
          mids$[mid_acos_d3398190482814dc] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acosh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "acosh", "(D)D");
          mids$[mid_acosh_d3398190482814dc] = env->getStaticMethodID(cls, "acosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_addExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "addExact", "(II)I");
          mids$[mid_addExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "addExact", "(JJ)J");
          mids$[mid_asin_0ba5fed9597b693e] = env->getStaticMethodID(cls, "asin", "(D)D");
          mids$[mid_asin_d3398190482814dc] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_asinh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "asinh", "(D)D");
          mids$[mid_asinh_d3398190482814dc] = env->getStaticMethodID(cls, "asinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan_0ba5fed9597b693e] = env->getStaticMethodID(cls, "atan", "(D)D");
          mids$[mid_atan_d3398190482814dc] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan2_824133ce4aec3505] = env->getStaticMethodID(cls, "atan2", "(DD)D");
          mids$[mid_atan2_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atanh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "atanh", "(D)D");
          mids$[mid_atanh_d3398190482814dc] = env->getStaticMethodID(cls, "atanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cbrt_0ba5fed9597b693e] = env->getStaticMethodID(cls, "cbrt", "(D)D");
          mids$[mid_cbrt_d3398190482814dc] = env->getStaticMethodID(cls, "cbrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceil_0ba5fed9597b693e] = env->getStaticMethodID(cls, "ceil", "(D)D");
          mids$[mid_ceil_d3398190482814dc] = env->getStaticMethodID(cls, "ceil", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceilDiv_d9790ac9eecfe931] = env->getStaticMethodID(cls, "ceilDiv", "(II)I");
          mids$[mid_ceilDiv_1672c32325bd5d4a] = env->getStaticMethodID(cls, "ceilDiv", "(JI)J");
          mids$[mid_ceilDiv_8f974216cbe53aea] = env->getStaticMethodID(cls, "ceilDiv", "(JJ)J");
          mids$[mid_ceilDivExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "ceilDivExact", "(II)I");
          mids$[mid_ceilDivExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "ceilDivExact", "(JJ)J");
          mids$[mid_ceilMod_d9790ac9eecfe931] = env->getStaticMethodID(cls, "ceilMod", "(II)I");
          mids$[mid_ceilMod_c2ad10dacdb56c74] = env->getStaticMethodID(cls, "ceilMod", "(JI)I");
          mids$[mid_ceilMod_8f974216cbe53aea] = env->getStaticMethodID(cls, "ceilMod", "(JJ)J");
          mids$[mid_clamp_c564d6ace53a5934] = env->getStaticMethodID(cls, "clamp", "(DDD)D");
          mids$[mid_clamp_b791f597b97e9b2b] = env->getStaticMethodID(cls, "clamp", "(FFF)F");
          mids$[mid_clamp_d725bd0ab17bf037] = env->getStaticMethodID(cls, "clamp", "(III)I");
          mids$[mid_clamp_faaeb4e0662ead6f] = env->getStaticMethodID(cls, "clamp", "(JII)I");
          mids$[mid_clamp_300151394254e45c] = env->getStaticMethodID(cls, "clamp", "(JJJ)J");
          mids$[mid_copySign_824133ce4aec3505] = env->getStaticMethodID(cls, "copySign", "(DD)D");
          mids$[mid_copySign_c50b565e19875e8e] = env->getStaticMethodID(cls, "copySign", "(FF)F");
          mids$[mid_copySign_e6afc264a8ab5469] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copySign_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cos_0ba5fed9597b693e] = env->getStaticMethodID(cls, "cos", "(D)D");
          mids$[mid_cos_d3398190482814dc] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cosh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "cosh", "(D)D");
          mids$[mid_cosh_d3398190482814dc] = env->getStaticMethodID(cls, "cosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_decrementExact_38565d58479aa24a] = env->getStaticMethodID(cls, "decrementExact", "(I)I");
          mids$[mid_decrementExact_955f7541fca701ab] = env->getStaticMethodID(cls, "decrementExact", "(J)J");
          mids$[mid_divideExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "divideExact", "(II)I");
          mids$[mid_divideExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "divideExact", "(JJ)J");
          mids$[mid_exp_0ba5fed9597b693e] = env->getStaticMethodID(cls, "exp", "(D)D");
          mids$[mid_exp_d3398190482814dc] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_expm1_0ba5fed9597b693e] = env->getStaticMethodID(cls, "expm1", "(D)D");
          mids$[mid_expm1_d3398190482814dc] = env->getStaticMethodID(cls, "expm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floor_0ba5fed9597b693e] = env->getStaticMethodID(cls, "floor", "(D)D");
          mids$[mid_floor_d3398190482814dc] = env->getStaticMethodID(cls, "floor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floorDiv_d9790ac9eecfe931] = env->getStaticMethodID(cls, "floorDiv", "(II)I");
          mids$[mid_floorDiv_1672c32325bd5d4a] = env->getStaticMethodID(cls, "floorDiv", "(JI)J");
          mids$[mid_floorDiv_8f974216cbe53aea] = env->getStaticMethodID(cls, "floorDiv", "(JJ)J");
          mids$[mid_floorDivExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "floorDivExact", "(II)I");
          mids$[mid_floorDivExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "floorDivExact", "(JJ)J");
          mids$[mid_floorMod_d9790ac9eecfe931] = env->getStaticMethodID(cls, "floorMod", "(II)I");
          mids$[mid_floorMod_c2ad10dacdb56c74] = env->getStaticMethodID(cls, "floorMod", "(JI)I");
          mids$[mid_floorMod_8f974216cbe53aea] = env->getStaticMethodID(cls, "floorMod", "(JJ)J");
          mids$[mid_fma_c564d6ace53a5934] = env->getStaticMethodID(cls, "fma", "(DDD)D");
          mids$[mid_fma_b791f597b97e9b2b] = env->getStaticMethodID(cls, "fma", "(FFF)F");
          mids$[mid_getExponent_12ebab281ee35c98] = env->getStaticMethodID(cls, "getExponent", "(D)I");
          mids$[mid_getExponent_255f1fc90438be86] = env->getStaticMethodID(cls, "getExponent", "(F)I");
          mids$[mid_hypot_824133ce4aec3505] = env->getStaticMethodID(cls, "hypot", "(DD)D");
          mids$[mid_hypot_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_incrementExact_38565d58479aa24a] = env->getStaticMethodID(cls, "incrementExact", "(I)I");
          mids$[mid_incrementExact_955f7541fca701ab] = env->getStaticMethodID(cls, "incrementExact", "(J)J");
          mids$[mid_log_0ba5fed9597b693e] = env->getStaticMethodID(cls, "log", "(D)D");
          mids$[mid_log_d3398190482814dc] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log_824133ce4aec3505] = env->getStaticMethodID(cls, "log", "(DD)D");
          mids$[mid_log10_0ba5fed9597b693e] = env->getStaticMethodID(cls, "log10", "(D)D");
          mids$[mid_log10_d3398190482814dc] = env->getStaticMethodID(cls, "log10", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log1p_0ba5fed9597b693e] = env->getStaticMethodID(cls, "log1p", "(D)D");
          mids$[mid_log1p_d3398190482814dc] = env->getStaticMethodID(cls, "log1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_824133ce4aec3505] = env->getStaticMethodID(cls, "max", "(DD)D");
          mids$[mid_max_c50b565e19875e8e] = env->getStaticMethodID(cls, "max", "(FF)F");
          mids$[mid_max_d9790ac9eecfe931] = env->getStaticMethodID(cls, "max", "(II)I");
          mids$[mid_max_8f974216cbe53aea] = env->getStaticMethodID(cls, "max", "(JJ)J");
          mids$[mid_max_e6afc264a8ab5469] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_824133ce4aec3505] = env->getStaticMethodID(cls, "min", "(DD)D");
          mids$[mid_min_e6afc264a8ab5469] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_c50b565e19875e8e] = env->getStaticMethodID(cls, "min", "(FF)F");
          mids$[mid_min_d9790ac9eecfe931] = env->getStaticMethodID(cls, "min", "(II)I");
          mids$[mid_min_8f974216cbe53aea] = env->getStaticMethodID(cls, "min", "(JJ)J");
          mids$[mid_min_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_multiplyExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "multiplyExact", "(II)I");
          mids$[mid_multiplyExact_1672c32325bd5d4a] = env->getStaticMethodID(cls, "multiplyExact", "(JI)J");
          mids$[mid_multiplyExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "multiplyExact", "(JJ)J");
          mids$[mid_multiplyFull_c8198fb6cafc4f66] = env->getStaticMethodID(cls, "multiplyFull", "(II)J");
          mids$[mid_multiplyHigh_8f974216cbe53aea] = env->getStaticMethodID(cls, "multiplyHigh", "(JJ)J");
          mids$[mid_negateExact_38565d58479aa24a] = env->getStaticMethodID(cls, "negateExact", "(I)I");
          mids$[mid_negateExact_955f7541fca701ab] = env->getStaticMethodID(cls, "negateExact", "(J)J");
          mids$[mid_nextAfter_824133ce4aec3505] = env->getStaticMethodID(cls, "nextAfter", "(DD)D");
          mids$[mid_nextAfter_489a78d9dd6c8647] = env->getStaticMethodID(cls, "nextAfter", "(FD)F");
          mids$[mid_nextDown_0ba5fed9597b693e] = env->getStaticMethodID(cls, "nextDown", "(D)D");
          mids$[mid_nextDown_1b04dd3cb8ced99e] = env->getStaticMethodID(cls, "nextDown", "(F)F");
          mids$[mid_nextUp_0ba5fed9597b693e] = env->getStaticMethodID(cls, "nextUp", "(D)D");
          mids$[mid_nextUp_1b04dd3cb8ced99e] = env->getStaticMethodID(cls, "nextUp", "(F)F");
          mids$[mid_norm_81a605f8f6c5d3b2] = env->getStaticMethodID(cls, "norm", "(Lorg/hipparchus/CalculusFieldElement;)D");
          mids$[mid_pow_824133ce4aec3505] = env->getStaticMethodID(cls, "pow", "(DD)D");
          mids$[mid_pow_e6afc264a8ab5469] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_bcad94b64f1e2dd8] = env->getStaticMethodID(cls, "pow", "(DI)D");
          mids$[mid_pow_640d4bfe091088ec] = env->getStaticMethodID(cls, "pow", "(DJ)D");
          mids$[mid_pow_fe52a10392d0b9c8] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_random_456d9a2f64d6b28d] = env->getStaticMethodID(cls, "random", "()D");
          mids$[mid_rint_0ba5fed9597b693e] = env->getStaticMethodID(cls, "rint", "(D)D");
          mids$[mid_rint_d3398190482814dc] = env->getStaticMethodID(cls, "rint", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_round_7920263ad8deab44] = env->getStaticMethodID(cls, "round", "(D)J");
          mids$[mid_round_255f1fc90438be86] = env->getStaticMethodID(cls, "round", "(F)I");
          mids$[mid_round_1074a0e6d384e416] = env->getStaticMethodID(cls, "round", "(Lorg/hipparchus/CalculusFieldElement;)J");
          mids$[mid_scalb_bcad94b64f1e2dd8] = env->getStaticMethodID(cls, "scalb", "(DI)D");
          mids$[mid_scalb_7206cd26f5dcc2c0] = env->getStaticMethodID(cls, "scalb", "(FI)F");
          mids$[mid_scalb_fe52a10392d0b9c8] = env->getStaticMethodID(cls, "scalb", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sign_d3398190482814dc] = env->getStaticMethodID(cls, "sign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_signum_0ba5fed9597b693e] = env->getStaticMethodID(cls, "signum", "(D)D");
          mids$[mid_signum_1b04dd3cb8ced99e] = env->getStaticMethodID(cls, "signum", "(F)F");
          mids$[mid_sin_0ba5fed9597b693e] = env->getStaticMethodID(cls, "sin", "(D)D");
          mids$[mid_sin_d3398190482814dc] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinCos_d74701318f74ff9c] = env->getStaticMethodID(cls, "sinCos", "(D)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sinCos_1e571468b6e8a0fc] = env->getStaticMethodID(cls, "sinCos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "sinh", "(D)D");
          mids$[mid_sinh_d3398190482814dc] = env->getStaticMethodID(cls, "sinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinhCosh_98f870be91df2639] = env->getStaticMethodID(cls, "sinhCosh", "(D)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinhCosh_52888d8ca21af4a2] = env->getStaticMethodID(cls, "sinhCosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_0ba5fed9597b693e] = env->getStaticMethodID(cls, "sqrt", "(D)D");
          mids$[mid_sqrt_d3398190482814dc] = env->getStaticMethodID(cls, "sqrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_subtractExact_d9790ac9eecfe931] = env->getStaticMethodID(cls, "subtractExact", "(II)I");
          mids$[mid_subtractExact_8f974216cbe53aea] = env->getStaticMethodID(cls, "subtractExact", "(JJ)J");
          mids$[mid_tan_0ba5fed9597b693e] = env->getStaticMethodID(cls, "tan", "(D)D");
          mids$[mid_tan_d3398190482814dc] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_tanh_0ba5fed9597b693e] = env->getStaticMethodID(cls, "tanh", "(D)D");
          mids$[mid_tanh_d3398190482814dc] = env->getStaticMethodID(cls, "tanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toDegrees_0ba5fed9597b693e] = env->getStaticMethodID(cls, "toDegrees", "(D)D");
          mids$[mid_toDegrees_d3398190482814dc] = env->getStaticMethodID(cls, "toDegrees", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toIntExact_81b31113dbb4e784] = env->getStaticMethodID(cls, "toIntExact", "(J)I");
          mids$[mid_toRadians_0ba5fed9597b693e] = env->getStaticMethodID(cls, "toRadians", "(D)D");
          mids$[mid_toRadians_d3398190482814dc] = env->getStaticMethodID(cls, "toRadians", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ulp_0ba5fed9597b693e] = env->getStaticMethodID(cls, "ulp", "(D)D");
          mids$[mid_ulp_1b04dd3cb8ced99e] = env->getStaticMethodID(cls, "ulp", "(F)F");
          mids$[mid_ulp_d3398190482814dc] = env->getStaticMethodID(cls, "ulp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_unsignedMultiplyHigh_8f974216cbe53aea] = env->getStaticMethodID(cls, "unsignedMultiplyHigh", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          E = env->getStaticDoubleField(cls, "E");
          PI = env->getStaticDoubleField(cls, "PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FastMath::IEEEremainder(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_IEEEremainder_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_e6afc264a8ab5469], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble FastMath::abs(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_abs_0ba5fed9597b693e], a0);
      }

      jfloat FastMath::abs(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_abs_1b04dd3cb8ced99e], a0);
      }

      jint FastMath::abs(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_abs_38565d58479aa24a], a0);
      }

      jlong FastMath::abs(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_abs_955f7541fca701ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::abs(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_abs_d3398190482814dc], a0.this$));
      }

      jint FastMath::absExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_absExact_38565d58479aa24a], a0);
      }

      jlong FastMath::absExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_absExact_955f7541fca701ab], a0);
      }

      jdouble FastMath::acos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acos_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acos_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::acosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acosh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acosh_d3398190482814dc], a0.this$));
      }

      jint FastMath::addExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::addExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addExact_8f974216cbe53aea], a0, a1);
      }

      jdouble FastMath::asin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asin_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asin_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::asinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asinh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asinh_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::atan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::atan2(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan2_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan2_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble FastMath::atanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atanh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atanh_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::cbrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cbrt_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cbrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cbrt_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::ceil(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ceil_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ceil(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ceil_d3398190482814dc], a0.this$));
      }

      jint FastMath::ceilDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDiv_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_1672c32325bd5d4a], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_8f974216cbe53aea], a0, a1);
      }

      jint FastMath::ceilDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDivExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::ceilDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDivExact_8f974216cbe53aea], a0, a1);
      }

      jint FastMath::ceilMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_d9790ac9eecfe931], a0, a1);
      }

      jint FastMath::ceilMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_c2ad10dacdb56c74], a0, a1);
      }

      jlong FastMath::ceilMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilMod_8f974216cbe53aea], a0, a1);
      }

      jdouble FastMath::clamp(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_clamp_c564d6ace53a5934], a0, a1, a2);
      }

      jfloat FastMath::clamp(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_clamp_b791f597b97e9b2b], a0, a1, a2);
      }

      jint FastMath::clamp(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_d725bd0ab17bf037], a0, a1, a2);
      }

      jint FastMath::clamp(jlong a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_faaeb4e0662ead6f], a0, a1, a2);
      }

      jlong FastMath::clamp(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_clamp_300151394254e45c], a0, a1, a2);
      }

      jdouble FastMath::copySign(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_copySign_824133ce4aec3505], a0, a1);
      }

      jfloat FastMath::copySign(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_copySign_c50b565e19875e8e], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_e6afc264a8ab5469], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble FastMath::cos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cos_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cos_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::cosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cosh_d3398190482814dc], a0.this$));
      }

      jint FastMath::decrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_decrementExact_38565d58479aa24a], a0);
      }

      jlong FastMath::decrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_decrementExact_955f7541fca701ab], a0);
      }

      jint FastMath::divideExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::divideExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideExact_8f974216cbe53aea], a0, a1);
      }

      jdouble FastMath::exp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_exp_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::exp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_exp_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::expm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_expm1_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::expm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_expm1_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::floor(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_floor_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::floor(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_floor_d3398190482814dc], a0.this$));
      }

      jint FastMath::floorDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDiv_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_1672c32325bd5d4a], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_8f974216cbe53aea], a0, a1);
      }

      jint FastMath::floorDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDivExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::floorDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDivExact_8f974216cbe53aea], a0, a1);
      }

      jint FastMath::floorMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_d9790ac9eecfe931], a0, a1);
      }

      jint FastMath::floorMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_c2ad10dacdb56c74], a0, a1);
      }

      jlong FastMath::floorMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorMod_8f974216cbe53aea], a0, a1);
      }

      jdouble FastMath::fma(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_fma_c564d6ace53a5934], a0, a1, a2);
      }

      jfloat FastMath::fma(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_fma_b791f597b97e9b2b], a0, a1, a2);
      }

      jint FastMath::getExponent(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_12ebab281ee35c98], a0);
      }

      jint FastMath::getExponent(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_255f1fc90438be86], a0);
      }

      jdouble FastMath::hypot(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hypot_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::hypot(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hypot_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jint FastMath::incrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_incrementExact_38565d58479aa24a], a0);
      }

      jlong FastMath::incrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_incrementExact_955f7541fca701ab], a0);
      }

      jdouble FastMath::log(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::log(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_824133ce4aec3505], a0, a1);
      }

      jdouble FastMath::log10(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log10_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log10(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log10_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::log1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log1p_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log1p_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::max$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_824133ce4aec3505], a0, a1);
      }

      jfloat FastMath::max$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_max_c50b565e19875e8e], a0, a1);
      }

      jint FastMath::max$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_max_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::max$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_max_8f974216cbe53aea], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_e6afc264a8ab5469], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble FastMath::min$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_e6afc264a8ab5469], a0.this$, a1));
      }

      jfloat FastMath::min$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_min_c50b565e19875e8e], a0, a1);
      }

      jint FastMath::min$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_min_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::min$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_min_8f974216cbe53aea], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jint FastMath::multiplyExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_multiplyExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_1672c32325bd5d4a], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_8f974216cbe53aea], a0, a1);
      }

      jlong FastMath::multiplyFull(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyFull_c8198fb6cafc4f66], a0, a1);
      }

      jlong FastMath::multiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyHigh_8f974216cbe53aea], a0, a1);
      }

      jint FastMath::negateExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_negateExact_38565d58479aa24a], a0);
      }

      jlong FastMath::negateExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_negateExact_955f7541fca701ab], a0);
      }

      jdouble FastMath::nextAfter(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextAfter_824133ce4aec3505], a0, a1);
      }

      jfloat FastMath::nextAfter(jfloat a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextAfter_489a78d9dd6c8647], a0, a1);
      }

      jdouble FastMath::nextDown(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextDown_0ba5fed9597b693e], a0);
      }

      jfloat FastMath::nextDown(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextDown_1b04dd3cb8ced99e], a0);
      }

      jdouble FastMath::nextUp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextUp_0ba5fed9597b693e], a0);
      }

      jfloat FastMath::nextUp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextUp_1b04dd3cb8ced99e], a0);
      }

      jdouble FastMath::norm(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_norm_81a605f8f6c5d3b2], a0.this$);
      }

      jdouble FastMath::pow(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_e6afc264a8ab5469], a0.this$, a1));
      }

      jdouble FastMath::pow(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_bcad94b64f1e2dd8], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_640d4bfe091088ec], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_fe52a10392d0b9c8], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble FastMath::random()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_random_456d9a2f64d6b28d]);
      }

      jdouble FastMath::rint(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_rint_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::rint(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rint_d3398190482814dc], a0.this$));
      }

      jlong FastMath::round(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_7920263ad8deab44], a0);
      }

      jint FastMath::round(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_round_255f1fc90438be86], a0);
      }

      jlong FastMath::round(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_1074a0e6d384e416], a0.this$);
      }

      jdouble FastMath::scalb(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_scalb_bcad94b64f1e2dd8], a0, a1);
      }

      jfloat FastMath::scalb(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_scalb_7206cd26f5dcc2c0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::scalb(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_scalb_fe52a10392d0b9c8], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sign(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sign_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::signum(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_signum_0ba5fed9597b693e], a0);
      }

      jfloat FastMath::signum(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_signum_1b04dd3cb8ced99e], a0);
      }

      jdouble FastMath::sin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sin_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sin_d3398190482814dc], a0.this$));
      }

      ::org::hipparchus::util::SinCos FastMath::sinCos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_d74701318f74ff9c], a0));
      }

      ::org::hipparchus::util::FieldSinCos FastMath::sinCos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_1e571468b6e8a0fc], a0.this$));
      }

      jdouble FastMath::sinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sinh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sinh_d3398190482814dc], a0.this$));
      }

      ::org::hipparchus::util::SinhCosh FastMath::sinhCosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_98f870be91df2639], a0));
      }

      ::org::hipparchus::util::FieldSinhCosh FastMath::sinhCosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_52888d8ca21af4a2], a0.this$));
      }

      jdouble FastMath::sqrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sqrt_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sqrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sqrt_d3398190482814dc], a0.this$));
      }

      jint FastMath::subtractExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subtractExact_d9790ac9eecfe931], a0, a1);
      }

      jlong FastMath::subtractExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subtractExact_8f974216cbe53aea], a0, a1);
      }

      jdouble FastMath::tan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tan_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tan_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::tanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tanh_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tanh_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::toDegrees(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toDegrees_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toDegrees(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toDegrees_d3398190482814dc], a0.this$));
      }

      jint FastMath::toIntExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_toIntExact_81b31113dbb4e784], a0);
      }

      jdouble FastMath::toRadians(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toRadians_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toRadians(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toRadians_d3398190482814dc], a0.this$));
      }

      jdouble FastMath::ulp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ulp_0ba5fed9597b693e], a0);
      }

      jfloat FastMath::ulp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_ulp_1b04dd3cb8ced99e], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ulp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ulp_d3398190482814dc], a0.this$));
      }

      jlong FastMath::unsignedMultiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_unsignedMultiplyHigh_8f974216cbe53aea], a0, a1);
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
      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_random(PyTypeObject *type);
      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FastMath__methods_[] = {
        DECLARE_METHOD(t_FastMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, IEEEremainder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, abs, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, absExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, addExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan2, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cbrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceil, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, clamp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, decrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, divideExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, exp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, expm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floor, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, fma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, getExponent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, hypot, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, incrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log10, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyFull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyHigh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, negateExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextAfter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextDown, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextUp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, norm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, random, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, rint, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, round, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, scalb, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sign, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, signum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinCos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinhCosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sqrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, subtractExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toDegrees, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toIntExact, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toRadians, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ulp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, unsignedMultiplyHigh, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FastMath)[] = {
        { Py_tp_methods, t_FastMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FastMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FastMath, t_FastMath, FastMath);

      void t_FastMath::install(PyObject *module)
      {
        installType(&PY_TYPE(FastMath), &PY_TYPE_DEF(FastMath), module, "FastMath", 0);
      }

      void t_FastMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "class_", make_descriptor(FastMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "wrapfn_", make_descriptor(t_FastMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "boxfn_", make_descriptor(boxObject));
        env->getClass(FastMath::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "E", make_descriptor(FastMath::E));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "PI", make_descriptor(FastMath::PI));
      }

      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FastMath::initializeClass, 1)))
          return NULL;
        return t_FastMath::wrap_Object(FastMath(((t_FastMath *) arg)->object.this$));
      }
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FastMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "IEEEremainder", args);
        return NULL;
      }

      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "abs", args);
        return NULL;
      }

      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "absExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acos", args);
        return NULL;
      }

      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asin", args);
        return NULL;
      }

      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan2", args);
        return NULL;
      }

      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cbrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceil", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "JII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;
            jlong result;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "clamp", args);
        return NULL;
      }

      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cos", args);
        return NULL;
      }

      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "decrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "exp", args);
        return NULL;
      }

      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "expm1", args);
        return NULL;
      }

      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "floor", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "fma", args);
        return NULL;
      }

      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "getExponent", args);
        return NULL;
      }

      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "hypot", args);
        return NULL;
      }

      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "incrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "log", args);
        return NULL;
      }

      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log10", args);
        return NULL;
      }

      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log1p", args);
        return NULL;
      }

      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiplyExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyFull(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyFull", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyHigh", args);
        return NULL;
      }

      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "negateExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jdouble a1;
            jfloat result;

            if (!parseArgs(args, "FD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextAfter", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextDown", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextUp", args);
        return NULL;
      }

      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::norm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "norm", arg);
        return NULL;
      }

      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jlong a1;
            jdouble result;

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_FastMath_random(PyTypeObject *type)
      {
        jdouble result;
        OBJ_CALL(result = ::org::hipparchus::util::FastMath::random());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rint", args);
        return NULL;
      }

      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jlong result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jlong result;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }

      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "scalb", args);
        return NULL;
      }

      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::sign(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sign", arg);
        return NULL;
      }

      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "signum", args);
        return NULL;
      }

      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sin", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinCos result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_SinCos::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinCos", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinhCosh result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_SinhCosh::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinhCosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sqrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subtractExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tan", args);
        return NULL;
      }

      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDegrees", args);
        return NULL;
      }

      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jint result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::toIntExact(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError(type, "toIntExact", arg);
        return NULL;
      }

      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toRadians", args);
        return NULL;
      }

      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ulp", args);
        return NULL;
      }

      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::unsignedMultiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "unsignedMultiplyHigh", args);
        return NULL;
      }
    }
  }
}
