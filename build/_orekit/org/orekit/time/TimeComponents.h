#ifndef org_orekit_time_TimeComponents_H
#define org_orekit_time_TimeComponents_H

#include "java/lang/Object.h"

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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_10f281d777284cea,
          mid_init$_89aad365fb0ed8da,
          mid_init$_754312f3734d6e2f,
          mid_init$_386e0c67203bc264,
          mid_compareTo_6e350921bda47203,
          mid_equals_221e8e85cb385209,
          mid_formatUtcOffset_3cffd47377eca18a,
          mid_fromSeconds_468fc34f3ae36f6b,
          mid_getHour_412668abc8d889e9,
          mid_getMinute_412668abc8d889e9,
          mid_getMinutesFromUTC_412668abc8d889e9,
          mid_getSecond_557b8123390d8d0c,
          mid_getSecondsInLocalDay_557b8123390d8d0c,
          mid_getSecondsInUTCDay_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_parseTime_e1ddcbc9cb8f2009,
          mid_toString_3cffd47377eca18a,
          mid_toStringWithoutUtcOffset_3cffd47377eca18a,
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
