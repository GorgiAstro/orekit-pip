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
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
          mid_addKeplerContribution_3ef35668c0b1580f,
          mid_getA_9981f74b2d109da6,
          mid_getADot_9981f74b2d109da6,
          mid_getDate_80e11148db499dda,
          mid_getE_9981f74b2d109da6,
          mid_getEDot_9981f74b2d109da6,
          mid_getEquinoctialEx_9981f74b2d109da6,
          mid_getEquinoctialExDot_9981f74b2d109da6,
          mid_getEquinoctialEy_9981f74b2d109da6,
          mid_getEquinoctialEyDot_9981f74b2d109da6,
          mid_getFrame_cb151471db4570f0,
          mid_getHx_9981f74b2d109da6,
          mid_getHxDot_9981f74b2d109da6,
          mid_getHy_9981f74b2d109da6,
          mid_getHyDot_9981f74b2d109da6,
          mid_getI_9981f74b2d109da6,
          mid_getIDot_9981f74b2d109da6,
          mid_getJacobianWrtCartesian_af600cc7c7a74264,
          mid_getJacobianWrtParameters_af600cc7c7a74264,
          mid_getKeplerianMeanMotion_9981f74b2d109da6,
          mid_getKeplerianPeriod_9981f74b2d109da6,
          mid_getLE_9981f74b2d109da6,
          mid_getLEDot_9981f74b2d109da6,
          mid_getLM_9981f74b2d109da6,
          mid_getLMDot_9981f74b2d109da6,
          mid_getLv_9981f74b2d109da6,
          mid_getLvDot_9981f74b2d109da6,
          mid_getMeanAnomalyDotWrtA_9981f74b2d109da6,
          mid_getMu_9981f74b2d109da6,
          mid_getPVCoordinates_674031698a428ce8,
          mid_getPVCoordinates_76634063992a70d7,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getPosition_032312bdeb3f2f93,
          mid_getPosition_5996cdbecf4f0d06,
          mid_getType_495f818d3570b7f5,
          mid_hasDerivatives_eee3de00fe971136,
          mid_isElliptical_eee3de00fe971136,
          mid_shiftedBy_d1516833b1f81441,
          mid_initPosition_032312bdeb3f2f93,
          mid_initPVCoordinates_674031698a428ce8,
          mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f,
          mid_fillHalfRow_a8f7f4c0cc5ceddd,
          mid_fillHalfRow_1d3f8641aec0478f,
          mid_fillHalfRow_f3c8562ee4d2f5f7,
          mid_fillHalfRow_b43fc5b33307d469,
          mid_fillHalfRow_798e20ec3d655ef5,
          mid_fillHalfRow_296d5bbbcf8782f7,
          mid_hasNonKeplerianAcceleration_b214df3c89ce1ac9,
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
