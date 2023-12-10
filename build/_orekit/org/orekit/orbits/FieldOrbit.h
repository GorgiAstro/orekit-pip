#ifndef org_orekit_orbits_FieldOrbit_H
#define org_orekit_orbits_FieldOrbit_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class FieldOrbit;
      class OrbitType;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
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
          mid_addKeplerContribution_4e49f6ed48591ef2,
          mid_getA_eba8e72a22c984ac,
          mid_getADot_eba8e72a22c984ac,
          mid_getDate_51da00d5b8a3b5df,
          mid_getE_eba8e72a22c984ac,
          mid_getEDot_eba8e72a22c984ac,
          mid_getEquinoctialEx_eba8e72a22c984ac,
          mid_getEquinoctialExDot_eba8e72a22c984ac,
          mid_getEquinoctialEy_eba8e72a22c984ac,
          mid_getEquinoctialEyDot_eba8e72a22c984ac,
          mid_getFrame_b86f9f61d97a7244,
          mid_getHx_eba8e72a22c984ac,
          mid_getHxDot_eba8e72a22c984ac,
          mid_getHy_eba8e72a22c984ac,
          mid_getHyDot_eba8e72a22c984ac,
          mid_getI_eba8e72a22c984ac,
          mid_getIDot_eba8e72a22c984ac,
          mid_getJacobianWrtCartesian_d8c958ab52d41303,
          mid_getJacobianWrtParameters_d8c958ab52d41303,
          mid_getKeplerianMeanMotion_eba8e72a22c984ac,
          mid_getKeplerianPeriod_eba8e72a22c984ac,
          mid_getLE_eba8e72a22c984ac,
          mid_getLEDot_eba8e72a22c984ac,
          mid_getLM_eba8e72a22c984ac,
          mid_getLMDot_eba8e72a22c984ac,
          mid_getLv_eba8e72a22c984ac,
          mid_getLvDot_eba8e72a22c984ac,
          mid_getMeanAnomalyDotWrtA_eba8e72a22c984ac,
          mid_getMu_eba8e72a22c984ac,
          mid_getPVCoordinates_f89522ff77904397,
          mid_getPVCoordinates_f7bcbf2fe13428b6,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_getPosition_716f50c86ffc8da7,
          mid_getPosition_f336610fe073f215,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_isElliptical_b108b35ef48e27bd,
          mid_shiftedBy_00f12a4c5cc81008,
          mid_toOrbit_cde5690bfa4f9649,
          mid_getZero_eba8e72a22c984ac,
          mid_getOne_eba8e72a22c984ac,
          mid_initPVCoordinates_f89522ff77904397,
          mid_initPosition_716f50c86ffc8da7,
          mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d,
          mid_hasNonKeplerianAcceleration_1f0f5bd13cc77104,
          mid_fillHalfRow_ef7c59e647fa628c,
          mid_fillHalfRow_ded6f9df44cdf5dc,
          mid_fillHalfRow_eeb06ff3ca7c9188,
          mid_fillHalfRow_f81122e41aebb1f8,
          mid_fillHalfRow_74695c6204a01fd1,
          mid_fillHalfRow_e8bccbcec536708d,
          mid_getField_5b28be2d3632a5dc,
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
