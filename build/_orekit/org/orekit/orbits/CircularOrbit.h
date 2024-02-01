#ifndef org_orekit_orbits_CircularOrbit_H
#define org_orekit_orbits_CircularOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CircularOrbit;
      class OrbitType;
      class PositionAngleType;
      class PositionAngleBased;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
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

      class CircularOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_17534ef58ef3aaef,
          mid_init$_a8e6ee721e0d6799,
          mid_init$_78122b2ba50ff4ac,
          mid_init$_b2d612c221d7654c,
          mid_init$_5192e636016a7ffa,
          mid_addKeplerContribution_3ef35668c0b1580f,
          mid_eccentricToMean_db06d8c3fc3d9670,
          mid_eccentricToTrue_db06d8c3fc3d9670,
          mid_getA_9981f74b2d109da6,
          mid_getADot_9981f74b2d109da6,
          mid_getAlpha_d70fe653db6c6bd3,
          mid_getAlphaDot_d70fe653db6c6bd3,
          mid_getAlphaE_9981f74b2d109da6,
          mid_getAlphaEDot_9981f74b2d109da6,
          mid_getAlphaM_9981f74b2d109da6,
          mid_getAlphaMDot_9981f74b2d109da6,
          mid_getAlphaV_9981f74b2d109da6,
          mid_getAlphaVDot_9981f74b2d109da6,
          mid_getCachedPositionAngleType_a6db4e6edefda4be,
          mid_getCircularEx_9981f74b2d109da6,
          mid_getCircularExDot_9981f74b2d109da6,
          mid_getCircularEy_9981f74b2d109da6,
          mid_getCircularEyDot_9981f74b2d109da6,
          mid_getE_9981f74b2d109da6,
          mid_getEDot_9981f74b2d109da6,
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
          mid_getRightAscensionOfAscendingNode_9981f74b2d109da6,
          mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6,
          mid_getType_495f818d3570b7f5,
          mid_hasRates_eee3de00fe971136,
          mid_meanToEccentric_db06d8c3fc3d9670,
          mid_removeRates_3c88d8f1cf664f96,
          mid_shiftedBy_e6740214f1528ce1,
          mid_toString_d2c8eb4129821f0e,
          mid_trueToEccentric_db06d8c3fc3d9670,
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
