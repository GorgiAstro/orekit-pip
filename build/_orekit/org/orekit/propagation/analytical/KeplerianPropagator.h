#ifndef org_orekit_propagation_analytical_KeplerianPropagator_H
#define org_orekit_propagation_analytical_KeplerianPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_a9af82a1647a21f3,
            mid_init$_6bcd4ef191c1dc21,
            mid_init$_23c8620d4b42ef5f,
            mid_init$_27faad14ca55d093,
            mid_init$_833f230a8a50fec3,
            mid_resetInitialState_8655761ebf04b503,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_createHarvester_5f0409a66c29e9c1,
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
