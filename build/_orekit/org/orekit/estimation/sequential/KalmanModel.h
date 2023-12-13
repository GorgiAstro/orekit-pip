#ifndef org_orekit_estimation_sequential_KalmanModel_H
#define org_orekit_estimation_sequential_KalmanModel_H

#include "java/lang/Object.h"

namespace org {
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
      class RealVector;
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
        class CovarianceMatrixProvider;
        class MeasurementDecorator;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_6632607fcc043559,
            mid_finalizeEstimation_aef7db4b13ced902,
            mid_getBuilders_e62d3bb06d56d7e3,
            mid_getCorrectedMeasurement_9927c8980e79c922,
            mid_getCorrectedSpacecraftStates_3807ff088e7ce821,
            mid_getCurrentDate_c325492395d89b24,
            mid_getCurrentMeasurementNumber_55546ef6a647f39b,
            mid_getEstimate_e37ac5ac73cc5311,
            mid_getEstimatedMeasurementsParameters_cfb822366e8ab425,
            mid_getEstimatedOrbitalParameters_cfb822366e8ab425,
            mid_getEstimatedPropagationParameters_cfb822366e8ab425,
            mid_getEstimatedPropagators_17493e4ff0ba8a7f,
            mid_getEvolution_bcc61f692c4eea8a,
            mid_getInnovation_dd883423c2f99f26,
            mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalEstimatedState_3a10cc75bd070d84,
            mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalKalmanGain_f77d745f2128c391,
            mid_getPhysicalMeasurementJacobian_f77d745f2128c391,
            mid_getPhysicalStateTransitionMatrix_f77d745f2128c391,
            mid_getPredictedMeasurement_9927c8980e79c922,
            mid_getPredictedSpacecraftStates_3807ff088e7ce821,
            mid_getReferenceTrajectories_17493e4ff0ba8a7f,
            mid_setReferenceTrajectories_a9690f45154b1c92,
            mid_updateReferenceTrajectories_a9690f45154b1c92,
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
