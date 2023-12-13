#ifndef org_orekit_estimation_sequential_KalmanEstimatorUtil_H
#define org_orekit_estimation_sequential_KalmanEstimatorUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
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
  }
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
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
            mid_applyDynamicOutlierFilter_b27bf6983be17cd5,
            mid_checkDimension_12d71379b192fd42,
            mid_computeInnovationVector_ec65c5758c341ab5,
            mid_computeInnovationVector_f9ff8f3570f5b024,
            mid_decorate_77e5ff2a058cebc7,
            mid_decorateUnscented_77e5ff2a058cebc7,
            mid_filterRelevant_6c3b3d666dfbaac2,
            mid_normalizeCovarianceMatrix_7639737fe0da56a8,
            mid_unnormalizeCovarianceMatrix_7639737fe0da56a8,
            mid_unnormalizeInnovationCovarianceMatrix_7639737fe0da56a8,
            mid_unnormalizeKalmanGainMatrix_5e632611367b44d1,
            mid_unnormalizeMeasurementJacobian_5e632611367b44d1,
            mid_unnormalizeStateTransitionMatrix_7639737fe0da56a8,
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
