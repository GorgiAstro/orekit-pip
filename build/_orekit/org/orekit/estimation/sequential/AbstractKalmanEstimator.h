#ifndef org_orekit_estimation_sequential_AbstractKalmanEstimator_H
#define org_orekit_estimation_sequential_AbstractKalmanEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

        class AbstractKalmanEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentDate_85703d13e302437e,
            mid_getCurrentMeasurementNumber_570ce0828f81a2c1,
            mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da,
            mid_getOrbitalParametersDrivers_8357ebc867dea797,
            mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b,
            mid_getPhysicalEstimatedState_aab4fbf77867daa8,
            mid_getPropagationParametersDrivers_8357ebc867dea797,
            mid_getKalmanEstimation_e05aaef10b06b09b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractKalmanEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractKalmanEstimator(const AbstractKalmanEstimator& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::time::AbsoluteDate getCurrentDate() const;
          jint getCurrentMeasurementNumber() const;
          ::org::orekit::utils::ParameterDriversList getEstimatedMeasurementsParameters() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers(jboolean) const;
          ::org::hipparchus::linear::RealMatrix getPhysicalEstimatedCovarianceMatrix() const;
          ::org::hipparchus::linear::RealVector getPhysicalEstimatedState() const;
          ::org::orekit::utils::ParameterDriversList getPropagationParametersDrivers(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractKalmanEstimator);
        extern PyTypeObject *PY_TYPE(AbstractKalmanEstimator);

        class t_AbstractKalmanEstimator {
        public:
          PyObject_HEAD
          AbstractKalmanEstimator object;
          static PyObject *wrap_Object(const AbstractKalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
