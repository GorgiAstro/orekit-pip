#ifndef org_orekit_estimation_sequential_PythonKalmanEstimation_H
#define org_orekit_estimation_sequential_PythonKalmanEstimation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
      }
      namespace measurements {
        class EstimatedMeasurement;
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
      class RealVector;
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getCorrectedMeasurement_9927c8980e79c922,
            mid_getCorrectedSpacecraftStates_3807ff088e7ce821,
            mid_getCurrentDate_c325492395d89b24,
            mid_getCurrentMeasurementNumber_55546ef6a647f39b,
            mid_getEstimatedMeasurementsParameters_cfb822366e8ab425,
            mid_getEstimatedOrbitalParameters_cfb822366e8ab425,
            mid_getEstimatedPropagationParameters_cfb822366e8ab425,
            mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalEstimatedState_3a10cc75bd070d84,
            mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalKalmanGain_f77d745f2128c391,
            mid_getPhysicalMeasurementJacobian_f77d745f2128c391,
            mid_getPhysicalStateTransitionMatrix_f77d745f2128c391,
            mid_getPredictedMeasurement_9927c8980e79c922,
            mid_getPredictedSpacecraftStates_3807ff088e7ce821,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
