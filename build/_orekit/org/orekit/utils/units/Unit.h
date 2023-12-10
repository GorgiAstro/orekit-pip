#ifndef org_orekit_utils_units_Unit_H
#define org_orekit_utils_units_Unit_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class Fraction;
    }
  }
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        class Unit : public ::java::lang::Object {
         public:
          enum {
            mid_init$_284b61790ebbd4ed,
            mid_alias_0a5740869b287d80,
            mid_divide_fec86d24e27a1c31,
            mid_ensureCompatible_064d1197ec1b60e4,
            mid_equals_65c7d273e80d497a,
            mid_fromSI_71d2acbe9dbc79f5,
            mid_fromSI_dcbc7ce2902fa136,
            mid_getAngle_883007575ab78b44,
            mid_getCurrent_883007575ab78b44,
            mid_getLength_883007575ab78b44,
            mid_getMass_883007575ab78b44,
            mid_getName_11b109bd155ca898,
            mid_getScale_dff5885c2c873297,
            mid_getTime_883007575ab78b44,
            mid_hashCode_570ce0828f81a2c1,
            mid_multiply_fec86d24e27a1c31,
            mid_parse_0a5740869b287d80,
            mid_power_7df14d78e751ac15,
            mid_sameDimension_43de8ce72aa2edad,
            mid_sameDimensionSI_de9b417ee3c58e2e,
            mid_scale_fc750ab1c8920e40,
            mid_sqrt_0a5740869b287d80,
            mid_toSI_71d2acbe9dbc79f5,
            mid_toSI_dcbc7ce2902fa136,
            mid_toString_11b109bd155ca898,
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
