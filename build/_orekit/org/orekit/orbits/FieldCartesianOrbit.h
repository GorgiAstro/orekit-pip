#ifndef org_orekit_orbits_FieldCartesianOrbit_H
#define org_orekit_orbits_FieldCartesianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldCartesianOrbit;
      class CartesianOrbit;
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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
          mid_init$_b6fb4d19a77f9888,
          mid_init$_cbd2ff2f7da73705,
          mid_init$_3630ab60f65fc257,
          mid_init$_c46027b2f093f684,
          mid_init$_cca8d8314ace10b6,
          mid_addKeplerContribution_72af0bc419feab2f,
          mid_getA_e6d4d3215c30992a,
          mid_getADot_e6d4d3215c30992a,
          mid_getE_e6d4d3215c30992a,
          mid_getEDot_e6d4d3215c30992a,
          mid_getEquinoctialEx_e6d4d3215c30992a,
          mid_getEquinoctialExDot_e6d4d3215c30992a,
          mid_getEquinoctialEy_e6d4d3215c30992a,
          mid_getEquinoctialEyDot_e6d4d3215c30992a,
          mid_getHx_e6d4d3215c30992a,
          mid_getHxDot_e6d4d3215c30992a,
          mid_getHy_e6d4d3215c30992a,
          mid_getHyDot_e6d4d3215c30992a,
          mid_getI_e6d4d3215c30992a,
          mid_getIDot_e6d4d3215c30992a,
          mid_getLE_e6d4d3215c30992a,
          mid_getLEDot_e6d4d3215c30992a,
          mid_getLM_e6d4d3215c30992a,
          mid_getLMDot_e6d4d3215c30992a,
          mid_getLv_e6d4d3215c30992a,
          mid_getLvDot_e6d4d3215c30992a,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_shiftedBy_1468ba50478809e1,
          mid_shiftedBy_701a75ffad67ff68,
          mid_toOrbit_7b54ade357cb34f6,
          mid_toString_0090f7797e403f43,
          mid_initPosition_5791f80683b5227e,
          mid_initPVCoordinates_26447a781aafdb9e,
          mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903,
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
