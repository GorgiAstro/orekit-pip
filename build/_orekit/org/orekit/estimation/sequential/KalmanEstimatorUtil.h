#ifndef org_orekit_estimation_sequential_KalmanEstimatorUtil_H
#define org_orekit_estimation_sequential_KalmanEstimatorUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace sequential {
        class MeasurementDecorator;
      }
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      class SpacecraftState;
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
            mid_applyDynamicOutlierFilter_d09e08c6418a1258,
            mid_checkDimension_cbfea3e6e8388456,
            mid_computeInnovationVector_7c6de54c62f403d7,
            mid_computeInnovationVector_e42d51cf83e89d41,
            mid_decorate_d5c17893ca0d456d,
            mid_decorateUnscented_d5c17893ca0d456d,
            mid_filterRelevant_09c715f8a82f1a3a,
            mid_normalizeCovarianceMatrix_d05ff823d5dfec7c,
            mid_unnormalizeCovarianceMatrix_d05ff823d5dfec7c,
            mid_unnormalizeInnovationCovarianceMatrix_d05ff823d5dfec7c,
            mid_unnormalizeKalmanGainMatrix_aa0dce4c57339931,
            mid_unnormalizeMeasurementJacobian_aa0dce4c57339931,
            mid_unnormalizeStateTransitionMatrix_d05ff823d5dfec7c,
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
