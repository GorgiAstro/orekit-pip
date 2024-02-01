#ifndef org_orekit_orbits_KeplerianOrbit_H
#define org_orekit_orbits_KeplerianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class KeplerianOrbit;
      class PositionAngleBased;
    }
    namespace frames {
      class Frame;
    }
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

      class KeplerianOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_17534ef58ef3aaef,
          mid_init$_a8e6ee721e0d6799,
          mid_init$_78122b2ba50ff4ac,
          mid_init$_b2d612c221d7654c,
          mid_init$_5192e636016a7ffa,
          mid_addKeplerContribution_3ef35668c0b1580f,
          mid_getA_9981f74b2d109da6,
          mid_getADot_9981f74b2d109da6,
          mid_getAnomaly_d70fe653db6c6bd3,
          mid_getAnomalyDot_d70fe653db6c6bd3,
          mid_getCachedPositionAngleType_a6db4e6edefda4be,
          mid_getE_9981f74b2d109da6,
          mid_getEDot_9981f74b2d109da6,
          mid_getEccentricAnomaly_9981f74b2d109da6,
          mid_getEccentricAnomalyDot_9981f74b2d109da6,
          mid_getEquinoctialEx_9981f74b2d109da6,
          mid_getEquinoctialExDot_9981f74b2d109da6,
          mid_getEquinoctialEy_9981f74b2d109da6,
          mid_getEquinoctialEyDot_9981f74b2d109da6,
          mid_getHx_9981f74b2d109da6,
          mid_getHxDot_9981f74b2d109da6,
          mid_getHy_9981f74b2d109da6,
          mid_getHyDot_9981f74b2d109da6,
          mid_getI_9981f74b2d109da6,
          mid_getIDot_9981f74b2d109da6,
          mid_getLE_9981f74b2d109da6,
          mid_getLEDot_9981f74b2d109da6,
          mid_getLM_9981f74b2d109da6,
          mid_getLMDot_9981f74b2d109da6,
          mid_getLv_9981f74b2d109da6,
          mid_getLvDot_9981f74b2d109da6,
          mid_getMeanAnomaly_9981f74b2d109da6,
          mid_getMeanAnomalyDot_9981f74b2d109da6,
          mid_getPerigeeArgument_9981f74b2d109da6,
          mid_getPerigeeArgumentDot_9981f74b2d109da6,
          mid_getRightAscensionOfAscendingNode_9981f74b2d109da6,
          mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6,
          mid_getTrueAnomaly_9981f74b2d109da6,
          mid_getTrueAnomalyDot_9981f74b2d109da6,
          mid_getType_495f818d3570b7f5,
          mid_hasRates_eee3de00fe971136,
          mid_removeRates_05c9859fe4d10dff,
          mid_shiftedBy_6b1b8c52ea60ba5f,
          mid_toString_d2c8eb4129821f0e,
          mid_initPosition_032312bdeb3f2f93,
          mid_initPVCoordinates_674031698a428ce8,
          mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit KeplerianOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        KeplerianOrbit(const KeplerianOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        KeplerianOrbit(const ::org::orekit::orbits::Orbit &);
        KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        KeplerianOrbit(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        KeplerianOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        KeplerianOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        jdouble getA() const;
        jdouble getADot() const;
        jdouble getAnomaly(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getAnomalyDot(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
        jdouble getE() const;
        jdouble getEDot() const;
        jdouble getEccentricAnomaly() const;
        jdouble getEccentricAnomalyDot() const;
        jdouble getEquinoctialEx() const;
        jdouble getEquinoctialExDot() const;
        jdouble getEquinoctialEy() const;
        jdouble getEquinoctialEyDot() const;
        jdouble getHx() const;
        jdouble getHxDot() const;
        jdouble getHy() const;
        jdouble getHyDot() const;
        jdouble getI() const;
        jdouble getIDot() const;
        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLM() const;
        jdouble getLMDot() const;
        jdouble getLv() const;
        jdouble getLvDot() const;
        jdouble getMeanAnomaly() const;
        jdouble getMeanAnomalyDot() const;
        jdouble getPerigeeArgument() const;
        jdouble getPerigeeArgumentDot() const;
        jdouble getRightAscensionOfAscendingNode() const;
        jdouble getRightAscensionOfAscendingNodeDot() const;
        jdouble getTrueAnomaly() const;
        jdouble getTrueAnomalyDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasRates() const;
        KeplerianOrbit removeRates() const;
        KeplerianOrbit shiftedBy(jdouble) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(KeplerianOrbit);
      extern PyTypeObject *PY_TYPE(KeplerianOrbit);

      class t_KeplerianOrbit {
      public:
        PyObject_HEAD
        KeplerianOrbit object;
        static PyObject *wrap_Object(const KeplerianOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
