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
            mid_init$_2a537d55027e9351,
            mid_alias_d6c2d8d5a508daeb,
            mid_divide_44ac6dfdc2380979,
            mid_ensureCompatible_e66afbad3d0c4326,
            mid_equals_72faff9b05f5ed5e,
            mid_fromSI_e8942d61ef8e236d,
            mid_fromSI_bf28ed64d6e8576b,
            mid_getAngle_8e8b2db4820cf02e,
            mid_getCurrent_8e8b2db4820cf02e,
            mid_getLength_8e8b2db4820cf02e,
            mid_getMass_8e8b2db4820cf02e,
            mid_getName_d2c8eb4129821f0e,
            mid_getScale_9981f74b2d109da6,
            mid_getTime_8e8b2db4820cf02e,
            mid_hashCode_d6ab429752e7c267,
            mid_multiply_44ac6dfdc2380979,
            mid_parse_d6c2d8d5a508daeb,
            mid_power_4930d07d9ce56450,
            mid_sameDimension_acf6666529be31c6,
            mid_sameDimensionSI_b1bb36679ea369c9,
            mid_scale_6dd09311f49c6fb3,
            mid_sqrt_d6c2d8d5a508daeb,
            mid_toSI_e8942d61ef8e236d,
            mid_toSI_bf28ed64d6e8576b,
            mid_toString_d2c8eb4129821f0e,
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
