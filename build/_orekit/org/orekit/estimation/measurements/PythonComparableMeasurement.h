#ifndef org_orekit_estimation_measurements_PythonComparableMeasurement_H
#define org_orekit_estimation_measurements_PythonComparableMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ComparableMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
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
            mid_init$_ff7cb6c242604316,
            mid_compareTo_abfadd9b92595ff6,
            mid_finalize_ff7cb6c242604316,
            mid_getDate_80e11148db499dda,
            mid_getObservedValue_be783177b060994b,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
