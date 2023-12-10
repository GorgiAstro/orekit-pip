#ifndef org_orekit_orbits_KeplerianOrbit_H
#define org_orekit_orbits_KeplerianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace orbits {
      class PositionAngleBased;
      class KeplerianOrbit;
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_e5b8a6a44355183e,
          mid_init$_c42dca2c1e36096d,
          mid_init$_e115ec145d0ee229,
          mid_init$_4eabb869f3e95925,
          mid_init$_8a0c29e70f4666fb,
          mid_addKeplerContribution_c8fa6ba58ef7126b,
          mid_getA_456d9a2f64d6b28d,
          mid_getADot_456d9a2f64d6b28d,
          mid_getAnomaly_9803e84c1105942b,
          mid_getAnomalyDot_9803e84c1105942b,
          mid_getCachedPositionAngleType_2571e8fe1cede425,
          mid_getE_456d9a2f64d6b28d,
          mid_getEDot_456d9a2f64d6b28d,
          mid_getEccentricAnomaly_456d9a2f64d6b28d,
          mid_getEccentricAnomalyDot_456d9a2f64d6b28d,
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
          mid_getLE_456d9a2f64d6b28d,
          mid_getLEDot_456d9a2f64d6b28d,
          mid_getLM_456d9a2f64d6b28d,
          mid_getLMDot_456d9a2f64d6b28d,
          mid_getLv_456d9a2f64d6b28d,
          mid_getLvDot_456d9a2f64d6b28d,
          mid_getMeanAnomaly_456d9a2f64d6b28d,
          mid_getMeanAnomalyDot_456d9a2f64d6b28d,
          mid_getPerigeeArgument_456d9a2f64d6b28d,
          mid_getPerigeeArgumentDot_456d9a2f64d6b28d,
          mid_getRightAscensionOfAscendingNode_456d9a2f64d6b28d,
          mid_getRightAscensionOfAscendingNodeDot_456d9a2f64d6b28d,
          mid_getTrueAnomaly_456d9a2f64d6b28d,
          mid_getTrueAnomalyDot_456d9a2f64d6b28d,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasRates_e470b6d9e0d979db,
          mid_removeRates_073190698893349f,
          mid_shiftedBy_7006cc464ada3a10,
          mid_toString_0090f7797e403f43,
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
