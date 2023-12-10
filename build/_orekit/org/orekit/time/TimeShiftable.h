#ifndef org_orekit_time_TimeShiftable_H
#define org_orekit_time_TimeShiftable_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeShiftable;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeShiftable : public ::java::lang::Object {
       public:
        enum {
          mid_shiftedBy_f3fc7729d023c410,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeShiftable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeShiftable(const TimeShiftable& obj) : ::java::lang::Object(obj) {}

        TimeShiftable shiftedBy(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeShiftable);
      extern PyTypeObject *PY_TYPE(TimeShiftable);

      class t_TimeShiftable {
      public:
        PyObject_HEAD
        TimeShiftable object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeShiftable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeShiftable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeShiftable&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
