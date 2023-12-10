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
            mid_init$_d2c685c0565d437e,
            mid_addEffect_7774cfce6b8b756b,
            mid_getEffects_a6156df500549a58,
            mid_getInitialState_dd3e4a8d51055f1f,
            mid_getPropagator_46f8fd1706005d71,
            mid_resetInitialState_2b88003f931f70a7,
            mid_getMass_e912d21057defe63,
            mid_resetIntermediateState_9658cf3eaef14ef5,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_basicPropagate_889031abe87f3b14,
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
