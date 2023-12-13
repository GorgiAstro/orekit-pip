#ifndef org_orekit_estimation_sequential_UnscentedKalmanModel_H
#define org_orekit_estimation_sequential_UnscentedKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
        class MeasurementDecorator;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace propagation {
      class Propagator;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_finalizeEstimation_aef7db4b13ced902,
            mid_getCorrectedMeasurement_9927c8980e79c922,
            mid_getCorrectedSpacecraftStates_3807ff088e7ce821,
            mid_getCurrentDate_c325492395d89b24,
            mid_getCurrentMeasurementNumber_55546ef6a647f39b,
            mid_getEstimate_e37ac5ac73cc5311,
            mid_getEstimatedMeasurementsParameters_cfb822366e8ab425,
            mid_getEstimatedOrbitalParameters_cfb822366e8ab425,
            mid_getEstimatedPropagationParameters_cfb822366e8ab425,
            mid_getEstimatedPropagators_17493e4ff0ba8a7f,
            mid_getEvolution_1545440d4dab3e97,
            mid_getInnovation_c0bf9a4322bf8619,
            mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalEstimatedState_3a10cc75bd070d84,
            mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalKalmanGain_f77d745f2128c391,
            mid_getPhysicalMeasurementJacobian_f77d745f2128c391,
            mid_getPhysicalStateTransitionMatrix_f77d745f2128c391,
            mid_getPredictedMeasurement_9927c8980e79c922,
            mid_getPredictedMeasurements_b0b6792f6308ef30,
            mid_getPredictedSpacecraftStates_3807ff088e7ce821,
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
