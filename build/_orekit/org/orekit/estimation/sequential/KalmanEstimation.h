#ifndef org_orekit_estimation_sequential_KalmanEstimation_H
#define org_orekit_estimation_sequential_KalmanEstimation_H

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
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class AbsoluteDate;
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

        class KalmanEstimation : public ::java::lang::Object {
         public:
          enum {
            mid_getCorrectedMeasurement_164e77faf6b1d416,
            mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164,
            mid_getCurrentDate_aaa854c403487cf3,
            mid_getCurrentMeasurementNumber_f2f64475e4580546,
            mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0,
            mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagationParameters_eb9e6df280c6daa0,
            mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalEstimatedState_6d9adf1d5b463928,
            mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalKalmanGain_7116bbecdd8ceb21,
            mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21,
            mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21,
            mid_getPredictedMeasurement_164e77faf6b1d416,
            mid_getPredictedSpacecraftStates_a4eb258dd7a1e164,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanEstimation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanEstimation(const KalmanEstimation& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::estimation::measurements::EstimatedMeasurement getCorrectedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getCorrectedSpacecraftStates() const;
          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedOrbitalParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedPropagationParameters() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getPredictedSpacecraftStates() const;
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
        extern PyType_Def PY_TYPE_DEF(KalmanEstimation);
        extern PyTypeObject *PY_TYPE(KalmanEstimation);

        class t_KalmanEstimation {
        public:
          PyObject_HEAD
          KalmanEstimation object;
          static PyObject *wrap_Object(const KalmanEstimation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif