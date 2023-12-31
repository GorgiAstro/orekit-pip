#ifndef org_orekit_estimation_leastsquares_PythonModelObserver_H
#define org_orekit_estimation_leastsquares_PythonModelObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class PythonModelObserver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_modelCalled_cc0ac39e38c56725,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonModelObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonModelObserver(const PythonModelObserver& obj) : ::java::lang::Object(obj) {}

          PythonModelObserver();

          void finalize() const;
          void modelCalled(const JArray< ::org::orekit::orbits::Orbit > &, const ::java::util::Map &) const;
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
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(PythonModelObserver);
        extern PyTypeObject *PY_TYPE(PythonModelObserver);

        class t_PythonModelObserver {
        public:
          PyObject_HEAD
          PythonModelObserver object;
          static PyObject *wrap_Object(const PythonModelObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
