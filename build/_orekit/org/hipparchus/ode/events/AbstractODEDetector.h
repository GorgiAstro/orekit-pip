#ifndef org_hipparchus_ode_events_AbstractODEDetector_H
#define org_hipparchus_ode_events_AbstractODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class AdaptableInterval;
        class ODEEventDetector;
        class ODEEventHandler;
        class AbstractODEDetector;
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
            mid_g_3b8f73a4d2dddc4a,
            mid_getHandler_91daffcf18e93821,
            mid_getMaxCheckInterval_3c6e49cd9bc6c1c8,
            mid_getMaxIterationCount_f2f64475e4580546,
            mid_getSolver_26f10bd8188f2feb,
            mid_init_85808f3d6374b436,
            mid_isForward_e470b6d9e0d979db,
            mid_withHandler_60ce6abb4deacb75,
            mid_withMaxCheck_560c22f5ff551d53,
            mid_withMaxCheck_aaf7e0457681d7e5,
            mid_withMaxIter_1e567b9b84e3c31a,
            mid_withSolver_9b8704de139cf6ff,
            mid_withThreshold_560c22f5ff551d53,
            mid_create_1ad2c706c2225c33,
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
