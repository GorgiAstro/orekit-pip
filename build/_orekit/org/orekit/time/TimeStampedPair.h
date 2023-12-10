#ifndef org_orekit_time_TimeStampedPair_H
#define org_orekit_time_TimeStampedPair_H

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

      class TimeStampedPair : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b69629f88ee62d0c,
          mid_init$_81e1c812179d2782,
          mid_checkDatesConsistency_da69b15169b809c3,
          mid_getDate_85703d13e302437e,
          mid_getFirst_c2a1e08c7d64b02c,
          mid_getSecond_c2a1e08c7d64b02c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedPair(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedPair(const TimeStampedPair& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_DATE_EQUALITY_THRESHOLD;

        TimeStampedPair(const ::org::orekit::time::TimeStamped &, const ::org::orekit::time::TimeStamped &);
        TimeStampedPair(const ::org::orekit::time::TimeStamped &, const ::org::orekit::time::TimeStamped &, jdouble);

        static void checkDatesConsistency(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::time::TimeStamped getFirst() const;
        ::org::orekit::time::TimeStamped getSecond() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStampedPair);
      extern PyTypeObject *PY_TYPE(TimeStampedPair);

      class t_TimeStampedPair {
      public:
        PyObject_HEAD
        TimeStampedPair object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_TimeStampedPair *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedPair&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedPair&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
