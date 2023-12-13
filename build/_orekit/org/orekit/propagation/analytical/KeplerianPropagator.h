#ifndef org_orekit_propagation_analytical_KeplerianPropagator_H
#define org_orekit_propagation_analytical_KeplerianPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
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

        class KeplerianPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_69b47a274eed440d,
            mid_init$_8fed341cbd0be79a,
            mid_init$_b17fc9ddddb90642,
            mid_init$_e67a3f64db21455b,
            mid_init$_88484f0bd7270549,
            mid_resetInitialState_280c3390961e0a50,
            mid_getMass_fd347811007a6ba3,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
            mid_createHarvester_f85b53b28e0fe6bb,
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
