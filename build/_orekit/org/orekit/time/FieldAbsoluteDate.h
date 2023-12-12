#ifndef org_orekit_time_FieldAbsoluteDate_H
#define org_orekit_time_FieldAbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class Month;
      class TimeScales;
      class TimeComponents;
      class FieldTimeStamped;
      class TimeScale;
      class DateTimeComponents;
      class FieldTimeShiftable;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace util {
    class TimeZone;
    class Date;
  }
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldAbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_init$_1bbee3d06f7c5065,
          mid_init$_85e0a06462b69ab3,
          mid_init$_0d6abe845bacb67a,
          mid_init$_7734bfbaeec9a994,
          mid_init$_9921305f8dc21751,
          mid_init$_c7293f211aab4636,
          mid_init$_bb53594075123b8d,
          mid_init$_43952f00b38d6ba4,
          mid_init$_c7aa3857c260a82c,
          mid_init$_8fd6f9f5473f97b8,
          mid_init$_883c886652b7fa93,
          mid_init$_5751b9b17174efe6,
          mid_init$_88cabff054342170,
          mid_init$_2fed7ff381bacd7d,
          mid_compareTo_2c4b5d48930cdcbe,
          mid_createBesselianEpoch_61a24ec56865ba5a,
          mid_createBesselianEpoch_3a631661f16b3f92,
          mid_createGPSDate_eb2b24337ef48f88,
          mid_createGPSDate_0ae93e4f290d2ec8,
          mid_createJDDate_0ae93e4f290d2ec8,
          mid_createJulianEpoch_61a24ec56865ba5a,
          mid_createJulianEpoch_3a631661f16b3f92,
          mid_createMJDDate_0ae93e4f290d2ec8,
          mid_durationFrom_f26f2b257a5d6bd8,
          mid_durationFrom_b884068a2c99f6ca,
          mid_equals_221e8e85cb385209,
          mid_getArbitraryEpoch_470a0a4ae1d6b01f,
          mid_getCCSDSEpoch_470a0a4ae1d6b01f,
          mid_getComponents_3d17ce9b4bd527d4,
          mid_getComponents_30c7c22d393efa2f,
          mid_getComponents_bec5aa633870750e,
          mid_getComponents_6a219c20dbc2c5fa,
          mid_getComponents_86fc1a29a4250881,
          mid_getDate_f1fe4daf77c66560,
          mid_getField_20f98801541dcec1,
          mid_getFiftiesEpoch_470a0a4ae1d6b01f,
          mid_getFutureInfinity_470a0a4ae1d6b01f,
          mid_getGPSEpoch_470a0a4ae1d6b01f,
          mid_getGalileoEpoch_470a0a4ae1d6b01f,
          mid_getJ2000Epoch_470a0a4ae1d6b01f,
          mid_getJavaEpoch_470a0a4ae1d6b01f,
          mid_getJulianEpoch_470a0a4ae1d6b01f,
          mid_getModifiedJulianEpoch_470a0a4ae1d6b01f,
          mid_getPastInfinity_470a0a4ae1d6b01f,
          mid_hasZeroField_89b302893bdbe1f1,
          mid_hashCode_412668abc8d889e9,
          mid_isAfter_c65f562a83da9015,
          mid_isAfterOrEqualTo_c65f562a83da9015,
          mid_isBefore_c65f562a83da9015,
          mid_isBeforeOrEqualTo_c65f562a83da9015,
          mid_isBetween_07d37590e1896ded,
          mid_isBetweenOrEqualTo_07d37590e1896ded,
          mid_isCloseTo_a25a12b2bf17776e,
          mid_isEqualTo_c65f562a83da9015,
          mid_offsetFrom_1c4dc6e8c897d793,
          mid_parseCCSDSCalendarSegmentedTimeCode_a0fe40f35e722820,
          mid_parseCCSDSCalendarSegmentedTimeCode_487fcc2baf7a29dc,
          mid_parseCCSDSDaySegmentedTimeCode_f9ef0697e753cc12,
          mid_parseCCSDSDaySegmentedTimeCode_ced6e15e6c897faf,
          mid_parseCCSDSUnsegmentedTimeCode_cd870d76f00cab8d,
          mid_parseCCSDSUnsegmentedTimeCode_5574f2d8dd0b16cd,
          mid_shiftedBy_187c2c1a72864876,
          mid_shiftedBy_61a24ec56865ba5a,
          mid_timeScalesOffset_b8cb903322b7b4ce,
          mid_toAbsoluteDate_7a97f7e149e79afb,
          mid_toDate_56cd5dd9fbecaa68,
          mid_toString_3cffd47377eca18a,
          mid_toString_90a03355aeb11bcb,
          mid_toString_0f10d4a5e06f61c0,
          mid_toString_8873a127a4f312ad,
          mid_toString_d12db31f920e6896,
          mid_toString_7061b71d91a23f82,
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
