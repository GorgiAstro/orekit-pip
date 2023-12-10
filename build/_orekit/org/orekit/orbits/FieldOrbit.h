#ifndef org_orekit_orbits_FieldOrbit_H
#define org_orekit_orbits_FieldOrbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldOrbit;
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace time {
      class FieldTimeShiftable;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinatesProvider;
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
          mid_addKeplerContribution_72af0bc419feab2f,
          mid_getA_e6d4d3215c30992a,
          mid_getADot_e6d4d3215c30992a,
          mid_getDate_09b0a926600dfc14,
          mid_getE_e6d4d3215c30992a,
          mid_getEDot_e6d4d3215c30992a,
          mid_getEquinoctialEx_e6d4d3215c30992a,
          mid_getEquinoctialExDot_e6d4d3215c30992a,
          mid_getEquinoctialEy_e6d4d3215c30992a,
          mid_getEquinoctialEyDot_e6d4d3215c30992a,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getHx_e6d4d3215c30992a,
          mid_getHxDot_e6d4d3215c30992a,
          mid_getHy_e6d4d3215c30992a,
          mid_getHyDot_e6d4d3215c30992a,
          mid_getI_e6d4d3215c30992a,
          mid_getIDot_e6d4d3215c30992a,
          mid_getJacobianWrtCartesian_735986f1c175cb9c,
          mid_getJacobianWrtParameters_735986f1c175cb9c,
          mid_getKeplerianMeanMotion_e6d4d3215c30992a,
          mid_getKeplerianPeriod_e6d4d3215c30992a,
          mid_getLE_e6d4d3215c30992a,
          mid_getLEDot_e6d4d3215c30992a,
          mid_getLM_e6d4d3215c30992a,
          mid_getLMDot_e6d4d3215c30992a,
          mid_getLv_e6d4d3215c30992a,
          mid_getLvDot_e6d4d3215c30992a,
          mid_getMeanAnomalyDotWrtA_e6d4d3215c30992a,
          mid_getMu_e6d4d3215c30992a,
          mid_getPVCoordinates_26447a781aafdb9e,
          mid_getPVCoordinates_485af6605091d545,
          mid_getPVCoordinates_0e277b7d6a64b75a,
          mid_getPosition_5791f80683b5227e,
          mid_getPosition_863ec0d27d7d92bb,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_isElliptical_e470b6d9e0d979db,
          mid_shiftedBy_4e9ac94c2e56d753,
          mid_toOrbit_551bf685780e3c1f,
          mid_getZero_e6d4d3215c30992a,
          mid_getOne_e6d4d3215c30992a,
          mid_hasNonKeplerianAcceleration_b3066411f99fe7fe,
          mid_initPosition_5791f80683b5227e,
          mid_initPVCoordinates_26447a781aafdb9e,
          mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903,
          mid_fillHalfRow_46c78b1cd96bec90,
          mid_fillHalfRow_3ec90180ba5921ad,
          mid_fillHalfRow_aab0ef02198719d8,
          mid_fillHalfRow_372e0525ef0744f2,
          mid_fillHalfRow_d68efc51185ceb32,
          mid_fillHalfRow_9f8a79d5d428449b,
          mid_getField_70b4bbd3fa378d6b,
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
