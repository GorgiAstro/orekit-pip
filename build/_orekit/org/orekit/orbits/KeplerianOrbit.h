#ifndef org_orekit_orbits_KeplerianOrbit_H
#define org_orekit_orbits_KeplerianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace orbits {
      class PositionAngleBased;
      class KeplerianOrbit;
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_69b47a274eed440d,
          mid_init$_18124f64d7fce8bd,
          mid_init$_bc81b5d0c2baa99c,
          mid_init$_5fc5d1b0e40c2d5b,
          mid_init$_3058e51cfd00310e,
          mid_addKeplerContribution_2a5649bc1625306e,
          mid_getA_b74f83833fdad017,
          mid_getADot_b74f83833fdad017,
          mid_getAnomaly_68608c097e66b295,
          mid_getAnomalyDot_68608c097e66b295,
          mid_getCachedPositionAngleType_c25055891f180348,
          mid_getE_b74f83833fdad017,
          mid_getEDot_b74f83833fdad017,
          mid_getEccentricAnomaly_b74f83833fdad017,
          mid_getEccentricAnomalyDot_b74f83833fdad017,
          mid_getEquinoctialEx_b74f83833fdad017,
          mid_getEquinoctialExDot_b74f83833fdad017,
          mid_getEquinoctialEy_b74f83833fdad017,
          mid_getEquinoctialEyDot_b74f83833fdad017,
          mid_getHx_b74f83833fdad017,
          mid_getHxDot_b74f83833fdad017,
          mid_getHy_b74f83833fdad017,
          mid_getHyDot_b74f83833fdad017,
          mid_getI_b74f83833fdad017,
          mid_getIDot_b74f83833fdad017,
          mid_getLE_b74f83833fdad017,
          mid_getLEDot_b74f83833fdad017,
          mid_getLM_b74f83833fdad017,
          mid_getLMDot_b74f83833fdad017,
          mid_getLv_b74f83833fdad017,
          mid_getLvDot_b74f83833fdad017,
          mid_getMeanAnomaly_b74f83833fdad017,
          mid_getMeanAnomalyDot_b74f83833fdad017,
          mid_getPerigeeArgument_b74f83833fdad017,
          mid_getPerigeeArgumentDot_b74f83833fdad017,
          mid_getRightAscensionOfAscendingNode_b74f83833fdad017,
          mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017,
          mid_getTrueAnomaly_b74f83833fdad017,
          mid_getTrueAnomalyDot_b74f83833fdad017,
          mid_getType_c7d4737d7afca612,
          mid_hasRates_9ab94ac1dc23b105,
          mid_removeRates_f50f1bbccaeb207e,
          mid_shiftedBy_6dd0dbbaeda67047,
          mid_toString_1c1fa1e935d6cdcf,
          mid_initPosition_8b724f8b4fdad1a2,
          mid_initPVCoordinates_136cc8ba23b21c29,
          mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f,
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
