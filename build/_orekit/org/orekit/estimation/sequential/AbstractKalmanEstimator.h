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
            mid_getCurrentDate_80e11148db499dda,
            mid_getCurrentMeasurementNumber_d6ab429752e7c267,
            mid_getEstimatedMeasurementsParameters_7c5a416c83e442be,
            mid_getOrbitalParametersDrivers_abc0e43715b72da1,
            mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8,
            mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf,
            mid_getPropagationParametersDrivers_abc0e43715b72da1,
            mid_getKalmanEstimation_e73dd18a212e3cd0,
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
