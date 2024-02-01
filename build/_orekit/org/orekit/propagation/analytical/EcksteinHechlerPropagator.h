#ifndef org_orekit_propagation_analytical_EcksteinHechlerPropagator_H
#define org_orekit_propagation_analytical_EcksteinHechlerPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class CircularOrbit;
      class CartesianOrbit;
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
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
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
            mid_init$_4bca5d056f2171ab,
            mid_init$_21b8c4d4301056aa,
            mid_init$_b347ebba1de9fc04,
            mid_init$_6c9c4264b15be175,
            mid_init$_27bad39efbcf702c,
            mid_init$_62d0cc98427b4eb5,
            mid_init$_f8627afae6f0c6f2,
            mid_init$_68d82ef50a685172,
            mid_init$_c5477237f92cb418,
            mid_init$_32e9d1e950a78bc0,
            mid_init$_9facbb2d63b09a07,
            mid_init$_5a6b3e62be7f2c62,
            mid_init$_90f710ee9427b6d0,
            mid_init$_1a7ee5bda9a1c74a,
            mid_computeMeanOrbit_956b7e40617b376c,
            mid_computeMeanOrbit_0eb73714067621de,
            mid_computeMeanOrbit_956d95065efaec5f,
            mid_getCk0_be783177b060994b,
            mid_getMu_9981f74b2d109da6,
            mid_getReferenceRadius_9981f74b2d109da6,
            mid_propagateOrbit_9c4726700f694a3c,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_resetInitialState_3f94e7a0a2844a08,
            mid_resetInitialState_5463628f1a7002e0,
            mid_getMass_209f08246d708042,
            mid_createHarvester_d0aee1b2c15f4d53,
            mid_resetIntermediateState_b69b5541e48d21c0,
            mid_resetIntermediateState_5ecf00e07ef54854,
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
