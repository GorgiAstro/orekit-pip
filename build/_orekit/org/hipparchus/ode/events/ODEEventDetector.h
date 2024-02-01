#ifndef org_hipparchus_ode_events_ODEEventDetector_H
#define org_hipparchus_ode_events_ODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class BracketedUnivariateSolver;
      }
    }
    namespace ode {
      namespace events {
        class ODEEventHandler;
        class AdaptableInterval;
      }
      class ODEStateAndDerivative;
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
            mid_g_c9c83b182b4bb0ba,
            mid_getHandler_6b3d990c0b31c333,
            mid_getMaxCheckInterval_356086c80be497a8,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getSolver_8fd4d30625048ab7,
            mid_init_25005604bcb94d07,
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
