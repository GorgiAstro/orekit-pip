#ifndef org_orekit_orbits_Orbit_H
#define org_orekit_orbits_Orbit_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class Orbit;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeShiftable;
      class TimeStamped;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class Orbit : public ::java::lang::Object {
       public:
        enum {
          mid_addKeplerContribution_9dda16418cc4ed80,
          mid_getA_557b8123390d8d0c,
          mid_getADot_557b8123390d8d0c,
          mid_getDate_7a97f7e149e79afb,
          mid_getE_557b8123390d8d0c,
          mid_getEDot_557b8123390d8d0c,
          mid_getEquinoctialEx_557b8123390d8d0c,
          mid_getEquinoctialExDot_557b8123390d8d0c,
          mid_getEquinoctialEy_557b8123390d8d0c,
          mid_getEquinoctialEyDot_557b8123390d8d0c,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getHx_557b8123390d8d0c,
          mid_getHxDot_557b8123390d8d0c,
          mid_getHy_557b8123390d8d0c,
          mid_getHyDot_557b8123390d8d0c,
          mid_getI_557b8123390d8d0c,
          mid_getIDot_557b8123390d8d0c,
          mid_getJacobianWrtCartesian_aa7929b83a23041a,
          mid_getJacobianWrtParameters_aa7929b83a23041a,
          mid_getKeplerianMeanMotion_557b8123390d8d0c,
          mid_getKeplerianPeriod_557b8123390d8d0c,
          mid_getLE_557b8123390d8d0c,
          mid_getLEDot_557b8123390d8d0c,
          mid_getLM_557b8123390d8d0c,
          mid_getLMDot_557b8123390d8d0c,
          mid_getLv_557b8123390d8d0c,
          mid_getLvDot_557b8123390d8d0c,
          mid_getMeanAnomalyDotWrtA_557b8123390d8d0c,
          mid_getMu_557b8123390d8d0c,
          mid_getPVCoordinates_daf15abc21907508,
          mid_getPVCoordinates_8cf7b972bef1e4d8,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPosition_f88961cca75a2c0a,
          mid_getPosition_8386213426308de8,
          mid_getType_2cea2a2cb3e02091,
          mid_hasDerivatives_89b302893bdbe1f1,
          mid_isElliptical_89b302893bdbe1f1,
          mid_shiftedBy_47d1046ffc445a6a,
          mid_initPVCoordinates_daf15abc21907508,
          mid_initPosition_f88961cca75a2c0a,
          mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3,
          mid_hasNonKeplerianAcceleration_e5f60d6bef0a7056,
          mid_fillHalfRow_35a858a1cd56e7a6,
          mid_fillHalfRow_82e1f2418fed1b12,
          mid_fillHalfRow_7855c71cae34f146,
          mid_fillHalfRow_bece720cf4bc073f,
          mid_fillHalfRow_f04896460335f754,
          mid_fillHalfRow_206aff45ea364c5d,
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
