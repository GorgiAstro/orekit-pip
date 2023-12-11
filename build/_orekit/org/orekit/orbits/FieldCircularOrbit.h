#ifndef org_orekit_orbits_FieldCircularOrbit_H
#define org_orekit_orbits_FieldCircularOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldCircularOrbit;
      class Orbit;
      class PositionAngleBased;
      class PositionAngleType;
      class CircularOrbit;
      class OrbitType;
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

      class FieldCircularOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_8c98afebb6212490,
          mid_init$_6ef9a4973f2d7592,
          mid_init$_7568a622582bbb9f,
          mid_init$_b2c573ad66dbbf4e,
          mid_init$_2003571c0e8d33c1,
          mid_init$_5ef84f89b3c0d68c,
          mid_init$_1ffb1b4106e68722,
          mid_addKeplerContribution_442a44d8b8481234,
          mid_eccentricToMean_d181e731358aa045,
          mid_eccentricToTrue_d181e731358aa045,
          mid_getA_613c8f46c659f636,
          mid_getADot_613c8f46c659f636,
          mid_getAlpha_1c32e6b4d15c6c38,
          mid_getAlphaDot_1c32e6b4d15c6c38,
          mid_getAlphaE_613c8f46c659f636,
          mid_getAlphaEDot_613c8f46c659f636,
          mid_getAlphaM_613c8f46c659f636,
          mid_getAlphaMDot_613c8f46c659f636,
          mid_getAlphaV_613c8f46c659f636,
          mid_getAlphaVDot_613c8f46c659f636,
          mid_getCachedPositionAngleType_f4984aee71df4c19,
          mid_getCircularEx_613c8f46c659f636,
          mid_getCircularExDot_613c8f46c659f636,
          mid_getCircularEy_613c8f46c659f636,
          mid_getCircularEyDot_613c8f46c659f636,
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
          mid_getRightAscensionOfAscendingNode_613c8f46c659f636,
          mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636,
          mid_getType_2cea2a2cb3e02091,
          mid_hasDerivatives_89b302893bdbe1f1,
          mid_hasRates_89b302893bdbe1f1,
          mid_meanToEccentric_d181e731358aa045,
          mid_removeRates_f7f79630984e0b9b,
          mid_shiftedBy_d8ef34e39b7f1655,
          mid_shiftedBy_00d1c79b858999ca,
          mid_toOrbit_42c1cf938d8b491c,
          mid_toString_3cffd47377eca18a,
          mid_trueToEccentric_d181e731358aa045,
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

        explicit FieldCircularOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldCircularOrbit(const FieldCircularOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldCircularOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::CircularOrbit &);
        FieldCircularOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        static ::org::hipparchus::CalculusFieldElement eccentricToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement eccentricToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::hipparchus::CalculusFieldElement getAlpha(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getAlphaDot(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getAlphaE() const;
        ::org::hipparchus::CalculusFieldElement getAlphaEDot() const;
        ::org::hipparchus::CalculusFieldElement getAlphaM() const;
        ::org::hipparchus::CalculusFieldElement getAlphaMDot() const;
        ::org::hipparchus::CalculusFieldElement getAlphaV() const;
        ::org::hipparchus::CalculusFieldElement getAlphaVDot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
        ::org::hipparchus::CalculusFieldElement getCircularEx() const;
        ::org::hipparchus::CalculusFieldElement getCircularExDot() const;
        ::org::hipparchus::CalculusFieldElement getCircularEy() const;
        ::org::hipparchus::CalculusFieldElement getCircularEyDot() const;
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
        ::org::hipparchus::CalculusFieldElement getRightAscensionOfAscendingNode() const;
        ::org::hipparchus::CalculusFieldElement getRightAscensionOfAscendingNodeDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean hasRates() const;
        static ::org::hipparchus::CalculusFieldElement meanToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCircularOrbit removeRates() const;
        FieldCircularOrbit shiftedBy(jdouble) const;
        FieldCircularOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::CircularOrbit toOrbit() const;
        ::java::lang::String toString() const;
        static ::org::hipparchus::CalculusFieldElement trueToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldCircularOrbit);
      extern PyTypeObject *PY_TYPE(FieldCircularOrbit);

      class t_FieldCircularOrbit {
      public:
        PyObject_HEAD
        FieldCircularOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldCircularOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldCircularOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldCircularOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
