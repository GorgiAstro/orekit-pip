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
      class RealMatrix;
      class RealVector;
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalProcess;
        class KalmanObserver;
        class KalmanEstimation;
        class MeasurementDecorator;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
      }
      class SpacecraftState;
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
            mid_finalizeEstimation_32b51ab222e72e59,
            mid_finalizeOperationsObservationGrid_ff7cb6c242604316,
            mid_getCorrectedMeasurement_b4478e72a44f53a7,
            mid_getCorrectedSpacecraftStates_598bcd058df23e79,
            mid_getCurrentDate_80e11148db499dda,
            mid_getCurrentMeasurementNumber_d6ab429752e7c267,
            mid_getEstimate_270f067ba2ecffc6,
            mid_getEstimatedMeasurementsParameters_7c5a416c83e442be,
            mid_getEstimatedOrbitalParameters_7c5a416c83e442be,
            mid_getEstimatedPropagationParameters_7c5a416c83e442be,
            mid_getEstimatedPropagator_15d5094a30a75845,
            mid_getEvolution_0c7d8b0df374bb31,
            mid_getInnovation_4546a188365eb79d,
            mid_getNumberSelectedMeasurementDrivers_d6ab429752e7c267,
            mid_getNumberSelectedOrbitalDrivers_d6ab429752e7c267,
            mid_getNumberSelectedPropagationDrivers_d6ab429752e7c267,
            mid_getObserver_6e4d0b03328febe6,
            mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf,
            mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalKalmanGain_b2eebabce70526d8,
            mid_getPhysicalMeasurementJacobian_b2eebabce70526d8,
            mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8,
            mid_getPredictedMeasurement_b4478e72a44f53a7,
            mid_getPredictedMeasurements_8e02540e91b649aa,
            mid_getPredictedSpacecraftStates_598bcd058df23e79,
            mid_initializeShortPeriodicTerms_72b846eb87f3af9a,
            mid_processMeasurements_70ac4e539761d234,
            mid_setObserver_2002169216358a3a,
            mid_updateNominalSpacecraftState_72b846eb87f3af9a,
            mid_updateShortPeriods_72b846eb87f3af9a,
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
