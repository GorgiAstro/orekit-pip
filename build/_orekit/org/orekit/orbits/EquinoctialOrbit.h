#ifndef org_orekit_orbits_EquinoctialOrbit_H
#define org_orekit_orbits_EquinoctialOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleBased;
      class PositionAngleType;
      class OrbitType;
      class EquinoctialOrbit;
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

      class EquinoctialOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_a9af82a1647a21f3,
          mid_init$_7c6479063e790949,
          mid_init$_5005ce863a640a87,
          mid_init$_93fbea8aef52fcb9,
          mid_init$_6687db2a115b6393,
          mid_addKeplerContribution_9dda16418cc4ed80,
          mid_eccentricToMean_8d02ba458f22e508,
          mid_eccentricToTrue_8d02ba458f22e508,
          mid_getA_557b8123390d8d0c,
          mid_getADot_557b8123390d8d0c,
          mid_getCachedPositionAngleType_f4984aee71df4c19,
          mid_getE_557b8123390d8d0c,
          mid_getEDot_557b8123390d8d0c,
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
          mid_getL_20637fb12d17f9d4,
          mid_getLDot_20637fb12d17f9d4,
          mid_getLE_557b8123390d8d0c,
          mid_getLEDot_557b8123390d8d0c,
          mid_getLM_557b8123390d8d0c,
          mid_getLMDot_557b8123390d8d0c,
          mid_getLv_557b8123390d8d0c,
          mid_getLvDot_557b8123390d8d0c,
          mid_getType_2cea2a2cb3e02091,
          mid_hasRates_89b302893bdbe1f1,
          mid_meanToEccentric_8d02ba458f22e508,
          mid_removeRates_122d53e131631054,
          mid_shiftedBy_adf034c2f114a9e6,
          mid_toString_3cffd47377eca18a,
          mid_trueToEccentric_8d02ba458f22e508,
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
