#ifndef org_orekit_estimation_sequential_KalmanEstimatorUtil_H
#define org_orekit_estimation_sequential_KalmanEstimatorUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace sequential {
        class MeasurementDecorator;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class KalmanEstimatorUtil : public ::java::lang::Object {
         public:
          enum {
            mid_applyDynamicOutlierFilter_593d7b7c82130187,
            mid_checkDimension_088ed742c00be596,
            mid_computeInnovationVector_cdc5772ae58fa459,
            mid_computeInnovationVector_7aba347d6196588d,
            mid_decorate_4255159303ff08a8,
            mid_decorateUnscented_4255159303ff08a8,
            mid_filterRelevant_61282c72766a2512,
            mid_normalizeCovarianceMatrix_7039dc1e7ff6a443,
            mid_unnormalizeCovarianceMatrix_7039dc1e7ff6a443,
            mid_unnormalizeInnovationCovarianceMatrix_7039dc1e7ff6a443,
            mid_unnormalizeKalmanGainMatrix_9a3798f3ffd3b445,
            mid_unnormalizeMeasurementJacobian_9a3798f3ffd3b445,
            mid_unnormalizeStateTransitionMatrix_7039dc1e7ff6a443,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanEstimatorUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanEstimatorUtil(const KalmanEstimatorUtil& obj) : ::java::lang::Object(obj) {}

          static void applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement &, const ::org::hipparchus::linear::RealMatrix &);
          static void checkDimension(jint, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &);
          static ::org::hipparchus::linear::RealVector computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement &);
          static ::org::hipparchus::linear::RealVector computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement &, const JArray< jdouble > &);
          static ::org::orekit::estimation::sequential::MeasurementDecorator decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::orekit::time::AbsoluteDate &);
          static ::org::orekit::estimation::sequential::MeasurementDecorator decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::orekit::time::AbsoluteDate &);
          static JArray< ::org::orekit::propagation::SpacecraftState > filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const JArray< ::org::orekit::propagation::SpacecraftState > &);
          static ::org::hipparchus::linear::RealMatrix normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &);
          static ::org::hipparchus::linear::RealMatrix unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &);
          static ::org::hipparchus::linear::RealMatrix unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &);
          static ::org::hipparchus::linear::RealMatrix unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::hipparchus::linear::RealMatrix unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::hipparchus::linear::RealMatrix unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        extern PyType_Def PY_TYPE_DEF(KalmanEstimatorUtil);
        extern PyTypeObject *PY_TYPE(KalmanEstimatorUtil);

        class t_KalmanEstimatorUtil {
        public:
          PyObject_HEAD
          KalmanEstimatorUtil object;
          static PyObject *wrap_Object(const KalmanEstimatorUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
