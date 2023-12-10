#ifndef org_orekit_orbits_FieldEquinoctialOrbit_H
#define org_orekit_orbits_FieldEquinoctialOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class EquinoctialOrbit;
      class FieldEquinoctialOrbit;
      class Orbit;
      class PositionAngleBased;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
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

      class FieldEquinoctialOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_1cbcb2601e7d1334,
          mid_init$_4bcbd36786bb8c5b,
          mid_init$_726dc2bf140240a1,
          mid_init$_a1d831f131e24bc0,
          mid_init$_960ad4c09c9f5686,
          mid_init$_b6f9c400578e2bc2,
          mid_init$_2a14969bf128ed41,
          mid_addKeplerContribution_4e49f6ed48591ef2,
          mid_eccentricToMean_ff4594b9dc2244a3,
          mid_eccentricToTrue_ff4594b9dc2244a3,
          mid_getA_eba8e72a22c984ac,
          mid_getADot_eba8e72a22c984ac,
          mid_getCachedPositionAngleType_8f17e83e5a86217c,
          mid_getE_eba8e72a22c984ac,
          mid_getEDot_eba8e72a22c984ac,
          mid_getEquinoctialEx_eba8e72a22c984ac,
          mid_getEquinoctialExDot_eba8e72a22c984ac,
          mid_getEquinoctialEy_eba8e72a22c984ac,
          mid_getEquinoctialEyDot_eba8e72a22c984ac,
          mid_getHx_eba8e72a22c984ac,
          mid_getHxDot_eba8e72a22c984ac,
          mid_getHy_eba8e72a22c984ac,
          mid_getHyDot_eba8e72a22c984ac,
          mid_getI_eba8e72a22c984ac,
          mid_getIDot_eba8e72a22c984ac,
          mid_getL_aefb08df7a137c22,
          mid_getLDot_aefb08df7a137c22,
          mid_getLE_eba8e72a22c984ac,
          mid_getLEDot_eba8e72a22c984ac,
          mid_getLM_eba8e72a22c984ac,
          mid_getLMDot_eba8e72a22c984ac,
          mid_getLv_eba8e72a22c984ac,
          mid_getLvDot_eba8e72a22c984ac,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_hasRates_b108b35ef48e27bd,
          mid_meanToEccentric_ff4594b9dc2244a3,
          mid_removeRates_c5eb5fa07f240484,
          mid_shiftedBy_2e616af03dcaacde,
          mid_shiftedBy_ac5fff805c5ae8d8,
          mid_toOrbit_28c4204b9c4d2027,
          mid_toString_11b109bd155ca898,
          mid_trueToEccentric_ff4594b9dc2244a3,
          mid_initPVCoordinates_f89522ff77904397,
          mid_initPosition_716f50c86ffc8da7,
          mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldEquinoctialOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldEquinoctialOrbit(const FieldEquinoctialOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldEquinoctialOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::EquinoctialOrbit &);
        FieldEquinoctialOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        static ::org::hipparchus::CalculusFieldElement eccentricToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement eccentricToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
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
        ::org::hipparchus::CalculusFieldElement getL(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getLDot(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean hasRates() const;
        static ::org::hipparchus::CalculusFieldElement meanToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit removeRates() const;
        FieldEquinoctialOrbit shiftedBy(jdouble) const;
        FieldEquinoctialOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::EquinoctialOrbit toOrbit() const;
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
      extern PyType_Def PY_TYPE_DEF(FieldEquinoctialOrbit);
      extern PyTypeObject *PY_TYPE(FieldEquinoctialOrbit);

      class t_FieldEquinoctialOrbit {
      public:
        PyObject_HEAD
        FieldEquinoctialOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldEquinoctialOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldEquinoctialOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldEquinoctialOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
