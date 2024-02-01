#ifndef org_orekit_orbits_FieldCircularOrbit_H
#define org_orekit_orbits_FieldCircularOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CircularOrbit;
      class OrbitType;
      class PositionAngleType;
      class Orbit;
      class FieldCircularOrbit;
      class PositionAngleBased;
    }
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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
          mid_init$_3e61171636c74f2c,
          mid_init$_0da6878cdaf9861b,
          mid_init$_0fcb30f8b968c16a,
          mid_init$_cc80ec5d9d193ad9,
          mid_init$_29a388389f8e2031,
          mid_init$_bfc63e9af3b225c7,
          mid_init$_b4fb0a8689671ebc,
          mid_addKeplerContribution_210d5c728d3233b4,
          mid_eccentricToMean_3130e338b3b4d904,
          mid_eccentricToTrue_3130e338b3b4d904,
          mid_getA_08d37e3f77b7239d,
          mid_getADot_08d37e3f77b7239d,
          mid_getAlpha_1982048877fe3264,
          mid_getAlphaDot_1982048877fe3264,
          mid_getAlphaE_08d37e3f77b7239d,
          mid_getAlphaEDot_08d37e3f77b7239d,
          mid_getAlphaM_08d37e3f77b7239d,
          mid_getAlphaMDot_08d37e3f77b7239d,
          mid_getAlphaV_08d37e3f77b7239d,
          mid_getAlphaVDot_08d37e3f77b7239d,
          mid_getCachedPositionAngleType_a6db4e6edefda4be,
          mid_getCircularEx_08d37e3f77b7239d,
          mid_getCircularExDot_08d37e3f77b7239d,
          mid_getCircularEy_08d37e3f77b7239d,
          mid_getCircularEyDot_08d37e3f77b7239d,
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
          mid_getRightAscensionOfAscendingNode_08d37e3f77b7239d,
          mid_getRightAscensionOfAscendingNodeDot_08d37e3f77b7239d,
          mid_getType_495f818d3570b7f5,
          mid_hasDerivatives_eee3de00fe971136,
          mid_hasRates_eee3de00fe971136,
          mid_meanToEccentric_3130e338b3b4d904,
          mid_removeRates_b1146b63c68ce3c6,
          mid_shiftedBy_f4a7e509a1ad4759,
          mid_shiftedBy_59c7ae77b36aa163,
          mid_toOrbit_3c88d8f1cf664f96,
          mid_toString_d2c8eb4129821f0e,
          mid_trueToEccentric_3130e338b3b4d904,
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
