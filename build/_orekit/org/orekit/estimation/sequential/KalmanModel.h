#ifndef org_orekit_estimation_sequential_KalmanModel_H
#define org_orekit_estimation_sequential_KalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace filtering {
      namespace kalman {
        namespace extended {
          class NonLinearEvolution;
          class NonLinearProcess;
        }
        class ProcessEstimate;
      }
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace sequential {
        class KalmanEstimation;
        class CovarianceMatrixProvider;
        class MeasurementDecorator;
      }
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_4195f77bec580407,
            mid_finalizeEstimation_7cf22bbe05cd26dc,
            mid_getBuilders_a6156df500549a58,
            mid_getCorrectedMeasurement_164e77faf6b1d416,
            mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164,
            mid_getCurrentDate_aaa854c403487cf3,
            mid_getCurrentMeasurementNumber_f2f64475e4580546,
            mid_getEstimate_3d891496bfc9091e,
            mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0,
            mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagationParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagators_bba03978f79693ea,
            mid_getEvolution_b091ae59b81dced9,
            mid_getInnovation_98db7a9514783d86,
            mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalEstimatedState_6d9adf1d5b463928,
            mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalKalmanGain_7116bbecdd8ceb21,
            mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21,
            mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21,
            mid_getPredictedMeasurement_164e77faf6b1d416,
            mid_getPredictedSpacecraftStates_a4eb258dd7a1e164,
            mid_getReferenceTrajectories_bba03978f79693ea,
            mid_setReferenceTrajectories_632446a46a48e65e,
            mid_updateReferenceTrajectories_632446a46a48e65e,
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
