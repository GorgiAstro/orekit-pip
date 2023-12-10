#ifndef org_orekit_orbits_OrbitType_H
#define org_orekit_orbits_OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class FieldOrbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
    class CalculusFieldElement;
    class Field;
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
          mid_convertToFieldOrbit_864f8e04b56fc910,
          mid_convertType_4af4c6daa80bd4b5,
          mid_convertType_58efaeb159657907,
          mid_getDrivers_42a44f5869ea00ce,
          mid_isPositionAngleBased_b108b35ef48e27bd,
          mid_mapArrayToOrbit_224b9961b25c8b67,
          mid_mapArrayToOrbit_d64c9807d7fa0073,
          mid_mapOrbitToArray_000eb2abc9546b49,
          mid_mapOrbitToArray_57f5a1d6e45b457f,
          mid_normalize_e005a63f56a3e571,
          mid_normalize_0bafaa780f7922ce,
          mid_valueOf_a59515854432acbe,
          mid_values_d1659fce81d7c2f6,
          mid_scale_12ab47efff96b2ed,
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
