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
          mid_init$_17db3a65980d3441,
          mid_init$_bb79ca80d85d0a66,
          mid_init$_1506189166690b5e,
          mid_init$_a74f71674060ec14,
          mid_compareTo_d9b2403c89c27b85,
          mid_equals_65c7d273e80d497a,
          mid_formatUtcOffset_11b109bd155ca898,
          mid_fromSeconds_563e129122230559,
          mid_getHour_570ce0828f81a2c1,
          mid_getMinute_570ce0828f81a2c1,
          mid_getMinutesFromUTC_570ce0828f81a2c1,
          mid_getSecond_dff5885c2c873297,
          mid_getSecondsInLocalDay_dff5885c2c873297,
          mid_getSecondsInUTCDay_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_parseTime_38ec340cca6fd3db,
          mid_toString_11b109bd155ca898,
          mid_toStringWithoutUtcOffset_11b109bd155ca898,
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
