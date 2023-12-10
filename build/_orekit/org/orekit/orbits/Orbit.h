#ifndef org_orekit_orbits_Orbit_H
#define org_orekit_orbits_Orbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
      class TimeShiftable;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class Orbit : public ::java::lang::Object {
       public:
        enum {
          mid_addKeplerContribution_f2365c7dd61a1cda,
          mid_getA_dff5885c2c873297,
          mid_getADot_dff5885c2c873297,
          mid_getDate_85703d13e302437e,
          mid_getE_dff5885c2c873297,
          mid_getEDot_dff5885c2c873297,
          mid_getEquinoctialEx_dff5885c2c873297,
          mid_getEquinoctialExDot_dff5885c2c873297,
          mid_getEquinoctialEy_dff5885c2c873297,
          mid_getEquinoctialEyDot_dff5885c2c873297,
          mid_getFrame_b86f9f61d97a7244,
          mid_getHx_dff5885c2c873297,
          mid_getHxDot_dff5885c2c873297,
          mid_getHy_dff5885c2c873297,
          mid_getHyDot_dff5885c2c873297,
          mid_getI_dff5885c2c873297,
          mid_getIDot_dff5885c2c873297,
          mid_getJacobianWrtCartesian_4ee3ef4c050fbae6,
          mid_getJacobianWrtParameters_4ee3ef4c050fbae6,
          mid_getKeplerianMeanMotion_dff5885c2c873297,
          mid_getKeplerianPeriod_dff5885c2c873297,
          mid_getLE_dff5885c2c873297,
          mid_getLEDot_dff5885c2c873297,
          mid_getLM_dff5885c2c873297,
          mid_getLMDot_dff5885c2c873297,
          mid_getLv_dff5885c2c873297,
          mid_getLvDot_dff5885c2c873297,
          mid_getMeanAnomalyDotWrtA_dff5885c2c873297,
          mid_getMu_dff5885c2c873297,
          mid_getPVCoordinates_c204436deca11d94,
          mid_getPVCoordinates_d9ebf50b8aebcbf9,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_getPosition_d52645e0d4c07563,
          mid_getPosition_e91e859b879f3586,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_isElliptical_b108b35ef48e27bd,
          mid_shiftedBy_3f8b433edd9f6aeb,
          mid_initPVCoordinates_c204436deca11d94,
          mid_initPosition_d52645e0d4c07563,
          mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1,
          mid_hasNonKeplerianAcceleration_65cc08e55108dce0,
          mid_fillHalfRow_876fc2f43c8a6523,
          mid_fillHalfRow_7142bc4bf2c1376b,
          mid_fillHalfRow_3d4e72ea841b766f,
          mid_fillHalfRow_6580aea554067a3c,
          mid_fillHalfRow_ff93f8d593f356b2,
          mid_fillHalfRow_f22e655171dbba8e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Orbit(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Orbit(const Orbit& obj) : ::java::lang::Object(obj) {}

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        jdouble getA() const;
        jdouble getADot() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getE() const;
        jdouble getEDot() const;
        jdouble getEquinoctialEx() const;
        jdouble getEquinoctialExDot() const;
        jdouble getEquinoctialEy() const;
        jdouble getEquinoctialEyDot() const;
        ::org::orekit::frames::Frame getFrame() const;
        jdouble getHx() const;
        jdouble getHxDot() const;
        jdouble getHy() const;
        jdouble getHyDot() const;
        jdouble getI() const;
        jdouble getIDot() const;
        void getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< jdouble > > &) const;
        void getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< jdouble > > &) const;
        jdouble getKeplerianMeanMotion() const;
        jdouble getKeplerianPeriod() const;
        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLM() const;
        jdouble getLMDot() const;
        jdouble getLv() const;
        jdouble getLvDot() const;
        jdouble getMeanAnomalyDotWrtA() const;
        jdouble getMu() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean isElliptical() const;
        Orbit shiftedBy(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(Orbit);
      extern PyTypeObject *PY_TYPE(Orbit);

      class t_Orbit {
      public:
        PyObject_HEAD
        Orbit object;
        static PyObject *wrap_Object(const Orbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
