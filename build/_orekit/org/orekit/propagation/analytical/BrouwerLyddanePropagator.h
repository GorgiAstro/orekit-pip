#ifndef org_orekit_propagation_analytical_BrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_BrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace orbits {
      class KeplerianOrbit;
      class Orbit;
    }
    namespace utils {
      class ParameterDriver;
      class ParameterDriversProvider;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class BrouwerLyddanePropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_65a89f7e11326edb,
            mid_init$_72bb5fd9248459ec,
            mid_init$_3bbaee0cd134e64d,
            mid_init$_51ca8416b8041192,
            mid_init$_30a09973fa93a380,
            mid_init$_1abc9dfeae04dcd1,
            mid_init$_76469dc8b3177e2d,
            mid_init$_5480bf14a8e1b439,
            mid_init$_c1ce6d7a4b6f55df,
            mid_init$_6c46459a430a1264,
            mid_init$_a4ba5fe6da24ec6b,
            mid_init$_3b89d9d09fc7e150,
            mid_init$_8e7c787222eb0372,
            mid_init$_4aa17fceee61a1fc,
            mid_computeMeanOrbit_7650e78f6078508c,
            mid_computeMeanOrbit_a29df85448b17ec0,
            mid_computeMeanOrbit_46a72092c059ae31,
            mid_getCk0_a53a7513ecedada2,
            mid_getM2_557b8123390d8d0c,
            mid_getMu_557b8123390d8d0c,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getReferenceRadius_557b8123390d8d0c,
            mid_propagateOrbit_0788a2ada99e6ef9,
            mid_resetInitialState_8655761ebf04b503,
            mid_resetInitialState_cd59a3a5d9eb366e,
            mid_resetInitialState_c13195962bdcee40,
            mid_getJacobiansColumnsNames_0d9551367f7ecdef,
            mid_resetIntermediateState_ac5c93ef3cbab63b,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_createHarvester_5f0409a66c29e9c1,
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
