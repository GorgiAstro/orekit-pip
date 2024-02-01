#ifndef org_orekit_estimation_sequential_KalmanEstimation_H
#define org_orekit_estimation_sequential_KalmanEstimation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
      }
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

        class KalmanEstimation : public ::java::lang::Object {
         public:
          enum {
            mid_getCorrectedMeasurement_b4478e72a44f53a7,
            mid_getCorrectedSpacecraftStates_598bcd058df23e79,
            mid_getCurrentDate_80e11148db499dda,
            mid_getCurrentMeasurementNumber_d6ab429752e7c267,
            mid_getEstimatedMeasurementsParameters_7c5a416c83e442be,
            mid_getEstimatedOrbitalParameters_7c5a416c83e442be,
            mid_getEstimatedPropagationParameters_7c5a416c83e442be,
            mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf,
            mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalKalmanGain_b2eebabce70526d8,
            mid_getPhysicalMeasurementJacobian_b2eebabce70526d8,
            mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8,
            mid_getPredictedMeasurement_b4478e72a44f53a7,
            mid_getPredictedSpacecraftStates_598bcd058df23e79,
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
