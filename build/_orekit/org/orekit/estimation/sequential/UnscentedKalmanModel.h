#ifndef org_orekit_estimation_sequential_UnscentedKalmanModel_H
#define org_orekit_estimation_sequential_UnscentedKalmanModel_H

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
        class KalmanEstimation;
      }
    }
    namespace propagation {
      class SpacecraftState;
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {
          class UnscentedProcess;
          class UnscentedEvolution;
        }
        class ProcessEstimate;
      }
    }
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

        class UnscentedKalmanModel : public ::java::lang::Object {
         public:
          enum {
            mid_finalizeEstimation_da0919b7ae9816a3,
            mid_getCorrectedMeasurement_5a90ceef60f482f1,
            mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31,
            mid_getCurrentDate_85703d13e302437e,
            mid_getCurrentMeasurementNumber_570ce0828f81a2c1,
            mid_getEstimate_c93ddc26f3b3eef4,
            mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da,
            mid_getEstimatedOrbitalParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagationParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagators_4570675aa9d951bc,
            mid_getEvolution_10ef30e3c9abcb5f,
            mid_getInnovation_c7c45dcf7ef024eb,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalKalmanGain_688b496048ff947b,
            mid_getPhysicalMeasurementJacobian_688b496048ff947b,
            mid_getPhysicalStateTransitionMatrix_688b496048ff947b,
            mid_getPredictedMeasurement_5a90ceef60f482f1,
            mid_getPredictedMeasurements_bfe87416cc1883be,
            mid_getPredictedSpacecraftStates_fa9cea0faefb9a31,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnscentedKalmanModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnscentedKalmanModel(const UnscentedKalmanModel& obj) : ::java::lang::Object(obj) {}

          void finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getCorrectedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getCorrectedSpacecraftStates() const;
          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::hipparchus::filtering::kalman::ProcessEstimate getEstimate() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedOrbitalParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedPropagationParameters() const;
          JArray< ::org::orekit::propagation::Propagator > getEstimatedPropagators() const;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution getEvolution(jdouble, const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
          ::org::hipparchus::linear::RealVector getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::hipparchus::linear::RealVector > getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnscentedKalmanModel);
        extern PyTypeObject *PY_TYPE(UnscentedKalmanModel);

        class t_UnscentedKalmanModel {
        public:
          PyObject_HEAD
          UnscentedKalmanModel object;
          static PyObject *wrap_Object(const UnscentedKalmanModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
