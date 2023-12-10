#ifndef org_hipparchus_ode_events_AbstractODEDetector_H
#define org_hipparchus_ode_events_AbstractODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class ODEEventHandler;
        class AbstractODEDetector;
        class AdaptableInterval;
        class ODEEventDetector;
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

        class AbstractODEDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_021b54f582f9e537,
            mid_getHandler_7247a44d56e4e7e1,
            mid_getMaxCheckInterval_9a5537b770a5986b,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getSolver_4150c30eabb0f330,
            mid_init_5aaadc62bce8a394,
            mid_isForward_b108b35ef48e27bd,
            mid_withHandler_39c51a5079c7c678,
            mid_withMaxCheck_3d613fe0e4e80078,
            mid_withMaxCheck_b9a374b3c1f511a1,
            mid_withMaxIter_ef53f6276a11357c,
            mid_withSolver_2e720daa75c69c32,
            mid_withThreshold_3d613fe0e4e80078,
            mid_create_af9ea80f6fc355a3,
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
