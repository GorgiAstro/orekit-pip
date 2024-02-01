#ifndef org_hipparchus_ode_events_AbstractFieldODEDetector_H
#define org_hipparchus_ode_events_AbstractFieldODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventDetector;
        class AbstractFieldODEDetector;
        class FieldODEEventHandler;
        class FieldAdaptableInterval;
      }
      class FieldODEStateAndDerivative;
    }
    namespace analysis {
      namespace solvers {
        class BracketedRealFieldUnivariateSolver;
      }
    }
    class CalculusFieldElement;
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
            mid_g_455ff24598d85771,
            mid_getHandler_dbadd838da9b41eb,
            mid_getMaxCheckInterval_e0c20def93760aa5,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getSolver_015c35a97d20bc51,
            mid_init_2a077928ff78cfcb,
            mid_isForward_eee3de00fe971136,
            mid_withHandler_f644ffa57f9fa0cf,
            mid_withMaxCheck_7d72de8d8fb436b2,
            mid_withMaxCheck_e92acb2a386c9c5f,
            mid_withMaxIter_74542175c9ca7f13,
            mid_withSolver_bee7daa46becd0d1,
            mid_withThreshold_7d72de8d8fb436b2,
            mid_create_f366c9a6698449a1,
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
