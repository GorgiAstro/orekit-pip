#ifndef org_orekit_time_AbsoluteDate_H
#define org_orekit_time_AbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class Month;
      class TimeStamped;
      class TimeScale;
      class DateComponents;
      class TimeShiftable;
      class DateTimeComponents;
      class TimeComponents;
      class AbsoluteDate;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class TimeZone;
    class Date;
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

      class AbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_076f09dda44638d8,
          mid_init$_9123fba9cf5e8ba5,
          mid_init$_fab39d5927cb35c4,
          mid_init$_2a3169c92f0851be,
          mid_init$_ac094fa893132101,
          mid_init$_0816dbbf23396d63,
          mid_init$_2180a6d950d9f334,
          mid_init$_22c5ff0d241c4818,
          mid_init$_8dd82a0d5a588591,
          mid_init$_042210679bb44b45,
          mid_init$_ee5b56e093499c83,
          mid_compareTo_982c9f163875e1c9,
          mid_createBesselianEpoch_a76f1ca2cc1b76e5,
          mid_createJDDate_23f6e153fbbaa3e3,
          mid_createJulianEpoch_a76f1ca2cc1b76e5,
          mid_createMJDDate_23f6e153fbbaa3e3,
          mid_durationFrom_e912d21057defe63,
          mid_equals_229c87223f486349,
          mid_getComponents_35b9f69c73993da4,
          mid_getComponents_9f0387d3e8c4d9e9,
          mid_getComponents_cc66809e3a6a3d13,
          mid_getComponents_2c20491308df7588,
          mid_getComponents_bf941b87708f3b2b,
          mid_getDate_aaa854c403487cf3,
          mid_hashCode_f2f64475e4580546,
          mid_isAfter_11db2450649d8b27,
          mid_isAfterOrEqualTo_11db2450649d8b27,
          mid_isBefore_11db2450649d8b27,
          mid_isBeforeOrEqualTo_11db2450649d8b27,
          mid_isBetween_2a7c66554721f167,
          mid_isBetweenOrEqualTo_2a7c66554721f167,
          mid_isCloseTo_e2b5c9891f8d97aa,
          mid_isEqualTo_11db2450649d8b27,
          mid_offsetFrom_8be30d4a50bd5048,
          mid_parseCCSDSCalendarSegmentedTimeCode_e10e3e8eda31bd08,
          mid_parseCCSDSCalendarSegmentedTimeCode_9e2750f6a79aa951,
          mid_parseCCSDSDaySegmentedTimeCode_9ef4a5d891ffe5be,
          mid_parseCCSDSDaySegmentedTimeCode_b7500d59046226f1,
          mid_parseCCSDSUnsegmentedTimeCode_fbf88d9a1537638e,
          mid_parseCCSDSUnsegmentedTimeCode_20277daed1c39013,
          mid_shiftedBy_a76f1ca2cc1b76e5,
          mid_timeScalesOffset_566ccd446b995a48,
          mid_toDate_f64dbfcfe4c641a8,
          mid_toString_0090f7797e403f43,
          mid_toString_498d3d20a2b4a836,
          mid_toString_90cbcc0b7a5ddae9,
          mid_toString_44577b71ebe5fefb,
          mid_toString_57a8fe1fee44b5a2,
          mid_toString_6c05df8a55d4fe6c,
          mid_toStringRfc3339_44577b71ebe5fefb,
          mid_toStringWithoutUtcOffset_5370e8d211a8715a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbsoluteDate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbsoluteDate(const AbsoluteDate& obj) : ::java::lang::Object(obj) {}

        static AbsoluteDate *ARBITRARY_EPOCH;
        static AbsoluteDate *BEIDOU_EPOCH;
        static AbsoluteDate *CCSDS_EPOCH;
        static AbsoluteDate *FIFTIES_EPOCH;
        static AbsoluteDate *FUTURE_INFINITY;
        static AbsoluteDate *GALILEO_EPOCH;
        static AbsoluteDate *GLONASS_EPOCH;
        static AbsoluteDate *GPS_EPOCH;
        static AbsoluteDate *IRNSS_EPOCH;
        static AbsoluteDate *J2000_EPOCH;
        static AbsoluteDate *JAVA_EPOCH;
        static AbsoluteDate *JULIAN_EPOCH;
        static AbsoluteDate *MODIFIED_JULIAN_EPOCH;
        static AbsoluteDate *PAST_INFINITY;
        static AbsoluteDate *QZSS_EPOCH;

        AbsoluteDate();
        AbsoluteDate(const AbsoluteDate &, jdouble);
        AbsoluteDate(const ::java::lang::String &, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(const ::java::util::Date &, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(const ::org::orekit::time::DateTimeComponents &, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(const AbsoluteDate &, jdouble, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(jint, const ::org::orekit::time::Month &, jint, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(jint, jint, jint, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(jint, const ::org::orekit::time::Month &, jint, jint, jint, jdouble, const ::org::orekit::time::TimeScale &);
        AbsoluteDate(jint, jint, jint, jint, jint, jdouble, const ::org::orekit::time::TimeScale &);

        jint compareTo(const AbsoluteDate &) const;
        static AbsoluteDate createBesselianEpoch(jdouble);
        static AbsoluteDate createJDDate(jint, jdouble, const ::org::orekit::time::TimeScale &);
        static AbsoluteDate createJulianEpoch(jdouble);
        static AbsoluteDate createMJDDate(jint, jdouble, const ::org::orekit::time::TimeScale &);
        jdouble durationFrom(const AbsoluteDate &) const;
        jboolean equals(const ::java::lang::Object &) const;
        ::org::orekit::time::DateTimeComponents getComponents(const ::java::util::TimeZone &) const;
        ::org::orekit::time::DateTimeComponents getComponents(jint) const;
        ::org::orekit::time::DateTimeComponents getComponents(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::DateTimeComponents getComponents(const ::java::util::TimeZone &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::DateTimeComponents getComponents(jint, const ::org::orekit::time::TimeScale &) const;
        AbsoluteDate getDate() const;
        jint hashCode() const;
        jboolean isAfter(const ::org::orekit::time::TimeStamped &) const;
        jboolean isAfterOrEqualTo(const ::org::orekit::time::TimeStamped &) const;
        jboolean isBefore(const ::org::orekit::time::TimeStamped &) const;
        jboolean isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped &) const;
        jboolean isBetween(const ::org::orekit::time::TimeStamped &, const ::org::orekit::time::TimeStamped &) const;
        jboolean isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped &, const ::org::orekit::time::TimeStamped &) const;
        jboolean isCloseTo(const ::org::orekit::time::TimeStamped &, jdouble) const;
        jboolean isEqualTo(const ::org::orekit::time::TimeStamped &) const;
        jdouble offsetFrom(const AbsoluteDate &, const ::org::orekit::time::TimeScale &) const;
        static AbsoluteDate parseCCSDSCalendarSegmentedTimeCode(jbyte, const JArray< jbyte > &);
        static AbsoluteDate parseCCSDSCalendarSegmentedTimeCode(jbyte, const JArray< jbyte > &, const ::org::orekit::time::TimeScale &);
        static AbsoluteDate parseCCSDSDaySegmentedTimeCode(jbyte, const JArray< jbyte > &, const ::org::orekit::time::DateComponents &);
        static AbsoluteDate parseCCSDSDaySegmentedTimeCode(jbyte, const JArray< jbyte > &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeScale &);
        static AbsoluteDate parseCCSDSUnsegmentedTimeCode(jbyte, jbyte, const JArray< jbyte > &, const AbsoluteDate &);
        static AbsoluteDate parseCCSDSUnsegmentedTimeCode(jbyte, jbyte, const JArray< jbyte > &, const AbsoluteDate &, const AbsoluteDate &);
        AbsoluteDate shiftedBy(jdouble) const;
        jdouble timeScalesOffset(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScale &) const;
        ::java::util::Date toDate(const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString() const;
        ::java::lang::String toString(const ::java::util::TimeZone &) const;
        ::java::lang::String toString(jint) const;
        ::java::lang::String toString(const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString(const ::java::util::TimeZone &, const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString(jint, const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toStringRfc3339(const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbsoluteDate);
      extern PyTypeObject *PY_TYPE(AbsoluteDate);

      class t_AbsoluteDate {
      public:
        PyObject_HEAD
        AbsoluteDate object;
        static PyObject *wrap_Object(const AbsoluteDate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
