#ifndef org_orekit_estimation_sequential_KalmanModel_H
#define org_orekit_estimation_sequential_KalmanModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {
          class NonLinearProcess;
          class NonLinearEvolution;
        }
        class ProcessEstimate;
      }
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
        class MeasurementDecorator;
        class CovarianceMatrixProvider;
      }
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
      class SpacecraftState;
    }
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
            mid_init$_e11d08be4ae4cfc9,
            mid_finalizeEstimation_32b51ab222e72e59,
            mid_getBuilders_d751c1a57012b438,
            mid_getCorrectedMeasurement_b4478e72a44f53a7,
            mid_getCorrectedSpacecraftStates_598bcd058df23e79,
            mid_getCurrentDate_80e11148db499dda,
            mid_getCurrentMeasurementNumber_d6ab429752e7c267,
            mid_getEstimate_270f067ba2ecffc6,
            mid_getEstimatedMeasurementsParameters_7c5a416c83e442be,
            mid_getEstimatedOrbitalParameters_7c5a416c83e442be,
            mid_getEstimatedPropagationParameters_7c5a416c83e442be,
            mid_getEstimatedPropagators_af093bf37101b796,
            mid_getEvolution_aa993dea45064d8a,
            mid_getInnovation_2ceaf1d4d86d5f30,
            mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf,
            mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalKalmanGain_b2eebabce70526d8,
            mid_getPhysicalMeasurementJacobian_b2eebabce70526d8,
            mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8,
            mid_getPredictedMeasurement_b4478e72a44f53a7,
            mid_getPredictedSpacecraftStates_598bcd058df23e79,
            mid_getReferenceTrajectories_af093bf37101b796,
            mid_setReferenceTrajectories_3691a77cbfa1617b,
            mid_updateReferenceTrajectories_3691a77cbfa1617b,
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
