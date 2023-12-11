#ifndef org_orekit_estimation_leastsquares_PythonModelObserver_H
#define org_orekit_estimation_leastsquares_PythonModelObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace orbits {
      class Orbit;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Throwable;
    class Class;
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
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_modelCalled_b94f4715223105a5,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
