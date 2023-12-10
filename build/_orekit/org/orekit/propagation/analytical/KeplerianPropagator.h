#ifndef org_orekit_propagation_analytical_KeplerianPropagator_H
#define org_orekit_propagation_analytical_KeplerianPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_6219f6b430651d68,
            mid_init$_6a752d664cb18d86,
            mid_init$_6d1157b698d5d0d2,
            mid_init$_664d66016fd6d2d1,
            mid_init$_14feca30358aa4fd,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_createHarvester_5cfd2a13971b74c7,
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
