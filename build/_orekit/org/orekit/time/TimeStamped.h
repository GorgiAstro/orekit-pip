#ifndef org_orekit_time_TimeStamped_H
#define org_orekit_time_TimeStamped_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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

      class TimeStamped : public ::java::lang::Object {
       public:
        enum {
          mid_durationFrom_ea2b3148acebf68c,
          mid_getDate_85703d13e302437e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStamped(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStamped(const TimeStamped& obj) : ::java::lang::Object(obj) {}

        jdouble durationFrom(const TimeStamped &) const;
        ::org::orekit::time::AbsoluteDate getDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStamped);
      extern PyTypeObject *PY_TYPE(TimeStamped);

      class t_TimeStamped {
      public:
        PyObject_HEAD
        TimeStamped object;
        static PyObject *wrap_Object(const TimeStamped&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
