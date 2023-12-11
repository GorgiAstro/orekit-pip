#ifndef org_orekit_orbits_FieldCartesianOrbit_H
#define org_orekit_orbits_FieldCartesianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CartesianOrbit;
      class Orbit;
      class PositionAngleType;
      class OrbitType;
      class FieldCartesianOrbit;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
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
          mid_init$_8c98afebb6212490,
          mid_init$_e094c41cf93fd5ed,
          mid_init$_7568a622582bbb9f,
          mid_init$_b2c573ad66dbbf4e,
          mid_init$_2003571c0e8d33c1,
          mid_addKeplerContribution_442a44d8b8481234,
          mid_getA_613c8f46c659f636,
          mid_getADot_613c8f46c659f636,
          mid_getE_613c8f46c659f636,
          mid_getEDot_613c8f46c659f636,
          mid_getEquinoctialEx_613c8f46c659f636,
          mid_getEquinoctialExDot_613c8f46c659f636,
          mid_getEquinoctialEy_613c8f46c659f636,
          mid_getEquinoctialEyDot_613c8f46c659f636,
          mid_getHx_613c8f46c659f636,
          mid_getHxDot_613c8f46c659f636,
          mid_getHy_613c8f46c659f636,
          mid_getHyDot_613c8f46c659f636,
          mid_getI_613c8f46c659f636,
          mid_getIDot_613c8f46c659f636,
          mid_getLE_613c8f46c659f636,
          mid_getLEDot_613c8f46c659f636,
          mid_getLM_613c8f46c659f636,
          mid_getLMDot_613c8f46c659f636,
          mid_getLv_613c8f46c659f636,
          mid_getLvDot_613c8f46c659f636,
          mid_getType_2cea2a2cb3e02091,
          mid_hasDerivatives_89b302893bdbe1f1,
          mid_shiftedBy_9625894653c5fffe,
          mid_shiftedBy_9e5336199776f755,
          mid_toOrbit_0b5f23f972fe7789,
          mid_toString_3cffd47377eca18a,
          mid_initPVCoordinates_232470f1b769250c,
          mid_initPosition_2d64addf4c3391d9,
          mid_computeJacobianMeanWrtCartesian_f180d140dce78d62,
          mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62,
          mid_computeJacobianTrueWrtCartesian_f180d140dce78d62,
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
