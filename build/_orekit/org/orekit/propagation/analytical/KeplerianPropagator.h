#ifndef org_orekit_propagation_analytical_KeplerianPropagator_H
#define org_orekit_propagation_analytical_KeplerianPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
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
            mid_init$_e5b8a6a44355183e,
            mid_init$_b088b68c4e93a489,
            mid_init$_78ad6e50a2fd5c3b,
            mid_init$_df2189de2d62b7d0,
            mid_init$_9945d4571d3b6964,
            mid_resetInitialState_2b88003f931f70a7,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_createHarvester_d3d4ea925a699046,
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
