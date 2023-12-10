#ifndef org_orekit_estimation_sequential_KalmanEstimatorUtil_H
#define org_orekit_estimation_sequential_KalmanEstimatorUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
  }
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
            mid_applyDynamicOutlierFilter_81b67a7a1cc01557,
            mid_checkDimension_89102031e9d66e7a,
            mid_computeInnovationVector_7624e7aff53fd936,
            mid_computeInnovationVector_6a809c7d1ea2bd94,
            mid_decorate_adb96dd80cef08b8,
            mid_decorateUnscented_adb96dd80cef08b8,
            mid_filterRelevant_0536e83d158e5a50,
            mid_normalizeCovarianceMatrix_2654c88e25da7e19,
            mid_unnormalizeCovarianceMatrix_2654c88e25da7e19,
            mid_unnormalizeInnovationCovarianceMatrix_2654c88e25da7e19,
            mid_unnormalizeKalmanGainMatrix_a745d02df7ee9dde,
            mid_unnormalizeMeasurementJacobian_a745d02df7ee9dde,
            mid_unnormalizeStateTransitionMatrix_2654c88e25da7e19,
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
