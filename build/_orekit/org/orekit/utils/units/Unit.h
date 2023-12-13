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
            mid_init$_3f21e2df8fcb2b32,
            mid_alias_d901bfc45b4f4fe6,
            mid_divide_a71cf563e58a7ac6,
            mid_ensureCompatible_183e875889e6ba2f,
            mid_equals_460c5e2d9d51c6cc,
            mid_fromSI_53da1ceb0da32c64,
            mid_fromSI_04fd0666b613d2ab,
            mid_getAngle_7ab72bcbb3909669,
            mid_getCurrent_7ab72bcbb3909669,
            mid_getLength_7ab72bcbb3909669,
            mid_getMass_7ab72bcbb3909669,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getScale_b74f83833fdad017,
            mid_getTime_7ab72bcbb3909669,
            mid_hashCode_55546ef6a647f39b,
            mid_multiply_a71cf563e58a7ac6,
            mid_parse_d901bfc45b4f4fe6,
            mid_power_024c7df38ac4c192,
            mid_sameDimension_c4dae8f6c826c849,
            mid_sameDimensionSI_6466188dbb1eea22,
            mid_scale_ccd54d8c74d5128b,
            mid_sqrt_d901bfc45b4f4fe6,
            mid_toSI_53da1ceb0da32c64,
            mid_toSI_04fd0666b613d2ab,
            mid_toString_1c1fa1e935d6cdcf,
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
          static Unit *PASCAL$;
          static Unit *PERCENT$;
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
