#ifndef org_orekit_orbits_CircularOrbit_H
#define org_orekit_orbits_CircularOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CircularOrbit;
      class PositionAngleBased;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
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

      class CircularOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_69b47a274eed440d,
          mid_init$_18124f64d7fce8bd,
          mid_init$_bc81b5d0c2baa99c,
          mid_init$_5fc5d1b0e40c2d5b,
          mid_init$_3058e51cfd00310e,
          mid_addKeplerContribution_2a5649bc1625306e,
          mid_eccentricToMean_f804f816b79164cb,
          mid_eccentricToTrue_f804f816b79164cb,
          mid_getA_b74f83833fdad017,
          mid_getADot_b74f83833fdad017,
          mid_getAlpha_68608c097e66b295,
          mid_getAlphaDot_68608c097e66b295,
          mid_getAlphaE_b74f83833fdad017,
          mid_getAlphaEDot_b74f83833fdad017,
          mid_getAlphaM_b74f83833fdad017,
          mid_getAlphaMDot_b74f83833fdad017,
          mid_getAlphaV_b74f83833fdad017,
          mid_getAlphaVDot_b74f83833fdad017,
          mid_getCachedPositionAngleType_c25055891f180348,
          mid_getCircularEx_b74f83833fdad017,
          mid_getCircularExDot_b74f83833fdad017,
          mid_getCircularEy_b74f83833fdad017,
          mid_getCircularEyDot_b74f83833fdad017,
          mid_getE_b74f83833fdad017,
          mid_getEDot_b74f83833fdad017,
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
          mid_getRightAscensionOfAscendingNode_b74f83833fdad017,
          mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017,
          mid_getType_c7d4737d7afca612,
          mid_hasRates_9ab94ac1dc23b105,
          mid_meanToEccentric_f804f816b79164cb,
          mid_removeRates_ff9c43e14d9834f4,
          mid_shiftedBy_107ee8150ce097fa,
          mid_toString_1c1fa1e935d6cdcf,
          mid_trueToEccentric_f804f816b79164cb,
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
