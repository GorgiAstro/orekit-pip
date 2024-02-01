#ifndef org_orekit_orbits_EquinoctialOrbit_H
#define org_orekit_orbits_EquinoctialOrbit_H

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
      class EquinoctialOrbit;
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

      class EquinoctialOrbit : public ::org::orekit::orbits::Orbit {
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
          mid_getCachedPositionAngleType_a6db4e6edefda4be,
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
          mid_getL_d70fe653db6c6bd3,
          mid_getLDot_d70fe653db6c6bd3,
          mid_getLE_9981f74b2d109da6,
          mid_getLEDot_9981f74b2d109da6,
          mid_getLM_9981f74b2d109da6,
          mid_getLMDot_9981f74b2d109da6,
          mid_getLv_9981f74b2d109da6,
          mid_getLvDot_9981f74b2d109da6,
          mid_getType_495f818d3570b7f5,
          mid_hasRates_eee3de00fe971136,
          mid_meanToEccentric_db06d8c3fc3d9670,
          mid_removeRates_1d03f68d0241dac0,
          mid_shiftedBy_deb69461719629e0,
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

        explicit EquinoctialOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EquinoctialOrbit(const EquinoctialOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        EquinoctialOrbit(const ::org::orekit::orbits::Orbit &);
        EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        EquinoctialOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        EquinoctialOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        static jdouble eccentricToMean(jdouble, jdouble, jdouble);
        static jdouble eccentricToTrue(jdouble, jdouble, jdouble);
        jdouble getA() const;
        jdouble getADot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
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
        jdouble getL(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getLDot(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLM() const;
        jdouble getLMDot() const;
        jdouble getLv() const;
        jdouble getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasRates() const;
        static jdouble meanToEccentric(jdouble, jdouble, jdouble);
        EquinoctialOrbit removeRates() const;
        EquinoctialOrbit shiftedBy(jdouble) const;
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
      extern PyType_Def PY_TYPE_DEF(EquinoctialOrbit);
      extern PyTypeObject *PY_TYPE(EquinoctialOrbit);

      class t_EquinoctialOrbit {
      public:
        PyObject_HEAD
        EquinoctialOrbit object;
        static PyObject *wrap_Object(const EquinoctialOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
