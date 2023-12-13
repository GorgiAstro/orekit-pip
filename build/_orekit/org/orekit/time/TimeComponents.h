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
          mid_init$_8ba9fe7a847cecad,
          mid_init$_d5322b8b512aeb26,
          mid_init$_94fe8d9ffeb50676,
          mid_init$_fc9f2ca09fd05bd3,
          mid_compareTo_458f3cb5628c1643,
          mid_equals_460c5e2d9d51c6cc,
          mid_formatUtcOffset_1c1fa1e935d6cdcf,
          mid_fromSeconds_328567cdd967e3d5,
          mid_getHour_55546ef6a647f39b,
          mid_getMinute_55546ef6a647f39b,
          mid_getMinutesFromUTC_55546ef6a647f39b,
          mid_getSecond_b74f83833fdad017,
          mid_getSecondsInLocalDay_b74f83833fdad017,
          mid_getSecondsInUTCDay_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_parseTime_0600ccbc1d063951,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf,
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
