#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanModel_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanObserver;
        class MeasurementDecorator;
        class SemiAnalyticalProcess;
        class KalmanEstimation;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace propagation {
      class SpacecraftState;
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
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
        namespace extended {
          class NonLinearEvolution;
          class NonLinearProcess;
          class ExtendedKalmanFilter;
        }
        class ProcessEstimate;
      }
    }
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
            mid_finalizeEstimation_7cf22bbe05cd26dc,
            mid_finalizeOperationsObservationGrid_7ae3461a92a43152,
            mid_getCorrectedMeasurement_164e77faf6b1d416,
            mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164,
            mid_getCurrentDate_aaa854c403487cf3,
            mid_getCurrentMeasurementNumber_f2f64475e4580546,
            mid_getEstimate_3d891496bfc9091e,
            mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0,
            mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagationParameters_eb9e6df280c6daa0,
            mid_getEstimatedPropagator_c187e5fb5beb7558,
            mid_getEvolution_b091ae59b81dced9,
            mid_getInnovation_98db7a9514783d86,
            mid_getObserver_c42c64cc17e34100,
            mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalEstimatedState_6d9adf1d5b463928,
            mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21,
            mid_getPhysicalKalmanGain_7116bbecdd8ceb21,
            mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21,
            mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21,
            mid_getPredictedMeasurement_164e77faf6b1d416,
            mid_getPredictedSpacecraftStates_a4eb258dd7a1e164,
            mid_initializeShortPeriodicTerms_2b88003f931f70a7,
            mid_processMeasurements_8eb2d866e9c3f5f1,
            mid_setObserver_fe6775fb802fa129,
            mid_updateNominalSpacecraftState_2b88003f931f70a7,
            mid_updateReferenceTrajectory_6435d4be7f4238c5,
            mid_updateShortPeriods_2b88003f931f70a7,
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
