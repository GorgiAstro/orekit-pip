#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeBuilder::class$ = NULL;
      jmethodID *AttitudeBuilder::mids$ = NULL;
      bool AttitudeBuilder::live$ = false;

      jclass AttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_build_52f3b2bb0d5542f2] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_ac690f9e371807c4] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_52f3b2bb0d5542f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_ac690f9e371807c4], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args);

      static PyMethodDef t_AttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_AttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeBuilder)[] = {
        { Py_tp_methods, t_AttitudeBuilder__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeBuilder, t_AttitudeBuilder, AttitudeBuilder);

      void t_AttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeBuilder), &PY_TYPE_DEF(AttitudeBuilder), module, "AttitudeBuilder", 0);
      }

      void t_AttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "class_", make_descriptor(AttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "wrapfn_", make_descriptor(t_AttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_AttitudeBuilder::wrap_Object(AttitudeBuilder(((t_AttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
            mids$[mid_applyDynamicOutlierFilter_b27bf6983be17cd5] = env->getStaticMethodID(cls, "applyDynamicOutlierFilter", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_checkDimension_12d71379b192fd42] = env->getStaticMethodID(cls, "checkDimension", "(ILorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;)V");
            mids$[mid_computeInnovationVector_ec65c5758c341ab5] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_computeInnovationVector_f9ff8f3570f5b024] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;[D)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_decorate_77e5ff2a058cebc7] = env->getStaticMethodID(cls, "decorate", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_decorateUnscented_77e5ff2a058cebc7] = env->getStaticMethodID(cls, "decorateUnscented", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_filterRelevant_6c3b3d666dfbaac2] = env->getStaticMethodID(cls, "filterRelevant", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;[Lorg/orekit/propagation/SpacecraftState;)[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_normalizeCovarianceMatrix_7639737fe0da56a8] = env->getStaticMethodID(cls, "normalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeCovarianceMatrix_7639737fe0da56a8] = env->getStaticMethodID(cls, "unnormalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeInnovationCovarianceMatrix_7639737fe0da56a8] = env->getStaticMethodID(cls, "unnormalizeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeKalmanGainMatrix_5e632611367b44d1] = env->getStaticMethodID(cls, "unnormalizeKalmanGainMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeMeasurementJacobian_5e632611367b44d1] = env->getStaticMethodID(cls, "unnormalizeMeasurementJacobian", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeStateTransitionMatrix_7639737fe0da56a8] = env->getStaticMethodID(cls, "unnormalizeStateTransitionMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanEstimatorUtil::applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_applyDynamicOutlierFilter_b27bf6983be17cd5], a0.this$, a1.this$);
        }

        void KalmanEstimatorUtil::checkDimension(jint a0, const ::org::orekit::utils::ParameterDriversList & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::utils::ParameterDriversList & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkDimension_12d71379b192fd42], a0, a1.this$, a2.this$, a3.this$);
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_ec65c5758c341ab5], a0.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_f9ff8f3570f5b024], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorate_77e5ff2a058cebc7], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorateUnscented_77e5ff2a058cebc7], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimatorUtil::filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callStaticObjectMethod(cls, mids$[mid_filterRelevant_6c3b3d666dfbaac2], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_normalizeCovarianceMatrix_7639737fe0da56a8], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeCovarianceMatrix_7639737fe0da56a8], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeInnovationCovarianceMatrix_7639737fe0da56a8], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeKalmanGainMatrix_5e632611367b44d1], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeMeasurementJacobian_5e632611367b44d1], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeStateTransitionMatrix_7639737fe0da56a8], a0.this$, a1.this$));
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
#include "java/io/StringReader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringReader::class$ = NULL;
    jmethodID *StringReader::mids$ = NULL;
    bool StringReader::live$ = false;

    jclass StringReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_44ed599e93e8a30c] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_9ab94ac1dc23b105] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a45a4db28976f262] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_9ab94ac1dc23b105] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringReader::StringReader(const ::java::lang::String & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    void StringReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void StringReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_44ed599e93e8a30c], a0);
    }

    jboolean StringReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_9ab94ac1dc23b105]);
    }

    jint StringReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint StringReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a45a4db28976f262], a0.this$, a1, a2);
    }

    jboolean StringReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_9ab94ac1dc23b105]);
    }

    void StringReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
    }

    jlong StringReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args);

    static PyMethodDef t_StringReader__methods_[] = {
      DECLARE_METHOD(t_StringReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, close, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, read, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringReader)[] = {
      { Py_tp_methods, t_StringReader__methods_ },
      { Py_tp_init, (void *) t_StringReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(StringReader, t_StringReader, StringReader);

    void t_StringReader::install(PyObject *module)
    {
      installType(&PY_TYPE(StringReader), &PY_TYPE_DEF(StringReader), module, "StringReader", 0);
    }

    void t_StringReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "class_", make_descriptor(StringReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "wrapfn_", make_descriptor(t_StringReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringReader::initializeClass, 1)))
        return NULL;
      return t_StringReader::wrap_Object(StringReader(((t_StringReader *) arg)->object.this$));
    }
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      StringReader object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = StringReader(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args)
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

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2DFormat::class$ = NULL;
          jmethodID *Vector2DFormat::mids$ = NULL;
          bool Vector2DFormat::live$ = false;

          jclass Vector2DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_d047b7641facca84] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_4b712c2465e37e54] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector2DFormat_53d6f65ab25b62f6] = env->getStaticMethodID(cls, "getVector2DFormat", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_getVector2DFormat_f748524f52c2d863] = env->getStaticMethodID(cls, "getVector2DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_parse_eceeaafaeb29e1fb] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_parse_94ca86ca2bd5c76d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2DFormat::Vector2DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Vector2DFormat::Vector2DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_d047b7641facca84, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector2DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_4b712c2465e37e54], a0.this$, a1.this$, a2.this$));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_53d6f65ab25b62f6]));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_f748524f52c2d863], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_eceeaafaeb29e1fb], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_94ca86ca2bd5c76d], a0.this$, a1.this$));
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
          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args);
          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data);
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data);
          static PyGetSetDef t_Vector2DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2DFormat, vector2DFormat),
            DECLARE_GET_FIELD(t_Vector2DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector2DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, getVector2DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2DFormat)[] = {
            { Py_tp_methods, t_Vector2DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector2DFormat_init_ },
            { Py_tp_getset, t_Vector2DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector2DFormat, t_Vector2DFormat, Vector2DFormat);
          PyObject *t_Vector2DFormat::wrap_Object(const Vector2DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector2DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector2DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2DFormat), &PY_TYPE_DEF(Vector2DFormat), module, "Vector2DFormat", 0);
          }

          void t_Vector2DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "class_", make_descriptor(Vector2DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "wrapfn_", make_descriptor(t_Vector2DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector2DFormat::wrap_Object(Vector2DFormat(((t_Vector2DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat object((jobject) NULL);

                INT_CALL(object = Vector2DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector2DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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

          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat());
                return t_Vector2DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector2DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat(a0));
                  return t_Vector2DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector2DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data)
          {
            Vector2DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector2DFormat());
            return t_Vector2DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TCBScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/util/Collection.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/GalileoScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScales::class$ = NULL;
      jmethodID *TimeScales::mids$ = NULL;
      bool TimeScales::live$ = false;

      jclass TimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createBesselianEpoch_f359a0110559347a] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_f359a0110559347a] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBDT_e66ecc29d9b0858a] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_c325492395d89b24] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_c325492395d89b24] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_c325492395d89b24] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_c325492395d89b24] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_75a06d4a3e06af34] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_375ab849f7e3d9ee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_a74060fc815076a7] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_935fd284aa6ccd53] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_c325492395d89b24] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_c325492395d89b24] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_c325492395d89b24] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_d7fbef15a3374e78] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_c325492395d89b24] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_c325492395d89b24] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_c325492395d89b24] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_c325492395d89b24] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_f801e6f0b9a78872] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_c325492395d89b24] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_700cdb40469496d6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_e0443055c5547bea] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_9ccd709f9ae42bbc] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_61ba58ac615801fa] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_68d743a8c670f6cb] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_246820b70f2cddeb] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_1e4acbbebd50858e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_f359a0110559347a], a0));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_f359a0110559347a], a0));
      }

      ::org::orekit::time::BDTScale TimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_e66ecc29d9b0858a]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_c325492395d89b24]));
      }

      ::org::orekit::time::GLONASSScale TimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_75a06d4a3e06af34]));
      }

      ::org::orekit::time::GMSTScale TimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_375ab849f7e3d9ee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_a74060fc815076a7]));
      }

      ::org::orekit::time::GalileoScale TimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_935fd284aa6ccd53]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::IRNSSScale TimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_d7fbef15a3374e78]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_c325492395d89b24]));
      }

      ::org::orekit::time::QZSSScale TimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_f801e6f0b9a78872]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::TAIScale TimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_700cdb40469496d6]));
      }

      ::org::orekit::time::TCBScale TimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_e0443055c5547bea]));
      }

      ::org::orekit::time::TCGScale TimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_9ccd709f9ae42bbc]));
      }

      ::org::orekit::time::TDBScale TimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_61ba58ac615801fa]));
      }

      ::org::orekit::time::TTScale TimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_68d743a8c670f6cb]));
      }

      ::org::orekit::time::UT1Scale TimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_246820b70f2cddeb], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_1e4acbbebd50858e]));
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
      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_getBDT(t_TimeScales *self);
      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getGPS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGST(t_TimeScales *self);
      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getTAI(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCG(t_TimeScales *self);
      static PyObject *t_TimeScales_getTDB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTT(t_TimeScales *self);
      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getUTC(t_TimeScales *self);
      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data);
      static PyGetSetDef t_TimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScales, bDT),
        DECLARE_GET_FIELD(t_TimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_TimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_TimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_TimeScales, gLONASS),
        DECLARE_GET_FIELD(t_TimeScales, gPS),
        DECLARE_GET_FIELD(t_TimeScales, gST),
        DECLARE_GET_FIELD(t_TimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_TimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_TimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, iRNSS),
        DECLARE_GET_FIELD(t_TimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_TimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_TimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_TimeScales, qZSS),
        DECLARE_GET_FIELD(t_TimeScales, qzssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, tAI),
        DECLARE_GET_FIELD(t_TimeScales, tCB),
        DECLARE_GET_FIELD(t_TimeScales, tCG),
        DECLARE_GET_FIELD(t_TimeScales, tDB),
        DECLARE_GET_FIELD(t_TimeScales, tT),
        DECLARE_GET_FIELD(t_TimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScales__methods_[] = {
        DECLARE_METHOD(t_TimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, getBDT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGLONASS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getGPS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGST, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIRNSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQZSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTAI, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCG, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTDB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getUTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScales)[] = {
        { Py_tp_methods, t_TimeScales__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScales, t_TimeScales, TimeScales);

      void t_TimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScales), &PY_TYPE_DEF(TimeScales), module, "TimeScales", 0);
      }

      void t_TimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "class_", make_descriptor(TimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "wrapfn_", make_descriptor(t_TimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScales::initializeClass, 1)))
          return NULL;
        return t_TimeScales::wrap_Object(TimeScales(((t_TimeScales *) arg)->object.this$));
      }
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_getBDT(t_TimeScales *self)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getGPS(t_TimeScales *self)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGST(t_TimeScales *self)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTAI(t_TimeScales *self)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCB(t_TimeScales *self)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCG(t_TimeScales *self)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTDB(t_TimeScales *self)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTT(t_TimeScales *self)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getUTC(t_TimeScales *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory::class$ = NULL;
            jmethodID *CoefficientsFactory::mids$ = NULL;
            bool CoefficientsFactory::live$ = false;

            jclass CoefficientsFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeGsHs_9703443b8e98cb65] = env->getStaticMethodID(cls, "computeGsHs", "(DDDDI)[[D");
                mids$[mid_computeGsHs_0cd7926eec02749e] = env->getStaticMethodID(cls, "computeGsHs", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeQns_a75b2896a12fb778] = env->getStaticMethodID(cls, "computeQns", "(DII)[[D");
                mids$[mid_computeQns_f9dc0468fd651ea0] = env->getStaticMethodID(cls, "computeQns", "(Lorg/hipparchus/CalculusFieldElement;II)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeVns_83270ffe4c2eeea0] = env->getStaticMethodID(cls, "computeVns", "(I)Ljava/util/SortedMap;");
                mids$[mid_getVmns_2f53baea9459d443] = env->getStaticMethodID(cls, "getVmns", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeGsHs(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_9703443b8e98cb65], a0, a1, a2, a3, a4));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeGsHs(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_0cd7926eec02749e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeQns(jdouble a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_a75b2896a12fb778], a0, a1, a2));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeQns(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_f9dc0468fd651ea0], a0.this$, a1, a2));
            }

            ::java::util::SortedMap CoefficientsFactory::computeVns(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_computeVns_83270ffe4c2eeea0], a0));
            }

            jdouble CoefficientsFactory::getVmns(jint a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getVmns_2f53baea9459d443], a0, a1, a2);
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
            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_CoefficientsFactory__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeGsHs, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeQns, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeVns, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, getVmns, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory)[] = {
              { Py_tp_methods, t_CoefficientsFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory, t_CoefficientsFactory, CoefficientsFactory);

            void t_CoefficientsFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory), &PY_TYPE_DEF(CoefficientsFactory), module, "CoefficientsFactory", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "NSKey", make_descriptor(&PY_TYPE_DEF(CoefficientsFactory$NSKey)));
            }

            void t_CoefficientsFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "class_", make_descriptor(CoefficientsFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "wrapfn_", make_descriptor(t_CoefficientsFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory::wrap_Object(CoefficientsFactory(((t_CoefficientsFactory *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jint a4;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                break;
               case 6:
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  ::org::hipparchus::Field a5((jobject) NULL);
                  PyTypeObject **p5;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4, a5));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeGsHs", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DII", &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeQns", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              ::java::util::SortedMap result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeVns(a0));
                return ::java::util::t_SortedMap::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::utilities::PY_TYPE(CoefficientsFactory$NSKey), ::java::lang::PY_TYPE(Double));
              }

              PyErr_SetArgsError(type, "computeVns", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::getVmns(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getVmns", args);
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSOrbitalElements::class$ = NULL;
            jmethodID *GLONASSOrbitalElements::mids$ = NULL;
            bool GLONASSOrbitalElements::live$ = false;

            jclass GLONASSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDeltaI_b74f83833fdad017] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_b74f83833fdad017] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_b74f83833fdad017] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getGammaN_b74f83833fdad017] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getIOD_55546ef6a647f39b] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_getLambda_b74f83833fdad017] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_55546ef6a647f39b] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_55546ef6a647f39b] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getTN_b74f83833fdad017] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_b74f83833fdad017] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_b74f83833fdad017] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_b74f83833fdad017] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_b74f83833fdad017] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GLONASSOrbitalElements::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_b74f83833fdad017]);
            }

            jint GLONASSOrbitalElements::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_55546ef6a647f39b]);
            }

            jdouble GLONASSOrbitalElements::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_b74f83833fdad017]);
            }

            jint GLONASSOrbitalElements::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_55546ef6a647f39b]);
            }

            jint GLONASSOrbitalElements::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_55546ef6a647f39b]);
            }

            jdouble GLONASSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_b74f83833fdad017]);
            }

            jdouble GLONASSOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_b74f83833fdad017]);
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
            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyGetSetDef t_GLONASSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaI),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaT),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, gammaN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, iOD),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, lambda),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, n4),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, na),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, tN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, x),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, y),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, z),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GLONASSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSOrbitalElements)[] = {
              { Py_tp_methods, t_GLONASSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GLONASSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GLONASSOrbitalElements, t_GLONASSOrbitalElements, GLONASSOrbitalElements);

            void t_GLONASSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSOrbitalElements), &PY_TYPE_DEF(GLONASSOrbitalElements), module, "GLONASSOrbitalElements", 0);
            }

            void t_GLONASSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "class_", make_descriptor(GLONASSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "wrapfn_", make_descriptor(t_GLONASSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GLONASSOrbitalElements::wrap_Object(GLONASSOrbitalElements(((t_GLONASSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *BOBYQAOptimizer::class$ = NULL;
            jmethodID *BOBYQAOptimizer::mids$ = NULL;
            bool BOBYQAOptimizer::live$ = false;
            jdouble BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS = (jdouble) 0;
            jdouble BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS = (jdouble) 0;
            jint BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION = (jint) 0;

            jclass BOBYQAOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_cdd9dee35d124091] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INITIAL_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_INITIAL_RADIUS");
                DEFAULT_STOPPING_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_STOPPING_RADIUS");
                MINIMUM_PROBLEM_DIMENSION = env->getStaticIntField(cls, "MINIMUM_PROBLEM_DIMENSION");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_cdd9dee35d124091, a0, a1, a2)) {}
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
            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args);
            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data);
            static PyGetSetDef t_BOBYQAOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_BOBYQAOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BOBYQAOptimizer__methods_[] = {
              DECLARE_METHOD(t_BOBYQAOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BOBYQAOptimizer)[] = {
              { Py_tp_methods, t_BOBYQAOptimizer__methods_ },
              { Py_tp_init, (void *) t_BOBYQAOptimizer_init_ },
              { Py_tp_getset, t_BOBYQAOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BOBYQAOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(BOBYQAOptimizer, t_BOBYQAOptimizer, BOBYQAOptimizer);
            PyObject *t_BOBYQAOptimizer::wrap_Object(const BOBYQAOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BOBYQAOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BOBYQAOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(BOBYQAOptimizer), &PY_TYPE_DEF(BOBYQAOptimizer), module, "BOBYQAOptimizer", 0);
            }

            void t_BOBYQAOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "class_", make_descriptor(BOBYQAOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "wrapfn_", make_descriptor(t_BOBYQAOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "boxfn_", make_descriptor(boxObject));
              env->getClass(BOBYQAOptimizer::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_INITIAL_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_STOPPING_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "MINIMUM_PROBLEM_DIMENSION", make_descriptor(BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION));
            }

            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BOBYQAOptimizer::initializeClass, 1)))
                return NULL;
              return t_BOBYQAOptimizer::wrap_Object(BOBYQAOptimizer(((t_BOBYQAOptimizer *) arg)->object.this$));
            }
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BOBYQAOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jint a0;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0, a1, a2));
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
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data)
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileWriter::mids$ = NULL;
        bool PythonAttitudeEphemerisFileWriter::live$ = false;

        jclass PythonAttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_50a488c23b217f54] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileWriter::PythonAttitudeEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAttitudeEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAttitudeEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAttitudeEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileWriter, t_PythonAttitudeEphemerisFileWriter, PythonAttitudeEphemerisFileWriter);

        void t_PythonAttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileWriter), &PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter), module, "PythonAttitudeEphemerisFileWriter", 1);
        }

        void t_PythonAttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "class_", make_descriptor(PythonAttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V", (void *) t_PythonAttitudeEphemerisFileWriter_write1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileWriter::wrap_Object(PythonAttitudeEphemerisFileWriter(((t_PythonAttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(::org::orekit::files::general::AttitudeEphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$BooleanConsumer::class$ = NULL;
            jmethodID *ParseToken$BooleanConsumer::mids$ = NULL;
            bool ParseToken$BooleanConsumer::live$ = false;

            jclass ParseToken$BooleanConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_fcb96c98de6fad04] = env->getMethodID(cls, "accept", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$BooleanConsumer::accept(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_fcb96c98de6fad04], a0);
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
            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$BooleanConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$BooleanConsumer)[] = {
              { Py_tp_methods, t_ParseToken$BooleanConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$BooleanConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$BooleanConsumer, t_ParseToken$BooleanConsumer, ParseToken$BooleanConsumer);

            void t_ParseToken$BooleanConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$BooleanConsumer), &PY_TYPE_DEF(ParseToken$BooleanConsumer), module, "ParseToken$BooleanConsumer", 0);
            }

            void t_ParseToken$BooleanConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "class_", make_descriptor(ParseToken$BooleanConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "wrapfn_", make_descriptor(t_ParseToken$BooleanConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$BooleanConsumer::wrap_Object(ParseToken$BooleanConsumer(((t_ParseToken$BooleanConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
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
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ElevationMask::class$ = NULL;
      jmethodID *ElevationMask::mids$ = NULL;
      bool ElevationMask::live$ = false;

      jclass ElevationMask::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ElevationMask");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_getElevation_04fd0666b613d2ab] = env->getMethodID(cls, "getElevation", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ElevationMask::ElevationMask(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

      jdouble ElevationMask::getElevation(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_04fd0666b613d2ab], a0);
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
      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg);

      static PyMethodDef t_ElevationMask__methods_[] = {
        DECLARE_METHOD(t_ElevationMask, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, getElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ElevationMask)[] = {
        { Py_tp_methods, t_ElevationMask__methods_ },
        { Py_tp_init, (void *) t_ElevationMask_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ElevationMask)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ElevationMask, t_ElevationMask, ElevationMask);

      void t_ElevationMask::install(PyObject *module)
      {
        installType(&PY_TYPE(ElevationMask), &PY_TYPE_DEF(ElevationMask), module, "ElevationMask", 0);
      }

      void t_ElevationMask::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "class_", make_descriptor(ElevationMask::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "wrapfn_", make_descriptor(t_ElevationMask::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ElevationMask::initializeClass, 1)))
          return NULL;
        return t_ElevationMask::wrap_Object(ElevationMask(((t_ElevationMask *) arg)->object.this$));
      }
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ElevationMask::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        ElevationMask object((jobject) NULL);

        if (!parseArgs(args, "[[D", &a0))
        {
          INT_CALL(object = ElevationMask(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getElevation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *AccuracyProvider::class$ = NULL;
            jmethodID *AccuracyProvider::mids$ = NULL;
            bool AccuracyProvider::live$ = false;

            jclass AccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/AccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AccuracyProvider::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b74f83833fdad017]);
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
          namespace common {
            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self);
            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data);
            static PyGetSetDef t_AccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_AccuracyProvider, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_AccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AccuracyProvider)[] = {
              { Py_tp_methods, t_AccuracyProvider__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AccuracyProvider, t_AccuracyProvider, AccuracyProvider);

            void t_AccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(AccuracyProvider), &PY_TYPE_DEF(AccuracyProvider), module, "AccuracyProvider", 0);
            }

            void t_AccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "class_", make_descriptor(AccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "wrapfn_", make_descriptor(t_AccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_AccuracyProvider::wrap_Object(AccuracyProvider(((t_AccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/Field.h"
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
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_b5bb517c2cd2bcaf] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getOne_ba578f832ae965ef] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_ba578f832ae965ef] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FieldComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      FieldComplexField FieldComplexField::getField(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplexField(env->callStaticObjectMethod(cls, mids$[mid_getField_b5bb517c2cd2bcaf], a0.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getOne() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getOne_ba578f832ae965ef]));
      }

      ::java::lang::Class FieldComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getZero() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getZero_ba578f832ae965ef]));
      }

      jint FieldComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_abs_ed038846c7f4bd09] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acos_ed038846c7f4bd09] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acosh_ed038846c7f4bd09] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_e5c5abd9bec39419] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_5ca9d3603e3064a2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_addInPlace_dbe52e5696575f72] = env->getMethodID(cls, "addInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_asin_ed038846c7f4bd09] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_asinh_ed038846c7f4bd09] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan_ed038846c7f4bd09] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_e5c5abd9bec39419] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_42a5d1853433893e] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atanh_ed038846c7f4bd09] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cbrt_ed038846c7f4bd09] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ceil_ed038846c7f4bd09] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_compose_3872a00e57218cc2] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_e5c5abd9bec39419] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_5ca9d3603e3064a2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cos_ed038846c7f4bd09] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cosh_ed038846c7f4bd09] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createConstant_5ca9d3603e3064a2] = env->getStaticMethodID(cls, "createConstant", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createVariable_92d5281504a41756] = env->getStaticMethodID(cls, "createVariable", "(ID)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_e5c5abd9bec39419] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_5ca9d3603e3064a2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_ed038846c7f4bd09] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_expm1_ed038846c7f4bd09] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_floor_ed038846c7f4bd09] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getDerivative_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getPi_ed038846c7f4bd09] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_e5c5abd9bec39419] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_hypot_42a5d1853433893e] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_0060c6313662d4fc] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_2523fe52d964139e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/SparseGradient;[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_e4464c69019b4923] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_30f2e70ab9d1f636] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_ddef5547fa28b008] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_04daf0145ca72d20] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_310343dfd341bcfb] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_530bdfca25919712] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log_ed038846c7f4bd09] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log10_ed038846c7f4bd09] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log1p_ed038846c7f4bd09] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_e5c5abd9bec39419] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_5ca9d3603e3064a2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_d7f9c7da9c084a57] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiplyInPlace_dbe52e5696575f72] = env->getMethodID(cls, "multiplyInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_negate_ed038846c7f4bd09] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_newInstance_5ca9d3603e3064a2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_numVars_55546ef6a647f39b] = env->getMethodID(cls, "numVars", "()I");
            mids$[mid_pow_e5c5abd9bec39419] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_5ca9d3603e3064a2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_d7f9c7da9c084a57] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_93640243cd5dffdb] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_reciprocal_ed038846c7f4bd09] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_e5c5abd9bec39419] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_5ca9d3603e3064a2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rint_ed038846c7f4bd09] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rootN_d7f9c7da9c084a57] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_scalb_d7f9c7da9c084a57] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sign_ed038846c7f4bd09] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sin_ed038846c7f4bd09] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_ed038846c7f4bd09] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_ed038846c7f4bd09] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_e5c5abd9bec39419] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_5ca9d3603e3064a2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tan_ed038846c7f4bd09] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tanh_ed038846c7f4bd09] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_taylor_b060e4326765ccf1] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_ed038846c7f4bd09] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_toRadians_ed038846c7f4bd09] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ulp_ed038846c7f4bd09] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SparseGradient SparseGradient::abs() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_abs_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::acos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acos_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::acosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acosh_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::add(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::add(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_5ca9d3603e3064a2], a0));
        }

        void SparseGradient::addInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addInPlace_dbe52e5696575f72], a0.this$);
        }

        SparseGradient SparseGradient::asin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asin_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::asinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asinh_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::atan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan2_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_atan2_42a5d1853433893e], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::atanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atanh_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::cbrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cbrt_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::ceil() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ceil_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::compose(const JArray< jdouble > & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_compose_3872a00e57218cc2], a0.this$));
        }

        SparseGradient SparseGradient::copySign(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::copySign(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::cos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cos_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::cosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cosh_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::createConstant(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createConstant_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::createVariable(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createVariable_92d5281504a41756], a0, a1));
        }

        SparseGradient SparseGradient::divide(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::divide(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_5ca9d3603e3064a2], a0));
        }

        jboolean SparseGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        SparseGradient SparseGradient::exp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_exp_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::expm1() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_expm1_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::floor() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_floor_ed038846c7f4bd09]));
        }

        jdouble SparseGradient::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_2afcbc21f4e57ab2], a0);
        }

        ::org::hipparchus::Field SparseGradient::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        SparseGradient SparseGradient::getPi() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_getPi_ed038846c7f4bd09]));
        }

        jdouble SparseGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        jdouble SparseGradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint SparseGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_hypot_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_hypot_42a5d1853433893e], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< jdouble > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_0060c6313662d4fc], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< SparseGradient > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2523fe52d964139e], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e4464c69019b4923], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_30f2e70ab9d1f636], a0, a1.this$, a2, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_ddef5547fa28b008], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_04daf0145ca72d20], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5, const SparseGradient & a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_310343dfd341bcfb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5, jdouble a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_530bdfca25919712], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        SparseGradient SparseGradient::log() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::log10() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log10_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::log1p() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log1p_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::multiply(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::multiply(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::multiply(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_d7f9c7da9c084a57], a0));
        }

        void SparseGradient::multiplyInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_multiplyInPlace_dbe52e5696575f72], a0.this$);
        }

        SparseGradient SparseGradient::negate() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_negate_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::newInstance(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_newInstance_5ca9d3603e3064a2], a0));
        }

        jint SparseGradient::numVars() const
        {
          return env->callIntMethod(this$, mids$[mid_numVars_55546ef6a647f39b]);
        }

        SparseGradient SparseGradient::pow(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::pow(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::pow(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_d7f9c7da9c084a57], a0));
        }

        SparseGradient SparseGradient::pow(jdouble a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_93640243cd5dffdb], a0, a1.this$));
        }

        SparseGradient SparseGradient::reciprocal() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::remainder(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::remainder(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::rint() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rint_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::rootN(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rootN_d7f9c7da9c084a57], a0));
        }

        SparseGradient SparseGradient::scalb(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_scalb_d7f9c7da9c084a57], a0));
        }

        SparseGradient SparseGradient::sign() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sign_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::sin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sin_ed038846c7f4bd09]));
        }

        ::org::hipparchus::util::FieldSinCos SparseGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        SparseGradient SparseGradient::sinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sinh_ed038846c7f4bd09]));
        }

        ::org::hipparchus::util::FieldSinhCosh SparseGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        SparseGradient SparseGradient::sqrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sqrt_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::subtract(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_e5c5abd9bec39419], a0.this$));
        }

        SparseGradient SparseGradient::subtract(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_5ca9d3603e3064a2], a0));
        }

        SparseGradient SparseGradient::tan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tan_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::tanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tanh_ed038846c7f4bd09]));
        }

        jdouble SparseGradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_b060e4326765ccf1], a0.this$);
        }

        SparseGradient SparseGradient::toDegrees() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::toRadians() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toRadians_ed038846c7f4bd09]));
        }

        SparseGradient SparseGradient::ulp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ulp_ed038846c7f4bd09]));
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
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IntegrationReference::class$ = NULL;
            jmethodID *IntegrationReference::mids$ = NULL;
            bool IntegrationReference::live$ = false;
            IntegrationReference *IntegrationReference::END = NULL;
            IntegrationReference *IntegrationReference::MIDDLE = NULL;
            IntegrationReference *IntegrationReference::START = NULL;

            jclass IntegrationReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IntegrationReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_7311f1caf365b1df] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_values_e4d631ed1f433157] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                END = new IntegrationReference(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                MIDDLE = new IntegrationReference(env->getStaticObjectField(cls, "MIDDLE", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                START = new IntegrationReference(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IntegrationReference IntegrationReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return IntegrationReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7311f1caf365b1df], a0.this$));
            }

            JArray< IntegrationReference > IntegrationReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< IntegrationReference >(env->callStaticObjectMethod(cls, mids$[mid_values_e4d631ed1f433157]));
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
            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args);
            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_IntegrationReference_values(PyTypeObject *type);
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data);
            static PyGetSetDef t_IntegrationReference__fields_[] = {
              DECLARE_GET_FIELD(t_IntegrationReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IntegrationReference__methods_[] = {
              DECLARE_METHOD(t_IntegrationReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_IntegrationReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IntegrationReference)[] = {
              { Py_tp_methods, t_IntegrationReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_IntegrationReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IntegrationReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(IntegrationReference, t_IntegrationReference, IntegrationReference);
            PyObject *t_IntegrationReference::wrap_Object(const IntegrationReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_IntegrationReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_IntegrationReference::install(PyObject *module)
            {
              installType(&PY_TYPE(IntegrationReference), &PY_TYPE_DEF(IntegrationReference), module, "IntegrationReference", 0);
            }

            void t_IntegrationReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "class_", make_descriptor(IntegrationReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "wrapfn_", make_descriptor(t_IntegrationReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(IntegrationReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "END", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "MIDDLE", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::MIDDLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "START", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::START)));
            }

            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IntegrationReference::initializeClass, 1)))
                return NULL;
              return t_IntegrationReference::wrap_Object(IntegrationReference(((t_IntegrationReference *) arg)->object.this$));
            }
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IntegrationReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              IntegrationReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::valueOf(a0));
                return t_IntegrationReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_IntegrationReference_values(PyTypeObject *type)
            {
              JArray< IntegrationReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::values());
              return JArray<jobject>(result.this$).wrap(t_IntegrationReference::wrap_jobject);
            }
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance::class$ = NULL;
          jmethodID *SemiVariance::mids$ = NULL;
          bool SemiVariance::live$ = false;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::DOWNSIDE_VARIANCE = NULL;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::UPSIDE_VARIANCE = NULL;

          jclass SemiVariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_7cf9f8373891ab5c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_f9b66e39c7031a0f] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_copy_975ae770dcc03b8b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_evaluate_8dc5ab532196831b] = env->getMethodID(cls, "evaluate", "([DLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_79e4db9e1e3d84c9] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_188019cfa585537d] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_e3954d7d6000c211] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;ZII)D");
              mids$[mid_getVarianceDirection_f2ac1ea2980b3d49] = env->getMethodID(cls, "getVarianceDirection", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_isBiasCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrected_02dcf3aae142041b] = env->getMethodID(cls, "withBiasCorrected", "(Z)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_withVarianceDirection_9d387ca5b20ab748] = env->getMethodID(cls, "withVarianceDirection", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance::SemiVariance() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          SemiVariance::SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7cf9f8373891ab5c, a0.this$)) {}

          SemiVariance::SemiVariance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

          SemiVariance::SemiVariance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_f9b66e39c7031a0f, a0, a1.this$)) {}

          SemiVariance SemiVariance::copy() const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_copy_975ae770dcc03b8b]));
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_8dc5ab532196831b], a0.this$, a1.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_79e4db9e1e3d84c9], a0.this$, a1);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_188019cfa585537d], a0.this$, a1, a2.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2, jboolean a3, jint a4, jint a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_e3954d7d6000c211], a0.this$, a1, a2.this$, a3, a4, a5);
          }

          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction SemiVariance::getVarianceDirection() const
          {
            return ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->callObjectMethod(this$, mids$[mid_getVarianceDirection_f2ac1ea2980b3d49]));
          }

          jboolean SemiVariance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_9ab94ac1dc23b105]);
          }

          SemiVariance SemiVariance::withBiasCorrected(jboolean a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withBiasCorrected_02dcf3aae142041b], a0));
          }

          SemiVariance SemiVariance::withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withVarianceDirection_9d387ca5b20ab748], a0.this$));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self);
          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self);
          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data);
          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data);
          static PyGetSetDef t_SemiVariance__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance, biasCorrected),
            DECLARE_GET_FIELD(t_SemiVariance, varianceDirection),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance__methods_[] = {
            DECLARE_METHOD(t_SemiVariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, copy, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, getVarianceDirection, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, withBiasCorrected, METH_O),
            DECLARE_METHOD(t_SemiVariance, withVarianceDirection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance)[] = {
            { Py_tp_methods, t_SemiVariance__methods_ },
            { Py_tp_init, (void *) t_SemiVariance_init_ },
            { Py_tp_getset, t_SemiVariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SemiVariance, t_SemiVariance, SemiVariance);

          void t_SemiVariance::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance), &PY_TYPE_DEF(SemiVariance), module, "SemiVariance", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "Direction", make_descriptor(&PY_TYPE_DEF(SemiVariance$Direction)));
          }

          void t_SemiVariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "class_", make_descriptor(SemiVariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "wrapfn_", make_descriptor(t_SemiVariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "DOWNSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::DOWNSIDE_VARIANCE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "UPSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::UPSIDE_VARIANCE)));
          }

          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance::initializeClass, 1)))
              return NULL;
            return t_SemiVariance::wrap_Object(SemiVariance(((t_SemiVariance *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SemiVariance object((jobject) NULL);

                INT_CALL(object = SemiVariance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
                PyTypeObject **p0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "ZK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0, a1));
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

          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args)
          {
            SemiVariance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SemiVariance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble result;

                if (!parseArgs(args, "[DK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble result;

                if (!parseArgs(args, "[DDK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 6:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jboolean a3;
                jint a4;
                jint a5;
                jdouble result;

                if (!parseArgs(args, "[DDKZII", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction result((jobject) NULL);
            OBJ_CALL(result = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(result);
          }

          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg)
          {
            jboolean a0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrected(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrected", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
            PyTypeObject **p0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
            {
              OBJ_CALL(result = self->object.withVarianceDirection(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withVarianceDirection", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction value((jobject) NULL);
            OBJ_CALL(value = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(value);
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
          mids$[mid_getITRFVersion_8bcdfad365f6d36a] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion VersionedITRF::getITRFVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_8bcdfad365f6d36a]));
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
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHullGenerator2D::class$ = NULL;
            jmethodID *ConvexHullGenerator2D::mids$ = NULL;
            bool ConvexHullGenerator2D::live$ = false;

            jclass ConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_ae326bc9ed5d7af0] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D ConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_ae326bc9ed5d7af0], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args);

            static PyMethodDef t_ConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_ConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::hull::ConvexHullGenerator),
              NULL
            };

            DEFINE_TYPE(ConvexHullGenerator2D, t_ConvexHullGenerator2D, ConvexHullGenerator2D);

            void t_ConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHullGenerator2D), &PY_TYPE_DEF(ConvexHullGenerator2D), module, "ConvexHullGenerator2D", 0);
            }

            void t_ConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "class_", make_descriptor(ConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "wrapfn_", make_descriptor(t_ConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHullGenerator2D::wrap_Object(ConvexHullGenerator2D(((t_ConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              return callSuper(PY_TYPE(ConvexHullGenerator2D), (PyObject *) self, "generate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventHandler::class$ = NULL;
        jmethodID *ODEEventHandler::mids$ = NULL;
        bool ODEEventHandler::live$ = false;

        jclass ODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_c39d6661c83432e5] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/events/ODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_57f6e78f0564b9da] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;DLorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_resetState_2141456a9ca76e10] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action ODEEventHandler::eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::ODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c39d6661c83432e5], a0.this$, a1.this$, a2));
        }

        void ODEEventHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1, const ::org::hipparchus::ode::events::ODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_57f6e78f0564b9da], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::ode::ODEState ODEEventHandler::resetState(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_2141456a9ca76e10], a0.this$, a1.this$));
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
        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args);

        static PyMethodDef t_ODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_ODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventHandler)[] = {
          { Py_tp_methods, t_ODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventHandler, t_ODEEventHandler, ODEEventHandler);

        void t_ODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventHandler), &PY_TYPE_DEF(ODEEventHandler), module, "ODEEventHandler", 0);
        }

        void t_ODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "class_", make_descriptor(ODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "wrapfn_", make_descriptor(t_ODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_ODEEventHandler::wrap_Object(ODEEventHandler(((t_ODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::ODEEventDetector a1((jobject) NULL);
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::ode::events::ODEEventDetector a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmWriter::class$ = NULL;
              jmethodID *OmmWriter::mids$ = NULL;
              bool OmmWriter::live$ = false;
              jdouble OmmWriter::CCSDS_OMM_VERS = (jdouble) 0;
              jint OmmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OmmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_751257c373115a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OMM_VERS = env->getStaticDoubleField(cls, "CCSDS_OMM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmWriter::OmmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_751257c373115a80, a0.this$, a1.this$, a2.this$)) {}
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
            namespace omm {
              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args);
              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data);
              static PyGetSetDef t_OmmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OmmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmWriter__methods_[] = {
                DECLARE_METHOD(t_OmmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmWriter)[] = {
                { Py_tp_methods, t_OmmWriter__methods_ },
                { Py_tp_init, (void *) t_OmmWriter_init_ },
                { Py_tp_getset, t_OmmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OmmWriter, t_OmmWriter, OmmWriter);
              PyObject *t_OmmWriter::wrap_Object(const OmmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OmmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OmmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmWriter), &PY_TYPE_DEF(OmmWriter), module, "OmmWriter", 0);
              }

              void t_OmmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "class_", make_descriptor(OmmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "wrapfn_", make_descriptor(t_OmmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "CCSDS_OMM_VERS", make_descriptor(OmmWriter::CCSDS_OMM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "KVN_PADDING_WIDTH", make_descriptor(OmmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmWriter::initializeClass, 1)))
                  return NULL;
                return t_OmmWriter::wrap_Object(OmmWriter(((t_OmmWriter *) arg)->object.this$));
              }
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OmmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OmmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::omm::PY_TYPE(Omm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractConstituentParser::class$ = NULL;
            jmethodID *PythonAbstractConstituentParser::mids$ = NULL;
            bool PythonAbstractConstituentParser::live$ = false;

            jclass PythonAbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_2ec5724104d9082e] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_e6dd83960ea2d5d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractConstituentParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractConstituentParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractConstituentParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args);
            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self);
            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data);
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data);
            static PyGetSetDef t_PythonAbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstituentParser)[] = {
              { Py_tp_methods, t_PythonAbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractConstituentParser, t_PythonAbstractConstituentParser, PythonAbstractConstituentParser);
            PyObject *t_PythonAbstractConstituentParser::wrap_Object(const PythonAbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractConstituentParser), &PY_TYPE_DEF(PythonAbstractConstituentParser), module, "PythonAbstractConstituentParser", 1);
            }

            void t_PythonAbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "class_", make_descriptor(PythonAbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "wrapfn_", make_descriptor(t_PythonAbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractConstituentParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAbstractConstituentParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonAbstractConstituentParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAbstractConstituentParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAbstractConstituentParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAbstractConstituentParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAbstractConstituentParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractConstituentParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractConstituentParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractConstituentParser::wrap_Object(PythonAbstractConstituentParser(((t_PythonAbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data)
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
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AbstractConvexHullGenerator2D::class$ = NULL;
            jmethodID *AbstractConvexHullGenerator2D::mids$ = NULL;
            bool AbstractConvexHullGenerator2D::live$ = false;

            jclass AbstractConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_ae326bc9ed5d7af0] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");
                mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
                mids$[mid_isIncludeCollinearPoints_9ab94ac1dc23b105] = env->getMethodID(cls, "isIncludeCollinearPoints", "()Z");
                mids$[mid_findHullVertices_394fcc3577736ad2] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D AbstractConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_ae326bc9ed5d7af0], a0.this$));
            }

            jdouble AbstractConvexHullGenerator2D::getTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
            }

            jboolean AbstractConvexHullGenerator2D::isIncludeCollinearPoints() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isIncludeCollinearPoints_9ab94ac1dc23b105]);
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyGetSetDef t_AbstractConvexHullGenerator2D__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, includeCollinearPoints),
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, tolerance),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, generate, METH_O),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, getTolerance, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, isIncludeCollinearPoints, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_AbstractConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConvexHullGenerator2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractConvexHullGenerator2D, t_AbstractConvexHullGenerator2D, AbstractConvexHullGenerator2D);

            void t_AbstractConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConvexHullGenerator2D), &PY_TYPE_DEF(AbstractConvexHullGenerator2D), module, "AbstractConvexHullGenerator2D", 0);
            }

            void t_AbstractConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "class_", make_descriptor(AbstractConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "wrapfn_", make_descriptor(t_AbstractConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_AbstractConvexHullGenerator2D::wrap_Object(AbstractConvexHullGenerator2D(((t_AbstractConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generate", arg);
              return NULL;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTolerance());
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
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *StorelessCovariance::class$ = NULL;
        jmethodID *StorelessCovariance::mids$ = NULL;
        bool StorelessCovariance::live$ = false;

        jclass StorelessCovariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/StorelessCovariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_34742154de10200a] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_append_a6bf97afc932971f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/correlation/StorelessCovariance;)V");
            mids$[mid_getCovariance_cad98089d00f8a5b] = env->getMethodID(cls, "getCovariance", "(II)D");
            mids$[mid_getCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
            mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StorelessCovariance::StorelessCovariance(jint a0) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        StorelessCovariance::StorelessCovariance(jint a0, jboolean a1) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_34742154de10200a, a0, a1)) {}

        void StorelessCovariance::append(const StorelessCovariance & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_a6bf97afc932971f], a0.this$);
        }

        jdouble StorelessCovariance::getCovariance(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovariance_cad98089d00f8a5b], a0, a1);
        }

        ::org::hipparchus::linear::RealMatrix StorelessCovariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_f77d745f2128c391]));
        }

        JArray< JArray< jdouble > > StorelessCovariance::getData() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
        }

        jint StorelessCovariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
        }

        void StorelessCovariance::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
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
        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self);
        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data);
        static PyGetSetDef t_StorelessCovariance__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessCovariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_StorelessCovariance, data),
          DECLARE_GET_FIELD(t_StorelessCovariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessCovariance__methods_[] = {
          DECLARE_METHOD(t_StorelessCovariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, append, METH_O),
          DECLARE_METHOD(t_StorelessCovariance, getCovariance, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getCovarianceMatrix, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getData, METH_NOARGS),
          DECLARE_METHOD(t_StorelessCovariance, getN, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessCovariance)[] = {
          { Py_tp_methods, t_StorelessCovariance__methods_ },
          { Py_tp_init, (void *) t_StorelessCovariance_init_ },
          { Py_tp_getset, t_StorelessCovariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessCovariance)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::correlation::Covariance),
          NULL
        };

        DEFINE_TYPE(StorelessCovariance, t_StorelessCovariance, StorelessCovariance);

        void t_StorelessCovariance::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessCovariance), &PY_TYPE_DEF(StorelessCovariance), module, "StorelessCovariance", 0);
        }

        void t_StorelessCovariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "class_", make_descriptor(StorelessCovariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "wrapfn_", make_descriptor(t_StorelessCovariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessCovariance::initializeClass, 1)))
            return NULL;
          return t_StorelessCovariance::wrap_Object(StorelessCovariance(((t_StorelessCovariance *) arg)->object.this$));
        }
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessCovariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = StorelessCovariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = StorelessCovariance(a0, a1));
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

        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg)
        {
          StorelessCovariance a0((jobject) NULL);

          if (!parseArg(arg, "k", StorelessCovariance::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovariance(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", args);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getCovarianceMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getCovarianceMatrix", args, 2);
        }

        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getN", args, 2);
        }

        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateFunctionDifferentiator::mids$ = NULL;
        bool UnivariateFunctionDifferentiator::live$ = false;

        jclass UnivariateFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_220981d5dd65e2eb] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction UnivariateFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_220981d5dd65e2eb], a0.this$));
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
        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateFunctionDifferentiator, t_UnivariateFunctionDifferentiator, UnivariateFunctionDifferentiator);

        void t_UnivariateFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateFunctionDifferentiator), &PY_TYPE_DEF(UnivariateFunctionDifferentiator), module, "UnivariateFunctionDifferentiator", 0);
        }

        void t_UnivariateFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "class_", make_descriptor(UnivariateFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateFunctionDifferentiator::wrap_Object(UnivariateFunctionDifferentiator(((t_UnivariateFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_checkBetweenZeroAndOneIncluded_8ba9fe7a847cecad] = env->getStaticMethodID(cls, "checkBetweenZeroAndOneIncluded", "(D)V");
            mids$[mid_getClamp_08006f6c9018216e] = env->getStaticMethodID(cls, "getClamp", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getClamp_c81f7e343d53e75f] = env->getStaticMethodID(cls, "getClamp", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getCubic_08006f6c9018216e] = env->getStaticMethodID(cls, "getCubic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getCubic_c81f7e343d53e75f] = env->getStaticMethodID(cls, "getCubic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getFieldGeneralOrder_be398f450d2cffc9] = env->getStaticMethodID(cls, "getFieldGeneralOrder", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getGeneralOrder_a28686a10ca4c52e] = env->getStaticMethodID(cls, "getGeneralOrder", "(I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_08006f6c9018216e] = env->getStaticMethodID(cls, "getQuadratic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_c81f7e343d53e75f] = env->getStaticMethodID(cls, "getQuadratic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getQuintic_08006f6c9018216e] = env->getStaticMethodID(cls, "getQuintic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuintic_c81f7e343d53e75f] = env->getStaticMethodID(cls, "getQuintic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SmoothStepFactory::checkBetweenZeroAndOneIncluded(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkBetweenZeroAndOneIncluded_8ba9fe7a847cecad], a0);
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getClamp()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_08006f6c9018216e]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getClamp(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_c81f7e343d53e75f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getCubic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_08006f6c9018216e]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getCubic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_c81f7e343d53e75f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getFieldGeneralOrder(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getFieldGeneralOrder_be398f450d2cffc9], a0.this$, a1));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getGeneralOrder(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getGeneralOrder_a28686a10ca4c52e], a0));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuadratic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_08006f6c9018216e]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuadratic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_c81f7e343d53e75f], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuintic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_08006f6c9018216e]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuintic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_c81f7e343d53e75f], a0.this$));
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
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProvider::class$ = NULL;
      jmethodID *TransformProvider::mids$ = NULL;
      bool TransformProvider::live$ = false;

      jclass TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::StaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      ::org::orekit::frames::Transform TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
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
      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args);
      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args);

      static PyMethodDef t_TransformProvider__methods_[] = {
        DECLARE_METHOD(t_TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProvider)[] = {
        { Py_tp_methods, t_TransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProvider)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TransformProvider, t_TransformProvider, TransformProvider);

      void t_TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProvider), &PY_TYPE_DEF(TransformProvider), module, "TransformProvider", 0);
      }

      void t_TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "class_", make_descriptor(TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "wrapfn_", make_descriptor(t_TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProvider::initializeClass, 1)))
          return NULL;
        return t_TransformProvider::wrap_Object(TransformProvider(((t_TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999Max::class$ = NULL;
              jmethodID *Alfriend1999Max::mids$ = NULL;
              bool Alfriend1999Max::live$ = false;

              jclass Alfriend1999Max::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_computeValue_f804f816b79164cb] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_8a93710b1b1536a6] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999Max::Alfriend1999Max() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble Alfriend1999Max::computeValue(jdouble a0, jdouble a1, jdouble a2) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeValue_f804f816b79164cb], a0, a1, a2);
              }

              ::org::hipparchus::CalculusFieldElement Alfriend1999Max::computeValue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeValue_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999Max::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
              }

              jboolean Alfriend1999Max::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105]);
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
              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data);
              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data);
              static PyGetSetDef t_Alfriend1999Max__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999Max, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999Max, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999Max__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999Max, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, computeValue, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999Max)[] = {
                { Py_tp_methods, t_Alfriend1999Max__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999Max_init_ },
                { Py_tp_getset, t_Alfriend1999Max__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999Max)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999Max, t_Alfriend1999Max, Alfriend1999Max);

              void t_Alfriend1999Max::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999Max), &PY_TYPE_DEF(Alfriend1999Max), module, "Alfriend1999Max", 0);
              }

              void t_Alfriend1999Max::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "class_", make_descriptor(Alfriend1999Max::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "wrapfn_", make_descriptor(t_Alfriend1999Max::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999Max::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999Max::wrap_Object(Alfriend1999Max(((t_Alfriend1999Max *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999Max::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999Max object((jobject) NULL);

                INT_CALL(object = Alfriend1999Max());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args)
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
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
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
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeValue", args);
                return NULL;
              }

              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CircularOrbit::class$ = NULL;
      jmethodID *CircularOrbit::mids$ = NULL;
      bool CircularOrbit::live$ = false;

      jclass CircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_18124f64d7fce8bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_bc81b5d0c2baa99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5fc5d1b0e40c2d5b] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_3058e51cfd00310e] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_f804f816b79164cb] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_f804f816b79164cb] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAlpha_68608c097e66b295] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaDot_68608c097e66b295] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaE_b74f83833fdad017] = env->getMethodID(cls, "getAlphaE", "()D");
          mids$[mid_getAlphaEDot_b74f83833fdad017] = env->getMethodID(cls, "getAlphaEDot", "()D");
          mids$[mid_getAlphaM_b74f83833fdad017] = env->getMethodID(cls, "getAlphaM", "()D");
          mids$[mid_getAlphaMDot_b74f83833fdad017] = env->getMethodID(cls, "getAlphaMDot", "()D");
          mids$[mid_getAlphaV_b74f83833fdad017] = env->getMethodID(cls, "getAlphaV", "()D");
          mids$[mid_getAlphaVDot_b74f83833fdad017] = env->getMethodID(cls, "getAlphaVDot", "()D");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_b74f83833fdad017] = env->getMethodID(cls, "getCircularEx", "()D");
          mids$[mid_getCircularExDot_b74f83833fdad017] = env->getMethodID(cls, "getCircularExDot", "()D");
          mids$[mid_getCircularEy_b74f83833fdad017] = env->getMethodID(cls, "getCircularEy", "()D");
          mids$[mid_getCircularEyDot_b74f83833fdad017] = env->getMethodID(cls, "getCircularEyDot", "()D");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_b74f83833fdad017] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_f804f816b79164cb] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_ff9c43e14d9834f4] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_shiftedBy_107ee8150ce097fa] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_f804f816b79164cb] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CircularOrbit::CircularOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_18124f64d7fce8bd, a0.this$, a1.this$, a2)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_bc81b5d0c2baa99c, a0.this$, a1.this$, a2.this$, a3)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5fc5d1b0e40c2d5b, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_3058e51cfd00310e, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void CircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_2a5649bc1625306e], a0.this$, a1, a2.this$);
      }

      jdouble CircularOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_f804f816b79164cb], a0, a1, a2);
      }

      jdouble CircularOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_f804f816b79164cb], a0, a1, a2);
      }

      jdouble CircularOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlpha_68608c097e66b295], a0.this$);
      }

      jdouble CircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaDot_68608c097e66b295], a0.this$);
      }

      jdouble CircularOrbit::getAlphaE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaE_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlphaEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaEDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlphaM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaM_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlphaMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaMDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlphaV() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaV_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getAlphaVDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaVDot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::PositionAngleType CircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      jdouble CircularOrbit::getCircularEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEx_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getCircularExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularExDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getCircularEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEy_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getCircularEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEyDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_b74f83833fdad017]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::OrbitType CircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean CircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      jdouble CircularOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_f804f816b79164cb], a0, a1, a2);
      }

      CircularOrbit CircularOrbit::removeRates() const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_ff9c43e14d9834f4]));
      }

      CircularOrbit CircularOrbit::shiftedBy(jdouble a0) const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_107ee8150ce097fa], a0));
      }

      ::java::lang::String CircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      jdouble CircularOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_f804f816b79164cb], a0, a1, a2);
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
      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data);
      static PyGetSetDef t_CircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CircularOrbit, a),
        DECLARE_GET_FIELD(t_CircularOrbit, aDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_CircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_CircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, e),
        DECLARE_GET_FIELD(t_CircularOrbit, eDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hx),
        DECLARE_GET_FIELD(t_CircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hy),
        DECLARE_GET_FIELD(t_CircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, i),
        DECLARE_GET_FIELD(t_CircularOrbit, iDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lE),
        DECLARE_GET_FIELD(t_CircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lM),
        DECLARE_GET_FIELD(t_CircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lv),
        DECLARE_GET_FIELD(t_CircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_CircularOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CircularOrbit__methods_[] = {
        DECLARE_METHOD(t_CircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CircularOrbit)[] = {
        { Py_tp_methods, t_CircularOrbit__methods_ },
        { Py_tp_init, (void *) t_CircularOrbit_init_ },
        { Py_tp_getset, t_CircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CircularOrbit, t_CircularOrbit, CircularOrbit);

      void t_CircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CircularOrbit), &PY_TYPE_DEF(CircularOrbit), module, "CircularOrbit", 0);
      }

      void t_CircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "class_", make_descriptor(CircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "wrapfn_", make_descriptor(t_CircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CircularOrbit::initializeClass, 1)))
          return NULL;
        return t_CircularOrbit::wrap_Object(CircularOrbit(((t_CircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CircularOrbit(a0));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args)
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

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaV());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self)
      {
        CircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_CircularOrbit::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble a0;
        CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaV());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data)
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
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *ForceModel::class$ = NULL;
      jmethodID *ForceModel::mids$ = NULL;
      bool ForceModel::live$ = false;

      jclass ForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/ForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_addContribution_6aa2b69cacacea60] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_ab5e59960ebc27c2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
          mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
          mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_6aa2b69cacacea60], a0.this$, a1.this$);
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_ab5e59960ebc27c2], a0.this$, a1.this$);
      }

      jboolean ForceModel::dependsOnPositionOnly() const
      {
        return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
      }

      ::java::util::stream::Stream ForceModel::getEventDetectors() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
      }

      ::java::util::stream::Stream ForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
      }

      void ForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
      }

      void ForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self);
      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self);
      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg);
      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data);
      static PyGetSetDef t_ForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_ForceModel, eventDetectors),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForceModel__methods_[] = {
        DECLARE_METHOD(t_ForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, acceleration, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, addContribution, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, dependsOnPositionOnly, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getFieldEventDetectors, METH_O),
        DECLARE_METHOD(t_ForceModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForceModel)[] = {
        { Py_tp_methods, t_ForceModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForceModel)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
        NULL
      };

      DEFINE_TYPE(ForceModel, t_ForceModel, ForceModel);

      void t_ForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(ForceModel), &PY_TYPE_DEF(ForceModel), module, "ForceModel", 0);
      }

      void t_ForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "class_", make_descriptor(ForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "wrapfn_", make_descriptor(t_ForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForceModel::initializeClass, 1)))
          return NULL;
        return t_ForceModel::wrap_Object(ForceModel(((t_ForceModel *) arg)->object.this$));
      }
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args)
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

      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addContribution", args);
        return NULL;
      }

      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.dependsOnPositionOnly());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
        return NULL;
      }

      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
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
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data)
      {
        ::java::util::stream::Stream value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractNavigationMessage::class$ = NULL;
            jmethodID *AbstractNavigationMessage::mids$ = NULL;
            bool AbstractNavigationMessage::live$ = false;

            jclass AbstractNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_b74f83833fdad017] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_b74f83833fdad017] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_b74f83833fdad017] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_b74f83833fdad017] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_b74f83833fdad017] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_b74f83833fdad017] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_b74f83833fdad017] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getDeltaN_b74f83833fdad017] = env->getMethodID(cls, "getDeltaN", "()D");
                mids$[mid_getEpochToc_c325492395d89b24] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getSqrtA_b74f83833fdad017] = env->getMethodID(cls, "getSqrtA", "()D");
                mids$[mid_getTransmissionTime_b74f83833fdad017] = env->getMethodID(cls, "getTransmissionTime", "()D");
                mids$[mid_setAf2_8ba9fe7a847cecad] = env->getMethodID(cls, "setAf2", "(D)V");
                mids$[mid_setCic_8ba9fe7a847cecad] = env->getMethodID(cls, "setCic", "(D)V");
                mids$[mid_setCis_8ba9fe7a847cecad] = env->getMethodID(cls, "setCis", "(D)V");
                mids$[mid_setCrc_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrc", "(D)V");
                mids$[mid_setCrs_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrs", "(D)V");
                mids$[mid_setCuc_8ba9fe7a847cecad] = env->getMethodID(cls, "setCuc", "(D)V");
                mids$[mid_setCus_8ba9fe7a847cecad] = env->getMethodID(cls, "setCus", "(D)V");
                mids$[mid_setDeltaN_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaN", "(D)V");
                mids$[mid_setEpochToc_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setIDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setIDot", "(D)V");
                mids$[mid_setSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setTransmissionTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTransmissionTime", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractNavigationMessage::AbstractNavigationMessage(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

            jdouble AbstractNavigationMessage::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getDeltaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate AbstractNavigationMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_c325492395d89b24]));
            }

            jdouble AbstractNavigationMessage::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getSqrtA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSqrtA_b74f83833fdad017]);
            }

            jdouble AbstractNavigationMessage::getTransmissionTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_b74f83833fdad017]);
            }

            void AbstractNavigationMessage::setAf2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf2_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCic(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCic_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCis(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCis_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCrc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrc_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCrs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrs_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCuc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCuc_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setCus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCus_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setDeltaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_02135a6ef25adb4b], a0.this$);
            }

            void AbstractNavigationMessage::setIDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIDot_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_8ba9fe7a847cecad], a0);
            }

            void AbstractNavigationMessage::setTransmissionTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmissionTime_8ba9fe7a847cecad], a0);
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
            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data);
            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, af2),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cic),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cis),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crs),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cuc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cus),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, deltaN),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, iDot),
              DECLARE_GET_FIELD(t_AbstractNavigationMessage, meanMotion),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, sqrtA),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, transmissionTime),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getDeltaN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getSqrtA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getTransmissionTime, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, setAf2, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCic, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCis, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrs, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCuc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCus, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setDeltaN, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setIDot, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setSqrtA, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setTransmissionTime, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractNavigationMessage)[] = {
              { Py_tp_methods, t_AbstractNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractNavigationMessage_init_ },
              { Py_tp_getset, t_AbstractNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractNavigationMessage, t_AbstractNavigationMessage, AbstractNavigationMessage);

            void t_AbstractNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractNavigationMessage), &PY_TYPE_DEF(AbstractNavigationMessage), module, "AbstractNavigationMessage", 0);
            }

            void t_AbstractNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "class_", make_descriptor(AbstractNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "wrapfn_", make_descriptor(t_AbstractNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractNavigationMessage::wrap_Object(AbstractNavigationMessage(((t_AbstractNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractNavigationMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSqrtA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf2", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCic(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCic", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCis(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCis", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrs", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCuc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCuc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCus", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTransmissionTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af2", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCic(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cic", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCis(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cis", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crs", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCuc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cuc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cus", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iDot", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSqrtA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTransmissionTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
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
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *NonNegativeConstraint::class$ = NULL;
        jmethodID *NonNegativeConstraint::mids$ = NULL;
        bool NonNegativeConstraint::live$ = false;

        jclass NonNegativeConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/NonNegativeConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_isRestrictedToNonNegative_9ab94ac1dc23b105] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NonNegativeConstraint::NonNegativeConstraint(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

        jboolean NonNegativeConstraint::isRestrictedToNonNegative() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRestrictedToNonNegative_9ab94ac1dc23b105]);
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
      namespace linear {
        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self);
        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data);
        static PyGetSetDef t_NonNegativeConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_NonNegativeConstraint, restrictedToNonNegative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NonNegativeConstraint__methods_[] = {
          DECLARE_METHOD(t_NonNegativeConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, isRestrictedToNonNegative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NonNegativeConstraint)[] = {
          { Py_tp_methods, t_NonNegativeConstraint__methods_ },
          { Py_tp_init, (void *) t_NonNegativeConstraint_init_ },
          { Py_tp_getset, t_NonNegativeConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NonNegativeConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NonNegativeConstraint, t_NonNegativeConstraint, NonNegativeConstraint);

        void t_NonNegativeConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(NonNegativeConstraint), &PY_TYPE_DEF(NonNegativeConstraint), module, "NonNegativeConstraint", 0);
        }

        void t_NonNegativeConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "class_", make_descriptor(NonNegativeConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "wrapfn_", make_descriptor(t_NonNegativeConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NonNegativeConstraint::initializeClass, 1)))
            return NULL;
          return t_NonNegativeConstraint::wrap_Object(NonNegativeConstraint(((t_NonNegativeConstraint *) arg)->object.this$));
        }
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NonNegativeConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds)
        {
          jboolean a0;
          NonNegativeConstraint object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = NonNegativeConstraint(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDSTDTC_fd347811007a6ba3] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_fd347811007a6ba3] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_fd347811007a6ba3] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_fd347811007a6ba3] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_fd347811007a6ba3] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_fd347811007a6ba3] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_fd347811007a6ba3] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_fd347811007a6ba3] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_fd347811007a6ba3] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonJB2008InputParameters::PythonJB2008InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonJB2008InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonJB2008InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonJB2008InputParameters::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
