#ifndef org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanModel_H
#define org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class MeasurementDecorator;
        class KalmanEstimation;
        class KalmanObserver;
        class SemiAnalyticalProcess;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
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
  }
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace filtering {
      namespace kalman {
        class ProcessEstimate;
        namespace unscented {
          class UnscentedKalmanFilter;
          class UnscentedProcess;
          class UnscentedEvolution;
        }
      }
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

        class SemiAnalyticalUnscentedKalmanModel : public ::java::lang::Object {
         public:
          enum {
            mid_finalizeEstimation_6f886d47d0124943,
            mid_finalizeOperationsObservationGrid_0640e6acf969ed28,
            mid_getCorrectedMeasurement_95a396fe45ccbbc0,
            mid_getCorrectedSpacecraftStates_5dccf571345671af,
            mid_getCurrentDate_7a97f7e149e79afb,
            mid_getCurrentMeasurementNumber_412668abc8d889e9,
            mid_getEstimate_55b445719d7de2a7,
            mid_getEstimatedMeasurementsParameters_467d574a7997e53a,
            mid_getEstimatedOrbitalParameters_467d574a7997e53a,
            mid_getEstimatedPropagationParameters_467d574a7997e53a,
            mid_getEstimatedPropagator_0cd5cd5bc4d32a91,
            mid_getEvolution_17da385c0c368282,
            mid_getInnovation_6f113314fca6b7ed,
            mid_getNumberSelectedMeasurementDrivers_412668abc8d889e9,
            mid_getNumberSelectedOrbitalDrivers_412668abc8d889e9,
            mid_getNumberSelectedPropagationDrivers_412668abc8d889e9,
            mid_getObserver_25fab8044126746b,
            mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalEstimatedState_75d50d73180655b4,
            mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalKalmanGain_70a207fcbc031df2,
            mid_getPhysicalMeasurementJacobian_70a207fcbc031df2,
            mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2,
            mid_getPredictedMeasurement_95a396fe45ccbbc0,
            mid_getPredictedMeasurements_88f7aeb25bb98f36,
            mid_getPredictedSpacecraftStates_5dccf571345671af,
            mid_initializeShortPeriodicTerms_8655761ebf04b503,
            mid_processMeasurements_c7258c5116598865,
            mid_setObserver_4275515b1ffe8ceb,
            mid_updateNominalSpacecraftState_8655761ebf04b503,
            mid_updateShortPeriods_8655761ebf04b503,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalUnscentedKalmanModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalUnscentedKalmanModel(const SemiAnalyticalUnscentedKalmanModel& obj) : ::java::lang::Object(obj) {}

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
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution getEvolution(jdouble, const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
          ::org::hipparchus::linear::RealVector getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
          jint getNumberSelectedMeasurementDrivers() const;
          jint getNumberSelectedOrbitalDrivers() const;
          jint getNumberSelectedPropagationDrivers() const;
          ::org::orekit::estimation::sequential::KalmanObserver getObserver() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::hipparchus::linear::RealVector > getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::orekit::estimation::sequential::MeasurementDecorator &) const;
          JArray< ::org::orekit::propagation::SpacecraftState > getPredictedSpacecraftStates() const;
          void initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator processMeasurements(const ::java::util::List &, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter &) const;
          void setObserver(const ::org::orekit::estimation::sequential::KalmanObserver &) const;
          void updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalUnscentedKalmanModel);

        class t_SemiAnalyticalUnscentedKalmanModel {
        public:
          PyObject_HEAD
          SemiAnalyticalUnscentedKalmanModel object;
          static PyObject *wrap_Object(const SemiAnalyticalUnscentedKalmanModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
