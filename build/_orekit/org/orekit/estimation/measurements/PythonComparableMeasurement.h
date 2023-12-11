#ifndef org_orekit_estimation_measurements_PythonComparableMeasurement_H
#define org_orekit_estimation_measurements_PythonComparableMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ComparableMeasurement;
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

        class PythonComparableMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_compareTo_0a393ed00cc2801f,
            mid_finalize_0640e6acf969ed28,
            mid_getDate_7a97f7e149e79afb,
            mid_getObservedValue_a53a7513ecedada2,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonComparableMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonComparableMeasurement(const PythonComparableMeasurement& obj) : ::java::lang::Object(obj) {}

          PythonComparableMeasurement();

          jint compareTo(const ::org::orekit::estimation::measurements::ComparableMeasurement &) const;
          void finalize() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          JArray< jdouble > getObservedValue() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonComparableMeasurement);
        extern PyTypeObject *PY_TYPE(PythonComparableMeasurement);

        class t_PythonComparableMeasurement {
        public:
          PyObject_HEAD
          PythonComparableMeasurement object;
          static PyObject *wrap_Object(const PythonComparableMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
