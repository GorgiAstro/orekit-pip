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
            mid_init$_a4d05ab8d79173b5,
            mid_addEffect_61deea2f3d73b301,
            mid_getEffects_2afa36052df4765d,
            mid_getInitialState_c6311115fea01a34,
            mid_getPropagator_8afbda2d6a487743,
            mid_resetInitialState_0ee5c56004643a2e,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_getMass_bf1d7732f1acb697,
            mid_resetIntermediateState_33f4696e4edaa03c,
            mid_basicPropagate_fbff2ff5554d95e1,
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
