#ifndef org_orekit_time_DateComponents_H
#define org_orekit_time_DateComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class Month;
      class DateComponents;
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

      class DateComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_44ed599e93e8a30c,
          mid_init$_f29ffa06e1edc0fc,
          mid_init$_3313c75e3e16c428,
          mid_init$_cb5fad2f35fdd552,
          mid_init$_a0df4b8e4ed3805e,
          mid_compareTo_e788f54a1ca1c9dc,
          mid_createFromWeekComponents_25e1535294bfc9e8,
          mid_equals_460c5e2d9d51c6cc,
          mid_getCalendarWeek_55546ef6a647f39b,
          mid_getDay_55546ef6a647f39b,
          mid_getDayOfWeek_55546ef6a647f39b,
          mid_getDayOfYear_55546ef6a647f39b,
          mid_getJ2000Day_55546ef6a647f39b,
          mid_getMJD_55546ef6a647f39b,
          mid_getMonth_55546ef6a647f39b,
          mid_getMonthEnum_427cb53b38e1e5c8,
          mid_getYear_55546ef6a647f39b,
          mid_hashCode_55546ef6a647f39b,
          mid_parseDate_007f42f756105ee4,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DateComponents(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DateComponents(const DateComponents& obj) : ::java::lang::Object(obj) {}

        static DateComponents *BEIDOU_EPOCH;
        static DateComponents *CCSDS_EPOCH;
        static DateComponents *FIFTIES_EPOCH;
        static DateComponents *GALILEO_EPOCH;
        static DateComponents *GLONASS_EPOCH;
        static DateComponents *GPS_EPOCH;
        static DateComponents *IRNSS_EPOCH;
        static DateComponents *J2000_EPOCH;
        static DateComponents *JAVA_EPOCH;
        static DateComponents *JULIAN_EPOCH;
        static DateComponents *MAX_EPOCH;
        static DateComponents *MIN_EPOCH;
        static DateComponents *MODIFIED_JULIAN_EPOCH;
        static DateComponents *QZSS_EPOCH;

        DateComponents(jint);
        DateComponents(const DateComponents &, jint);
        DateComponents(jint, jint);
        DateComponents(jint, const ::org::orekit::time::Month &, jint);
        DateComponents(jint, jint, jint);

        jint compareTo(const DateComponents &) const;
        static DateComponents createFromWeekComponents(jint, jint, jint);
        jboolean equals(const ::java::lang::Object &) const;
        jint getCalendarWeek() const;
        jint getDay() const;
        jint getDayOfWeek() const;
        jint getDayOfYear() const;
        jint getJ2000Day() const;
        jint getMJD() const;
        jint getMonth() const;
        ::org::orekit::time::Month getMonthEnum() const;
        jint getYear() const;
        jint hashCode() const;
        static DateComponents parseDate(const ::java::lang::String &);
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(DateComponents);
      extern PyTypeObject *PY_TYPE(DateComponents);

      class t_DateComponents {
      public:
        PyObject_HEAD
        DateComponents object;
        static PyObject *wrap_Object(const DateComponents&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
