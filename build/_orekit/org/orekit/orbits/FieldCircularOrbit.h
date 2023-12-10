#ifndef org_orekit_orbits_FieldCircularOrbit_H
#define org_orekit_orbits_FieldCircularOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
    }
    namespace orbits {
      class PositionAngleBased;
      class OrbitType;
      class Orbit;
      class PositionAngleType;
      class CircularOrbit;
      class FieldCircularOrbit;
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

      class FieldCircularOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_b6fb4d19a77f9888,
          mid_init$_9268f5f464abc700,
          mid_init$_3630ab60f65fc257,
          mid_init$_c46027b2f093f684,
          mid_init$_cca8d8314ace10b6,
          mid_init$_c5c88eb1c5b50a4d,
          mid_init$_de4891ed91bd58e7,
          mid_addKeplerContribution_72af0bc419feab2f,
          mid_eccentricToMean_f56548599899c286,
          mid_eccentricToTrue_f56548599899c286,
          mid_getA_e6d4d3215c30992a,
          mid_getADot_e6d4d3215c30992a,
          mid_getAlpha_d275813d7aa8ed95,
          mid_getAlphaDot_d275813d7aa8ed95,
          mid_getAlphaE_e6d4d3215c30992a,
          mid_getAlphaEDot_e6d4d3215c30992a,
          mid_getAlphaM_e6d4d3215c30992a,
          mid_getAlphaMDot_e6d4d3215c30992a,
          mid_getAlphaV_e6d4d3215c30992a,
          mid_getAlphaVDot_e6d4d3215c30992a,
          mid_getCachedPositionAngleType_2571e8fe1cede425,
          mid_getCircularEx_e6d4d3215c30992a,
          mid_getCircularExDot_e6d4d3215c30992a,
          mid_getCircularEy_e6d4d3215c30992a,
          mid_getCircularEyDot_e6d4d3215c30992a,
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
          mid_getRightAscensionOfAscendingNode_e6d4d3215c30992a,
          mid_getRightAscensionOfAscendingNodeDot_e6d4d3215c30992a,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_hasRates_e470b6d9e0d979db,
          mid_meanToEccentric_f56548599899c286,
          mid_removeRates_5d976fb6f89be4a9,
          mid_shiftedBy_d194d65ce751068f,
          mid_shiftedBy_1241a270fe4aa8c5,
          mid_toOrbit_d80e0a544ab2a464,
          mid_toString_0090f7797e403f43,
          mid_trueToEccentric_f56548599899c286,
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
