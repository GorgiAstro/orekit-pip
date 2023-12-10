#ifndef org_orekit_time_FieldAbsoluteDate_H
#define org_orekit_time_FieldAbsoluteDate_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class AbsoluteDate;
      class FieldTimeShiftable;
      class Month;
      class DateComponents;
      class FieldTimeStamped;
      class DateTimeComponents;
      class TimeComponents;
      class FieldAbsoluteDate;
      class TimeScale;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldAbsoluteDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_484998d88974267b,
          mid_init$_c6316b0aa0f1cff4,
          mid_init$_253621a7278b3102,
          mid_init$_560bb100a19ff026,
          mid_init$_15dd6ecec3fa3822,
          mid_init$_1ee41df68a12de0d,
          mid_init$_4c401f76448cafd8,
          mid_init$_b1985c50995fed88,
          mid_init$_accca367fd2836e4,
          mid_init$_2b0f3313fc1f1d56,
          mid_init$_71f13a000c355cd6,
          mid_init$_a169c1d292e93a11,
          mid_init$_0efcb67a9580bba2,
          mid_init$_3bf19cbbb4abec10,
          mid_init$_004c165304442a0a,
          mid_compareTo_1e7a6890919ea8bb,
          mid_createBesselianEpoch_1975a0ad09e731d5,
          mid_createBesselianEpoch_ffb0d14929bb0e7b,
          mid_createGPSDate_c7287fc8652e4072,
          mid_createGPSDate_e08712afe0e9127d,
          mid_createJDDate_e08712afe0e9127d,
          mid_createJulianEpoch_1975a0ad09e731d5,
          mid_createJulianEpoch_ffb0d14929bb0e7b,
          mid_createMJDDate_e08712afe0e9127d,
          mid_durationFrom_b48e5e8236744aca,
          mid_durationFrom_2a5f05be83ff251d,
          mid_equals_65c7d273e80d497a,
          mid_getArbitraryEpoch_5db4a75a42bc8059,
          mid_getCCSDSEpoch_5db4a75a42bc8059,
          mid_getComponents_d6544458f233293b,
          mid_getComponents_f3a5c409801be8e9,
          mid_getComponents_b889282ad7e843b0,
          mid_getComponents_279a1fb73805d842,
          mid_getComponents_b4e48014e875ddbb,
          mid_getDate_51da00d5b8a3b5df,
          mid_getField_5b28be2d3632a5dc,
          mid_getFiftiesEpoch_5db4a75a42bc8059,
          mid_getFutureInfinity_5db4a75a42bc8059,
          mid_getGPSEpoch_5db4a75a42bc8059,
          mid_getGalileoEpoch_5db4a75a42bc8059,
          mid_getJ2000Epoch_5db4a75a42bc8059,
          mid_getJavaEpoch_5db4a75a42bc8059,
          mid_getJulianEpoch_5db4a75a42bc8059,
          mid_getModifiedJulianEpoch_5db4a75a42bc8059,
          mid_getPastInfinity_5db4a75a42bc8059,
          mid_hasZeroField_b108b35ef48e27bd,
          mid_hashCode_570ce0828f81a2c1,
          mid_isAfter_d4d0cc6198150b12,
          mid_isAfterOrEqualTo_d4d0cc6198150b12,
          mid_isBefore_d4d0cc6198150b12,
          mid_isBeforeOrEqualTo_d4d0cc6198150b12,
          mid_isBetween_ffe1f3825a966e21,
          mid_isBetweenOrEqualTo_ffe1f3825a966e21,
          mid_isCloseTo_6942757036a60841,
          mid_isEqualTo_d4d0cc6198150b12,
          mid_offsetFrom_832c907dd0da9d67,
          mid_parseCCSDSCalendarSegmentedTimeCode_b27024900e752374,
          mid_parseCCSDSCalendarSegmentedTimeCode_33b9e0348f37f80d,
          mid_parseCCSDSDaySegmentedTimeCode_1e7a276cb7b92ed5,
          mid_parseCCSDSDaySegmentedTimeCode_113287b76ca39b11,
          mid_parseCCSDSUnsegmentedTimeCode_9bdef614b74efa9f,
          mid_parseCCSDSUnsegmentedTimeCode_19ff818b316ddad5,
          mid_shiftedBy_f9285ecfac057f19,
          mid_shiftedBy_1975a0ad09e731d5,
          mid_timeScalesOffset_c5a72d70ad4b89a5,
          mid_toAbsoluteDate_85703d13e302437e,
          mid_toDate_dc536aab1e2c5013,
          mid_toString_11b109bd155ca898,
          mid_toString_54668190d292adde,
          mid_toString_8cc8a10236476f23,
          mid_toString_e3ec59f6a2ed4d7c,
          mid_toString_b931e891aeceaf16,
          mid_toString_ed4d62dceac38f41,
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
