#ifndef org_orekit_propagation_analytical_AdapterPropagator_H
#define org_orekit_propagation_analytical_AdapterPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class Propagator;
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AdapterPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_52713bb4a21e1f43,
            mid_addEffect_3931de52c7764f12,
            mid_getEffects_0d9551367f7ecdef,
            mid_getInitialState_15e85d5301b90ef8,
            mid_getPropagator_8d6cf3295e825916,
            mid_resetInitialState_8655761ebf04b503,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_resetIntermediateState_45bf76e836befe86,
            mid_getMass_b0b988f941da47d8,
            mid_basicPropagate_15e0d02372b1347b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdapterPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdapterPropagator(const AdapterPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          AdapterPropagator(const ::org::orekit::propagation::Propagator &);

          void addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect &) const;
          ::java::util::List getEffects() const;
          ::org::orekit::propagation::SpacecraftState getInitialState() const;
          ::org::orekit::propagation::Propagator getPropagator() const;
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
        extern PyType_Def PY_TYPE_DEF(AdapterPropagator);
        extern PyTypeObject *PY_TYPE(AdapterPropagator);

        class t_AdapterPropagator {
        public:
          PyObject_HEAD
          AdapterPropagator object;
          static PyObject *wrap_Object(const AdapterPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
