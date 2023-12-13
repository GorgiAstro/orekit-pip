#ifndef org_orekit_time_TimeStampedPair_H
#define org_orekit_time_TimeStampedPair_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
          mid_init$_75a403904966363f,
          mid_init$_7b052766e2573d36,
          mid_checkDatesConsistency_d6176fd55d408ce8,
          mid_getDate_c325492395d89b24,
          mid_getFirst_a63f3f151ca9e302,
          mid_getSecond_a63f3f151ca9e302,
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
