#ifndef org_orekit_estimation_sequential_UnscentedKalmanModel_H
#define org_orekit_estimation_sequential_UnscentedKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace filtering {
      namespace kalman {
        namespace unscented {
          class UnscentedProcess;
          class UnscentedEvolution;
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
        class MeasurementDecorator;
      }
    }
    namespace propagation {
      class Propagator;
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
            mid_finalizeEstimation_7cf22bbe05cd26dc,
            mid_getCorrectedMeasurement_164e77faf6b1d416,
            mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164,
            mid_getCurrentDate_aaa854c403487cf3,
            mid_getCurrentMeasurementNumber_f2f64475e4580546,
            mid_getEstimate_3d891496bfc9091e,
            mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0,
            mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagationParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagators_bba03978f79693ea,
            mid_getEvolution_09fa99e5e4cb69dd,
            mid_getInnovation_13f09da4e5cee032,
            mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalEstimatedState_6d9adf1d5b463928,
            mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalKalmanGain_7116bbecdd8ceb21,
            mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21,
            mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21,
            mid_getPredictedMeasurement_164e77faf6b1d416,
            mid_getPredictedMeasurements_f5983387fce0dad8,
            mid_getPredictedSpacecraftStates_a4eb258dd7a1e164,
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
