#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorUtil::class$ = NULL;
        jmethodID *KalmanEstimatorUtil::mids$ = NULL;
        bool KalmanEstimatorUtil::live$ = false;

        jclass KalmanEstimatorUtil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorUtil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyDynamicOutlierFilter_593d7b7c82130187] = env->getStaticMethodID(cls, "applyDynamicOutlierFilter", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_checkDimension_088ed742c00be596] = env->getStaticMethodID(cls, "checkDimension", "(ILorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;)V");
            mids$[mid_computeInnovationVector_cdc5772ae58fa459] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_computeInnovationVector_7aba347d6196588d] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;[D)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_decorate_4255159303ff08a8] = env->getStaticMethodID(cls, "decorate", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_decorateUnscented_4255159303ff08a8] = env->getStaticMethodID(cls, "decorateUnscented", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_filterRelevant_61282c72766a2512] = env->getStaticMethodID(cls, "filterRelevant", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;[Lorg/orekit/propagation/SpacecraftState;)[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_normalizeCovarianceMatrix_7039dc1e7ff6a443] = env->getStaticMethodID(cls, "normalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeCovarianceMatrix_7039dc1e7ff6a443] = env->getStaticMethodID(cls, "unnormalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeInnovationCovarianceMatrix_7039dc1e7ff6a443] = env->getStaticMethodID(cls, "unnormalizeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeKalmanGainMatrix_9a3798f3ffd3b445] = env->getStaticMethodID(cls, "unnormalizeKalmanGainMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeMeasurementJacobian_9a3798f3ffd3b445] = env->getStaticMethodID(cls, "unnormalizeMeasurementJacobian", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeStateTransitionMatrix_7039dc1e7ff6a443] = env->getStaticMethodID(cls, "unnormalizeStateTransitionMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanEstimatorUtil::applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_applyDynamicOutlierFilter_593d7b7c82130187], a0.this$, a1.this$);
        }

        void KalmanEstimatorUtil::checkDimension(jint a0, const ::org::orekit::utils::ParameterDriversList & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::utils::ParameterDriversList & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkDimension_088ed742c00be596], a0, a1.this$, a2.this$, a3.this$);
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_cdc5772ae58fa459], a0.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_7aba347d6196588d], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorate_4255159303ff08a8], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorateUnscented_4255159303ff08a8], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimatorUtil::filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callStaticObjectMethod(cls, mids$[mid_filterRelevant_61282c72766a2512], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_normalizeCovarianceMatrix_7039dc1e7ff6a443], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeCovarianceMatrix_7039dc1e7ff6a443], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeInnovationCovarianceMatrix_7039dc1e7ff6a443], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeKalmanGainMatrix_9a3798f3ffd3b445], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeMeasurementJacobian_9a3798f3ffd3b445], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeStateTransitionMatrix_7039dc1e7ff6a443], a0.this$, a1.this$));
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
        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_KalmanEstimatorUtil__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorUtil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, applyDynamicOutlierFilter, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, checkDimension, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, computeInnovationVector, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorateUnscented, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, filterRelevant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, normalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeInnovationCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeKalmanGainMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeMeasurementJacobian, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeStateTransitionMatrix, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorUtil)[] = {
          { Py_tp_methods, t_KalmanEstimatorUtil__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorUtil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorUtil, t_KalmanEstimatorUtil, KalmanEstimatorUtil);

        void t_KalmanEstimatorUtil::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorUtil), &PY_TYPE_DEF(KalmanEstimatorUtil), module, "KalmanEstimatorUtil", 0);
        }

        void t_KalmanEstimatorUtil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "class_", make_descriptor(KalmanEstimatorUtil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "wrapfn_", make_descriptor(t_KalmanEstimatorUtil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorUtil::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorUtil::wrap_Object(KalmanEstimatorUtil(((t_KalmanEstimatorUtil *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorUtil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::applyDynamicOutlierFilter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "applyDynamicOutlierFilter", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList a1((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);

          if (!parseArgs(args, "Ikkk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::checkDimension(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkDimension", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K[D", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0, a1));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeInnovationVector", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorate(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorate", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorateUnscented(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorateUnscented", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::filterRelevant(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          }

          PyErr_SetArgsError(type, "filterRelevant", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::normalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "normalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeInnovationCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeKalmanGainMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeMeasurementJacobian(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeMeasurementJacobian", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeStateTransitionMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonTransformProvider::class$ = NULL;
      jmethodID *PythonTransformProvider::mids$ = NULL;
      bool PythonTransformProvider::live$ = false;

      jclass PythonTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTransformProvider::PythonTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTransformProvider::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self);
      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data);
      static PyGetSetDef t_PythonTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTransformProvider)[] = {
        { Py_tp_methods, t_PythonTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonTransformProvider_init_ },
        { Py_tp_getset, t_PythonTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTransformProvider, t_PythonTransformProvider, PythonTransformProvider);

      void t_PythonTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTransformProvider), &PY_TYPE_DEF(PythonTransformProvider), module, "PythonTransformProvider", 1);
      }

      void t_PythonTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "class_", make_descriptor(PythonTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "wrapfn_", make_descriptor(t_PythonTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonTransformProvider_getTransform0 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonTransformProvider_getTransform1 },
          { "pythonDecRef", "()V", (void *) t_PythonTransformProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonTransformProvider::wrap_Object(PythonTransformProvider(((t_PythonTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data)
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
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$RawPVProvider::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$RawPVProvider::mids$ = NULL;
      bool JPLEphemeridesLoader$RawPVProvider::live$ = false;

      jclass JPLEphemeridesLoader$RawPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawPV_38efe74c9e3a1286] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getRawPV_04c31977feea432f] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getRawPosition_24461752d0eea1e3] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRawPosition_e81fa067750860a1] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_38efe74c9e3a1286], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_04c31977feea432f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_24461752d0eea1e3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_e81fa067750860a1], a0.this$));
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
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);

      static PyMethodDef t_JPLEphemeridesLoader$RawPVProvider__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPV, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$RawPVProvider)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$RawPVProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$RawPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$RawPVProvider, t_JPLEphemeridesLoader$RawPVProvider, JPLEphemeridesLoader$RawPVProvider);

      void t_JPLEphemeridesLoader$RawPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$RawPVProvider), &PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider), module, "JPLEphemeridesLoader$RawPVProvider", 0);
      }

      void t_JPLEphemeridesLoader$RawPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "class_", make_descriptor(JPLEphemeridesLoader$RawPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$RawPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$RawPVProvider::wrap_Object(JPLEphemeridesLoader$RawPVProvider(((t_JPLEphemeridesLoader$RawPVProvider *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPV", args);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory::class$ = NULL;
        jmethodID *SmoothStepFactory::mids$ = NULL;
        bool SmoothStepFactory::live$ = false;

        jclass SmoothStepFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_checkBetweenZeroAndOneIncluded_17db3a65980d3441] = env->getStaticMethodID(cls, "checkBetweenZeroAndOneIncluded", "(D)V");
            mids$[mid_getClamp_f18ca541c854e890] = env->getStaticMethodID(cls, "getClamp", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getClamp_538040519eb9f486] = env->getStaticMethodID(cls, "getClamp", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getCubic_f18ca541c854e890] = env->getStaticMethodID(cls, "getCubic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getCubic_538040519eb9f486] = env->getStaticMethodID(cls, "getCubic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getFieldGeneralOrder_60e4224851f2b09a] = env->getStaticMethodID(cls, "getFieldGeneralOrder", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getGeneralOrder_482197413efde1be] = env->getStaticMethodID(cls, "getGeneralOrder", "(I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_f18ca541c854e890] = env->getStaticMethodID(cls, "getQuadratic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_538040519eb9f486] = env->getStaticMethodID(cls, "getQuadratic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getQuintic_f18ca541c854e890] = env->getStaticMethodID(cls, "getQuintic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuintic_538040519eb9f486] = env->getStaticMethodID(cls, "getQuintic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SmoothStepFactory::checkBetweenZeroAndOneIncluded(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkBetweenZeroAndOneIncluded_17db3a65980d3441], a0);
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getClamp()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_f18ca541c854e890]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getClamp(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_538040519eb9f486], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getCubic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_f18ca541c854e890]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getCubic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_538040519eb9f486], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getFieldGeneralOrder(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getFieldGeneralOrder_60e4224851f2b09a], a0.this$, a1));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getGeneralOrder(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getGeneralOrder_482197413efde1be], a0));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuadratic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_f18ca541c854e890]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuadratic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_538040519eb9f486], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuintic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_f18ca541c854e890]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuintic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_538040519eb9f486], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data);
        static PyGetSetDef t_SmoothStepFactory__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory, clamp),
          DECLARE_GET_FIELD(t_SmoothStepFactory, cubic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quadratic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quintic),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, checkBetweenZeroAndOneIncluded, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getClamp, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getCubic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getFieldGeneralOrder, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getGeneralOrder, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuadratic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuintic, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory)[] = {
          { Py_tp_methods, t_SmoothStepFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory, t_SmoothStepFactory, SmoothStepFactory);

        void t_SmoothStepFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory), &PY_TYPE_DEF(SmoothStepFactory), module, "SmoothStepFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "FieldSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "QuadraticSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "SmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction)));
        }

        void t_SmoothStepFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "class_", make_descriptor(SmoothStepFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "wrapfn_", make_descriptor(t_SmoothStepFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory::wrap_Object(SmoothStepFactory(((t_SmoothStepFactory *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(::org::hipparchus::analysis::polynomials::SmoothStepFactory::checkBetweenZeroAndOneIncluded(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkBetweenZeroAndOneIncluded", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getClamp", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getCubic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getFieldGeneralOrder(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getFieldGeneralOrder", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getGeneralOrder(a0));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGeneralOrder", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuadratic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuintic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getClamp());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCubic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuadratic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuintic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonJB2008InputParameters::class$ = NULL;
          jmethodID *PythonJB2008InputParameters::mids$ = NULL;
          bool PythonJB2008InputParameters::live$ = false;

          jclass PythonJB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonJB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDSTDTC_bf1d7732f1acb697] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_bf1d7732f1acb697] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_bf1d7732f1acb697] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_bf1d7732f1acb697] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_bf1d7732f1acb697] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_bf1d7732f1acb697] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_bf1d7732f1acb697] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonJB2008InputParameters::PythonJB2008InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonJB2008InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonJB2008InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonJB2008InputParameters::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self);
          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data);
          static PyGetSetDef t_PythonJB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonJB2008InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonJB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonJB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonJB2008InputParameters)[] = {
            { Py_tp_methods, t_PythonJB2008InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonJB2008InputParameters_init_ },
            { Py_tp_getset, t_PythonJB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonJB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonJB2008InputParameters, t_PythonJB2008InputParameters, PythonJB2008InputParameters);

          void t_PythonJB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonJB2008InputParameters), &PY_TYPE_DEF(PythonJB2008InputParameters), module, "PythonJB2008InputParameters", 1);
          }

          void t_PythonJB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "class_", make_descriptor(PythonJB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "wrapfn_", make_descriptor(t_PythonJB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonJB2008InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getDSTDTC0 },
              { "getF10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF101 },
              { "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF10B2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMinDate4 },
              { "getS10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS105 },
              { "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS10B6 },
              { "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM107 },
              { "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM10B8 },
              { "getY10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY109 },
              { "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY10B10 },
              { "pythonDecRef", "()V", (void *) t_PythonJB2008InputParameters_pythonDecRef11 },
            };
            env->registerNatives(cls, methods, 12);
          }

          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonJB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonJB2008InputParameters::wrap_Object(PythonJB2008InputParameters(((t_PythonJB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonJB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonJB2008InputParameters object((jobject) NULL);

            INT_CALL(object = PythonJB2008InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDSTDTC", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDSTDTC", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory$NSKey::class$ = NULL;
            jmethodID *CoefficientsFactory$NSKey::mids$ = NULL;
            bool CoefficientsFactory$NSKey::live$ = false;

            jclass CoefficientsFactory$NSKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
                mids$[mid_compareTo_7f564367d2213478] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey;)I");
                mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
                mids$[mid_getS_570ce0828f81a2c1] = env->getMethodID(cls, "getS", "()I");
                mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CoefficientsFactory$NSKey::CoefficientsFactory$NSKey(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

            jint CoefficientsFactory$NSKey::compareTo(const CoefficientsFactory$NSKey & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_7f564367d2213478], a0.this$);
            }

            jboolean CoefficientsFactory$NSKey::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
            }

            jint CoefficientsFactory$NSKey::getN() const
            {
              return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
            }

            jint CoefficientsFactory$NSKey::getS() const
            {
              return env->callIntMethod(this$, mids$[mid_getS_570ce0828f81a2c1]);
            }

            jint CoefficientsFactory$NSKey::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data);
            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data);
            static PyGetSetDef t_CoefficientsFactory$NSKey__fields_[] = {
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, n),
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, s),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CoefficientsFactory$NSKey__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, compareTo, METH_O),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, equals, METH_VARARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getN, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getS, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory$NSKey)[] = {
              { Py_tp_methods, t_CoefficientsFactory$NSKey__methods_ },
              { Py_tp_init, (void *) t_CoefficientsFactory$NSKey_init_ },
              { Py_tp_getset, t_CoefficientsFactory$NSKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory$NSKey)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory$NSKey, t_CoefficientsFactory$NSKey, CoefficientsFactory$NSKey);

            void t_CoefficientsFactory$NSKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory$NSKey), &PY_TYPE_DEF(CoefficientsFactory$NSKey), module, "CoefficientsFactory$NSKey", 0);
            }

            void t_CoefficientsFactory$NSKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "class_", make_descriptor(CoefficientsFactory$NSKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "wrapfn_", make_descriptor(t_CoefficientsFactory$NSKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory$NSKey::wrap_Object(CoefficientsFactory$NSKey(((t_CoefficientsFactory$NSKey *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              CoefficientsFactory$NSKey object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = CoefficientsFactory$NSKey(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg)
            {
              CoefficientsFactory$NSKey a0((jobject) NULL);
              jint result;

              if (!parseArg(arg, "k", CoefficientsFactory$NSKey::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getS());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "hashCode", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getS());
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
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateNormalDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateNormalDistribution::mids$ = NULL;
        bool MixtureMultivariateNormalDistribution::live$ = false;

        jclass MixtureMultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_a3d6463b27f37fbe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_init$_e0a095fa97bddc94] = env->getMethodID(cls, "<init>", "([D[[D[[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a3d6463b27f37fbe, a0.this$, a1.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< JArray< jdouble > > > & a2) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_e0a095fa97bddc94, a0.this$, a1.this$, a2.this$)) {}
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args);
        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateNormalDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateNormalDistribution, t_MixtureMultivariateNormalDistribution, MixtureMultivariateNormalDistribution);
        PyObject *t_MixtureMultivariateNormalDistribution::wrap_Object(const MixtureMultivariateNormalDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateNormalDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateNormalDistribution), &PY_TYPE_DEF(MixtureMultivariateNormalDistribution), module, "MixtureMultivariateNormalDistribution", 0);
        }

        void t_MixtureMultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "class_", make_descriptor(MixtureMultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateNormalDistribution::wrap_Object(MixtureMultivariateNormalDistribution(((t_MixtureMultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< JArray< jdouble > > > a2((jobject) NULL);
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D[[[D", &a0, &a1, &a2))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
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
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *StepsizeHelper::class$ = NULL;
        jmethodID *StepsizeHelper::mids$ = NULL;
        bool StepsizeHelper::live$ = false;

        jclass StepsizeHelper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/StepsizeHelper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e977212374ff6b] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_filterStep_16d3313994f1bf12] = env->getMethodID(cls, "filterStep", "(DZZ)D");
            mids$[mid_filterStep_364c6dc6097b328f] = env->getMethodID(cls, "filterStep", "(Lorg/hipparchus/CalculusFieldElement;ZZ)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDummyStepsize_dff5885c2c873297] = env->getMethodID(cls, "getDummyStepsize", "()D");
            mids$[mid_getInitialStep_dff5885c2c873297] = env->getMethodID(cls, "getInitialStep", "()D");
            mids$[mid_getMainSetDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getMainSetDimension", "()I");
            mids$[mid_getMaxStep_dff5885c2c873297] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_dff5885c2c873297] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_getRelativeTolerance_46f85b53d9aedd96] = env->getMethodID(cls, "getRelativeTolerance", "(I)D");
            mids$[mid_getTolerance_60d7624725a52590] = env->getMethodID(cls, "getTolerance", "(ID)D");
            mids$[mid_getTolerance_e2b464e41c9ba627] = env->getMethodID(cls, "getTolerance", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setInitialStepSize_17db3a65980d3441] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setMainSetDimension_99803b0791f320ff] = env->getMethodID(cls, "setMainSetDimension", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36e977212374ff6b, a0, a1, a2.this$, a3.this$)) {}

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        jdouble StepsizeHelper::filterStep(jdouble a0, jboolean a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_filterStep_16d3313994f1bf12], a0, a1, a2);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::filterStep(const ::org::hipparchus::CalculusFieldElement & a0, jboolean a1, jboolean a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_filterStep_364c6dc6097b328f], a0.this$, a1, a2));
        }

        jdouble StepsizeHelper::getDummyStepsize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDummyStepsize_dff5885c2c873297]);
        }

        jdouble StepsizeHelper::getInitialStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInitialStep_dff5885c2c873297]);
        }

        jint StepsizeHelper::getMainSetDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getMainSetDimension_570ce0828f81a2c1]);
        }

        jdouble StepsizeHelper::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_dff5885c2c873297]);
        }

        jdouble StepsizeHelper::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_dff5885c2c873297]);
        }

        jdouble StepsizeHelper::getRelativeTolerance(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeTolerance_46f85b53d9aedd96], a0);
        }

        jdouble StepsizeHelper::getTolerance(jint a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_60d7624725a52590], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::getTolerance(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTolerance_e2b464e41c9ba627], a0, a1.this$));
        }

        void StepsizeHelper::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_17db3a65980d3441], a0);
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
        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data);
        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data);
        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data);
        static PyGetSetDef t_StepsizeHelper__fields_[] = {
          DECLARE_GET_FIELD(t_StepsizeHelper, dummyStepsize),
          DECLARE_GET_FIELD(t_StepsizeHelper, initialStep),
          DECLARE_SET_FIELD(t_StepsizeHelper, initialStepSize),
          DECLARE_GET_FIELD(t_StepsizeHelper, mainSetDimension),
          DECLARE_GET_FIELD(t_StepsizeHelper, maxStep),
          DECLARE_GET_FIELD(t_StepsizeHelper, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepsizeHelper__methods_[] = {
          DECLARE_METHOD(t_StepsizeHelper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, filterStep, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, getDummyStepsize, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getInitialStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMainSetDimension, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getRelativeTolerance, METH_O),
          DECLARE_METHOD(t_StepsizeHelper, getTolerance, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, setInitialStepSize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepsizeHelper)[] = {
          { Py_tp_methods, t_StepsizeHelper__methods_ },
          { Py_tp_init, (void *) t_StepsizeHelper_init_ },
          { Py_tp_getset, t_StepsizeHelper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepsizeHelper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepsizeHelper, t_StepsizeHelper, StepsizeHelper);

        void t_StepsizeHelper::install(PyObject *module)
        {
          installType(&PY_TYPE(StepsizeHelper), &PY_TYPE_DEF(StepsizeHelper), module, "StepsizeHelper", 0);
        }

        void t_StepsizeHelper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "class_", make_descriptor(StepsizeHelper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "wrapfn_", make_descriptor(t_StepsizeHelper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepsizeHelper::initializeClass, 1)))
            return NULL;
          return t_StepsizeHelper::wrap_Object(StepsizeHelper(((t_StepsizeHelper *) arg)->object.this$));
        }
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepsizeHelper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
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

        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              jboolean a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DZZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jboolean a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "filterStep", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInitialStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMainSetDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getRelativeTolerance(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRelativeTolerance", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTolerance", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInitialStep());
          return PyFloat_FromDouble((double) value);
        }

        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMainSetDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *DynamicOutlierFilter::class$ = NULL;
          jmethodID *DynamicOutlierFilter::mids$ = NULL;
          bool DynamicOutlierFilter::live$ = false;

          jclass DynamicOutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getSigma_60c7040667a7dc5c] = env->getMethodID(cls, "getSigma", "()[D");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_setSigma_fa9d415d19f69361] = env->getMethodID(cls, "setSigma", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DynamicOutlierFilter::DynamicOutlierFilter(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

          JArray< jdouble > DynamicOutlierFilter::getSigma() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_60c7040667a7dc5c]));
          }

          void DynamicOutlierFilter::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void DynamicOutlierFilter::setSigma(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSigma_fa9d415d19f69361], a0.this$);
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
          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args);
          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self);
          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args);
          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data);
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data);
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data);
          static PyGetSetDef t_DynamicOutlierFilter__fields_[] = {
            DECLARE_GETSET_FIELD(t_DynamicOutlierFilter, sigma),
            DECLARE_GET_FIELD(t_DynamicOutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DynamicOutlierFilter__methods_[] = {
            DECLARE_METHOD(t_DynamicOutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, getSigma, METH_NOARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, modify, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, setSigma, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DynamicOutlierFilter)[] = {
            { Py_tp_methods, t_DynamicOutlierFilter__methods_ },
            { Py_tp_init, (void *) t_DynamicOutlierFilter_init_ },
            { Py_tp_getset, t_DynamicOutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DynamicOutlierFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::OutlierFilter),
            NULL
          };

          DEFINE_TYPE(DynamicOutlierFilter, t_DynamicOutlierFilter, DynamicOutlierFilter);
          PyObject *t_DynamicOutlierFilter::wrap_Object(const DynamicOutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DynamicOutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DynamicOutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DynamicOutlierFilter), &PY_TYPE_DEF(DynamicOutlierFilter), module, "DynamicOutlierFilter", 0);
          }

          void t_DynamicOutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "class_", make_descriptor(DynamicOutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "wrapfn_", make_descriptor(t_DynamicOutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DynamicOutlierFilter::initializeClass, 1)))
              return NULL;
            return t_DynamicOutlierFilter::wrap_Object(DynamicOutlierFilter(((t_DynamicOutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DynamicOutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            DynamicOutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = DynamicOutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSigma());
            return result.wrap();
          }

          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DynamicOutlierFilter), (PyObject *) self, "modify", args, 2);
          }

          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setSigma(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSigma", arg);
            return NULL;
          }
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSigma());
            return value.wrap();
          }
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setSigma(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sigma", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoint::class$ = NULL;
      jmethodID *WeightedObservedPoint::mids$ = NULL;
      bool WeightedObservedPoint::live$ = false;

      jclass WeightedObservedPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getWeight_dff5885c2c873297] = env->getMethodID(cls, "getWeight", "()D");
          mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoint::WeightedObservedPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

      jdouble WeightedObservedPoint::getWeight() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWeight_dff5885c2c873297]);
      }

      jdouble WeightedObservedPoint::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
      }

      jdouble WeightedObservedPoint::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data);
      static PyGetSetDef t_WeightedObservedPoint__fields_[] = {
        DECLARE_GET_FIELD(t_WeightedObservedPoint, weight),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, x),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, y),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_WeightedObservedPoint__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, getWeight, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getX, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getY, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoint)[] = {
        { Py_tp_methods, t_WeightedObservedPoint__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoint_init_ },
        { Py_tp_getset, t_WeightedObservedPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoint, t_WeightedObservedPoint, WeightedObservedPoint);

      void t_WeightedObservedPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoint), &PY_TYPE_DEF(WeightedObservedPoint), module, "WeightedObservedPoint", 0);
      }

      void t_WeightedObservedPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "class_", make_descriptor(WeightedObservedPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "wrapfn_", make_descriptor(t_WeightedObservedPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoint::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoint::wrap_Object(WeightedObservedPoint(((t_WeightedObservedPoint *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        WeightedObservedPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = WeightedObservedPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWeight());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWeight());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Derivative::class$ = NULL;
        jmethodID *Derivative::mids$ = NULL;
        bool Derivative::live$ = false;

        jclass Derivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Derivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compose_48885a3a6ec88a01] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_48330f48ce3d930b] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Derivative::compose(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_compose_48885a3a6ec88a01], a0.this$));
        }

        jint Derivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jint Derivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        jdouble Derivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_48330f48ce3d930b], a0.this$);
        }

        jdouble Derivative::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
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
        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args);
        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self);
        static PyObject *t_Derivative_getOrder(t_Derivative *self);
        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getValue(t_Derivative *self);
        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data);
        static PyGetSetDef t_Derivative__fields_[] = {
          DECLARE_GET_FIELD(t_Derivative, freeParameters),
          DECLARE_GET_FIELD(t_Derivative, order),
          DECLARE_GET_FIELD(t_Derivative, value),
          DECLARE_GET_FIELD(t_Derivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Derivative__methods_[] = {
          DECLARE_METHOD(t_Derivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_Derivative, compose, METH_O),
          DECLARE_METHOD(t_Derivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_Derivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Derivative)[] = {
          { Py_tp_methods, t_Derivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Derivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Derivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(Derivative, t_Derivative, Derivative);
        PyObject *t_Derivative::wrap_Object(const Derivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Derivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Derivative::install(PyObject *module)
        {
          installType(&PY_TYPE(Derivative), &PY_TYPE_DEF(Derivative), module, "Derivative", 0);
        }

        void t_Derivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "class_", make_descriptor(Derivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "wrapfn_", make_descriptor(t_Derivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Derivative::initializeClass, 1)))
            return NULL;
          return t_Derivative::wrap_Object(Derivative(((t_Derivative *) arg)->object.this$));
        }
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Derivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getOrder(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getValue(t_Derivative *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data)
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
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyFactory::class$ = NULL;
      jmethodID *CelestialBodyFactory::mids$ = NULL;
      bool CelestialBodyFactory::live$ = false;
      ::java::lang::String *CelestialBodyFactory::EARTH = NULL;
      ::java::lang::String *CelestialBodyFactory::EARTH_MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::JUPITER = NULL;
      ::java::lang::String *CelestialBodyFactory::MARS = NULL;
      ::java::lang::String *CelestialBodyFactory::MERCURY = NULL;
      ::java::lang::String *CelestialBodyFactory::MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::NEPTUNE = NULL;
      ::java::lang::String *CelestialBodyFactory::PLUTO = NULL;
      ::java::lang::String *CelestialBodyFactory::SATURN = NULL;
      ::java::lang::String *CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER = NULL;
      ::java::lang::String *CelestialBodyFactory::SUN = NULL;
      ::java::lang::String *CelestialBodyFactory::URANUS = NULL;
      ::java::lang::String *CelestialBodyFactory::VENUS = NULL;

      jclass CelestialBodyFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addCelestialBodyLoader_eeafd0d01c10e9d5] = env->getStaticMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_6a2001eff0605f71] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_d0bc48d5b00dc40c] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_68e48076ef831536] = env->getStaticMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getCelestialBodies_fc81056d907ed286] = env->getStaticMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getEarth_624686a38a6b107c] = env->getStaticMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_624686a38a6b107c] = env->getStaticMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_624686a38a6b107c] = env->getStaticMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_624686a38a6b107c] = env->getStaticMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_624686a38a6b107c] = env->getStaticMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_624686a38a6b107c] = env->getStaticMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_624686a38a6b107c] = env->getStaticMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_624686a38a6b107c] = env->getStaticMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_624686a38a6b107c] = env->getStaticMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_624686a38a6b107c] = env->getStaticMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_624686a38a6b107c] = env->getStaticMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_624686a38a6b107c] = env->getStaticMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_624686a38a6b107c] = env->getStaticMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH", "Ljava/lang/String;"));
          EARTH_MOON = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH_MOON", "Ljava/lang/String;"));
          JUPITER = new ::java::lang::String(env->getStaticObjectField(cls, "JUPITER", "Ljava/lang/String;"));
          MARS = new ::java::lang::String(env->getStaticObjectField(cls, "MARS", "Ljava/lang/String;"));
          MERCURY = new ::java::lang::String(env->getStaticObjectField(cls, "MERCURY", "Ljava/lang/String;"));
          MOON = new ::java::lang::String(env->getStaticObjectField(cls, "MOON", "Ljava/lang/String;"));
          NEPTUNE = new ::java::lang::String(env->getStaticObjectField(cls, "NEPTUNE", "Ljava/lang/String;"));
          PLUTO = new ::java::lang::String(env->getStaticObjectField(cls, "PLUTO", "Ljava/lang/String;"));
          SATURN = new ::java::lang::String(env->getStaticObjectField(cls, "SATURN", "Ljava/lang/String;"));
          SOLAR_SYSTEM_BARYCENTER = new ::java::lang::String(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Ljava/lang/String;"));
          SUN = new ::java::lang::String(env->getStaticObjectField(cls, "SUN", "Ljava/lang/String;"));
          URANUS = new ::java::lang::String(env->getStaticObjectField(cls, "URANUS", "Ljava/lang/String;"));
          VENUS = new ::java::lang::String(env->getStaticObjectField(cls, "VENUS", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void CelestialBodyFactory::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addCelestialBodyLoader_eeafd0d01c10e9d5], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c], a0.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_6a2001eff0605f71], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyCache()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_0fa09c18fee449d5]);
      }

      void CelestialBodyFactory::clearCelestialBodyCache(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_d0bc48d5b00dc40c], a0.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_0fa09c18fee449d5]);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getBody(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getBody_68e48076ef831536], a0.this$));
      }

      ::org::orekit::bodies::LazyLoadedCelestialBodies CelestialBodyFactory::getCelestialBodies()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callStaticObjectMethod(cls, mids$[mid_getCelestialBodies_fc81056d907ed286]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarth()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarth_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarthMoonBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getJupiter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getJupiter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMars()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMars_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMercury()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMercury_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMoon()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMoon_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getNeptune()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getNeptune_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getPluto()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getPluto_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSaturn()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSaturn_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSolarSystemBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSolarSystemBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSun()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSun_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getUranus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getUranus_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getVenus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getVenus_624686a38a6b107c]));
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
      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data);
      static PyGetSetDef t_CelestialBodyFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodyFactory, celestialBodies),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earth),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mars),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mercury),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, moon),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, neptune),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, pluto),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, saturn),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, sun),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, uranus),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodyFactory__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addDefaultCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyCache, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getBody, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getCelestialBodies, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarth, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarthMoonBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getJupiter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMars, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMercury, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMoon, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getNeptune, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getPluto, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSaturn, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSolarSystemBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSun, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getUranus, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getVenus, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFactory)[] = {
        { Py_tp_methods, t_CelestialBodyFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodyFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyFactory, t_CelestialBodyFactory, CelestialBodyFactory);

      void t_CelestialBodyFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyFactory), &PY_TYPE_DEF(CelestialBodyFactory), module, "CelestialBodyFactory", 0);
      }

      void t_CelestialBodyFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "class_", make_descriptor(CelestialBodyFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "wrapfn_", make_descriptor(t_CelestialBodyFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(CelestialBodyFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH", make_descriptor(j2p(*CelestialBodyFactory::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH_MOON", make_descriptor(j2p(*CelestialBodyFactory::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "JUPITER", make_descriptor(j2p(*CelestialBodyFactory::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MARS", make_descriptor(j2p(*CelestialBodyFactory::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MERCURY", make_descriptor(j2p(*CelestialBodyFactory::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MOON", make_descriptor(j2p(*CelestialBodyFactory::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "NEPTUNE", make_descriptor(j2p(*CelestialBodyFactory::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "PLUTO", make_descriptor(j2p(*CelestialBodyFactory::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SATURN", make_descriptor(j2p(*CelestialBodyFactory::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(j2p(*CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SUN", make_descriptor(j2p(*CelestialBodyFactory::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "URANUS", make_descriptor(j2p(*CelestialBodyFactory::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "VENUS", make_descriptor(j2p(*CelestialBodyFactory::VENUS)));
      }

      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyFactory::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyFactory::wrap_Object(CelestialBodyFactory(((t_CelestialBodyFactory *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data)
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
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *UtcId::class$ = NULL;
          jmethodID *UtcId::mids$ = NULL;
          bool UtcId::live$ = false;
          UtcId *UtcId::GAL = NULL;
          UtcId *UtcId::IRN = NULL;
          UtcId *UtcId::NICT = NULL;
          UtcId *UtcId::NIST = NULL;
          UtcId *UtcId::NTSC = NULL;
          UtcId *UtcId::OP = NULL;
          UtcId *UtcId::SU = NULL;
          UtcId *UtcId::USNO = NULL;

          jclass UtcId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/UtcId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseUtcId_88925b0677da9e9e] = env->getStaticMethodID(cls, "parseUtcId", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_valueOf_88925b0677da9e9e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_values_ffd3832410150260] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/UtcId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GAL = new UtcId(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              IRN = new UtcId(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NICT = new UtcId(env->getStaticObjectField(cls, "NICT", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NIST = new UtcId(env->getStaticObjectField(cls, "NIST", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NTSC = new UtcId(env->getStaticObjectField(cls, "NTSC", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              OP = new UtcId(env->getStaticObjectField(cls, "OP", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              SU = new UtcId(env->getStaticObjectField(cls, "SU", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              USNO = new UtcId(env->getStaticObjectField(cls, "USNO", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UtcId UtcId::parseUtcId(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_parseUtcId_88925b0677da9e9e], a0.this$));
          }

          UtcId UtcId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_88925b0677da9e9e], a0.this$));
          }

          JArray< UtcId > UtcId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< UtcId >(env->callStaticObjectMethod(cls, mids$[mid_values_ffd3832410150260]));
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
          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args);
          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_UtcId_values(PyTypeObject *type);
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data);
          static PyGetSetDef t_UtcId__fields_[] = {
            DECLARE_GET_FIELD(t_UtcId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UtcId__methods_[] = {
            DECLARE_METHOD(t_UtcId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, of_, METH_VARARGS),
            DECLARE_METHOD(t_UtcId, parseUtcId, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_UtcId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UtcId)[] = {
            { Py_tp_methods, t_UtcId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UtcId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UtcId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(UtcId, t_UtcId, UtcId);
          PyObject *t_UtcId::wrap_Object(const UtcId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UtcId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UtcId::install(PyObject *module)
          {
            installType(&PY_TYPE(UtcId), &PY_TYPE_DEF(UtcId), module, "UtcId", 0);
          }

          void t_UtcId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "class_", make_descriptor(UtcId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "wrapfn_", make_descriptor(t_UtcId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "boxfn_", make_descriptor(boxObject));
            env->getClass(UtcId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "GAL", make_descriptor(t_UtcId::wrap_Object(*UtcId::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "IRN", make_descriptor(t_UtcId::wrap_Object(*UtcId::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NICT", make_descriptor(t_UtcId::wrap_Object(*UtcId::NICT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NIST", make_descriptor(t_UtcId::wrap_Object(*UtcId::NIST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NTSC", make_descriptor(t_UtcId::wrap_Object(*UtcId::NTSC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "OP", make_descriptor(t_UtcId::wrap_Object(*UtcId::OP)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "SU", make_descriptor(t_UtcId::wrap_Object(*UtcId::SU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "USNO", make_descriptor(t_UtcId::wrap_Object(*UtcId::USNO)));
          }

          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UtcId::initializeClass, 1)))
              return NULL;
            return t_UtcId::wrap_Object(UtcId(((t_UtcId *) arg)->object.this$));
          }
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UtcId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::parseUtcId(a0));
              return t_UtcId::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseUtcId", arg);
            return NULL;
          }

          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::valueOf(a0));
              return t_UtcId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_UtcId_values(PyTypeObject *type)
          {
            JArray< UtcId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::values());
            return JArray<jobject>(result.this$).wrap(t_UtcId::wrap_jobject);
          }
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractMessageWriter::class$ = NULL;
            jmethodID *PythonAbstractMessageWriter::mids$ = NULL;
            bool PythonAbstractMessageWriter::live$ = false;

            jclass PythonAbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2a0a7c2e7c34a644] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractMessageWriter::PythonAbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_2a0a7c2e7c34a644, a0.this$, a1.this$, a2, a3.this$)) {}

            void PythonAbstractMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractMessageWriter::pythonExtension(jlong a0) const
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
            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args);
            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self);
            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args);
            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data);
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageWriter)[] = {
              { Py_tp_methods, t_PythonAbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractMessageWriter_init_ },
              { Py_tp_getset, t_PythonAbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageWriter, t_PythonAbstractMessageWriter, PythonAbstractMessageWriter);
            PyObject *t_PythonAbstractMessageWriter::wrap_Object(const PythonAbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageWriter), &PY_TYPE_DEF(PythonAbstractMessageWriter), module, "PythonAbstractMessageWriter", 1);
            }

            void t_PythonAbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "class_", make_descriptor(PythonAbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "wrapfn_", make_descriptor(t_PythonAbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageWriter_pythonDecRef0 },
                { "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonAbstractMessageWriter_writeSegmentContent1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageWriter::wrap_Object(PythonAbstractMessageWriter(((t_PythonAbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              PythonAbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractMessageWriter(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o2 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a2));
              PyObject *result = PyObject_CallMethod(obj, "writeSegmentContent", "OdO", o0, (double) a1, o2);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data)
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
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateTroposphericDelayModifier::live$ = false;

          jclass BaseRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeRateErrorTroposphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_4b77a751a52d683d] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_08d2a35aee39232b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_03cd5a2e88a0f0f6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateTroposphericDelayModifier, t_BaseRangeRateTroposphericDelayModifier, BaseRangeRateTroposphericDelayModifier);

          void t_BaseRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier), module, "BaseRangeRateTroposphericDelayModifier", 0);
          }

          void t_BaseRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "class_", make_descriptor(BaseRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateTroposphericDelayModifier::wrap_Object(BaseRangeRateTroposphericDelayModifier(((t_BaseRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeRateErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GNSSAttitudeProvider::class$ = NULL;
        jmethodID *GNSSAttitudeProvider::mids$ = NULL;
        bool GNSSAttitudeProvider::live$ = false;

        jclass GNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_validityEnd_85703d13e302437e] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_85703d13e302437e] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_85703d13e302437e]));
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
      namespace attitude {
        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self);
        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self);

        static PyMethodDef t_GNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_GNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_GNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GNSSAttitudeProvider, t_GNSSAttitudeProvider, GNSSAttitudeProvider);

        void t_GNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(GNSSAttitudeProvider), &PY_TYPE_DEF(GNSSAttitudeProvider), module, "GNSSAttitudeProvider", 0);
        }

        void t_GNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "class_", make_descriptor(GNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "wrapfn_", make_descriptor(t_GNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_GNSSAttitudeProvider::wrap_Object(GNSSAttitudeProvider(((t_GNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitElementsType::class$ = NULL;
              jmethodID *OrbitElementsType::mids$ = NULL;
              bool OrbitElementsType::live$ = false;
              OrbitElementsType *OrbitElementsType::ADBARV = NULL;
              OrbitElementsType *OrbitElementsType::CARTP = NULL;
              OrbitElementsType *OrbitElementsType::CARTPV = NULL;
              OrbitElementsType *OrbitElementsType::CARTPVA = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAY = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAYMOD = NULL;
              OrbitElementsType *OrbitElementsType::EIGVAL3EIGVEC3 = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIAL = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIALMOD = NULL;
              OrbitElementsType *OrbitElementsType::GEODETIC = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIAN = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIANMEAN = NULL;
              OrbitElementsType *OrbitElementsType::LDBARV = NULL;
              OrbitElementsType *OrbitElementsType::ONSTATION = NULL;
              OrbitElementsType *OrbitElementsType::POINCARE = NULL;

              jclass OrbitElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_2afa36052df4765d] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toCartesian_910cf50ef81151a8] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/time/AbsoluteDate;[DLorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_toRawElements_042e474a2c7ec9fd] = env->getMethodID(cls, "toRawElements", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/bodies/OneAxisEllipsoid;D)[D");
                  mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_e9ec553865d4f63b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_values_69abff7315b78dd7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADBARV = new OrbitElementsType(env->getStaticObjectField(cls, "ADBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTP = new OrbitElementsType(env->getStaticObjectField(cls, "CARTP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPV = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPVA = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPVA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAY = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAYMOD = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAYMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EIGVAL3EIGVEC3 = new OrbitElementsType(env->getStaticObjectField(cls, "EIGVAL3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIAL = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIALMOD = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIALMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  GEODETIC = new OrbitElementsType(env->getStaticObjectField(cls, "GEODETIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIANMEAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIANMEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  LDBARV = new OrbitElementsType(env->getStaticObjectField(cls, "LDBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  ONSTATION = new OrbitElementsType(env->getStaticObjectField(cls, "ONSTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  POINCARE = new OrbitElementsType(env->getStaticObjectField(cls, "POINCARE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List OrbitElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_2afa36052df4765d]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates OrbitElementsType::toCartesian(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_910cf50ef81151a8], a0.this$, a1.this$, a2.this$, a3));
              }

              JArray< jdouble > OrbitElementsType::toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toRawElements_042e474a2c7ec9fd], a0.this$, a1.this$, a2.this$, a3));
              }

              ::java::lang::String OrbitElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
              }

              OrbitElementsType OrbitElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e9ec553865d4f63b], a0.this$));
              }

              JArray< OrbitElementsType > OrbitElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_69abff7315b78dd7]));
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
              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self);
              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitElementsType_values(PyTypeObject *type);
              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data);
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data);
              static PyGetSetDef t_OrbitElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitElementsType, units),
                DECLARE_GET_FIELD(t_OrbitElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitElementsType__methods_[] = {
                DECLARE_METHOD(t_OrbitElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitElementsType, toCartesian, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toRawElements, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitElementsType)[] = {
                { Py_tp_methods, t_OrbitElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitElementsType, t_OrbitElementsType, OrbitElementsType);
              PyObject *t_OrbitElementsType::wrap_Object(const OrbitElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitElementsType), &PY_TYPE_DEF(OrbitElementsType), module, "OrbitElementsType", 0);
              }

              void t_OrbitElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "class_", make_descriptor(OrbitElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "wrapfn_", make_descriptor(t_OrbitElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ADBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ADBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTP", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPVA", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPVA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAY", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAYMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAYMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EIGVAL3EIGVEC3", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EIGVAL3EIGVEC3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIAL", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIALMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIALMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "GEODETIC", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::GEODETIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIANMEAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIANMEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "LDBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::LDBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ONSTATION", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ONSTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "POINCARE", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::POINCARE)));
              }

              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitElementsType::initializeClass, 1)))
                  return NULL;
                return t_OrbitElementsType::wrap_Object(OrbitElementsType(((t_OrbitElementsType *) arg)->object.this$));
              }
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "k[DkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1, a2, a3));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toRawElements(a0, a1, a2, a3));
                  return result.wrap();
                }

                PyErr_SetArgsError((PyObject *) self, "toRawElements", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::valueOf(a0));
                  return t_OrbitElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitElementsType_values(PyTypeObject *type)
              {
                JArray< OrbitElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitElementsType::wrap_jobject);
              }
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
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
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractRealMatrix::class$ = NULL;
      jmethodID *AbstractRealMatrix::mids$ = NULL;
      bool AbstractRealMatrix::live$ = false;

      jclass AbstractRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_e9b72403ad502221] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_688b496048ff947b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_345c5b715074805a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_afcb8e0873730b97] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_4410ec92987b66e9] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_abe82da4f5c7c981] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_7b5d3ee1211255a1] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_b686e6fcbf82678b] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_dff5885c2c873297] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getRow_abe82da4f5c7c981] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_7b5d3ee1211255a1] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_b686e6fcbf82678b] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_d608c12827b9e76d] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_d08295af63465f00] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_dff5885c2c873297] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_b108b35ef48e27bd] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_e9b72403ad502221] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_operate_ac3d742ccc742f22] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_613347e28dd909cd] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_7b5d3ee1211255a1] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_ac3d742ccc742f22] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_613347e28dd909cd] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_e9b72403ad502221] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_f21dcd9464c6e3c5] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_f21dcd9464c6e3c5] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7169a8c8a60b8b2c] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_18388821294f273e] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7169a8c8a60b8b2c] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_18388821294f273e] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f92f0755fea39af9] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_e9b72403ad502221] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_688b496048ff947b] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_add_e9b72403ad502221], a0.this$));
      }

      void AbstractRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_688b496048ff947b]));
      }

      void AbstractRealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_345c5b715074805a], a0.this$, a1.this$, a2.this$);
      }

      void AbstractRealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_afcb8e0873730b97], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4410ec92987b66e9], a0, a1));
      }

      jboolean AbstractRealMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      JArray< jdouble > AbstractRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_abe82da4f5c7c981], a0));
      }

      jint AbstractRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_7b5d3ee1211255a1], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b686e6fcbf82678b], a0));
      }

      JArray< JArray< jdouble > > AbstractRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
      }

      jdouble AbstractRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      jdouble AbstractRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_dff5885c2c873297]);
      }

      JArray< jdouble > AbstractRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_abe82da4f5c7c981], a0));
      }

      jint AbstractRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_7b5d3ee1211255a1], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b686e6fcbf82678b], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d608c12827b9e76d], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d08295af63465f00], a0, a1, a2, a3));
      }

      jdouble AbstractRealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_dff5885c2c873297]);
      }

      jint AbstractRealMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean AbstractRealMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e9b72403ad502221], a0.this$));
      }

      void AbstractRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      JArray< jdouble > AbstractRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_ac3d742ccc742f22], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_power_7b5d3ee1211255a1], a0));
      }

      JArray< jdouble > AbstractRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_ac3d742ccc742f22], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e9b72403ad502221], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarAdd(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_f21dcd9464c6e3c5], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f21dcd9464c6e3c5], a0));
      }

      void AbstractRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_18388821294f273e], a0, a1.this$);
      }

      void AbstractRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      void AbstractRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_18388821294f273e], a0, a1.this$);
      }

      void AbstractRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f92f0755fea39af9], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e9b72403ad502221], a0.this$));
      }

      ::java::lang::String AbstractRealMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::transpose() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_688b496048ff947b]));
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data);
      static PyGetSetDef t_AbstractRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, data),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, square),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractRealMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractRealMatrix)[] = {
        { Py_tp_methods, t_AbstractRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractRealMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractRealMatrix, t_AbstractRealMatrix, AbstractRealMatrix);

      void t_AbstractRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractRealMatrix), &PY_TYPE_DEF(AbstractRealMatrix), module, "AbstractRealMatrix", 0);
      }

      void t_AbstractRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "class_", make_descriptor(AbstractRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "wrapfn_", make_descriptor(t_AbstractRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractRealMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractRealMatrix::wrap_Object(AbstractRealMatrix(((t_AbstractRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *OLSMultipleLinearRegression::class$ = NULL;
        jmethodID *OLSMultipleLinearRegression::mids$ = NULL;
        bool OLSMultipleLinearRegression::live$ = false;

        jclass OLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/OLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_calculateAdjustedRSquared_dff5885c2c873297] = env->getMethodID(cls, "calculateAdjustedRSquared", "()D");
            mids$[mid_calculateHat_688b496048ff947b] = env->getMethodID(cls, "calculateHat", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateRSquared_dff5885c2c873297] = env->getMethodID(cls, "calculateRSquared", "()D");
            mids$[mid_calculateResidualSumOfSquares_dff5885c2c873297] = env->getMethodID(cls, "calculateResidualSumOfSquares", "()D");
            mids$[mid_calculateTotalSumOfSquares_dff5885c2c873297] = env->getMethodID(cls, "calculateTotalSumOfSquares", "()D");
            mids$[mid_newSampleData_0942607a80e88c17] = env->getMethodID(cls, "newSampleData", "([D[[D)V");
            mids$[mid_newSampleData_12aca76acb10f1af] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_calculateBeta_aab4fbf77867daa8] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_688b496048ff947b] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_newXSampleData_a0befc7f3dc19e41] = env->getMethodID(cls, "newXSampleData", "([[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OLSMultipleLinearRegression::OLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        OLSMultipleLinearRegression::OLSMultipleLinearRegression(jdouble a0) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble OLSMultipleLinearRegression::calculateAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateAdjustedRSquared_dff5885c2c873297]);
        }

        ::org::hipparchus::linear::RealMatrix OLSMultipleLinearRegression::calculateHat() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_calculateHat_688b496048ff947b]));
        }

        jdouble OLSMultipleLinearRegression::calculateRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateRSquared_dff5885c2c873297]);
        }

        jdouble OLSMultipleLinearRegression::calculateResidualSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateResidualSumOfSquares_dff5885c2c873297]);
        }

        jdouble OLSMultipleLinearRegression::calculateTotalSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateTotalSumOfSquares_dff5885c2c873297]);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_0942607a80e88c17], a0.this$, a1.this$);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_12aca76acb10f1af], a0.this$, a1, a2);
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
      namespace regression {
        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_OLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_OLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateHat, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateResidualSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateTotalSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_OLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_OLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(OLSMultipleLinearRegression, t_OLSMultipleLinearRegression, OLSMultipleLinearRegression);

        void t_OLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(OLSMultipleLinearRegression), &PY_TYPE_DEF(OLSMultipleLinearRegression), module, "OLSMultipleLinearRegression", 0);
        }

        void t_OLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "class_", make_descriptor(OLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_OLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_OLSMultipleLinearRegression::wrap_Object(OLSMultipleLinearRegression(((t_OLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              OLSMultipleLinearRegression object((jobject) NULL);

              INT_CALL(object = OLSMultipleLinearRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jdouble a0;
              OLSMultipleLinearRegression object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = OLSMultipleLinearRegression(a0));
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

        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.calculateHat());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateResidualSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateTotalSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(OLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyAbsoluteAttraction::class$ = NULL;
        jmethodID *SingleBodyAbsoluteAttraction::mids$ = NULL;
        bool SingleBodyAbsoluteAttraction::live$ = false;
        ::java::lang::String *SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyAbsoluteAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyAbsoluteAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6a22a7b4e14949e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyAbsoluteAttraction::SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a22a7b4e14949e4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean SingleBodyAbsoluteAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List SingleBodyAbsoluteAttraction::getParametersDrivers() const
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
      namespace gravity {
        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyAbsoluteAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyAbsoluteAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyAbsoluteAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyAbsoluteAttraction)[] = {
          { Py_tp_methods, t_SingleBodyAbsoluteAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyAbsoluteAttraction_init_ },
          { Py_tp_getset, t_SingleBodyAbsoluteAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyAbsoluteAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyAbsoluteAttraction, t_SingleBodyAbsoluteAttraction, SingleBodyAbsoluteAttraction);

        void t_SingleBodyAbsoluteAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyAbsoluteAttraction), &PY_TYPE_DEF(SingleBodyAbsoluteAttraction), module, "SingleBodyAbsoluteAttraction", 0);
        }

        void t_SingleBodyAbsoluteAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "class_", make_descriptor(SingleBodyAbsoluteAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "wrapfn_", make_descriptor(t_SingleBodyAbsoluteAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyAbsoluteAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyAbsoluteAttraction::wrap_Object(SingleBodyAbsoluteAttraction(((t_SingleBodyAbsoluteAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyAbsoluteAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyAbsoluteAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args)
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

        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *JacobianFunction::class$ = NULL;
        jmethodID *JacobianFunction::mids$ = NULL;
        bool JacobianFunction::live$ = false;

        jclass JacobianFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/JacobianFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d80e9781b70fee9a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction;)V");
            mids$[mid_value_49e7a3c5d62c95c4] = env->getMethodID(cls, "value", "([D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianFunction::JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d80e9781b70fee9a, a0.this$)) {}

        JArray< JArray< jdouble > > JacobianFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_49e7a3c5d62c95c4], a0.this$));
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
        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg);

        static PyMethodDef t_JacobianFunction__methods_[] = {
          DECLARE_METHOD(t_JacobianFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianFunction)[] = {
          { Py_tp_methods, t_JacobianFunction__methods_ },
          { Py_tp_init, (void *) t_JacobianFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(JacobianFunction, t_JacobianFunction, JacobianFunction);

        void t_JacobianFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianFunction), &PY_TYPE_DEF(JacobianFunction), module, "JacobianFunction", 0);
        }

        void t_JacobianFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "class_", make_descriptor(JacobianFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "wrapfn_", make_descriptor(t_JacobianFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianFunction::initializeClass, 1)))
            return NULL;
          return t_JacobianFunction::wrap_Object(JacobianFunction(((t_JacobianFunction *) arg)->object.this$));
        }
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction a0((jobject) NULL);
          JacobianFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction::initializeClass, &a0))
          {
            INT_CALL(object = JacobianFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegrator::class$ = NULL;
          jmethodID *FieldGaussIntegrator::mids$ = NULL;
          bool FieldGaussIntegrator::live$ = false;

          jclass FieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3fca46bb93fd3e69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_cbc98e7d0c0477db] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getNumberOfPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_93058f0552012043] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getWeight_93058f0552012043] = env->getMethodID(cls, "getWeight", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_integrate_d4d4f68a6723feee] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegrator::FieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3fca46bb93fd3e69, a0.this$)) {}

          FieldGaussIntegrator::FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cbc98e7d0c0477db, a0.this$, a1.this$)) {}

          jint FieldGaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_570ce0828f81a2c1]);
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getPoint(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPoint_93058f0552012043], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getWeight(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getWeight_93058f0552012043], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_d4d4f68a6723feee], a0.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args);
          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self);
          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data);
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_FieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, numberOfPoints),
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegrator)[] = {
            { Py_tp_methods, t_FieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegrator_init_ },
            { Py_tp_getset, t_FieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegrator, t_FieldGaussIntegrator, FieldGaussIntegrator);
          PyObject *t_FieldGaussIntegrator::wrap_Object(const FieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegrator), &PY_TYPE_DEF(FieldGaussIntegrator), module, "FieldGaussIntegrator", 0);
          }

          void t_FieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "class_", make_descriptor(FieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "wrapfn_", make_descriptor(t_FieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegrator::wrap_Object(FieldGaussIntegrator(((t_FieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0, a1));
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

          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTZonalContext::class$ = NULL;
            jmethodID *FieldDSSTZonalContext::mids$ = NULL;
            bool FieldDSSTZonalContext::live$ = false;

            jclass FieldDSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_eba8e72a22c984ac] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_eba8e72a22c984ac] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_eba8e72a22c984ac] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCXO2N2A2_eba8e72a22c984ac] = env->getMethodID(cls, "getCXO2N2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHK_eba8e72a22c984ac] = env->getMethodID(cls, "getHK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2_eba8e72a22c984ac] = env->getMethodID(cls, "getK2MH2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2O2_eba8e72a22c984ac] = env->getMethodID(cls, "getK2MH2O2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_eba8e72a22c984ac] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_eba8e72a22c984ac] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoa_eba8e72a22c984ac] = env->getMethodID(cls, "getMuoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOON2A2_eba8e72a22c984ac] = env->getMethodID(cls, "getOON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_eba8e72a22c984ac] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_eba8e72a22c984ac] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_eba8e72a22c984ac] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX2ON2A2XP1_eba8e72a22c984ac] = env->getMethodID(cls, "getX2ON2A2XP1", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX3ON2A_eba8e72a22c984ac] = env->getMethodID(cls, "getX3ON2A", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXON2A2_eba8e72a22c984ac] = env->getMethodID(cls, "getXON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_eba8e72a22c984ac] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXXX_eba8e72a22c984ac] = env->getMethodID(cls, "getXXX", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getCXO2N2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCXO2N2A2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getHK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHK_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2O2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2O2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMuoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoa_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOON2A2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX2ON2A2XP1() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX2ON2A2XP1_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX3ON2A() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX3ON2A_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXON2A2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXXX_eba8e72a22c984ac]));
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
            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args);
            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data);
            static PyGetSetDef t_FieldDSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xXX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTZonalContext)[] = {
              { Py_tp_methods, t_FieldDSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTZonalContext, t_FieldDSSTZonalContext, FieldDSSTZonalContext);
            PyObject *t_FieldDSSTZonalContext::wrap_Object(const FieldDSSTZonalContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTZonalContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTZonalContext), &PY_TYPE_DEF(FieldDSSTZonalContext), module, "FieldDSSTZonalContext", 0);
            }

            void t_FieldDSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "class_", make_descriptor(FieldDSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "wrapfn_", make_descriptor(t_FieldDSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTZonalContext::wrap_Object(FieldDSSTZonalContext(((t_FieldDSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2O2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX3ON2A());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2O2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX3ON2A());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXXX());
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
#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConfigurableLowThrustManeuver::class$ = NULL;
        jmethodID *ConfigurableLowThrustManeuver::mids$ = NULL;
        bool ConfigurableLowThrustManeuver::live$ = false;

        jclass ConfigurableLowThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d171606bd2ebae55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;DD)V");
            mids$[mid_getIsp_dff5885c2c873297] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_bf1d7732f1acb697] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustDirectionProvider_be6a6d8d1d656fb0] = env->getMethodID(cls, "getThrustDirectionProvider", "()Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
            mids$[mid_getThrustMagnitude_dff5885c2c873297] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_bf1d7732f1acb697] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfigurableLowThrustManeuver::ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, jdouble a2, jdouble a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_d171606bd2ebae55, a0.this$, a1.this$, a2, a3)) {}

        jdouble ConfigurableLowThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_dff5885c2c873297]);
        }

        jdouble ConfigurableLowThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_bf1d7732f1acb697], a0.this$);
        }

        ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider ConfigurableLowThrustManeuver::getThrustDirectionProvider() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getThrustDirectionProvider_be6a6d8d1d656fb0]));
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_dff5885c2c873297]);
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_bf1d7732f1acb697], a0.this$);
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
        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyGetSetDef t_ConfigurableLowThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustDirectionProvider),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustMagnitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfigurableLowThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustDirectionProvider, METH_NOARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustMagnitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfigurableLowThrustManeuver)[] = {
          { Py_tp_methods, t_ConfigurableLowThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConfigurableLowThrustManeuver_init_ },
          { Py_tp_getset, t_ConfigurableLowThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfigurableLowThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConfigurableLowThrustManeuver, t_ConfigurableLowThrustManeuver, ConfigurableLowThrustManeuver);

        void t_ConfigurableLowThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfigurableLowThrustManeuver), &PY_TYPE_DEF(ConfigurableLowThrustManeuver), module, "ConfigurableLowThrustManeuver", 0);
        }

        void t_ConfigurableLowThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "class_", make_descriptor(ConfigurableLowThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "wrapfn_", make_descriptor(t_ConfigurableLowThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConfigurableLowThrustManeuver::wrap_Object(ConfigurableLowThrustManeuver(((t_ConfigurableLowThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          ConfigurableLowThrustManeuver object((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = ConfigurableLowThrustManeuver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *Measurement::class$ = NULL;
        jmethodID *Measurement::mids$ = NULL;
        bool Measurement::live$ = false;

        jclass Measurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/Measurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_688b496048ff947b] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_aab4fbf77867daa8] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix Measurement::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_688b496048ff947b]));
        }

        jdouble Measurement::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
        }

        ::org::hipparchus::linear::RealVector Measurement::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_aab4fbf77867daa8]));
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
        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_getCovariance(t_Measurement *self);
        static PyObject *t_Measurement_getTime(t_Measurement *self);
        static PyObject *t_Measurement_getValue(t_Measurement *self);
        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data);
        static PyGetSetDef t_Measurement__fields_[] = {
          DECLARE_GET_FIELD(t_Measurement, covariance),
          DECLARE_GET_FIELD(t_Measurement, time),
          DECLARE_GET_FIELD(t_Measurement, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Measurement__methods_[] = {
          DECLARE_METHOD(t_Measurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Measurement)[] = {
          { Py_tp_methods, t_Measurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Measurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Measurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Measurement, t_Measurement, Measurement);

        void t_Measurement::install(PyObject *module)
        {
          installType(&PY_TYPE(Measurement), &PY_TYPE_DEF(Measurement), module, "Measurement", 0);
        }

        void t_Measurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "class_", make_descriptor(Measurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "wrapfn_", make_descriptor(t_Measurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Measurement::initializeClass, 1)))
            return NULL;
          return t_Measurement::wrap_Object(Measurement(((t_Measurement *) arg)->object.this$));
        }
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Measurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Measurement_getCovariance(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Measurement_getTime(t_Measurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Measurement_getValue(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStepHandler::class$ = NULL;
        jmethodID *ODEStepHandler::mids$ = NULL;
        bool ODEStepHandler::live$ = false;

        jclass ODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_250c80d95e429c01] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_8c00288d760ba078] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepHandler::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_250c80d95e429c01], a0.this$);
        }

        void ODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_8c00288d760ba078], a0.this$);
        }

        void ODEStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepHandler)[] = {
          { Py_tp_methods, t_ODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepHandler, t_ODEStepHandler, ODEStepHandler);

        void t_ODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepHandler), &PY_TYPE_DEF(ODEStepHandler), module, "ODEStepHandler", 0);
        }

        void t_ODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "class_", make_descriptor(ODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "wrapfn_", make_descriptor(t_ODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepHandler::wrap_Object(ODEStepHandler(((t_ODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/BufferedReader.h"
#include "java/util/stream/Stream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *BufferedReader::class$ = NULL;
    jmethodID *BufferedReader::mids$ = NULL;
    bool BufferedReader::live$ = false;

    jclass BufferedReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/BufferedReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_6bec8244898df009] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;)V");
        mids$[mid_init$_d4490f7274978073] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;I)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_lines_20f6d2b462aaef4b] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_mark_99803b0791f320ff] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_b108b35ef48e27bd] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_e1525dbb996fb0b1] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_readLine_11b109bd155ca898] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_ready_b108b35ef48e27bd] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BufferedReader::BufferedReader(const ::java::io::Reader & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_6bec8244898df009, a0.this$)) {}

    BufferedReader::BufferedReader(const ::java::io::Reader & a0, jint a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_d4490f7274978073, a0.this$, a1)) {}

    void BufferedReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    ::java::util::stream::Stream BufferedReader::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_20f6d2b462aaef4b]));
    }

    void BufferedReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_99803b0791f320ff], a0);
    }

    jboolean BufferedReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_b108b35ef48e27bd]);
    }

    jint BufferedReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint BufferedReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    ::java::lang::String BufferedReader::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_11b109bd155ca898]));
    }

    jboolean BufferedReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_b108b35ef48e27bd]);
    }

    void BufferedReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
    }

    jlong BufferedReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_lines(t_BufferedReader *self);
    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self);
    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args);

    static PyMethodDef t_BufferedReader__methods_[] = {
      DECLARE_METHOD(t_BufferedReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, close, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, lines, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, read, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, readLine, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BufferedReader)[] = {
      { Py_tp_methods, t_BufferedReader__methods_ },
      { Py_tp_init, (void *) t_BufferedReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BufferedReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(BufferedReader, t_BufferedReader, BufferedReader);

    void t_BufferedReader::install(PyObject *module)
    {
      installType(&PY_TYPE(BufferedReader), &PY_TYPE_DEF(BufferedReader), module, "BufferedReader", 0);
    }

    void t_BufferedReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "class_", make_descriptor(BufferedReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "wrapfn_", make_descriptor(t_BufferedReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BufferedReader::initializeClass, 1)))
        return NULL;
      return t_BufferedReader::wrap_Object(BufferedReader(((t_BufferedReader *) arg)->object.this$));
    }
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BufferedReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::Reader a0((jobject) NULL);
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            INT_CALL(object = BufferedReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::Reader a0((jobject) NULL);
          jint a1;
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::io::Reader::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BufferedReader(a0, a1));
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

    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_BufferedReader_lines(t_BufferedReader *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
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
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractLambdaMethod::class$ = NULL;
          jmethodID *PythonAbstractLambdaMethod::mids$ = NULL;
          bool PythonAbstractLambdaMethod::live$ = false;

          jclass PythonAbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_0fa09c18fee449d5] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_inverseDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_reduction_0fa09c18fee449d5] = env->getMethodID(cls, "reduction", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractLambdaMethod::PythonAbstractLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonAbstractLambdaMethod::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractLambdaMethod::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractLambdaMethod::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self);
          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args);
          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data);
          static PyGetSetDef t_PythonAbstractLambdaMethod__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractLambdaMethod, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractLambdaMethod)[] = {
            { Py_tp_methods, t_PythonAbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractLambdaMethod_init_ },
            { Py_tp_getset, t_PythonAbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(PythonAbstractLambdaMethod, t_PythonAbstractLambdaMethod, PythonAbstractLambdaMethod);

          void t_PythonAbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractLambdaMethod), &PY_TYPE_DEF(PythonAbstractLambdaMethod), module, "PythonAbstractLambdaMethod", 1);
          }

          void t_PythonAbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "class_", make_descriptor(PythonAbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "wrapfn_", make_descriptor(t_PythonAbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractLambdaMethod::initializeClass);
            JNINativeMethod methods[] = {
              { "discreteSearch", "()V", (void *) t_PythonAbstractLambdaMethod_discreteSearch0 },
              { "inverseDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_inverseDecomposition1 },
              { "ltdlDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_ltdlDecomposition2 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractLambdaMethod_pythonDecRef3 },
              { "reduction", "()V", (void *) t_PythonAbstractLambdaMethod_reduction4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractLambdaMethod::wrap_Object(PythonAbstractLambdaMethod(((t_PythonAbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractLambdaMethod object((jobject) NULL);

            INT_CALL(object = PythonAbstractLambdaMethod());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "discreteSearch", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "inverseDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "ltdlDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "reduction", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data)
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
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *SmallManeuverAnalyticalModel::class$ = NULL;
        jmethodID *SmallManeuverAnalyticalModel::mids$ = NULL;
        bool SmallManeuverAnalyticalModel::live$ = false;

        jclass SmallManeuverAnalyticalModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6db53d6def3a34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_665410d4e1a3356f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_apply_58efaeb159657907] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_f43130c50e9fafeb] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialDV_d52645e0d4c07563] = env->getMethodID(cls, "getInertialDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getJacobian_0743f2f4f7f34cc1] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[[D)V");
            mids$[mid_updateMass_dcbc7ce2902fa136] = env->getMethodID(cls, "updateMass", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a6db53d6def3a34, a0.this$, a1.this$, a2)) {}

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_665410d4e1a3356f, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::orbits::Orbit SmallManeuverAnalyticalModel::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_58efaeb159657907], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState SmallManeuverAnalyticalModel::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_f43130c50e9fafeb], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SmallManeuverAnalyticalModel::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmallManeuverAnalyticalModel::getInertialDV() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getInertialDV_d52645e0d4c07563]));
        }

        ::org::orekit::frames::Frame SmallManeuverAnalyticalModel::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
        }

        void SmallManeuverAnalyticalModel::getJacobian(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_getJacobian_0743f2f4f7f34cc1], a0.this$, a1.this$, a2.this$);
        }

        jdouble SmallManeuverAnalyticalModel::updateMass(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_updateMass_dcbc7ce2902fa136], a0);
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
        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyGetSetDef t_SmallManeuverAnalyticalModel__fields_[] = {
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, date),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialDV),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialFrame),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmallManeuverAnalyticalModel__methods_[] = {
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, apply, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialDV, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getJacobian, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, updateMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmallManeuverAnalyticalModel)[] = {
          { Py_tp_methods, t_SmallManeuverAnalyticalModel__methods_ },
          { Py_tp_init, (void *) t_SmallManeuverAnalyticalModel_init_ },
          { Py_tp_getset, t_SmallManeuverAnalyticalModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmallManeuverAnalyticalModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmallManeuverAnalyticalModel, t_SmallManeuverAnalyticalModel, SmallManeuverAnalyticalModel);

        void t_SmallManeuverAnalyticalModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SmallManeuverAnalyticalModel), &PY_TYPE_DEF(SmallManeuverAnalyticalModel), module, "SmallManeuverAnalyticalModel", 0);
        }

        void t_SmallManeuverAnalyticalModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "class_", make_descriptor(SmallManeuverAnalyticalModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "wrapfn_", make_descriptor(t_SmallManeuverAnalyticalModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 1)))
            return NULL;
          return t_SmallManeuverAnalyticalModel::wrap_Object(SmallManeuverAnalyticalModel(((t_SmallManeuverAnalyticalModel *) arg)->object.this$));
        }
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2, a3));
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

        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "kK[[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
          {
            OBJ_CALL(self->object.getJacobian(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.updateMass(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateMass", arg);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
