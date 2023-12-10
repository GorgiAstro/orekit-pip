#ifndef org_orekit_orbits_EquinoctialOrbit_H
#define org_orekit_orbits_EquinoctialOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class EquinoctialOrbit;
      class PositionAngleBased;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
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
          mid_init$_e5b8a6a44355183e,
          mid_init$_c42dca2c1e36096d,
          mid_init$_e115ec145d0ee229,
          mid_init$_4eabb869f3e95925,
          mid_init$_8a0c29e70f4666fb,
          mid_addKeplerContribution_c8fa6ba58ef7126b,
          mid_eccentricToMean_c564d6ace53a5934,
          mid_eccentricToTrue_c564d6ace53a5934,
          mid_getA_456d9a2f64d6b28d,
          mid_getADot_456d9a2f64d6b28d,
          mid_getCachedPositionAngleType_2571e8fe1cede425,
          mid_getE_456d9a2f64d6b28d,
          mid_getEDot_456d9a2f64d6b28d,
          mid_getEquinoctialEx_456d9a2f64d6b28d,
          mid_getEquinoctialExDot_456d9a2f64d6b28d,
          mid_getEquinoctialEy_456d9a2f64d6b28d,
          mid_getEquinoctialEyDot_456d9a2f64d6b28d,
          mid_getHx_456d9a2f64d6b28d,
          mid_getHxDot_456d9a2f64d6b28d,
          mid_getHy_456d9a2f64d6b28d,
          mid_getHyDot_456d9a2f64d6b28d,
          mid_getI_456d9a2f64d6b28d,
          mid_getIDot_456d9a2f64d6b28d,
          mid_getL_9803e84c1105942b,
          mid_getLDot_9803e84c1105942b,
          mid_getLE_456d9a2f64d6b28d,
          mid_getLEDot_456d9a2f64d6b28d,
          mid_getLM_456d9a2f64d6b28d,
          mid_getLMDot_456d9a2f64d6b28d,
          mid_getLv_456d9a2f64d6b28d,
          mid_getLvDot_456d9a2f64d6b28d,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasRates_e470b6d9e0d979db,
          mid_meanToEccentric_c564d6ace53a5934,
          mid_removeRates_fad2038b7b755f73,
          mid_shiftedBy_784f874c26ce56bc,
          mid_toString_0090f7797e403f43,
          mid_trueToEccentric_c564d6ace53a5934,
          mid_initPosition_17a952530a808943,
          mid_initPVCoordinates_6890805957bea2cd,
          mid_computeJacobianMeanWrtCartesian_43de1192439efa92,
          mid_computeJacobianEccentricWrtCartesian_43de1192439efa92,
          mid_computeJacobianTrueWrtCartesian_43de1192439efa92,
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
