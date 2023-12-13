#ifndef org_orekit_orbits_FieldKeplerianOrbit_H
#define org_orekit_orbits_FieldKeplerianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldKeplerianOrbit;
      class Orbit;
      class PositionAngleBased;
      class PositionAngleType;
      class KeplerianOrbit;
      class OrbitType;
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
          mid_init$_01b80e5fc8224f27,
          mid_init$_b2c0210b967e3fb5,
          mid_init$_e1cf5518a92ef935,
          mid_init$_77de91c247081784,
          mid_init$_16a0bc6b5307ef8d,
          mid_init$_6ae44f82428ce0df,
          mid_init$_aee57b9535eb9d66,
          mid_addKeplerContribution_99dd76219aa0c8c0,
          mid_getA_81520b552cb3fa26,
          mid_getADot_81520b552cb3fa26,
          mid_getAnomaly_dd259b88fa6c00bb,
          mid_getAnomalyDot_dd259b88fa6c00bb,
          mid_getCachedPositionAngleType_c25055891f180348,
          mid_getE_81520b552cb3fa26,
          mid_getEDot_81520b552cb3fa26,
          mid_getEccentricAnomaly_81520b552cb3fa26,
          mid_getEccentricAnomalyDot_81520b552cb3fa26,
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
          mid_getMeanAnomaly_81520b552cb3fa26,
          mid_getMeanAnomalyDot_81520b552cb3fa26,
          mid_getPerigeeArgument_81520b552cb3fa26,
          mid_getPerigeeArgumentDot_81520b552cb3fa26,
          mid_getRightAscensionOfAscendingNode_81520b552cb3fa26,
          mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26,
          mid_getTrueAnomaly_81520b552cb3fa26,
          mid_getTrueAnomalyDot_81520b552cb3fa26,
          mid_getType_c7d4737d7afca612,
          mid_hasDerivatives_9ab94ac1dc23b105,
          mid_hasRates_9ab94ac1dc23b105,
          mid_removeRates_74e971a711cad5fd,
          mid_shiftedBy_56e56755a7c5bf57,
          mid_shiftedBy_51dbeecc5fe5a0c4,
          mid_toOrbit_f50f1bbccaeb207e,
          mid_toString_1c1fa1e935d6cdcf,
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
