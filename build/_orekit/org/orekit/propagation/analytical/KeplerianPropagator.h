#ifndef org_orekit_propagation_analytical_KeplerianPropagator_H
#define org_orekit_propagation_analytical_KeplerianPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
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

        class KeplerianPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_17534ef58ef3aaef,
            mid_init$_cd24915ef440ba23,
            mid_init$_02989731f8a729b5,
            mid_init$_b3c89926c8cce0db,
            mid_init$_f7a1cba9c3f4320d,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_getMass_209f08246d708042,
            mid_createHarvester_d0aee1b2c15f4d53,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_resetIntermediateState_b69b5541e48d21c0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeplerianPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeplerianPropagator(const KeplerianPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          KeplerianPropagator(const ::org::orekit::orbits::Orbit &);
          KeplerianPropagator(const ::org::orekit::orbits::Orbit &, jdouble);
          KeplerianPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &);
          KeplerianPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
          KeplerianPropagator(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, jdouble);

          void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(KeplerianPropagator);
        extern PyTypeObject *PY_TYPE(KeplerianPropagator);

        class t_KeplerianPropagator {
        public:
          PyObject_HEAD
          KeplerianPropagator object;
          static PyObject *wrap_Object(const KeplerianPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
