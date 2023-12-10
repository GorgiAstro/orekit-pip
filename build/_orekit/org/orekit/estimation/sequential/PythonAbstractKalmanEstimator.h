#ifndef org_orekit_estimation_sequential_PythonAbstractKalmanEstimator_H
#define org_orekit_estimation_sequential_PythonAbstractKalmanEstimator_H

#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonAbstractKalmanEstimator : public ::org::orekit::estimation::sequential::AbstractKalmanEstimator {
         public:
          enum {
            mid_init$_de3e021e7266b71e,
            mid_finalize_0fa09c18fee449d5,
            mid_getKalmanEstimation_e05aaef10b06b09b,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractKalmanEstimator(jobject obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractKalmanEstimator(const PythonAbstractKalmanEstimator& obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {}

          PythonAbstractKalmanEstimator(const ::java::util::List &);

          void finalize() const;
          ::org::orekit::estimation::sequential::KalmanEstimation getKalmanEstimation() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractKalmanEstimator);
        extern PyTypeObject *PY_TYPE(PythonAbstractKalmanEstimator);

        class t_PythonAbstractKalmanEstimator {
        public:
          PyObject_HEAD
          PythonAbstractKalmanEstimator object;
          static PyObject *wrap_Object(const PythonAbstractKalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
