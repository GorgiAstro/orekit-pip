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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
      class ParameterDriversProvider;
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
            mid_init$_5eb36e8f2e4790b5,
            mid_init$_fc8990643a59cc3a,
            mid_init$_3ac8436b360cd5bb,
            mid_init$_cdc9d14545e0c203,
            mid_init$_02247cd530832bbc,
            mid_init$_4eba2846f9577fdc,
            mid_init$_696d039b06e7b14b,
            mid_init$_9ea270337f95ff4c,
            mid_init$_a214f2949187508c,
            mid_init$_6fdccf30ac5ccd71,
            mid_init$_e53f83b52f48b75e,
            mid_init$_016d2092114ea672,
            mid_init$_1445dac576226bc7,
            mid_init$_844117abf3e4679d,
            mid_computeMeanOrbit_0f0dcf93792b53ad,
            mid_computeMeanOrbit_ac9aeda78f0e5de3,
            mid_computeMeanOrbit_2364cc6d8503bfd9,
            mid_getCk0_7cdc325af0834901,
            mid_getM2_456d9a2f64d6b28d,
            mid_getMu_456d9a2f64d6b28d,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getReferenceRadius_456d9a2f64d6b28d,
            mid_propagateOrbit_99e79dca79eef30e,
            mid_resetInitialState_2b88003f931f70a7,
            mid_resetInitialState_dfbbbfbf78c55942,
            mid_resetInitialState_8db5913253ef6ad3,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_83d0edaa13a56f81,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_createHarvester_d3d4ea925a699046,
            mid_getJacobiansColumnsNames_a6156df500549a58,
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
