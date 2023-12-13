#ifndef org_orekit_time_AbsoluteDate_H
#define org_orekit_time_AbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class Month;
      class DateComponents;
      class DateTimeComponents;
      class AbsoluteDate;
      class TimeScale;
      class TimeShiftable;
      class TimeComponents;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_3dd4638451e09a7f,
          mid_init$_11d3b8f951ce80b4,
          mid_init$_5b216217265d5689,
          mid_init$_f8cb8221f5deec4f,
          mid_init$_2cfdd011f87d504e,
          mid_init$_b74a9688dab67f58,
          mid_init$_20870adf7ac3b4b6,
          mid_init$_e37b6ded3f6fdb52,
          mid_init$_02464ab2e4717549,
          mid_init$_6293b4461c3682a8,
          mid_init$_15548f264fdf4525,
          mid_compareTo_b977b1a10a6965aa,
          mid_createBesselianEpoch_f359a0110559347a,
          mid_createJDDate_c74dd3c2485745ab,
          mid_createJulianEpoch_f359a0110559347a,
          mid_createMJDDate_c74dd3c2485745ab,
          mid_durationFrom_fd347811007a6ba3,
          mid_equals_460c5e2d9d51c6cc,
          mid_getComponents_f1755ec8736bd41a,
          mid_getComponents_d9c22a5ed8c1b9d3,
          mid_getComponents_cddbcc31a262c398,
          mid_getComponents_bcf6d80061968f64,
          mid_getComponents_55a0c967e6b1dc4d,
          mid_getDate_c325492395d89b24,
          mid_hashCode_55546ef6a647f39b,
          mid_isAfter_c1fdba35b878b1a3,
          mid_isAfterOrEqualTo_c1fdba35b878b1a3,
          mid_isBefore_c1fdba35b878b1a3,
          mid_isBeforeOrEqualTo_c1fdba35b878b1a3,
          mid_isBetween_a75d26361b05f747,
          mid_isBetweenOrEqualTo_a75d26361b05f747,
          mid_isCloseTo_b82d9df53d2a5740,
          mid_isEqualTo_c1fdba35b878b1a3,
          mid_offsetFrom_dffb854ad9e23e35,
          mid_parseCCSDSCalendarSegmentedTimeCode_b392b4c866ec17ce,
          mid_parseCCSDSCalendarSegmentedTimeCode_4874a61101431aa6,
          mid_parseCCSDSDaySegmentedTimeCode_56a54f073f526719,
          mid_parseCCSDSDaySegmentedTimeCode_2c9f1cd11abb7e73,
          mid_parseCCSDSUnsegmentedTimeCode_b6a19ae5f56d62e1,
          mid_parseCCSDSUnsegmentedTimeCode_66e9d775e6061a31,
          mid_shiftedBy_f359a0110559347a,
          mid_timeScalesOffset_ace223435aa25aa4,
          mid_toDate_d9f82c938588e1de,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toString_50f849f33c9b8343,
          mid_toString_2a9bffd3d5397f7c,
          mid_toString_2ee13d9bd10373d0,
          mid_toString_53541367a5869def,
          mid_toString_23096d7934eceeb9,
          mid_toStringRfc3339_2ee13d9bd10373d0,
          mid_toStringWithoutUtcOffset_69e7a8b46a5608a0,
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
