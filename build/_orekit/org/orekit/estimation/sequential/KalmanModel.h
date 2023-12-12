#ifndef org_orekit_estimation_sequential_KalmanModel_H
#define org_orekit_estimation_sequential_KalmanModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
      class SpacecraftState;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace sequential {
        class MeasurementDecorator;
        class KalmanEstimation;
        class CovarianceMatrixProvider;
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
          class NonLinearProcess;
          class NonLinearEvolution;
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
            mid_init$_8e60210fff190f25,
            mid_finalizeEstimation_6f886d47d0124943,
            mid_getBuilders_0d9551367f7ecdef,
            mid_getCorrectedMeasurement_95a396fe45ccbbc0,
            mid_getCorrectedSpacecraftStates_5dccf571345671af,
            mid_getCurrentDate_7a97f7e149e79afb,
            mid_getCurrentMeasurementNumber_412668abc8d889e9,
            mid_getEstimate_55b445719d7de2a7,
            mid_getEstimatedMeasurementsParameters_467d574a7997e53a,
            mid_getEstimatedOrbitalParameters_467d574a7997e53a,
            mid_getEstimatedPropagationParameters_467d574a7997e53a,
            mid_getEstimatedPropagators_2d0616b730e7ec0f,
            mid_getEvolution_ebde746c06b90598,
            mid_getInnovation_e958eadec739b50c,
            mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalEstimatedState_75d50d73180655b4,
            mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalKalmanGain_70a207fcbc031df2,
            mid_getPhysicalMeasurementJacobian_70a207fcbc031df2,
            mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2,
            mid_getPredictedMeasurement_95a396fe45ccbbc0,
            mid_getPredictedSpacecraftStates_5dccf571345671af,
            mid_getReferenceTrajectories_2d0616b730e7ec0f,
            mid_setReferenceTrajectories_1ac24457161f6296,
            mid_updateReferenceTrajectories_1ac24457161f6296,
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
