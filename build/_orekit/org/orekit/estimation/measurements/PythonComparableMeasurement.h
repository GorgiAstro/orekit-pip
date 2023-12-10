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
            mid_init$_7ae3461a92a43152,
            mid_compareTo_5d68114462a4e82e,
            mid_finalize_7ae3461a92a43152,
            mid_getDate_aaa854c403487cf3,
            mid_getObservedValue_7cdc325af0834901,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
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
