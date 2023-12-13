#ifndef org_hipparchus_ode_events_AbstractODEDetector_H
#define org_hipparchus_ode_events_AbstractODEDetector_H

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
        class AbstractODEDetector;
        class ODEEventDetector;
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

        class AbstractODEDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_038ef328b98483a2,
            mid_getHandler_7cbaa83091baafae,
            mid_getMaxCheckInterval_ba458ca302d83bff,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getSolver_18aebf44ec9df73a,
            mid_init_a7556bd72cab73f1,
            mid_isForward_9ab94ac1dc23b105,
            mid_withHandler_c19703f3603adf39,
            mid_withMaxCheck_468b47e2d78ba8a5,
            mid_withMaxCheck_526235279d3e7b88,
            mid_withMaxIter_08beb84a61e797e0,
            mid_withSolver_33dcd86a035ace70,
            mid_withThreshold_468b47e2d78ba8a5,
            mid_create_93952e9ef79de03b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractODEDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractODEDetector(const AbstractODEDetector& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_MAXCHECK;
          static jint DEFAULT_MAX_ITER;
          static jdouble DEFAULT_THRESHOLD;

          jdouble g(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::ODEEventHandler getHandler() const;
          ::org::hipparchus::ode::events::AdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver getSolver() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
          jboolean isForward() const;
          AbstractODEDetector withHandler(const ::org::hipparchus::ode::events::ODEEventHandler &) const;
          AbstractODEDetector withMaxCheck(jdouble) const;
          AbstractODEDetector withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval &) const;
          AbstractODEDetector withMaxIter(jint) const;
          AbstractODEDetector withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver &) const;
          AbstractODEDetector withThreshold(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractODEDetector);
        extern PyTypeObject *PY_TYPE(AbstractODEDetector);

        class t_AbstractODEDetector {
        public:
          PyObject_HEAD
          AbstractODEDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractODEDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractODEDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractODEDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
