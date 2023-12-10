#ifndef org_orekit_orbits_Orbit_H
#define org_orekit_orbits_Orbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeShiftable;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
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
          mid_addKeplerContribution_c8fa6ba58ef7126b,
          mid_getA_456d9a2f64d6b28d,
          mid_getADot_456d9a2f64d6b28d,
          mid_getDate_aaa854c403487cf3,
          mid_getE_456d9a2f64d6b28d,
          mid_getEDot_456d9a2f64d6b28d,
          mid_getEquinoctialEx_456d9a2f64d6b28d,
          mid_getEquinoctialExDot_456d9a2f64d6b28d,
          mid_getEquinoctialEy_456d9a2f64d6b28d,
          mid_getEquinoctialEyDot_456d9a2f64d6b28d,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getHx_456d9a2f64d6b28d,
          mid_getHxDot_456d9a2f64d6b28d,
          mid_getHy_456d9a2f64d6b28d,
          mid_getHyDot_456d9a2f64d6b28d,
          mid_getI_456d9a2f64d6b28d,
          mid_getIDot_456d9a2f64d6b28d,
          mid_getJacobianWrtCartesian_1e70e195d3be115a,
          mid_getJacobianWrtParameters_1e70e195d3be115a,
          mid_getKeplerianMeanMotion_456d9a2f64d6b28d,
          mid_getKeplerianPeriod_456d9a2f64d6b28d,
          mid_getLE_456d9a2f64d6b28d,
          mid_getLEDot_456d9a2f64d6b28d,
          mid_getLM_456d9a2f64d6b28d,
          mid_getLMDot_456d9a2f64d6b28d,
          mid_getLv_456d9a2f64d6b28d,
          mid_getLvDot_456d9a2f64d6b28d,
          mid_getMeanAnomalyDotWrtA_456d9a2f64d6b28d,
          mid_getMu_456d9a2f64d6b28d,
          mid_getPVCoordinates_6890805957bea2cd,
          mid_getPVCoordinates_f8a365e30a3ddce1,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_getPosition_17a952530a808943,
          mid_getPosition_b070efa02e5e2595,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_isElliptical_e470b6d9e0d979db,
          mid_shiftedBy_77a92f9d04f61592,
          mid_hasNonKeplerianAcceleration_57ea23c66733f0e7,
          mid_initPosition_17a952530a808943,
          mid_initPVCoordinates_6890805957bea2cd,
          mid_computeJacobianMeanWrtCartesian_43de1192439efa92,
          mid_computeJacobianEccentricWrtCartesian_43de1192439efa92,
          mid_computeJacobianTrueWrtCartesian_43de1192439efa92,
          mid_fillHalfRow_050d8d25ba35a5f3,
          mid_fillHalfRow_8da915ecf4a8ad9b,
          mid_fillHalfRow_b14fd046956c3e68,
          mid_fillHalfRow_bd8ca9ced9343928,
          mid_fillHalfRow_850954c00b008227,
          mid_fillHalfRow_9a72497bf5502339,
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
