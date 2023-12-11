#ifndef org_orekit_estimation_sequential_KalmanEstimatorUtil_H
#define org_orekit_estimation_sequential_KalmanEstimatorUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace sequential {
        class MeasurementDecorator;
      }
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_applyDynamicOutlierFilter_9cc024d2d85b53a0,
            mid_checkDimension_40ad4cd5e1594ee9,
            mid_computeInnovationVector_9a65bd68ddc90580,
            mid_computeInnovationVector_efa365481a703aad,
            mid_decorate_d5883b878ac967fe,
            mid_decorateUnscented_d5883b878ac967fe,
            mid_filterRelevant_e38c466cbe3b97ac,
            mid_normalizeCovarianceMatrix_6c8b771e6146cbec,
            mid_unnormalizeCovarianceMatrix_6c8b771e6146cbec,
            mid_unnormalizeInnovationCovarianceMatrix_6c8b771e6146cbec,
            mid_unnormalizeKalmanGainMatrix_55f32a8dee1bf581,
            mid_unnormalizeMeasurementJacobian_55f32a8dee1bf581,
            mid_unnormalizeStateTransitionMatrix_6c8b771e6146cbec,
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
