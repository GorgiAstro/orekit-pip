#ifndef org_hipparchus_ode_events_AbstractODEDetector_H
#define org_hipparchus_ode_events_AbstractODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class AdaptableInterval;
        class AbstractODEDetector;
        class ODEEventHandler;
        class ODEEventDetector;
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
            mid_g_4a3e96b6f1af9d91,
            mid_getHandler_1066bb0522dfdb81,
            mid_getMaxCheckInterval_f27f9c0aa71fac14,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getSolver_88c9da53bb1865ce,
            mid_init_7e69c83de8052a2b,
            mid_isForward_89b302893bdbe1f1,
            mid_withHandler_ea512a716b02ce4d,
            mid_withMaxCheck_7f1492bbe3772e53,
            mid_withMaxCheck_e7dbeb50f7049b2b,
            mid_withMaxIter_35638c0b37ecd5a2,
            mid_withSolver_911e24e8e0609b5d,
            mid_withThreshold_7f1492bbe3772e53,
            mid_create_bc7049580916f64e,
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
