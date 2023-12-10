#ifndef org_orekit_orbits_CircularOrbit_H
#define org_orekit_orbits_CircularOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class PositionAngleBased;
      class CircularOrbit;
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

      class CircularOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_6219f6b430651d68,
          mid_init$_7753eee512deef45,
          mid_init$_17efd10b0f16bc37,
          mid_init$_e66c4b38c78e70c5,
          mid_init$_6d75b48985bb90e6,
          mid_addKeplerContribution_f2365c7dd61a1cda,
          mid_eccentricToMean_8c19bdea212fe058,
          mid_eccentricToTrue_8c19bdea212fe058,
          mid_getA_dff5885c2c873297,
          mid_getADot_dff5885c2c873297,
          mid_getAlpha_2152aeb78bde0282,
          mid_getAlphaDot_2152aeb78bde0282,
          mid_getAlphaE_dff5885c2c873297,
          mid_getAlphaEDot_dff5885c2c873297,
          mid_getAlphaM_dff5885c2c873297,
          mid_getAlphaMDot_dff5885c2c873297,
          mid_getAlphaV_dff5885c2c873297,
          mid_getAlphaVDot_dff5885c2c873297,
          mid_getCachedPositionAngleType_8f17e83e5a86217c,
          mid_getCircularEx_dff5885c2c873297,
          mid_getCircularExDot_dff5885c2c873297,
          mid_getCircularEy_dff5885c2c873297,
          mid_getCircularEyDot_dff5885c2c873297,
          mid_getE_dff5885c2c873297,
          mid_getEDot_dff5885c2c873297,
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
          mid_getRightAscensionOfAscendingNode_dff5885c2c873297,
          mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297,
          mid_getType_e29360d311dc0e20,
          mid_hasRates_b108b35ef48e27bd,
          mid_meanToEccentric_8c19bdea212fe058,
          mid_removeRates_25661094a9b1d547,
          mid_shiftedBy_6422aa1344aec8d7,
          mid_toString_11b109bd155ca898,
          mid_trueToEccentric_8c19bdea212fe058,
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

        explicit CircularOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CircularOrbit(const CircularOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        CircularOrbit(const ::org::orekit::orbits::Orbit &);
        CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        CircularOrbit(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        CircularOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        CircularOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        static jdouble eccentricToMean(jdouble, jdouble, jdouble);
        static jdouble eccentricToTrue(jdouble, jdouble, jdouble);
        jdouble getA() const;
        jdouble getADot() const;
        jdouble getAlpha(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getAlphaDot(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getAlphaE() const;
        jdouble getAlphaEDot() const;
        jdouble getAlphaM() const;
        jdouble getAlphaMDot() const;
        jdouble getAlphaV() const;
        jdouble getAlphaVDot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
        jdouble getCircularEx() const;
        jdouble getCircularExDot() const;
        jdouble getCircularEy() const;
        jdouble getCircularEyDot() const;
        jdouble getE() const;
        jdouble getEDot() const;
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
        jdouble getRightAscensionOfAscendingNode() const;
        jdouble getRightAscensionOfAscendingNodeDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasRates() const;
        static jdouble meanToEccentric(jdouble, jdouble, jdouble);
        CircularOrbit removeRates() const;
        CircularOrbit shiftedBy(jdouble) const;
        ::java::lang::String toString() const;
        static jdouble trueToEccentric(jdouble, jdouble, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(CircularOrbit);
      extern PyTypeObject *PY_TYPE(CircularOrbit);

      class t_CircularOrbit {
      public:
        PyObject_HEAD
        CircularOrbit object;
        static PyObject *wrap_Object(const CircularOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
