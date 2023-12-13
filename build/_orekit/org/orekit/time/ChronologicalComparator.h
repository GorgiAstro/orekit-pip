#ifndef org_orekit_time_ChronologicalComparator_H
#define org_orekit_time_ChronologicalComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class ChronologicalComparator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_compare_26f43f9916cc30f9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ChronologicalComparator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ChronologicalComparator(const ChronologicalComparator& obj) : ::java::lang::Object(obj) {}

        ChronologicalComparator();

        jint compare(const ::org::orekit::time::TimeStamped &, const ::org::orekit::time::TimeStamped &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(ChronologicalComparator);
      extern PyTypeObject *PY_TYPE(ChronologicalComparator);

      class t_ChronologicalComparator {
      public:
        PyObject_HEAD
        ChronologicalComparator object;
        static PyObject *wrap_Object(const ChronologicalComparator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
