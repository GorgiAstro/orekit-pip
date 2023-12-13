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
            mid_init$_7077d4247ef1c4a5,
            mid_addEffect_c6b40735d6c87d8a,
            mid_getEffects_e62d3bb06d56d7e3,
            mid_getInitialState_9d155cc8314c99cf,
            mid_getPropagator_75ab23d3f479a59b,
            mid_resetInitialState_280c3390961e0a50,
            mid_getMass_fd347811007a6ba3,
            mid_basicPropagate_4f0008999861ca31,
            mid_resetIntermediateState_1c47c97cdbc7e206,
            mid_propagateOrbit_5df6dcb5c4123339,
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
