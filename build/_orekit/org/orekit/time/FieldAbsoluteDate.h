#ifndef org_orekit_time_FieldAbsoluteDate_H
#define org_orekit_time_FieldAbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScales;
      class FieldTimeShiftable;
      class DateTimeComponents;
      class DateComponents;
      class Month;
      class TimeScale;
      class TimeComponents;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
    class Comparable;
  }
  namespace util {
    class TimeZone;
    class Date;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldAbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_205c34b8e33cf33f,
          mid_init$_4755a82757aa97d9,
          mid_init$_ec524e87348c3a08,
          mid_init$_80058f185a6b4b35,
          mid_init$_2e02d11b2b84552b,
          mid_init$_d91841320b4d4f87,
          mid_init$_720ad314d22b945b,
          mid_init$_3d19303ecb965f91,
          mid_init$_9840df2f97486f45,
          mid_init$_bd22b120bed2ad7b,
          mid_init$_c09a15c281545dfb,
          mid_init$_dc1a59fc6ff312b6,
          mid_init$_6eca69ab117c5598,
          mid_init$_b45cd2005cdf72ee,
          mid_init$_232d890b1a0eab17,
          mid_compareTo_90583a249f651dc5,
          mid_createBesselianEpoch_b179475577cb34cc,
          mid_createBesselianEpoch_4fec374212b3e123,
          mid_createGPSDate_be9d571ff63cfdfb,
          mid_createGPSDate_65a00228a8497170,
          mid_createJDDate_65a00228a8497170,
          mid_createJulianEpoch_b179475577cb34cc,
          mid_createJulianEpoch_4fec374212b3e123,
          mid_createMJDDate_65a00228a8497170,
          mid_durationFrom_6d1712f09a3dbe55,
          mid_durationFrom_7bc0fd76ee915b72,
          mid_equals_229c87223f486349,
          mid_getArbitraryEpoch_f5242eafca7336d1,
          mid_getCCSDSEpoch_f5242eafca7336d1,
          mid_getComponents_35b9f69c73993da4,
          mid_getComponents_9f0387d3e8c4d9e9,
          mid_getComponents_cc66809e3a6a3d13,
          mid_getComponents_2c20491308df7588,
          mid_getComponents_bf941b87708f3b2b,
          mid_getDate_09b0a926600dfc14,
          mid_getField_70b4bbd3fa378d6b,
          mid_getFiftiesEpoch_f5242eafca7336d1,
          mid_getFutureInfinity_f5242eafca7336d1,
          mid_getGPSEpoch_f5242eafca7336d1,
          mid_getGalileoEpoch_f5242eafca7336d1,
          mid_getJ2000Epoch_f5242eafca7336d1,
          mid_getJavaEpoch_f5242eafca7336d1,
          mid_getJulianEpoch_f5242eafca7336d1,
          mid_getModifiedJulianEpoch_f5242eafca7336d1,
          mid_getPastInfinity_f5242eafca7336d1,
          mid_hasZeroField_e470b6d9e0d979db,
          mid_hashCode_f2f64475e4580546,
          mid_isAfter_99ba459ed031421b,
          mid_isAfterOrEqualTo_99ba459ed031421b,
          mid_isBefore_99ba459ed031421b,
          mid_isBeforeOrEqualTo_99ba459ed031421b,
          mid_isBetween_28a93535a0abcc76,
          mid_isBetweenOrEqualTo_28a93535a0abcc76,
          mid_isCloseTo_8549b0b631079127,
          mid_isEqualTo_99ba459ed031421b,
          mid_offsetFrom_56380e3faf4084f4,
          mid_parseCCSDSCalendarSegmentedTimeCode_96f4bfec3e132622,
          mid_parseCCSDSCalendarSegmentedTimeCode_76898e769dc3d563,
          mid_parseCCSDSDaySegmentedTimeCode_5b8f932902581419,
          mid_parseCCSDSDaySegmentedTimeCode_89b4cc857d22de7a,
          mid_parseCCSDSUnsegmentedTimeCode_49f89ce3b3385442,
          mid_parseCCSDSUnsegmentedTimeCode_7f8f89704ead9684,
          mid_shiftedBy_d47015dfb61dc025,
          mid_shiftedBy_b179475577cb34cc,
          mid_timeScalesOffset_a09629a2ff24a390,
          mid_toAbsoluteDate_aaa854c403487cf3,
          mid_toDate_f64dbfcfe4c641a8,
          mid_toString_0090f7797e403f43,
          mid_toString_498d3d20a2b4a836,
          mid_toString_90cbcc0b7a5ddae9,
          mid_toString_44577b71ebe5fefb,
          mid_toString_57a8fe1fee44b5a2,
          mid_toString_6c05df8a55d4fe6c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAbsoluteDate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAbsoluteDate(const FieldAbsoluteDate& obj) : ::java::lang::Object(obj) {}

        FieldAbsoluteDate(const ::org::hipparchus::Field &);
        FieldAbsoluteDate(const FieldAbsoluteDate &, jdouble);
        FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::org::orekit::time::AbsoluteDate &);
        FieldAbsoluteDate(const FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::java::util::Date &, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const FieldAbsoluteDate &, jdouble, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::org::orekit::time::DateTimeComponents &, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, jint, const ::org::orekit::time::Month &, jint, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, jint, jint, jint, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, jint, const ::org::orekit::time::Month &, jint, jint, jint, jdouble, const ::org::orekit::time::TimeScale &);
        FieldAbsoluteDate(const ::org::hipparchus::Field &, jint, jint, jint, jint, jint, jdouble, const ::org::orekit::time::TimeScale &);

        jint compareTo(const FieldAbsoluteDate &) const;
        static FieldAbsoluteDate createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement &);
        static FieldAbsoluteDate createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScales &);
        static FieldAbsoluteDate createGPSDate(jint, const ::org::hipparchus::CalculusFieldElement &);
        static FieldAbsoluteDate createGPSDate(jint, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScale &);
        static FieldAbsoluteDate createJDDate(jint, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScale &);
        static FieldAbsoluteDate createJulianEpoch(const ::org::hipparchus::CalculusFieldElement &);
        static FieldAbsoluteDate createJulianEpoch(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScales &);
        static FieldAbsoluteDate createMJDDate(jint, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScale &);
        ::org::hipparchus::CalculusFieldElement durationFrom(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement durationFrom(const FieldAbsoluteDate &) const;
        jboolean equals(const ::java::lang::Object &) const;
        static FieldAbsoluteDate getArbitraryEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getCCSDSEpoch(const ::org::hipparchus::Field &);
        ::org::orekit::time::DateTimeComponents getComponents(const ::java::util::TimeZone &) const;
        ::org::orekit::time::DateTimeComponents getComponents(jint) const;
        ::org::orekit::time::DateTimeComponents getComponents(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::DateTimeComponents getComponents(const ::java::util::TimeZone &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::DateTimeComponents getComponents(jint, const ::org::orekit::time::TimeScale &) const;
        FieldAbsoluteDate getDate() const;
        ::org::hipparchus::Field getField() const;
        static FieldAbsoluteDate getFiftiesEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getFutureInfinity(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getGPSEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getGalileoEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getJ2000Epoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getJavaEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getJulianEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getModifiedJulianEpoch(const ::org::hipparchus::Field &);
        static FieldAbsoluteDate getPastInfinity(const ::org::hipparchus::Field &);
        jboolean hasZeroField() const;
        jint hashCode() const;
        jboolean isAfter(const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isBefore(const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isBetween(const ::org::orekit::time::FieldTimeStamped &, const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped &, const ::org::orekit::time::FieldTimeStamped &) const;
        jboolean isCloseTo(const ::org::orekit::time::FieldTimeStamped &, jdouble) const;
        jboolean isEqualTo(const ::org::orekit::time::FieldTimeStamped &) const;
        ::org::hipparchus::CalculusFieldElement offsetFrom(const FieldAbsoluteDate &, const ::org::orekit::time::TimeScale &) const;
        FieldAbsoluteDate parseCCSDSCalendarSegmentedTimeCode(jbyte, const JArray< jbyte > &) const;
        FieldAbsoluteDate parseCCSDSCalendarSegmentedTimeCode(jbyte, const JArray< jbyte > &, const ::org::orekit::time::TimeScale &) const;
        static FieldAbsoluteDate parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field &, jbyte, const JArray< jbyte > &, const ::org::orekit::time::DateComponents &);
        static FieldAbsoluteDate parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field &, jbyte, const JArray< jbyte > &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeScale &);
        static FieldAbsoluteDate parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field &, jbyte, jbyte, const JArray< jbyte > &, const FieldAbsoluteDate &);
        static FieldAbsoluteDate parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field &, jbyte, jbyte, const JArray< jbyte > &, const FieldAbsoluteDate &, const FieldAbsoluteDate &);
        FieldAbsoluteDate shiftedBy(jdouble) const;
        FieldAbsoluteDate shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::hipparchus::CalculusFieldElement timeScalesOffset(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::AbsoluteDate toAbsoluteDate() const;
        ::java::util::Date toDate(const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString() const;
        ::java::lang::String toString(const ::java::util::TimeZone &) const;
        ::java::lang::String toString(jint) const;
        ::java::lang::String toString(const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString(const ::java::util::TimeZone &, const ::org::orekit::time::TimeScale &) const;
        ::java::lang::String toString(jint, const ::org::orekit::time::TimeScale &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldAbsoluteDate);
      extern PyTypeObject *PY_TYPE(FieldAbsoluteDate);

      class t_FieldAbsoluteDate {
      public:
        PyObject_HEAD
        FieldAbsoluteDate object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAbsoluteDate *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAbsoluteDate&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAbsoluteDate&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
