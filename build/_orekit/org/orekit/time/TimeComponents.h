#ifndef org_orekit_time_TimeComponents_H
#define org_orekit_time_TimeComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace time {
      class TimeComponents;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_987a5fb872043b12,
          mid_init$_78e41e7b5124a628,
          mid_init$_f5c307da94f08e20,
          mid_compareTo_623b59d411cbe30a,
          mid_equals_229c87223f486349,
          mid_formatUtcOffset_0090f7797e403f43,
          mid_fromSeconds_e2c98614b05dfb5f,
          mid_getHour_f2f64475e4580546,
          mid_getMinute_f2f64475e4580546,
          mid_getMinutesFromUTC_f2f64475e4580546,
          mid_getSecond_456d9a2f64d6b28d,
          mid_getSecondsInLocalDay_456d9a2f64d6b28d,
          mid_getSecondsInUTCDay_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_parseTime_a4b31ee1ef637293,
          mid_toString_0090f7797e403f43,
          mid_toStringWithoutUtcOffset_0090f7797e403f43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeComponents(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeComponents(const TimeComponents& obj) : ::java::lang::Object(obj) {}

        static TimeComponents *H00;
        static TimeComponents *H12;

        TimeComponents(jdouble);
        TimeComponents(jint, jdouble);
        TimeComponents(jint, jint, jdouble);
        TimeComponents(jint, jint, jdouble, jint);

        jint compareTo(const TimeComponents &) const;
        jboolean equals(const ::java::lang::Object &) const;
        ::java::lang::String formatUtcOffset() const;
        static TimeComponents fromSeconds(jint, jdouble, jdouble, jint);
        jint getHour() const;
        jint getMinute() const;
        jint getMinutesFromUTC() const;
        jdouble getSecond() const;
        jdouble getSecondsInLocalDay() const;
        jdouble getSecondsInUTCDay() const;
        jint hashCode() const;
        static TimeComponents parseTime(const ::java::lang::String &);
        ::java::lang::String toString() const;
        ::java::lang::String toStringWithoutUtcOffset() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeComponents);
      extern PyTypeObject *PY_TYPE(TimeComponents);

      class t_TimeComponents {
      public:
        PyObject_HEAD
        TimeComponents object;
        static PyObject *wrap_Object(const TimeComponents&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
