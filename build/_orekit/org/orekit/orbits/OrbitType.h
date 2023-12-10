#ifndef org_orekit_orbits_OrbitType_H
#define org_orekit_orbits_OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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
          mid_convertToFieldOrbit_169ee1c5c6f349b6,
          mid_convertType_bb96a3ad0be008c8,
          mid_convertType_4500563ec80cd676,
          mid_getDrivers_a18265431e9bd8ef,
          mid_isPositionAngleBased_e470b6d9e0d979db,
          mid_mapArrayToOrbit_e270013e907a14a8,
          mid_mapArrayToOrbit_a5da8c0112bdafc1,
          mid_mapOrbitToArray_09b9ade5607cad5c,
          mid_mapOrbitToArray_d9382506546fcee6,
          mid_normalize_83d39e35e31057b8,
          mid_normalize_151b7a6b6cc171d4,
          mid_valueOf_8aa54dfecca4ce2e,
          mid_values_0b1124046ca86020,
          mid_scale_d8d4614324ef32ef,
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
        void mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::PositionAngleType &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void mapOrbitToArray(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, const JArray< jdouble > &, const JArray< jdouble > &) const;
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
