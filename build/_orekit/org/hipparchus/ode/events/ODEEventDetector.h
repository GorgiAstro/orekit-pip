#ifndef org_hipparchus_ode_events_ODEEventDetector_H
#define org_hipparchus_ode_events_ODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class ODEEventHandler;
        class AdaptableInterval;
      }
      class ODEStateAndDerivative;
    }
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver;
      }
      class UnivariateFunction;
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
            mid_g_021b54f582f9e537,
            mid_getHandler_7247a44d56e4e7e1,
            mid_getMaxCheckInterval_9a5537b770a5986b,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getSolver_4150c30eabb0f330,
            mid_init_5aaadc62bce8a394,
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
