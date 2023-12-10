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
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {
          class NonLinearProcess;
          class NonLinearEvolution;
          class ExtendedKalmanFilter;
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
            mid_getEvolution_8baf140085ffa2b7,
            mid_getInnovation_c1adcb03cc15012a,
            mid_getObserver_fc89aee73878aefd,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalKalmanGain_688b496048ff947b,
            mid_getPhysicalMeasurementJacobian_688b496048ff947b,
            mid_getPhysicalStateTransitionMatrix_688b496048ff947b,
            mid_getPredictedMeasurement_5a90ceef60f482f1,
            mid_getPredictedSpacecraftStates_fa9cea0faefb9a31,
            mid_initializeShortPeriodicTerms_0ee5c56004643a2e,
            mid_processMeasurements_0d49551f8b25626b,
            mid_setObserver_3b3c487cb3322691,
            mid_updateNominalSpacecraftState_0ee5c56004643a2e,
            mid_updateReferenceTrajectory_6dd5e3e05e92502e,
            mid_updateShortPeriods_0ee5c56004643a2e,
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
