#ifndef org_orekit_estimation_measurements_PythonEstimationsProvider_H
#define org_orekit_estimation_measurements_PythonEstimationsProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimationsProvider;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class PythonEstimationsProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getEstimatedMeasurement_6247f00f8564bd44,
            mid_getNumber_412668abc8d889e9,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEstimationsProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEstimationsProvider(const PythonEstimationsProvider& obj) : ::java::lang::Object(obj) {}

          PythonEstimationsProvider();

          void finalize() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement getEstimatedMeasurement(jint) const;
          jint getNumber() const;
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
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(PythonEstimationsProvider);
        extern PyTypeObject *PY_TYPE(PythonEstimationsProvider);

        class t_PythonEstimationsProvider {
        public:
          PyObject_HEAD
          PythonEstimationsProvider object;
          static PyObject *wrap_Object(const PythonEstimationsProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
