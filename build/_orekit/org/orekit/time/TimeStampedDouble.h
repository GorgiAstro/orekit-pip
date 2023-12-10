#ifndef org_orekit_time_TimeStampedDouble_H
#define org_orekit_time_TimeStampedDouble_H

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

      class TimeStampedDouble : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a7786d9d355d3792,
          mid_getDate_85703d13e302437e,
          mid_getValue_dff5885c2c873297,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedDouble(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedDouble(const TimeStampedDouble& obj) : ::java::lang::Object(obj) {}

        TimeStampedDouble(jdouble, const ::org::orekit::time::AbsoluteDate &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getValue() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStampedDouble);
      extern PyTypeObject *PY_TYPE(TimeStampedDouble);

      class t_TimeStampedDouble {
      public:
        PyObject_HEAD
        TimeStampedDouble object;
        static PyObject *wrap_Object(const TimeStampedDouble&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
