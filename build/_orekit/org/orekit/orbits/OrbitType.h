#ifndef org_orekit_orbits_OrbitType_H
#define org_orekit_orbits_OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
      class PositionAngleType;
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
          mid_convertToFieldOrbit_9b0122682636b413,
          mid_convertType_fc86977d2ef95d47,
          mid_convertType_17366d6f28f0e9a3,
          mid_getDrivers_a90b7a96bd02cc69,
          mid_isPositionAngleBased_9ab94ac1dc23b105,
          mid_mapArrayToOrbit_f8e2268a540708cf,
          mid_mapArrayToOrbit_3a36966952a8c249,
          mid_mapOrbitToArray_cdbe0480fba9da5e,
          mid_mapOrbitToArray_dd1f1433d867eeb8,
          mid_normalize_44e06ea15412cf58,
          mid_normalize_4b9fe4c623440067,
          mid_valueOf_669d078c7e4c9b0b,
          mid_values_edeedd4e4e0b4870,
          mid_scale_8734a085c2c31141,
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
