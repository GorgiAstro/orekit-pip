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
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_4320462275d66e78,
          mid_init$_e98d7b3e971b6087,
          mid_init$_0d135c802a561a69,
          mid_compareTo_18d2c487028e75d5,
          mid_equals_72faff9b05f5ed5e,
          mid_formatUtcOffset_d2c8eb4129821f0e,
          mid_fromSeconds_693426a46930f812,
          mid_getHour_d6ab429752e7c267,
          mid_getMinute_d6ab429752e7c267,
          mid_getMinutesFromUTC_d6ab429752e7c267,
          mid_getSecond_9981f74b2d109da6,
          mid_getSecondsInLocalDay_9981f74b2d109da6,
          mid_getSecondsInUTCDay_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_parseTime_c1986b8f8b7a73dd,
          mid_toString_d2c8eb4129821f0e,
          mid_toStringWithoutUtcOffset_d2c8eb4129821f0e,
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
