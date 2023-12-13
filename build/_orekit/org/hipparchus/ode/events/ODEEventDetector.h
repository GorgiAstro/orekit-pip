#ifndef org_hipparchus_ode_events_ODEEventDetector_H
#define org_hipparchus_ode_events_ODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver;
      }
      class UnivariateFunction;
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
            mid_g_038ef328b98483a2,
            mid_getHandler_7cbaa83091baafae,
            mid_getMaxCheckInterval_ba458ca302d83bff,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getSolver_18aebf44ec9df73a,
            mid_init_a7556bd72cab73f1,
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
