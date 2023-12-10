#ifndef org_orekit_estimation_measurements_ComparableMeasurement_H
#define org_orekit_estimation_measurements_ComparableMeasurement_H

#include "org/orekit/time/TimeStamped.h"

namespace java {
  namespace lang {
    class Class;
    class Comparable;
  }
}
namespace org {
  namespace orekit {
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

        class ComparableMeasurement : public ::org::orekit::time::TimeStamped {
         public:
          enum {
            mid_compareTo_5d68114462a4e82e,
            mid_getObservedValue_7cdc325af0834901,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ComparableMeasurement(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ComparableMeasurement(const ComparableMeasurement& obj) : ::org::orekit::time::TimeStamped(obj) {}

          jint compareTo(const ComparableMeasurement &) const;
          JArray< jdouble > getObservedValue() const;
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
        extern PyType_Def PY_TYPE_DEF(ComparableMeasurement);
        extern PyTypeObject *PY_TYPE(ComparableMeasurement);

        class t_ComparableMeasurement {
        public:
          PyObject_HEAD
          ComparableMeasurement object;
          static PyObject *wrap_Object(const ComparableMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
