#ifndef org_orekit_propagation_analytical_BrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_BrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
      class KeplerianOrbit;
    }
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class BrouwerLyddanePropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_ab35ed4f604dd5eb,
            mid_init$_82b2cad935fb5633,
            mid_init$_c3a138f7da8cfd67,
            mid_init$_a952b92f2853fea4,
            mid_init$_cce416370effa2f7,
            mid_init$_12d751c34f54322f,
            mid_init$_b4c2b96bc9f59246,
            mid_init$_096e4f5a3065b979,
            mid_init$_c5477237f92cb418,
            mid_init$_32e9d1e950a78bc0,
            mid_init$_9facbb2d63b09a07,
            mid_init$_5a6b3e62be7f2c62,
            mid_init$_10fd21ce831f8e04,
            mid_init$_863bab6ee9798ac8,
            mid_computeMeanOrbit_43d95393ce32e4e0,
            mid_computeMeanOrbit_58ac355e64ec8332,
            mid_computeMeanOrbit_506b74a398fbe28a,
            mid_getCk0_be783177b060994b,
            mid_getM2_9981f74b2d109da6,
            mid_getMu_9981f74b2d109da6,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getReferenceRadius_9981f74b2d109da6,
            mid_propagateOrbit_6de060c4d602af5f,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_resetInitialState_3f94e7a0a2844a08,
            mid_resetInitialState_5463628f1a7002e0,
            mid_getMass_209f08246d708042,
            mid_getJacobiansColumnsNames_d751c1a57012b438,
            mid_createHarvester_d0aee1b2c15f4d53,
            mid_resetIntermediateState_5ecf00e07ef54854,
            mid_resetIntermediateState_b69b5541e48d21c0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BrouwerLyddanePropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BrouwerLyddanePropagator(const BrouwerLyddanePropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          static jdouble M2;
          static ::java::lang::String *M2_NAME;

          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, const ::org::orekit::propagation::PropagationType &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble);
          BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble, jdouble, jint);

          static ::org::orekit::orbits::KeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble);
          static ::org::orekit::orbits::KeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble, jdouble, jint);
          static ::org::orekit::orbits::KeplerianOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
          JArray< jdouble > getCk0() const;
          jdouble getM2() const;
          jdouble getMu() const;
          ::java::util::List getParametersDrivers() const;
          jdouble getReferenceRadius() const;
          ::org::orekit::orbits::KeplerianOrbit propagateOrbit(const ::org::orekit::time::AbsoluteDate &) const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::PropagationType &) const;
          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::PropagationType &, jdouble, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(BrouwerLyddanePropagator);
        extern PyTypeObject *PY_TYPE(BrouwerLyddanePropagator);

        class t_BrouwerLyddanePropagator {
        public:
          PyObject_HEAD
          BrouwerLyddanePropagator object;
          static PyObject *wrap_Object(const BrouwerLyddanePropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
