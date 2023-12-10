#ifndef org_orekit_estimation_measurements_PythonEstimationsProvider_H
#define org_orekit_estimation_measurements_PythonEstimationsProvider_H

#include "java/lang/Object.h"

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
      namespace measurements {

        class PythonEstimationsProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getEstimatedMeasurement_978ac7593c1405c5,
            mid_getNumber_570ce0828f81a2c1,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
