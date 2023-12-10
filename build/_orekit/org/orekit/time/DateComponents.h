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
      class Month;
      class DateComponents;
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
          mid_init$_99803b0791f320ff,
          mid_init$_07bece3cd7a2ccd6,
          mid_init$_6f37635c3285dbdf,
          mid_init$_2981819d13ae2f57,
          mid_init$_8336200ef3dde36b,
          mid_compareTo_ae7b5ab7634ca960,
          mid_createFromWeekComponents_e3e2a8ae3bc201ad,
          mid_equals_65c7d273e80d497a,
          mid_getCalendarWeek_570ce0828f81a2c1,
          mid_getDay_570ce0828f81a2c1,
          mid_getDayOfWeek_570ce0828f81a2c1,
          mid_getDayOfYear_570ce0828f81a2c1,
          mid_getJ2000Day_570ce0828f81a2c1,
          mid_getMJD_570ce0828f81a2c1,
          mid_getMonth_570ce0828f81a2c1,
          mid_getMonthEnum_c6b6e6a1b9b6ecef,
          mid_getYear_570ce0828f81a2c1,
          mid_hashCode_570ce0828f81a2c1,
          mid_parseDate_668d97c23df2044a,
          mid_toString_11b109bd155ca898,
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
