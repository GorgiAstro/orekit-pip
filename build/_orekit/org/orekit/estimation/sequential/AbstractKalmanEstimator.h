#ifndef org_orekit_estimation_sequential_AbstractKalmanEstimator_H
#define org_orekit_estimation_sequential_AbstractKalmanEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
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
            mid_getCurrentDate_7a97f7e149e79afb,
            mid_getCurrentMeasurementNumber_412668abc8d889e9,
            mid_getEstimatedMeasurementsParameters_467d574a7997e53a,
            mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817,
            mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2,
            mid_getPhysicalEstimatedState_75d50d73180655b4,
            mid_getPropagationParametersDrivers_4f6dd8cf21dd8817,
            mid_getKalmanEstimation_32faeba2996c6566,
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
