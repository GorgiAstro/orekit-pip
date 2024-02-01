#ifndef org_orekit_orbits_OrbitType_H
#define org_orekit_orbits_OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class FieldOrbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
          mid_convertToFieldOrbit_4e961aad065174c6,
          mid_convertType_c568d451ffb1bb48,
          mid_convertType_940029672edd5e92,
          mid_getDrivers_d5afdace8d02a385,
          mid_isPositionAngleBased_eee3de00fe971136,
          mid_mapArrayToOrbit_87ad13bda478956b,
          mid_mapArrayToOrbit_7b733a130aa7b2a9,
          mid_mapOrbitToArray_359314ca0bd4c47b,
          mid_mapOrbitToArray_7691d4a944c88f98,
          mid_normalize_ecfb098360a0b7b4,
          mid_normalize_6a3479954288b344,
          mid_valueOf_5c92cc24cbd933c4,
          mid_values_468e1e4121a628f0,
          mid_scale_4c37db72b1fcc356,
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
