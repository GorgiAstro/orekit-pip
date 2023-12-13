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
            mid_getCurrentDate_c325492395d89b24,
            mid_getCurrentMeasurementNumber_55546ef6a647f39b,
            mid_getEstimatedMeasurementsParameters_cfb822366e8ab425,
            mid_getOrbitalParametersDrivers_f4ab92625193d439,
            mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391,
            mid_getPhysicalEstimatedState_3a10cc75bd070d84,
            mid_getPropagationParametersDrivers_f4ab92625193d439,
            mid_getKalmanEstimation_10690b877ea302f7,
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
