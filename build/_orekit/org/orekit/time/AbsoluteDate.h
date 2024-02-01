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
    namespace time {
      class TimeStamped;
      class TimeShiftable;
      class AbsoluteDate;
      class DateTimeComponents;
      class TimeComponents;
      class DateComponents;
      class Month;
      class TimeScale;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_6ed2c1cd7b0b1c75,
          mid_init$_cd893bf7ce63395f,
          mid_init$_d5834c87a5a3544e,
          mid_init$_60fa8bd5489a8c63,
          mid_init$_c23f650143a3c277,
          mid_init$_9092159e84dd71b7,
          mid_init$_afee9a73b21976b9,
          mid_init$_68c54ee576452cb6,
          mid_init$_c51d54f829a0f4e3,
          mid_init$_91854a4053b74756,
          mid_init$_ef360efc04cd8a23,
          mid_compareTo_94772beff3ac8a91,
          mid_createBesselianEpoch_d2854c25a21df51f,
          mid_createJDDate_30cdaa3feb824afa,
          mid_createJulianEpoch_d2854c25a21df51f,
          mid_createMJDDate_30cdaa3feb824afa,
          mid_durationFrom_209f08246d708042,
          mid_equals_72faff9b05f5ed5e,
          mid_getComponents_2fdd961225d82a4c,
          mid_getComponents_25a98438943eaa69,
          mid_getComponents_b13d0c91d0170882,
          mid_getComponents_d96f0e789f74ae85,
          mid_getComponents_5ffda85291c2dfbf,
          mid_getDate_80e11148db499dda,
          mid_hashCode_d6ab429752e7c267,
          mid_isAfter_0c6aaa062653caeb,
          mid_isAfterOrEqualTo_0c6aaa062653caeb,
          mid_isBefore_0c6aaa062653caeb,
          mid_isBeforeOrEqualTo_0c6aaa062653caeb,
          mid_isBetween_7f89cd9ec90d050f,
          mid_isBetweenOrEqualTo_7f89cd9ec90d050f,
          mid_isCloseTo_7997f81ce0846dd1,
          mid_isEqualTo_0c6aaa062653caeb,
          mid_offsetFrom_5168f1ade9606d8a,
          mid_parseCCSDSCalendarSegmentedTimeCode_531c4a68f7385772,
          mid_parseCCSDSCalendarSegmentedTimeCode_3823428296f8e7be,
          mid_parseCCSDSDaySegmentedTimeCode_23eee6c4ecc7e94c,
          mid_parseCCSDSDaySegmentedTimeCode_9af66f6b94891ed9,
          mid_parseCCSDSUnsegmentedTimeCode_b67c08f71bf51dc0,
          mid_parseCCSDSUnsegmentedTimeCode_5fe83c202d6ccb1a,
          mid_shiftedBy_d2854c25a21df51f,
          mid_timeScalesOffset_383941efa838d5cd,
          mid_toDate_d32c3ee19e93b5d7,
          mid_toString_d2c8eb4129821f0e,
          mid_toString_bccddd047a056900,
          mid_toString_c81987d6b0e2977a,
          mid_toString_244ea083ab9940d6,
          mid_toString_37e3c4b01d3d6d8c,
          mid_toString_cf32da3deabe563d,
          mid_toStringRfc3339_244ea083ab9940d6,
          mid_toStringWithoutUtcOffset_4b49368216da3f34,
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
