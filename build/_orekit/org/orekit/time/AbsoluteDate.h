#ifndef org_orekit_time_AbsoluteDate_H
#define org_orekit_time_AbsoluteDate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Date;
    class TimeZone;
  }
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
      class DateTimeComponents;
      class TimeComponents;
      class AbsoluteDate;
      class TimeStamped;
      class Month;
      class DateComponents;
      class TimeShiftable;
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_fdc72bfdba154d74,
          mid_init$_217e31dbcd6363d1,
          mid_init$_d111fa84265c2749,
          mid_init$_d6d5cef8441f1f00,
          mid_init$_6941b33964069881,
          mid_init$_69730a518a1a7125,
          mid_init$_c114b429817309ad,
          mid_init$_c9cc7c1b4497e63c,
          mid_init$_269134779d52d6f6,
          mid_init$_6b167e52959fccc5,
          mid_init$_3bcf290ea7bfd98c,
          mid_compareTo_17efd3c2ea0eaff7,
          mid_createBesselianEpoch_149a9211a037d799,
          mid_createJDDate_d403671c94e69120,
          mid_createJulianEpoch_149a9211a037d799,
          mid_createMJDDate_d403671c94e69120,
          mid_durationFrom_bf1d7732f1acb697,
          mid_equals_65c7d273e80d497a,
          mid_getComponents_d6544458f233293b,
          mid_getComponents_f3a5c409801be8e9,
          mid_getComponents_b889282ad7e843b0,
          mid_getComponents_279a1fb73805d842,
          mid_getComponents_b4e48014e875ddbb,
          mid_getDate_85703d13e302437e,
          mid_hashCode_570ce0828f81a2c1,
          mid_isAfter_fc6addcd2c525286,
          mid_isAfterOrEqualTo_fc6addcd2c525286,
          mid_isBefore_fc6addcd2c525286,
          mid_isBeforeOrEqualTo_fc6addcd2c525286,
          mid_isBetween_cd0279715c09e3dd,
          mid_isBetweenOrEqualTo_cd0279715c09e3dd,
          mid_isCloseTo_c36652ecf6f0e919,
          mid_isEqualTo_fc6addcd2c525286,
          mid_offsetFrom_3ee179c6abb41546,
          mid_parseCCSDSCalendarSegmentedTimeCode_2b855e8dba6e6968,
          mid_parseCCSDSCalendarSegmentedTimeCode_4cb1c9d3290946bc,
          mid_parseCCSDSDaySegmentedTimeCode_5a3cd68164459bb3,
          mid_parseCCSDSDaySegmentedTimeCode_c54996f02cc81be6,
          mid_parseCCSDSUnsegmentedTimeCode_0c71200b8a824263,
          mid_parseCCSDSUnsegmentedTimeCode_53d0c1b28083adc6,
          mid_shiftedBy_149a9211a037d799,
          mid_timeScalesOffset_b035f84edb8c0da4,
          mid_toDate_dc536aab1e2c5013,
          mid_toString_11b109bd155ca898,
          mid_toString_54668190d292adde,
          mid_toString_8cc8a10236476f23,
          mid_toString_e3ec59f6a2ed4d7c,
          mid_toString_b931e891aeceaf16,
          mid_toString_ed4d62dceac38f41,
          mid_toStringRfc3339_e3ec59f6a2ed4d7c,
          mid_toStringWithoutUtcOffset_79c6636f9f7e94fe,
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
