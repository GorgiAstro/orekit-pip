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
  namespace lang {
    class Comparable;
    class Class;
    class IllegalArgumentException;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class DateComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0a2a1ac2721c0336,
          mid_init$_f258113202d4c30d,
          mid_init$_8dbc1129a3c2557a,
          mid_init$_2bb2179709f1d894,
          mid_init$_c80ec2f7d8b5fe87,
          mid_compareTo_6ebe4402e3a7e632,
          mid_createFromWeekComponents_606eaea026b5af0b,
          mid_equals_229c87223f486349,
          mid_getCalendarWeek_f2f64475e4580546,
          mid_getDay_f2f64475e4580546,
          mid_getDayOfWeek_f2f64475e4580546,
          mid_getDayOfYear_f2f64475e4580546,
          mid_getJ2000Day_f2f64475e4580546,
          mid_getMJD_f2f64475e4580546,
          mid_getMonth_f2f64475e4580546,
          mid_getMonthEnum_f0fe0217ceb36471,
          mid_getYear_f2f64475e4580546,
          mid_hashCode_f2f64475e4580546,
          mid_parseDate_4d724b461e440432,
          mid_toString_0090f7797e403f43,
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
