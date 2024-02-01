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
        class EstimationsProvider;
        class EstimatedMeasurement;
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getEstimatedMeasurement_a0080ef23630d9a1,
            mid_getNumber_d6ab429752e7c267,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
