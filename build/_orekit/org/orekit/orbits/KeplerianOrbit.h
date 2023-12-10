#ifndef org_orekit_orbits_KeplerianOrbit_H
#define org_orekit_orbits_KeplerianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class KeplerianOrbit;
      class PositionAngleBased;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
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
          mid_init$_6219f6b430651d68,
          mid_init$_7753eee512deef45,
          mid_init$_17efd10b0f16bc37,
          mid_init$_e66c4b38c78e70c5,
          mid_init$_6d75b48985bb90e6,
          mid_addKeplerContribution_f2365c7dd61a1cda,
          mid_getA_dff5885c2c873297,
          mid_getADot_dff5885c2c873297,
          mid_getAnomaly_2152aeb78bde0282,
          mid_getAnomalyDot_2152aeb78bde0282,
          mid_getCachedPositionAngleType_8f17e83e5a86217c,
          mid_getE_dff5885c2c873297,
          mid_getEDot_dff5885c2c873297,
          mid_getEccentricAnomaly_dff5885c2c873297,
          mid_getEccentricAnomalyDot_dff5885c2c873297,
          mid_getEquinoctialEx_dff5885c2c873297,
          mid_getEquinoctialExDot_dff5885c2c873297,
          mid_getEquinoctialEy_dff5885c2c873297,
          mid_getEquinoctialEyDot_dff5885c2c873297,
          mid_getHx_dff5885c2c873297,
          mid_getHxDot_dff5885c2c873297,
          mid_getHy_dff5885c2c873297,
          mid_getHyDot_dff5885c2c873297,
          mid_getI_dff5885c2c873297,
          mid_getIDot_dff5885c2c873297,
          mid_getLE_dff5885c2c873297,
          mid_getLEDot_dff5885c2c873297,
          mid_getLM_dff5885c2c873297,
          mid_getLMDot_dff5885c2c873297,
          mid_getLv_dff5885c2c873297,
          mid_getLvDot_dff5885c2c873297,
          mid_getMeanAnomaly_dff5885c2c873297,
          mid_getMeanAnomalyDot_dff5885c2c873297,
          mid_getPerigeeArgument_dff5885c2c873297,
          mid_getPerigeeArgumentDot_dff5885c2c873297,
          mid_getRightAscensionOfAscendingNode_dff5885c2c873297,
          mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297,
          mid_getTrueAnomaly_dff5885c2c873297,
          mid_getTrueAnomalyDot_dff5885c2c873297,
          mid_getType_e29360d311dc0e20,
          mid_hasRates_b108b35ef48e27bd,
          mid_removeRates_3b8c2ada972e4fd7,
          mid_shiftedBy_dfc12e553ee01b99,
          mid_toString_11b109bd155ca898,
          mid_initPVCoordinates_c204436deca11d94,
          mid_initPosition_d52645e0d4c07563,
          mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1,
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
