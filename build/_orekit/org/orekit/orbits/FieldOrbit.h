#ifndef org_orekit_orbits_FieldOrbit_H
#define org_orekit_orbits_FieldOrbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class FieldOrbit : public ::java::lang::Object {
       public:
        enum {
          mid_addKeplerContribution_99dd76219aa0c8c0,
          mid_getA_81520b552cb3fa26,
          mid_getADot_81520b552cb3fa26,
          mid_getDate_fa23a4301b9c83e7,
          mid_getE_81520b552cb3fa26,
          mid_getEDot_81520b552cb3fa26,
          mid_getEquinoctialEx_81520b552cb3fa26,
          mid_getEquinoctialExDot_81520b552cb3fa26,
          mid_getEquinoctialEy_81520b552cb3fa26,
          mid_getEquinoctialEyDot_81520b552cb3fa26,
          mid_getFrame_2c51111cc6894ba1,
          mid_getHx_81520b552cb3fa26,
          mid_getHxDot_81520b552cb3fa26,
          mid_getHy_81520b552cb3fa26,
          mid_getHyDot_81520b552cb3fa26,
          mid_getI_81520b552cb3fa26,
          mid_getIDot_81520b552cb3fa26,
          mid_getJacobianWrtCartesian_8aa4695fdadcc0d6,
          mid_getJacobianWrtParameters_8aa4695fdadcc0d6,
          mid_getKeplerianMeanMotion_81520b552cb3fa26,
          mid_getKeplerianPeriod_81520b552cb3fa26,
          mid_getLE_81520b552cb3fa26,
          mid_getLEDot_81520b552cb3fa26,
          mid_getLM_81520b552cb3fa26,
          mid_getLMDot_81520b552cb3fa26,
          mid_getLv_81520b552cb3fa26,
          mid_getLvDot_81520b552cb3fa26,
          mid_getMeanAnomalyDotWrtA_81520b552cb3fa26,
          mid_getMu_81520b552cb3fa26,
          mid_getPVCoordinates_243debd9cc1dd623,
          mid_getPVCoordinates_dda5a3346286675e,
          mid_getPVCoordinates_294c5c99690f2356,
          mid_getPosition_ff5ac73a7b43eddd,
          mid_getPosition_566ff18e6be34b64,
          mid_getType_c7d4737d7afca612,
          mid_hasDerivatives_9ab94ac1dc23b105,
          mid_isElliptical_9ab94ac1dc23b105,
          mid_shiftedBy_5be75d7ca54c3a6a,
          mid_toOrbit_b6e68c5f730fb347,
          mid_initPosition_ff5ac73a7b43eddd,
          mid_initPVCoordinates_243debd9cc1dd623,
          mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b,
          mid_fillHalfRow_acd9dd5c30f32078,
          mid_fillHalfRow_38d3fa4fe5604b07,
          mid_fillHalfRow_22ffa112852b90d7,
          mid_fillHalfRow_1cd05351c148497f,
          mid_fillHalfRow_e5fa9ebdbeacf659,
          mid_fillHalfRow_fea8e9abd8514037,
          mid_hasNonKeplerianAcceleration_b1b0ef58b05e98c2,
          mid_getZero_81520b552cb3fa26,
          mid_getOne_81520b552cb3fa26,
          mid_getField_04d1f63e17d5c5d4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldOrbit(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldOrbit(const FieldOrbit& obj) : ::java::lang::Object(obj) {}

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEx() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialExDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEy() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEyDot() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::hipparchus::CalculusFieldElement getHx() const;
        ::org::hipparchus::CalculusFieldElement getHxDot() const;
        ::org::hipparchus::CalculusFieldElement getHy() const;
        ::org::hipparchus::CalculusFieldElement getHyDot() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        ::org::hipparchus::CalculusFieldElement getIDot() const;
        void getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
        void getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
        ::org::hipparchus::CalculusFieldElement getKeplerianMeanMotion() const;
        ::org::hipparchus::CalculusFieldElement getKeplerianPeriod() const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::hipparchus::CalculusFieldElement getMeanAnomalyDotWrtA() const;
        ::org::hipparchus::CalculusFieldElement getMu() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean isElliptical() const;
        FieldOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::Orbit toOrbit() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldOrbit);
      extern PyTypeObject *PY_TYPE(FieldOrbit);

      class t_FieldOrbit {
      public:
        PyObject_HEAD
        FieldOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
