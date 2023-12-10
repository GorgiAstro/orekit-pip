#ifndef org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanModel_H
#define org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {
          class UnscentedProcess;
          class UnscentedKalmanFilter;
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
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace sequential {
        class SemiAnalyticalProcess;
        class KalmanEstimation;
        class KalmanObserver;
        class MeasurementDecorator;
      }
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
            mid_finalizeEstimation_da0919b7ae9816a3,
            mid_finalizeOperationsObservationGrid_0fa09c18fee449d5,
            mid_getCorrectedMeasurement_5a90ceef60f482f1,
            mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31,
            mid_getCurrentDate_85703d13e302437e,
            mid_getCurrentMeasurementNumber_570ce0828f81a2c1,
            mid_getEstimate_c93ddc26f3b3eef4,
            mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da,
            mid_getEstimatedOrbitalParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagationParameters_bd51074bfd9d41da,
            mid_getEstimatedPropagator_58b33e4b5f875168,
            mid_getEvolution_10ef30e3c9abcb5f,
            mid_getInnovation_c7c45dcf7ef024eb,
            mid_getNumberSelectedMeasurementDrivers_570ce0828f81a2c1,
            mid_getNumberSelectedOrbitalDrivers_570ce0828f81a2c1,
            mid_getNumberSelectedPropagationDrivers_570ce0828f81a2c1,
            mid_getObserver_fc89aee73878aefd,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalKalmanGain_688b496048ff947b,
            mid_getPhysicalMeasurementJacobian_688b496048ff947b,
            mid_getPhysicalStateTransitionMatrix_688b496048ff947b,
            mid_getPredictedMeasurement_5a90ceef60f482f1,
            mid_getPredictedMeasurements_bfe87416cc1883be,
            mid_getPredictedSpacecraftStates_fa9cea0faefb9a31,
            mid_initializeShortPeriodicTerms_0ee5c56004643a2e,
            mid_processMeasurements_51b919ac069d1142,
            mid_setObserver_3b3c487cb3322691,
            mid_updateNominalSpacecraftState_0ee5c56004643a2e,
            mid_updateShortPeriods_0ee5c56004643a2e,
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
