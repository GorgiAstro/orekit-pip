#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanModel_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
      }
      class SpacecraftState;
    }
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalProcess;
        class KalmanEstimation;
        class KalmanObserver;
        class MeasurementDecorator;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class ProcessEstimate;
        namespace extended {
          class ExtendedKalmanFilter;
          class NonLinearProcess;
          class NonLinearEvolution;
        }
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class SemiAnalyticalKalmanModel : public ::java::lang::Object {
         public:
          enum {
            mid_finalizeEstimation_aef7db4b13ced902,
            mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2,
            mid_getCorrectedMeasurement_9927c8980e79c922,
            mid_getCorrectedSpacecraftStates_3807ff088e7ce821,
            mid_getCurrentDate_c325492395d89b24,
            mid_getCurrentMeasurementNumber_55546ef6a647f39b,
            mid_getEstimate_e37ac5ac73cc5311,
            mid_getEstimatedMeasurementsParameters_cfb822366e8ab425,
            mid_getEstimatedOrbitalParameters_cfb822366e8ab425,
            mid_getEstimatedPropagationParameters_cfb822366e8ab425,
            mid_getEstimatedPropagator_66c9e2c4a4a85214,
            mid_getEvolution_bcc61f692c4eea8a,
            mid_getInnovation_dd883423c2f99f26,
            mid_getObserver_f666564f549c2e32,
            mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalEstimatedState_3a10cc75bd070d84,
            mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalKalmanGain_f77d745f2128c391,
            mid_getPhysicalMeasurementJacobian_f77d745f2128c391,
            mid_getPhysicalStateTransitionMatrix_f77d745f2128c391,
            mid_getPredictedMeasurement_9927c8980e79c922,
            mid_getPredictedSpacecraftStates_3807ff088e7ce821,
            mid_initializeShortPeriodicTerms_280c3390961e0a50,
            mid_processMeasurements_c868912a9bd4d407,
            mid_setObserver_578d9ba5b3b8b483,
            mid_updateNominalSpacecraftState_280c3390961e0a50,
            mid_updateReferenceTrajectory_7adcca4465dccf23,
            mid_updateShortPeriods_280c3390961e0a50,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalKalmanModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalKalmanModel(const SemiAnalyticalKalmanModel& obj) : ::java::lang::Object(obj) {}

          void finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &) const;
          void finalizeOperationsObservationGrid() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getCorrectedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getCorrectedSpacecraftStates() const;
          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::hipparchus::filtering::kalman::ProcessEstimate getEstimate() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedOrbitalParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedPropagationParameters() const;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator getEstimatedPropagator() const;
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution getEvolution(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
          ::org::hipparchus::linear::RealVector getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator &, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution &, const ::org::hipparchus::linear::RealMatrix &) const;
          ::org::orekit::estimation::sequential::KalmanObserver getObserver() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getPredictedSpacecraftStates() const;
          void initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator processMeasurements(const ::java::util::List &, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter &) const;
          void setObserver(const ::org::orekit::estimation::sequential::KalmanObserver &) const;
          void updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState &) const;
          void updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator &) const;
          void updateShortPeriods(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalKalmanModel);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalKalmanModel);

        class t_SemiAnalyticalKalmanModel {
        public:
          PyObject_HEAD
          SemiAnalyticalKalmanModel object;
          static PyObject *wrap_Object(const SemiAnalyticalKalmanModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
