#ifndef org_orekit_estimation_sequential_PythonKalmanEstimation_H
#define org_orekit_estimation_sequential_PythonKalmanEstimation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
      }
      namespace sequential {
        class KalmanEstimation;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonKalmanEstimation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getCorrectedMeasurement_95a396fe45ccbbc0,
            mid_getCorrectedSpacecraftStates_5dccf571345671af,
            mid_getCurrentDate_7a97f7e149e79afb,
            mid_getCurrentMeasurementNumber_412668abc8d889e9,
            mid_getEstimatedMeasurementsParameters_467d574a7997e53a,
            mid_getEstimatedOrbitalParameters_467d574a7997e53a,
            mid_getEstimatedPropagationParameters_467d574a7997e53a,
            mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalEstimatedState_75d50d73180655b4,
            mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalKalmanGain_70a207fcbc031df2,
            mid_getPhysicalMeasurementJacobian_70a207fcbc031df2,
            mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2,
            mid_getPredictedMeasurement_95a396fe45ccbbc0,
            mid_getPredictedSpacecraftStates_5dccf571345671af,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonKalmanEstimation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonKalmanEstimation(const PythonKalmanEstimation& obj) : ::java::lang::Object(obj) {}

          PythonKalmanEstimation();

          void finalize() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getCorrectedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getCorrectedSpacecraftStates() const;
          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedOrbitalParameters() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedPropagationParameters() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalInnovationCovarianceMatrix() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalMeasurementJacobian() const;
          ::org::hipparchus::linear::RealMatrix getPhysicalStateTransitionMatrix() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getPredictedMeasurement() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getPredictedSpacecraftStates() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonKalmanEstimation);
        extern PyTypeObject *PY_TYPE(PythonKalmanEstimation);

        class t_PythonKalmanEstimation {
        public:
          PyObject_HEAD
          PythonKalmanEstimation object;
          static PyObject *wrap_Object(const PythonKalmanEstimation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
