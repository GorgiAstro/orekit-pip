#ifndef org_orekit_estimation_sequential_UnscentedKalmanModel_H
#define org_orekit_estimation_sequential_UnscentedKalmanModel_H

#include "java/lang/Object.h"

namespace org {
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
      class RealMatrix;
      class RealVector;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace sequential {
        class MeasurementDecorator;
        class KalmanEstimation;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      class Propagator;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_finalizeEstimation_6f886d47d0124943,
            mid_getCorrectedMeasurement_95a396fe45ccbbc0,
            mid_getCorrectedSpacecraftStates_5dccf571345671af,
            mid_getCurrentDate_7a97f7e149e79afb,
            mid_getCurrentMeasurementNumber_412668abc8d889e9,
            mid_getEstimate_55b445719d7de2a7,
            mid_getEstimatedMeasurementsParameters_467d574a7997e53a,
            mid_getEstimatedOrbitalParameters_467d574a7997e53a,
            mid_getEstimatedPropagationParameters_467d574a7997e53a,
            mid_getEstimatedPropagators_2d0616b730e7ec0f,
            mid_getEvolution_17da385c0c368282,
            mid_getInnovation_6f113314fca6b7ed,
            mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalEstimatedState_75d50d73180655b4,
            mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalKalmanGain_70a207fcbc031df2,
            mid_getPhysicalMeasurementJacobian_70a207fcbc031df2,
            mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2,
            mid_getPredictedMeasurement_95a396fe45ccbbc0,
            mid_getPredictedMeasurements_88f7aeb25bb98f36,
            mid_getPredictedSpacecraftStates_5dccf571345671af,
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
