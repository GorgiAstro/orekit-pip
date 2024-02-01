#ifndef org_hipparchus_ode_events_AbstractODEDetector_H
#define org_hipparchus_ode_events_AbstractODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class AbstractODEDetector;
        class ODEEventHandler;
        class ODEEventDetector;
        class AdaptableInterval;
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

        class AbstractODEDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_c9c83b182b4bb0ba,
            mid_getHandler_6b3d990c0b31c333,
            mid_getMaxCheckInterval_356086c80be497a8,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getSolver_8fd4d30625048ab7,
            mid_init_25005604bcb94d07,
            mid_isForward_eee3de00fe971136,
            mid_withHandler_e90ba0252dc44aaf,
            mid_withMaxCheck_468ccac183fda373,
            mid_withMaxCheck_14dd01d73e9b764a,
            mid_withMaxIter_54211d4451263a17,
            mid_withSolver_061760a5d8d1b741,
            mid_withThreshold_468ccac183fda373,
            mid_create_557e2a0058eadc7b,
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
