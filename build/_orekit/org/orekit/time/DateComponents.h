#ifndef org_orekit_time_DateComponents_H
#define org_orekit_time_DateComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class Month;
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
          mid_init$_a3da1a935cb37f7b,
          mid_init$_2cfd6eaa6758b3d2,
          mid_init$_a84c9a223722150c,
          mid_init$_c01975213386f6a3,
          mid_init$_3796b665437eba81,
          mid_compareTo_5817c4aa2dc92c4a,
          mid_createFromWeekComponents_e03baeb1c97a53a6,
          mid_equals_221e8e85cb385209,
          mid_getCalendarWeek_412668abc8d889e9,
          mid_getDay_412668abc8d889e9,
          mid_getDayOfWeek_412668abc8d889e9,
          mid_getDayOfYear_412668abc8d889e9,
          mid_getJ2000Day_412668abc8d889e9,
          mid_getMJD_412668abc8d889e9,
          mid_getMonth_412668abc8d889e9,
          mid_getMonthEnum_a41927702314cdb7,
          mid_getYear_412668abc8d889e9,
          mid_hashCode_412668abc8d889e9,
          mid_parseDate_81fc007c2df84b76,
          mid_toString_3cffd47377eca18a,
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
