#ifndef org_orekit_time_FieldAbsoluteDate_H
#define org_orekit_time_FieldAbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
      class DateComponents;
      class DateTimeComponents;
      class Month;
      class TimeScales;
      class TimeComponents;
      class AbsoluteDate;
      class FieldTimeStamped;
      class TimeScale;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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
          mid_init$_02ab84aa7626616d,
          mid_init$_4387b1dbdd267914,
          mid_init$_a7ddb1c79d43628c,
          mid_init$_ebdc6a53d32afca8,
          mid_init$_71061615675bed5f,
          mid_init$_762e7e9d1497d452,
          mid_init$_3b93232fc57844bb,
          mid_init$_49dac8ebd492be19,
          mid_init$_df07c37818eb8e54,
          mid_init$_a47e9ffa5826f166,
          mid_init$_538f64338eae55aa,
          mid_init$_5f264378b55625da,
          mid_init$_e87a89da6e84ddfb,
          mid_init$_2ffdfd9497155057,
          mid_init$_e18844f95d8168e8,
          mid_compareTo_e6b8e60343f2c829,
          mid_createBesselianEpoch_22e288de5d0d08a6,
          mid_createBesselianEpoch_e2c3e63dd8fc0e7e,
          mid_createGPSDate_db50e946f5c21b02,
          mid_createGPSDate_717894900b01f676,
          mid_createJDDate_717894900b01f676,
          mid_createJulianEpoch_22e288de5d0d08a6,
          mid_createJulianEpoch_e2c3e63dd8fc0e7e,
          mid_createMJDDate_717894900b01f676,
          mid_durationFrom_e518044671da9d06,
          mid_durationFrom_140b8964300ddedf,
          mid_equals_460c5e2d9d51c6cc,
          mid_getArbitraryEpoch_0f155bddbb3a3b37,
          mid_getCCSDSEpoch_0f155bddbb3a3b37,
          mid_getComponents_f1755ec8736bd41a,
          mid_getComponents_d9c22a5ed8c1b9d3,
          mid_getComponents_cddbcc31a262c398,
          mid_getComponents_bcf6d80061968f64,
          mid_getComponents_55a0c967e6b1dc4d,
          mid_getDate_fa23a4301b9c83e7,
          mid_getField_04d1f63e17d5c5d4,
          mid_getFiftiesEpoch_0f155bddbb3a3b37,
          mid_getFutureInfinity_0f155bddbb3a3b37,
          mid_getGPSEpoch_0f155bddbb3a3b37,
          mid_getGalileoEpoch_0f155bddbb3a3b37,
          mid_getJ2000Epoch_0f155bddbb3a3b37,
          mid_getJavaEpoch_0f155bddbb3a3b37,
          mid_getJulianEpoch_0f155bddbb3a3b37,
          mid_getModifiedJulianEpoch_0f155bddbb3a3b37,
          mid_getPastInfinity_0f155bddbb3a3b37,
          mid_hasZeroField_9ab94ac1dc23b105,
          mid_hashCode_55546ef6a647f39b,
          mid_isAfter_42c48eacdacc9e40,
          mid_isAfterOrEqualTo_42c48eacdacc9e40,
          mid_isBefore_42c48eacdacc9e40,
          mid_isBeforeOrEqualTo_42c48eacdacc9e40,
          mid_isBetween_68c500bf0ead12d2,
          mid_isBetweenOrEqualTo_68c500bf0ead12d2,
          mid_isCloseTo_7ce159eac22f1c27,
          mid_isEqualTo_42c48eacdacc9e40,
          mid_offsetFrom_b495c108ce0c2388,
          mid_parseCCSDSCalendarSegmentedTimeCode_8191b07e49496366,
          mid_parseCCSDSCalendarSegmentedTimeCode_1cc8d2c297ef1b3e,
          mid_parseCCSDSDaySegmentedTimeCode_2adbe32ae75d9374,
          mid_parseCCSDSDaySegmentedTimeCode_d607d28a616a2875,
          mid_parseCCSDSUnsegmentedTimeCode_3d850b7fd971ba79,
          mid_parseCCSDSUnsegmentedTimeCode_20e7c5fe6631c280,
          mid_shiftedBy_1aa39642325a21d5,
          mid_shiftedBy_22e288de5d0d08a6,
          mid_timeScalesOffset_1fbf0d3b375287ff,
          mid_toAbsoluteDate_c325492395d89b24,
          mid_toDate_d9f82c938588e1de,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toString_50f849f33c9b8343,
          mid_toString_2a9bffd3d5397f7c,
          mid_toString_2ee13d9bd10373d0,
          mid_toString_53541367a5869def,
          mid_toString_23096d7934eceeb9,
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
