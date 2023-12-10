#ifndef org_orekit_propagation_analytical_BrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_BrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class KeplerianOrbit;
      class Orbit;
    }
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_31607b718e7a1097,
            mid_init$_a1b1c06f492959e4,
            mid_init$_8646cc10dd33bbf2,
            mid_init$_2c72174dffba1894,
            mid_init$_f8b9250146f13e12,
            mid_init$_252682d189d40f9c,
            mid_init$_54e2c5d7b9423480,
            mid_init$_20cb587487bfb507,
            mid_init$_4afced4a8ff4bea6,
            mid_init$_e47ae3c1fa8fb703,
            mid_init$_54f20a766b03c649,
            mid_init$_0a5ace5164997436,
            mid_init$_97c1c2d9fb9540d2,
            mid_init$_c47d0d0c5cbf47f4,
            mid_computeMeanOrbit_246b62ce75e6ee7b,
            mid_computeMeanOrbit_6de83e60186a683f,
            mid_computeMeanOrbit_739ead9f7fc14c65,
            mid_getCk0_60c7040667a7dc5c,
            mid_getM2_dff5885c2c873297,
            mid_getMu_dff5885c2c873297,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getReferenceRadius_dff5885c2c873297,
            mid_propagateOrbit_ce31a304312e0d13,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_resetInitialState_49bd3c28fa9b4521,
            mid_resetInitialState_e810a1bf28643513,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_resetIntermediateState_f44ee54963124581,
            mid_getJacobiansColumnsNames_2afa36052df4765d,
            mid_createHarvester_5cfd2a13971b74c7,
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
