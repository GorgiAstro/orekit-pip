#ifndef org_orekit_time_FieldAbsoluteDate_H
#define org_orekit_time_FieldAbsoluteDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeComponents;
      class TimeScales;
      class TimeScale;
      class DateTimeComponents;
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class FieldTimeShiftable;
      class DateComponents;
      class Month;
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
          mid_init$_a44abdd035f01345,
          mid_init$_76cf634551536b39,
          mid_init$_f8feb5512ae09c3a,
          mid_init$_87313c4940a4af73,
          mid_init$_e0edad729455a6ea,
          mid_init$_9f202e185e21bf7a,
          mid_init$_bc254f060c9e5863,
          mid_init$_10122be5ff70d200,
          mid_init$_c1900d9d51c495cc,
          mid_init$_cad4237db4569839,
          mid_init$_d163f863f1d292ef,
          mid_init$_7042cf53c50aaff7,
          mid_init$_9596bd8655a1c951,
          mid_init$_88d79fdb1b7e0c80,
          mid_init$_01be167982bcb2af,
          mid_compareTo_23ced097258e06b3,
          mid_createBesselianEpoch_7e3a2932d2ce0a9d,
          mid_createBesselianEpoch_c1abb2cb5c3d5e1f,
          mid_createGPSDate_e1933490c09b1d85,
          mid_createGPSDate_b3052b1ff0a4369a,
          mid_createJDDate_b3052b1ff0a4369a,
          mid_createJulianEpoch_7e3a2932d2ce0a9d,
          mid_createJulianEpoch_c1abb2cb5c3d5e1f,
          mid_createMJDDate_b3052b1ff0a4369a,
          mid_durationFrom_38c3d70f28fa857a,
          mid_durationFrom_cf010978f3c5a913,
          mid_equals_72faff9b05f5ed5e,
          mid_getArbitraryEpoch_196c311b66ae5994,
          mid_getCCSDSEpoch_196c311b66ae5994,
          mid_getComponents_2fdd961225d82a4c,
          mid_getComponents_25a98438943eaa69,
          mid_getComponents_b13d0c91d0170882,
          mid_getComponents_d96f0e789f74ae85,
          mid_getComponents_5ffda85291c2dfbf,
          mid_getDate_1fea28374011eef5,
          mid_getField_577649682b9910c1,
          mid_getFiftiesEpoch_196c311b66ae5994,
          mid_getFutureInfinity_196c311b66ae5994,
          mid_getGPSEpoch_196c311b66ae5994,
          mid_getGalileoEpoch_196c311b66ae5994,
          mid_getJ2000Epoch_196c311b66ae5994,
          mid_getJavaEpoch_196c311b66ae5994,
          mid_getJulianEpoch_196c311b66ae5994,
          mid_getModifiedJulianEpoch_196c311b66ae5994,
          mid_getPastInfinity_196c311b66ae5994,
          mid_hasZeroField_eee3de00fe971136,
          mid_hashCode_d6ab429752e7c267,
          mid_isAfter_8f105d42924f7753,
          mid_isAfterOrEqualTo_8f105d42924f7753,
          mid_isBefore_8f105d42924f7753,
          mid_isBeforeOrEqualTo_8f105d42924f7753,
          mid_isBetween_5e6a105e438a5b75,
          mid_isBetweenOrEqualTo_5e6a105e438a5b75,
          mid_isCloseTo_9286adaa7d1ceee8,
          mid_isEqualTo_8f105d42924f7753,
          mid_offsetFrom_5afcdde00ca83693,
          mid_parseCCSDSCalendarSegmentedTimeCode_c1b5e65fac323a15,
          mid_parseCCSDSCalendarSegmentedTimeCode_116025de7b57618a,
          mid_parseCCSDSDaySegmentedTimeCode_2d730b32cd00a0a4,
          mid_parseCCSDSDaySegmentedTimeCode_dca94621e81dfa88,
          mid_parseCCSDSUnsegmentedTimeCode_12d77e232200be17,
          mid_parseCCSDSUnsegmentedTimeCode_114b611ac0a9a6d1,
          mid_shiftedBy_e9a60550ba8fc941,
          mid_shiftedBy_7e3a2932d2ce0a9d,
          mid_timeScalesOffset_0d01f1e5301a57a8,
          mid_toAbsoluteDate_80e11148db499dda,
          mid_toDate_d32c3ee19e93b5d7,
          mid_toString_d2c8eb4129821f0e,
          mid_toString_bccddd047a056900,
          mid_toString_c81987d6b0e2977a,
          mid_toString_244ea083ab9940d6,
          mid_toString_37e3c4b01d3d6d8c,
          mid_toString_cf32da3deabe563d,
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
