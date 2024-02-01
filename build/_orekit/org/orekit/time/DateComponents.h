#ifndef org_orekit_time_DateComponents_H
#define org_orekit_time_DateComponents_H

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
    namespace time {
      class DateComponents;
      class Month;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class DateComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8fd427ab23829bf5,
          mid_init$_5e81a70a44ab7b55,
          mid_init$_b5d23e6c0858e8ed,
          mid_init$_1a20c824be86d0cc,
          mid_init$_48ca1125d4856a74,
          mid_compareTo_d1b329613694e446,
          mid_createFromWeekComponents_bda69ce54395d0e9,
          mid_equals_72faff9b05f5ed5e,
          mid_getCalendarWeek_d6ab429752e7c267,
          mid_getDay_d6ab429752e7c267,
          mid_getDayOfWeek_d6ab429752e7c267,
          mid_getDayOfYear_d6ab429752e7c267,
          mid_getJ2000Day_d6ab429752e7c267,
          mid_getMJD_d6ab429752e7c267,
          mid_getMonth_d6ab429752e7c267,
          mid_getMonthEnum_7253b418bb77eb1a,
          mid_getYear_d6ab429752e7c267,
          mid_hashCode_d6ab429752e7c267,
          mid_parseDate_b0172433977a8506,
          mid_toString_d2c8eb4129821f0e,
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
