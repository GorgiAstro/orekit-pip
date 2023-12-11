#ifndef org_orekit_orbits_OrbitType_H
#define org_orekit_orbits_OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class Orbit;
      class FieldOrbit;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class OrbitType : public ::java::lang::Enum {
       public:
        enum {
          mid_convertToFieldOrbit_e9be6c9886c2ede1,
          mid_convertType_8e5d41efd1316adf,
          mid_convertType_f66341a46b0a495a,
          mid_getDrivers_2dc678382be03f90,
          mid_isPositionAngleBased_89b302893bdbe1f1,
          mid_mapArrayToOrbit_ac083376e9e49863,
          mid_mapArrayToOrbit_b8f94d8b89c37228,
          mid_mapOrbitToArray_9d78f2b469e9d210,
          mid_mapOrbitToArray_eae83fc342f0eb92,
          mid_normalize_9a9f168ee5c82859,
          mid_normalize_b2a35539461bc5cf,
          mid_valueOf_1887b258ce5f94b2,
          mid_values_fc02321a93006dba,
          mid_scale_447de1222ff10980,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrbitType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrbitType(const OrbitType& obj) : ::java::lang::Enum(obj) {}

        static ::java::lang::String *A;
        static OrbitType *CARTESIAN;
        static OrbitType *CIRCULAR;
        static ::java::lang::String *ECC;
        static ::java::lang::String *ECC_ANOM;
        static ::java::lang::String *ECC_LAT_ARG;
        static ::java::lang::String *ECC_LON_ARG;
        static OrbitType *EQUINOCTIAL;
        static ::java::lang::String *E_X;
        static ::java::lang::String *E_Y;
        static ::java::lang::String *H_X;
        static ::java::lang::String *H_Y;
        static ::java::lang::String *INC;
        static OrbitType *KEPLERIAN;
        static ::java::lang::String *MEAN_ANOM;
        static ::java::lang::String *MEAN_LAT_ARG;
        static ::java::lang::String *MEAN_LON_ARG;
        static ::java::lang::String *PA;
        static ::java::lang::String *POS_X;
        static ::java::lang::String *POS_Y;
        static ::java::lang::String *POS_Z;
        static ::java::lang::String *RAAN;
        static ::java::lang::String *TRUE_ANOM;
        static ::java::lang::String *TRUE_LAT_ARG;
        static ::java::lang::String *TRUE_LON_ARG;
        static ::java::lang::String *VEL_X;
        static ::java::lang::String *VEL_Y;
        static ::java::lang::String *VEL_Z;

        ::org::orekit::orbits::FieldOrbit convertToFieldOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &) const;
        ::org::orekit::orbits::FieldOrbit convertType(const ::org::orekit::orbits::FieldOrbit &) const;
        ::org::orekit::orbits::Orbit convertType(const ::org::orekit::orbits::Orbit &) const;
        ::org::orekit::utils::ParameterDriversList getDrivers(jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &) const;
        jboolean isPositionAngleBased() const;
        ::org::orekit::orbits::Orbit mapArrayToOrbit(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::orbits::FieldOrbit mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &) const;
        void mapOrbitToArray(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, const JArray< jdouble > &, const JArray< jdouble > &) const;
        void mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::PositionAngleType &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::orekit::orbits::FieldOrbit normalize(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::FieldOrbit &) const;
        ::org::orekit::orbits::Orbit normalize(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::Orbit &) const;
        static OrbitType valueOf(const ::java::lang::String &);
        static JArray< OrbitType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(OrbitType);
      extern PyTypeObject *PY_TYPE(OrbitType);

      class t_OrbitType {
      public:
        PyObject_HEAD
        OrbitType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OrbitType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OrbitType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OrbitType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
