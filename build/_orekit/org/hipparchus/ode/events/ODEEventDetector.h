#ifndef org_hipparchus_ode_events_ODEEventDetector_H
#define org_hipparchus_ode_events_ODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class AdaptableInterval;
        class ODEEventHandler;
      }
      class ODEStateAndDerivative;
    }
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class BracketedUnivariateSolver;
      }
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
  namespace hipparchus {
    namespace ode {
      namespace events {

        class ODEEventDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_4a3e96b6f1af9d91,
            mid_getHandler_1066bb0522dfdb81,
            mid_getMaxCheckInterval_f27f9c0aa71fac14,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getSolver_88c9da53bb1865ce,
            mid_init_7e69c83de8052a2b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEEventDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEEventDetector(const ODEEventDetector& obj) : ::java::lang::Object(obj) {}

          jdouble g(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::ODEEventHandler getHandler() const;
          ::org::hipparchus::ode::events::AdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver getSolver() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(ODEEventDetector);
        extern PyTypeObject *PY_TYPE(ODEEventDetector);

        class t_ODEEventDetector {
        public:
          PyObject_HEAD
          ODEEventDetector object;
          static PyObject *wrap_Object(const ODEEventDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
