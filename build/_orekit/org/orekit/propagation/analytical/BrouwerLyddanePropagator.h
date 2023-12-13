#ifndef org_orekit_propagation_analytical_BrouwerLyddanePropagator_H
#define org_orekit_propagation_analytical_BrouwerLyddanePropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class PropagationType;
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
      class KeplerianOrbit;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
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
            mid_init$_0bbb089293bc4a88,
            mid_init$_8a2d9c584fe29945,
            mid_init$_728615302266739c,
            mid_init$_d9dbf61a012914dd,
            mid_init$_72b4effae4c01625,
            mid_init$_faf0d800c8f6e365,
            mid_init$_c16ad5c95c13d840,
            mid_init$_6c81fde1ab8df027,
            mid_init$_aa6e6da4b4001fdc,
            mid_init$_c2b0e265375635a9,
            mid_init$_f485802d763f13ed,
            mid_init$_a5f830cc0aa5c9db,
            mid_init$_21f4c27413777dd7,
            mid_init$_f13a908cbdc32ee1,
            mid_computeMeanOrbit_c35a3d7f9cccaea0,
            mid_computeMeanOrbit_e039e89fdb8e6640,
            mid_computeMeanOrbit_970bb7109236d90c,
            mid_getCk0_25e1757a36c4dde2,
            mid_getM2_b74f83833fdad017,
            mid_getMu_b74f83833fdad017,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getReferenceRadius_b74f83833fdad017,
            mid_propagateOrbit_4904353d33ab9854,
            mid_resetInitialState_280c3390961e0a50,
            mid_resetInitialState_5cc6a7fd8ae54bf5,
            mid_resetInitialState_37269bbd67e095aa,
            mid_getMass_fd347811007a6ba3,
            mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
            mid_resetIntermediateState_3e9d696c5e44e513,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_createHarvester_f85b53b28e0fe6bb,
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
