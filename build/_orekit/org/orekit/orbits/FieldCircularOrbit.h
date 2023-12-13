#ifndef org_orekit_orbits_FieldCircularOrbit_H
#define org_orekit_orbits_FieldCircularOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace orbits {
      class CircularOrbit;
      class Orbit;
      class PositionAngleBased;
      class PositionAngleType;
      class FieldCircularOrbit;
      class OrbitType;
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
          mid_init$_01b80e5fc8224f27,
          mid_init$_a2642de5f3f6bdfa,
          mid_init$_e1cf5518a92ef935,
          mid_init$_77de91c247081784,
          mid_init$_16a0bc6b5307ef8d,
          mid_init$_6ae44f82428ce0df,
          mid_init$_aee57b9535eb9d66,
          mid_addKeplerContribution_99dd76219aa0c8c0,
          mid_eccentricToMean_8a93710b1b1536a6,
          mid_eccentricToTrue_8a93710b1b1536a6,
          mid_getA_81520b552cb3fa26,
          mid_getADot_81520b552cb3fa26,
          mid_getAlpha_dd259b88fa6c00bb,
          mid_getAlphaDot_dd259b88fa6c00bb,
          mid_getAlphaE_81520b552cb3fa26,
          mid_getAlphaEDot_81520b552cb3fa26,
          mid_getAlphaM_81520b552cb3fa26,
          mid_getAlphaMDot_81520b552cb3fa26,
          mid_getAlphaV_81520b552cb3fa26,
          mid_getAlphaVDot_81520b552cb3fa26,
          mid_getCachedPositionAngleType_c25055891f180348,
          mid_getCircularEx_81520b552cb3fa26,
          mid_getCircularExDot_81520b552cb3fa26,
          mid_getCircularEy_81520b552cb3fa26,
          mid_getCircularEyDot_81520b552cb3fa26,
          mid_getE_81520b552cb3fa26,
          mid_getEDot_81520b552cb3fa26,
          mid_getEquinoctialEx_81520b552cb3fa26,
          mid_getEquinoctialExDot_81520b552cb3fa26,
          mid_getEquinoctialEy_81520b552cb3fa26,
          mid_getEquinoctialEyDot_81520b552cb3fa26,
          mid_getHx_81520b552cb3fa26,
          mid_getHxDot_81520b552cb3fa26,
          mid_getHy_81520b552cb3fa26,
          mid_getHyDot_81520b552cb3fa26,
          mid_getI_81520b552cb3fa26,
          mid_getIDot_81520b552cb3fa26,
          mid_getLE_81520b552cb3fa26,
          mid_getLEDot_81520b552cb3fa26,
          mid_getLM_81520b552cb3fa26,
          mid_getLMDot_81520b552cb3fa26,
          mid_getLv_81520b552cb3fa26,
          mid_getLvDot_81520b552cb3fa26,
          mid_getRightAscensionOfAscendingNode_81520b552cb3fa26,
          mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26,
          mid_getType_c7d4737d7afca612,
          mid_hasDerivatives_9ab94ac1dc23b105,
          mid_hasRates_9ab94ac1dc23b105,
          mid_meanToEccentric_8a93710b1b1536a6,
          mid_removeRates_4465959f228cf02d,
          mid_shiftedBy_acb3306fcc402f4a,
          mid_shiftedBy_1fb80bff01bdf967,
          mid_toOrbit_ff9c43e14d9834f4,
          mid_toString_1c1fa1e935d6cdcf,
          mid_trueToEccentric_8a93710b1b1536a6,
          mid_initPosition_ff5ac73a7b43eddd,
          mid_initPVCoordinates_243debd9cc1dd623,
          mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b,
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
