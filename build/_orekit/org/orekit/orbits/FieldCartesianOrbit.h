#ifndef org_orekit_orbits_FieldCartesianOrbit_H
#define org_orekit_orbits_FieldCartesianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CartesianOrbit;
      class PositionAngleType;
      class Orbit;
      class OrbitType;
      class FieldCartesianOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
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
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class FieldCartesianOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_3e61171636c74f2c,
          mid_init$_18ffa05db829c941,
          mid_init$_0fcb30f8b968c16a,
          mid_init$_cc80ec5d9d193ad9,
          mid_init$_29a388389f8e2031,
          mid_addKeplerContribution_210d5c728d3233b4,
          mid_getA_08d37e3f77b7239d,
          mid_getADot_08d37e3f77b7239d,
          mid_getE_08d37e3f77b7239d,
          mid_getEDot_08d37e3f77b7239d,
          mid_getEquinoctialEx_08d37e3f77b7239d,
          mid_getEquinoctialExDot_08d37e3f77b7239d,
          mid_getEquinoctialEy_08d37e3f77b7239d,
          mid_getEquinoctialEyDot_08d37e3f77b7239d,
          mid_getHx_08d37e3f77b7239d,
          mid_getHxDot_08d37e3f77b7239d,
          mid_getHy_08d37e3f77b7239d,
          mid_getHyDot_08d37e3f77b7239d,
          mid_getI_08d37e3f77b7239d,
          mid_getIDot_08d37e3f77b7239d,
          mid_getLE_08d37e3f77b7239d,
          mid_getLEDot_08d37e3f77b7239d,
          mid_getLM_08d37e3f77b7239d,
          mid_getLMDot_08d37e3f77b7239d,
          mid_getLv_08d37e3f77b7239d,
          mid_getLvDot_08d37e3f77b7239d,
          mid_getType_495f818d3570b7f5,
          mid_hasDerivatives_eee3de00fe971136,
          mid_shiftedBy_0b54398eba481170,
          mid_shiftedBy_8038d7dde51726b1,
          mid_toOrbit_9d4555873fac1cba,
          mid_toString_d2c8eb4129821f0e,
          mid_initPosition_d1b42a6748e907f9,
          mid_initPVCoordinates_be698fa91827b9b2,
          mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51,
          mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51,
          mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldCartesianOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldCartesianOrbit(const FieldCartesianOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldCartesianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::CartesianOrbit &);
        FieldCartesianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEx() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialExDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEy() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEyDot() const;
        ::org::hipparchus::CalculusFieldElement getHx() const;
        ::org::hipparchus::CalculusFieldElement getHxDot() const;
        ::org::hipparchus::CalculusFieldElement getHy() const;
        ::org::hipparchus::CalculusFieldElement getHyDot() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        ::org::hipparchus::CalculusFieldElement getIDot() const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        FieldCartesianOrbit shiftedBy(jdouble) const;
        FieldCartesianOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::CartesianOrbit toOrbit() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldCartesianOrbit);
      extern PyTypeObject *PY_TYPE(FieldCartesianOrbit);

      class t_FieldCartesianOrbit {
      public:
        PyObject_HEAD
        FieldCartesianOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldCartesianOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldCartesianOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldCartesianOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
