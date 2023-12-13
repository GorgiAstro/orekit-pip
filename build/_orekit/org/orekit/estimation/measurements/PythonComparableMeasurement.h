#ifndef org_orekit_estimation_measurements_PythonComparableMeasurement_H
#define org_orekit_estimation_measurements_PythonComparableMeasurement_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class PythonComparableMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_compareTo_6343361fedc17b25,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getDate_c325492395d89b24,
            mid_getObservedValue_25e1757a36c4dde2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
