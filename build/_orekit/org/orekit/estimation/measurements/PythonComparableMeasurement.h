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
            mid_init$_0fa09c18fee449d5,
            mid_compareTo_aa79741dc73b1207,
            mid_finalize_0fa09c18fee449d5,
            mid_getDate_85703d13e302437e,
            mid_getObservedValue_60c7040667a7dc5c,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
