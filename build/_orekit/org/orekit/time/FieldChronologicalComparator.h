#ifndef org_orekit_time_FieldChronologicalComparator_H
#define org_orekit_time_FieldChronologicalComparator_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldChronologicalComparator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_compare_ecf43d2794524973,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldChronologicalComparator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldChronologicalComparator(const FieldChronologicalComparator& obj) : ::java::lang::Object(obj) {}

        FieldChronologicalComparator();

        jint compare(const ::org::orekit::time::FieldTimeStamped &, const ::org::orekit::time::FieldTimeStamped &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldChronologicalComparator);
      extern PyTypeObject *PY_TYPE(FieldChronologicalComparator);

      class t_FieldChronologicalComparator {
      public:
        PyObject_HEAD
        FieldChronologicalComparator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldChronologicalComparator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldChronologicalComparator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldChronologicalComparator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
