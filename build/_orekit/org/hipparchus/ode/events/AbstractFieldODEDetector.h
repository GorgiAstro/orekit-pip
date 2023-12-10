#ifndef org_hipparchus_ode_events_AbstractFieldODEDetector_H
#define org_hipparchus_ode_events_AbstractFieldODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace events {
        class FieldODEEventHandler;
        class FieldAdaptableInterval;
        class AbstractFieldODEDetector;
        class FieldODEEventDetector;
      }
      class FieldODEStateAndDerivative;
    }
    namespace analysis {
      namespace solvers {
        class BracketedRealFieldUnivariateSolver;
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

        class AbstractFieldODEDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_2fe24792561bd145,
            mid_getHandler_6becb2360697f07b,
            mid_getMaxCheckInterval_3c82d31ec337b8be,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getSolver_818bdb7f8312a2dd,
            mid_init_81b5dd1fb920fdc1,
            mid_isForward_b108b35ef48e27bd,
            mid_withHandler_b39a93bc3cee4fa8,
            mid_withMaxCheck_7ba6d3ff6c69ffdc,
            mid_withMaxCheck_ce900a3fd00fa916,
            mid_withMaxIter_ce991b19a4f74810,
            mid_withSolver_34261d528a331e74,
            mid_withThreshold_7ba6d3ff6c69ffdc,
            mid_create_faae19721acf326a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFieldODEDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFieldODEDetector(const AbstractFieldODEDetector& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_MAXCHECK;
          static jint DEFAULT_MAX_ITER;
          static jdouble DEFAULT_THRESHOLD;

          ::org::hipparchus::CalculusFieldElement g(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::FieldODEEventHandler getHandler() const;
          ::org::hipparchus::ode::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver getSolver() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean isForward() const;
          AbstractFieldODEDetector withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler &) const;
          AbstractFieldODEDetector withMaxCheck(const ::org::hipparchus::CalculusFieldElement &) const;
          AbstractFieldODEDetector withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval &) const;
          AbstractFieldODEDetector withMaxIter(jint) const;
          AbstractFieldODEDetector withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver &) const;
          AbstractFieldODEDetector withThreshold(const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractFieldODEDetector);
        extern PyTypeObject *PY_TYPE(AbstractFieldODEDetector);

        class t_AbstractFieldODEDetector {
        public:
          PyObject_HEAD
          AbstractFieldODEDetector object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_AbstractFieldODEDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractFieldODEDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractFieldODEDetector&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
