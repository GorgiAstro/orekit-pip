#ifndef org_orekit_orbits_FieldKeplerianOrbit_H
#define org_orekit_orbits_FieldKeplerianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
    }
    namespace orbits {
      class Orbit;
      class FieldKeplerianOrbit;
      class PositionAngleBased;
      class KeplerianOrbit;
      class PositionAngleType;
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

      class FieldKeplerianOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_8c98afebb6212490,
          mid_init$_3eaa62b89404ea8f,
          mid_init$_7568a622582bbb9f,
          mid_init$_b2c573ad66dbbf4e,
          mid_init$_2003571c0e8d33c1,
          mid_init$_5ef84f89b3c0d68c,
          mid_init$_1ffb1b4106e68722,
          mid_addKeplerContribution_442a44d8b8481234,
          mid_getA_613c8f46c659f636,
          mid_getADot_613c8f46c659f636,
          mid_getAnomaly_1c32e6b4d15c6c38,
          mid_getAnomalyDot_1c32e6b4d15c6c38,
          mid_getCachedPositionAngleType_f4984aee71df4c19,
          mid_getE_613c8f46c659f636,
          mid_getEDot_613c8f46c659f636,
          mid_getEccentricAnomaly_613c8f46c659f636,
          mid_getEccentricAnomalyDot_613c8f46c659f636,
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
          mid_getMeanAnomaly_613c8f46c659f636,
          mid_getMeanAnomalyDot_613c8f46c659f636,
          mid_getPerigeeArgument_613c8f46c659f636,
          mid_getPerigeeArgumentDot_613c8f46c659f636,
          mid_getRightAscensionOfAscendingNode_613c8f46c659f636,
          mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636,
          mid_getTrueAnomaly_613c8f46c659f636,
          mid_getTrueAnomalyDot_613c8f46c659f636,
          mid_getType_2cea2a2cb3e02091,
          mid_hasDerivatives_89b302893bdbe1f1,
          mid_hasRates_89b302893bdbe1f1,
          mid_removeRates_84a366d6e83dca29,
          mid_shiftedBy_21e1a96e4b784e27,
          mid_shiftedBy_f105238210773ea4,
          mid_toOrbit_48360cd036a5e97b,
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
