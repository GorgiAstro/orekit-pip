#ifndef org_orekit_utils_units_Unit_H
#define org_orekit_utils_units_Unit_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
  namespace hipparchus {
    namespace fraction {
      class Fraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        class Unit : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b16b3ca24ef84a46,
            mid_alias_6064fb71696445b4,
            mid_divide_b7cb09052488414f,
            mid_ensureCompatible_b97989e6df290f92,
            mid_equals_221e8e85cb385209,
            mid_fromSI_7bf26ec4ddf8c9fa,
            mid_fromSI_7e960cd6eee376d8,
            mid_getAngle_78ed58163a805805,
            mid_getCurrent_78ed58163a805805,
            mid_getLength_78ed58163a805805,
            mid_getMass_78ed58163a805805,
            mid_getName_3cffd47377eca18a,
            mid_getScale_557b8123390d8d0c,
            mid_getTime_78ed58163a805805,
            mid_hashCode_412668abc8d889e9,
            mid_multiply_b7cb09052488414f,
            mid_parse_6064fb71696445b4,
            mid_power_83fc4153c8f1d423,
            mid_sameDimension_3afc691233085be6,
            mid_sameDimensionSI_3267fc1a8500bfc2,
            mid_scale_29d901a5b3134e99,
            mid_sqrt_6064fb71696445b4,
            mid_toSI_7bf26ec4ddf8c9fa,
            mid_toSI_7e960cd6eee376d8,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Unit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Unit(const Unit& obj) : ::java::lang::Object(obj) {}

          static Unit *AMPERE;
          static Unit *ARC_MINUTE;
          static Unit *ARC_SECOND;
          static Unit *BAR;
          static Unit *COULOMB;
          static Unit *DAY;
          static Unit *DEGREE;
          static Unit *EARTH_RADII;
          static Unit *GRAM;
          static Unit *HERTZ;
          static Unit *HOUR;
          static Unit *JOULE;
          static Unit *KILOGRAM;
          static Unit *KILOMETRE;
          static Unit *METRE;
          static Unit *MINUTE;
          static Unit *NEWTON;
          static Unit *NONE;
          static Unit *OHM;
          static Unit *ONE;
          static Unit *PASCAL;
          static Unit *PERCENT;
          static Unit *RADIAN;
          static Unit *REVOLUTION;
          static Unit *SECOND;
          static Unit *SOLAR_FLUX_UNIT;
          static Unit *TESLA;
          static Unit *TOTAL_ELECTRON_CONTENT_UNIT;
          static Unit *VOLT;
          static Unit *WATT;
          static Unit *YEAR;

          Unit(const ::java::lang::String &, jdouble, const ::org::hipparchus::fraction::Fraction &, const ::org::hipparchus::fraction::Fraction &, const ::org::hipparchus::fraction::Fraction &, const ::org::hipparchus::fraction::Fraction &, const ::org::hipparchus::fraction::Fraction &);

          Unit alias(const ::java::lang::String &) const;
          Unit divide(const ::java::lang::String &, const Unit &) const;
          static void ensureCompatible(const ::java::lang::String &, const ::java::util::List &, jboolean, const ::java::util::List &);
          jboolean equals(const ::java::lang::Object &) const;
          jdouble fromSI(const ::java::lang::Double &) const;
          jdouble fromSI(jdouble) const;
          ::org::hipparchus::fraction::Fraction getAngle() const;
          ::org::hipparchus::fraction::Fraction getCurrent() const;
          ::org::hipparchus::fraction::Fraction getLength() const;
          ::org::hipparchus::fraction::Fraction getMass() const;
          ::java::lang::String getName() const;
          jdouble getScale() const;
          ::org::hipparchus::fraction::Fraction getTime() const;
          jint hashCode() const;
          Unit multiply(const ::java::lang::String &, const Unit &) const;
          static Unit parse(const ::java::lang::String &);
          Unit power(const ::java::lang::String &, const ::org::hipparchus::fraction::Fraction &) const;
          jboolean sameDimension(const Unit &) const;
          Unit sameDimensionSI() const;
          Unit scale(const ::java::lang::String &, jdouble) const;
          Unit sqrt(const ::java::lang::String &) const;
          jdouble toSI(const ::java::lang::Double &) const;
          jdouble toSI(jdouble) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        extern PyType_Def PY_TYPE_DEF(Unit);
        extern PyTypeObject *PY_TYPE(Unit);

        class t_Unit {
        public:
          PyObject_HEAD
          Unit object;
          static PyObject *wrap_Object(const Unit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
