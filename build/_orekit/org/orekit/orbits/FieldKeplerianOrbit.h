#ifndef org_orekit_orbits_FieldKeplerianOrbit_H
#define org_orekit_orbits_FieldKeplerianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldKeplerianOrbit;
      class PositionAngleType;
      class KeplerianOrbit;
      class Orbit;
      class PositionAngleBased;
      class OrbitType;
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

      class FieldKeplerianOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_1cbcb2601e7d1334,
          mid_init$_3ab2b5dce8b183c1,
          mid_init$_726dc2bf140240a1,
          mid_init$_a1d831f131e24bc0,
          mid_init$_960ad4c09c9f5686,
          mid_init$_b6f9c400578e2bc2,
          mid_init$_2a14969bf128ed41,
          mid_addKeplerContribution_4e49f6ed48591ef2,
          mid_getA_eba8e72a22c984ac,
          mid_getADot_eba8e72a22c984ac,
          mid_getAnomaly_aefb08df7a137c22,
          mid_getAnomalyDot_aefb08df7a137c22,
          mid_getCachedPositionAngleType_8f17e83e5a86217c,
          mid_getE_eba8e72a22c984ac,
          mid_getEDot_eba8e72a22c984ac,
          mid_getEccentricAnomaly_eba8e72a22c984ac,
          mid_getEccentricAnomalyDot_eba8e72a22c984ac,
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
          mid_getLE_eba8e72a22c984ac,
          mid_getLEDot_eba8e72a22c984ac,
          mid_getLM_eba8e72a22c984ac,
          mid_getLMDot_eba8e72a22c984ac,
          mid_getLv_eba8e72a22c984ac,
          mid_getLvDot_eba8e72a22c984ac,
          mid_getMeanAnomaly_eba8e72a22c984ac,
          mid_getMeanAnomalyDot_eba8e72a22c984ac,
          mid_getPerigeeArgument_eba8e72a22c984ac,
          mid_getPerigeeArgumentDot_eba8e72a22c984ac,
          mid_getRightAscensionOfAscendingNode_eba8e72a22c984ac,
          mid_getRightAscensionOfAscendingNodeDot_eba8e72a22c984ac,
          mid_getTrueAnomaly_eba8e72a22c984ac,
          mid_getTrueAnomalyDot_eba8e72a22c984ac,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_hasRates_b108b35ef48e27bd,
          mid_removeRates_095082babca4bc54,
          mid_shiftedBy_5350f66dbc19717d,
          mid_shiftedBy_4aa1ce340b48f3cb,
          mid_toOrbit_3b8c2ada972e4fd7,
          mid_toString_11b109bd155ca898,
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

        explicit FieldKeplerianOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldKeplerianOrbit(const FieldKeplerianOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldKeplerianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::KeplerianOrbit &);
        FieldKeplerianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::hipparchus::CalculusFieldElement getAnomaly(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getAnomalyDot(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEDot() const;
        ::org::hipparchus::CalculusFieldElement getEccentricAnomaly() const;
        ::org::hipparchus::CalculusFieldElement getEccentricAnomalyDot() const;
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
        ::org::hipparchus::CalculusFieldElement getMeanAnomaly() const;
        ::org::hipparchus::CalculusFieldElement getMeanAnomalyDot() const;
        ::org::hipparchus::CalculusFieldElement getPerigeeArgument() const;
        ::org::hipparchus::CalculusFieldElement getPerigeeArgumentDot() const;
        ::org::hipparchus::CalculusFieldElement getRightAscensionOfAscendingNode() const;
        ::org::hipparchus::CalculusFieldElement getRightAscensionOfAscendingNodeDot() const;
        ::org::hipparchus::CalculusFieldElement getTrueAnomaly() const;
        ::org::hipparchus::CalculusFieldElement getTrueAnomalyDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean hasRates() const;
        FieldKeplerianOrbit removeRates() const;
        FieldKeplerianOrbit shiftedBy(jdouble) const;
        FieldKeplerianOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::KeplerianOrbit toOrbit() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldKeplerianOrbit);
      extern PyTypeObject *PY_TYPE(FieldKeplerianOrbit);

      class t_FieldKeplerianOrbit {
      public:
        PyObject_HEAD
        FieldKeplerianOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldKeplerianOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldKeplerianOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldKeplerianOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
