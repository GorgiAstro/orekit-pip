#ifndef org_hipparchus_ode_events_AbstractFieldODEDetector_H
#define org_hipparchus_ode_events_AbstractFieldODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventHandler;
        class AbstractFieldODEDetector;
        class FieldAdaptableInterval;
        class FieldODEEventDetector;
      }
      class FieldODEStateAndDerivative;
    }
    class CalculusFieldElement;
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
            mid_g_751903dc38e0b7e8,
            mid_getHandler_daa4dcd20dd895b8,
            mid_getMaxCheckInterval_9e96a56f8b6efe47,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getSolver_95522f52875c5391,
            mid_init_55fdeef582303a99,
            mid_isForward_9ab94ac1dc23b105,
            mid_withHandler_47d643dacb7a2361,
            mid_withMaxCheck_5e4e748e9b4bac80,
            mid_withMaxCheck_caf5dc8899e0b901,
            mid_withMaxIter_74b35201f96fff90,
            mid_withSolver_c481c8eb62c06a6a,
            mid_withThreshold_5e4e748e9b4bac80,
            mid_create_d90cb26b03bae470,
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
