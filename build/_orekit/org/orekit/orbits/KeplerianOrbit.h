#ifndef org_orekit_orbits_KeplerianOrbit_H
#define org_orekit_orbits_KeplerianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleBased;
      class KeplerianOrbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_a9af82a1647a21f3,
          mid_init$_7c6479063e790949,
          mid_init$_5005ce863a640a87,
          mid_init$_93fbea8aef52fcb9,
          mid_init$_6687db2a115b6393,
          mid_addKeplerContribution_9dda16418cc4ed80,
          mid_getA_557b8123390d8d0c,
          mid_getADot_557b8123390d8d0c,
          mid_getAnomaly_20637fb12d17f9d4,
          mid_getAnomalyDot_20637fb12d17f9d4,
          mid_getCachedPositionAngleType_f4984aee71df4c19,
          mid_getE_557b8123390d8d0c,
          mid_getEDot_557b8123390d8d0c,
          mid_getEccentricAnomaly_557b8123390d8d0c,
          mid_getEccentricAnomalyDot_557b8123390d8d0c,
          mid_getEquinoctialEx_557b8123390d8d0c,
          mid_getEquinoctialExDot_557b8123390d8d0c,
          mid_getEquinoctialEy_557b8123390d8d0c,
          mid_getEquinoctialEyDot_557b8123390d8d0c,
          mid_getHx_557b8123390d8d0c,
          mid_getHxDot_557b8123390d8d0c,
          mid_getHy_557b8123390d8d0c,
          mid_getHyDot_557b8123390d8d0c,
          mid_getI_557b8123390d8d0c,
          mid_getIDot_557b8123390d8d0c,
          mid_getLE_557b8123390d8d0c,
          mid_getLEDot_557b8123390d8d0c,
          mid_getLM_557b8123390d8d0c,
          mid_getLMDot_557b8123390d8d0c,
          mid_getLv_557b8123390d8d0c,
          mid_getLvDot_557b8123390d8d0c,
          mid_getMeanAnomaly_557b8123390d8d0c,
          mid_getMeanAnomalyDot_557b8123390d8d0c,
          mid_getPerigeeArgument_557b8123390d8d0c,
          mid_getPerigeeArgumentDot_557b8123390d8d0c,
          mid_getRightAscensionOfAscendingNode_557b8123390d8d0c,
          mid_getRightAscensionOfAscendingNodeDot_557b8123390d8d0c,
          mid_getTrueAnomaly_557b8123390d8d0c,
          mid_getTrueAnomalyDot_557b8123390d8d0c,
          mid_getType_2cea2a2cb3e02091,
          mid_hasRates_89b302893bdbe1f1,
          mid_removeRates_48360cd036a5e97b,
          mid_shiftedBy_470f25348274562f,
          mid_toString_3cffd47377eca18a,
          mid_initPVCoordinates_daf15abc21907508,
          mid_initPosition_f88961cca75a2c0a,
          mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3,
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
