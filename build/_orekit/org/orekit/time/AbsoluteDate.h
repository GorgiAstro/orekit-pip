#ifndef org_orekit_time_AbsoluteDate_H
#define org_orekit_time_AbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class Month;
      class TimeComponents;
      class AbsoluteDate;
      class TimeShiftable;
      class DateTimeComponents;
      class TimeScale;
      class TimeStamped;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_f22bef3f7be90029,
          mid_init$_9dad16b11684277b,
          mid_init$_55e5f1b3a29334a2,
          mid_init$_6dfb12d5a27545cc,
          mid_init$_f8331eaca417ef63,
          mid_init$_25bf201e87e1be4f,
          mid_init$_42d8ba320f7d96d6,
          mid_init$_89ba70c19cd9d6f2,
          mid_init$_49798512fb941e6e,
          mid_init$_bc0e51dc8cdf1c18,
          mid_init$_a86eaa44a12a63d4,
          mid_compareTo_7488878b3477b7fd,
          mid_createBesselianEpoch_8ef471ef852a9678,
          mid_createJDDate_cb84ec6d6733b717,
          mid_createJulianEpoch_8ef471ef852a9678,
          mid_createMJDDate_cb84ec6d6733b717,
          mid_durationFrom_b0b988f941da47d8,
          mid_equals_221e8e85cb385209,
          mid_getComponents_3d17ce9b4bd527d4,
          mid_getComponents_30c7c22d393efa2f,
          mid_getComponents_bec5aa633870750e,
          mid_getComponents_6a219c20dbc2c5fa,
          mid_getComponents_86fc1a29a4250881,
          mid_getDate_7a97f7e149e79afb,
          mid_hashCode_412668abc8d889e9,
          mid_isAfter_f2c75e6f52aef5dd,
          mid_isAfterOrEqualTo_f2c75e6f52aef5dd,
          mid_isBefore_f2c75e6f52aef5dd,
          mid_isBeforeOrEqualTo_f2c75e6f52aef5dd,
          mid_isBetween_d6602ae19eaa5ac7,
          mid_isBetweenOrEqualTo_d6602ae19eaa5ac7,
          mid_isCloseTo_97fc7c48f8f0cf87,
          mid_isEqualTo_f2c75e6f52aef5dd,
          mid_offsetFrom_0ea0045c89a146a3,
          mid_parseCCSDSCalendarSegmentedTimeCode_8bb8ce1d4dd296c5,
          mid_parseCCSDSCalendarSegmentedTimeCode_2c38a6bc76a8acbb,
          mid_parseCCSDSDaySegmentedTimeCode_3c0c942d43346f72,
          mid_parseCCSDSDaySegmentedTimeCode_2aebe8b98d76c346,
          mid_parseCCSDSUnsegmentedTimeCode_03715ef724fe2573,
          mid_parseCCSDSUnsegmentedTimeCode_6a1c2be46814e755,
          mid_shiftedBy_8ef471ef852a9678,
          mid_timeScalesOffset_34275bd5d1d6c64e,
          mid_toDate_56cd5dd9fbecaa68,
          mid_toString_3cffd47377eca18a,
          mid_toString_90a03355aeb11bcb,
          mid_toString_0f10d4a5e06f61c0,
          mid_toString_8873a127a4f312ad,
          mid_toString_d12db31f920e6896,
          mid_toString_7061b71d91a23f82,
          mid_toStringRfc3339_8873a127a4f312ad,
          mid_toStringWithoutUtcOffset_107bcc8c7bfc53c5,
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
