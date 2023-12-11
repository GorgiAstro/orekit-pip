#ifndef org_orekit_propagation_analytical_EcksteinHechlerPropagator_H
#define org_orekit_propagation_analytical_EcksteinHechlerPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CartesianOrbit;
      class CircularOrbit;
      class Orbit;
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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
      class PropagationType;
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
            mid_init$_432cfeb1d64c6b24,
            mid_init$_1c0c609dcec92c29,
            mid_init$_db66cf678cb4783b,
            mid_init$_b7ad73e24acb9915,
            mid_init$_e3ab774e618884e3,
            mid_init$_5de8ec83b6037cbc,
            mid_init$_5601cb7796d59a03,
            mid_init$_fd651ce50fe0c7d2,
            mid_init$_c1ce6d7a4b6f55df,
            mid_init$_6c46459a430a1264,
            mid_init$_a4ba5fe6da24ec6b,
            mid_init$_3b89d9d09fc7e150,
            mid_init$_c7707cc64768005a,
            mid_init$_463046fe2562eee1,
            mid_computeMeanOrbit_53400b6ce8f3ad99,
            mid_computeMeanOrbit_452b7389358181cb,
            mid_computeMeanOrbit_81d1520f0cac91b7,
            mid_getCk0_a53a7513ecedada2,
            mid_getMu_557b8123390d8d0c,
            mid_getReferenceRadius_557b8123390d8d0c,
            mid_propagateOrbit_04a5f52f279357aa,
            mid_resetInitialState_8655761ebf04b503,
            mid_resetInitialState_cd59a3a5d9eb366e,
            mid_resetInitialState_c13195962bdcee40,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_resetIntermediateState_ac5c93ef3cbab63b,
            mid_getMass_b0b988f941da47d8,
            mid_createHarvester_5f0409a66c29e9c1,
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
