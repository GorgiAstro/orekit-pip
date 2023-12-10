#ifndef org_orekit_propagation_analytical_EcksteinHechlerPropagator_H
#define org_orekit_propagation_analytical_EcksteinHechlerPropagator_H

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
    namespace orbits {
      class CartesianOrbit;
      class Orbit;
      class CircularOrbit;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class EcksteinHechlerPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_57eaa3ebdba6e598,
            mid_init$_0a2e19a4f50ce1c1,
            mid_init$_d85a62fcd038d780,
            mid_init$_8dfffadcf0615726,
            mid_init$_2e5490053653a34b,
            mid_init$_35af14f266fc113e,
            mid_init$_036644e335827428,
            mid_init$_5089879e73b16ab9,
            mid_init$_4afced4a8ff4bea6,
            mid_init$_e47ae3c1fa8fb703,
            mid_init$_54f20a766b03c649,
            mid_init$_0a5ace5164997436,
            mid_init$_61aff361472ec0a8,
            mid_init$_d9a76e24a36c19d4,
            mid_computeMeanOrbit_711718190d0c0ee5,
            mid_computeMeanOrbit_dd86578b4c2ad17d,
            mid_computeMeanOrbit_1ebbb61137254739,
            mid_getCk0_60c7040667a7dc5c,
            mid_getMu_dff5885c2c873297,
            mid_getReferenceRadius_dff5885c2c873297,
            mid_propagateOrbit_f55175775a204ad4,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_resetInitialState_49bd3c28fa9b4521,
            mid_resetInitialState_e810a1bf28643513,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_resetIntermediateState_f44ee54963124581,
            mid_createHarvester_5cfd2a13971b74c7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EcksteinHechlerPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EcksteinHechlerPropagator(const EcksteinHechlerPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::propagation::PropagationType &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, const ::org::orekit::propagation::PropagationType &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &);
          EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::propagation::PropagationType &, jdouble, jint);

          static ::org::orekit::orbits::CircularOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &);
          static ::org::orekit::orbits::CircularOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics &, jdouble, jint);
          static ::org::orekit::orbits::CircularOrbit computeMeanOrbit(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
          JArray< jdouble > getCk0() const;
          jdouble getMu() const;
          jdouble getReferenceRadius() const;
          ::org::orekit::orbits::CartesianOrbit propagateOrbit(const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(EcksteinHechlerPropagator);
        extern PyTypeObject *PY_TYPE(EcksteinHechlerPropagator);

        class t_EcksteinHechlerPropagator {
        public:
          PyObject_HEAD
          EcksteinHechlerPropagator object;
          static PyObject *wrap_Object(const EcksteinHechlerPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
