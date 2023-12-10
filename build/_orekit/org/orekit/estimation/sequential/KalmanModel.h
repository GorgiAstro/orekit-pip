#ifndef org_orekit_estimation_sequential_KalmanModel_H
#define org_orekit_estimation_sequential_KalmanModel_H

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
        class CovarianceMatrixProvider;
      }
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
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
        namespace extended {
          class NonLinearEvolution;
          class NonLinearProcess;
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
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class KalmanModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_61e57eae98c1c0d2,
            mid_finalizeEstimation_da0919b7ae9816a3,
            mid_getBuilders_2afa36052df4765d,
            mid_getCorrectedMeasurement_5a90ceef60f482f1,
            mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31,
            mid_getCurrentDate_85703d13e302437e,
            mid_getCurrentMeasurementNumber_570ce0828f81a2c1,
            mid_getEstimate_c93ddc26f3b3eef4,
            mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da,
            mid_getEstimatedOrbitalParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagationParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagators_4570675aa9d951bc,
            mid_getEvolution_8baf140085ffa2b7,
            mid_getInnovation_c1adcb03cc15012a,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalKalmanGain_688b496048ff947b,
            mid_getPhysicalMeasurementJacobian_688b496048ff947b,
            mid_getPhysicalStateTransitionMatrix_688b496048ff947b,
            mid_getPredictedMeasurement_5a90ceef60f482f1,
            mid_getPredictedSpacecraftStates_fa9cea0faefb9a31,
            mid_getReferenceTrajectories_4570675aa9d951bc,
            mid_setReferenceTrajectories_7d74b10f70058dc6,
            mid_updateReferenceTrajectories_7d74b10f70058dc6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanModel(const KalmanModel& obj) : ::java::lang::Object(obj) {}

          KalmanModel(const ::java::util::List &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &);

          void finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &) const;
          ::java::util::List getBuilders() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getCorrectedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getCorrectedSpacecraftStates() const;
          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::hipparchus::filtering::kalman::ProcessEstimate getEstimate() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedOrbitalParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedPropagationParameters() const;
          JArray< ::org::orekit::propagation::Propagator > getEstimatedPropagators() const;
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution getEvolution(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
          ::org::hipparchus::linear::RealVector getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator &, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution &, const ::org::hipparchus::linear::RealMatrix &) const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getPredictedSpacecraftStates() const;
          JArray< ::org::orekit::propagation::Propagator > getReferenceTrajectories() const;
          void setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > &) const;
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
        extern PyType_Def PY_TYPE_DEF(KalmanModel);
        extern PyTypeObject *PY_TYPE(KalmanModel);

        class t_KalmanModel {
        public:
          PyObject_HEAD
          KalmanModel object;
          static PyObject *wrap_Object(const KalmanModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
