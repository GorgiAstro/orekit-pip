#ifndef org_orekit_propagation_analytical_AdapterPropagator_H
#define org_orekit_propagation_analytical_AdapterPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class Propagator;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_init$_f334dbd717e289d2,
            mid_addEffect_b9dba4c0ba7dcddb,
            mid_getEffects_d751c1a57012b438,
            mid_getInitialState_8fbfa58855031235,
            mid_getPropagator_605fbba6f75c4d5a,
            mid_resetInitialState_72b846eb87f3af9a,
            mid_getMass_209f08246d708042,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_basicPropagate_1e982279849c3b65,
            mid_resetIntermediateState_b69b5541e48d21c0,
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
