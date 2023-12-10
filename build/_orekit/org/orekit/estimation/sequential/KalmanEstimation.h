#ifndef org_orekit_estimation_sequential_KalmanEstimation_H
#define org_orekit_estimation_sequential_KalmanEstimation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
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

        class KalmanEstimation : public ::java::lang::Object {
         public:
          enum {
            mid_getCorrectedMeasurement_5a90ceef60f482f1,
            mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31,
            mid_getCurrentDate_85703d13e302437e,
            mid_getCurrentMeasurementNumber_570ce0828f81a2c1,
            mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da,
            mid_getEstimatedOrbitalParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagationParameters_bd51074bfd9d41da,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalKalmanGain_688b496048ff947b,
            mid_getPhysicalMeasurementJacobian_688b496048ff947b,
            mid_getPhysicalStateTransitionMatrix_688b496048ff947b,
            mid_getPredictedMeasurement_5a90ceef60f482f1,
            mid_getPredictedSpacecraftStates_fa9cea0faefb9a31,
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
