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
            mid_init$_97dbf822f7252b42,
            mid_alias_6650924024ae0f55,
            mid_divide_d8fc6054bd0fbc8b,
            mid_ensureCompatible_ddf63e191200a7a3,
            mid_equals_229c87223f486349,
            mid_fromSI_cd4b8534889fa81f,
            mid_fromSI_0ba5fed9597b693e,
            mid_getAngle_7847eacc50504e7f,
            mid_getCurrent_7847eacc50504e7f,
            mid_getLength_7847eacc50504e7f,
            mid_getMass_7847eacc50504e7f,
            mid_getName_0090f7797e403f43,
            mid_getScale_456d9a2f64d6b28d,
            mid_getTime_7847eacc50504e7f,
            mid_hashCode_f2f64475e4580546,
            mid_multiply_d8fc6054bd0fbc8b,
            mid_parse_6650924024ae0f55,
            mid_power_58cde49db0c58922,
            mid_sameDimension_f6642efa67a69233,
            mid_sameDimensionSI_196b004fd4585106,
            mid_scale_33d5a55b3852688e,
            mid_sqrt_6650924024ae0f55,
            mid_toSI_cd4b8534889fa81f,
            mid_toSI_0ba5fed9597b693e,
            mid_toString_0090f7797e403f43,
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
