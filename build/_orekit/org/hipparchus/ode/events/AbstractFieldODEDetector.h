#ifndef org_hipparchus_ode_events_AbstractFieldODEDetector_H
#define org_hipparchus_ode_events_AbstractFieldODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace events {
        class FieldAdaptableInterval;
        class AbstractFieldODEDetector;
        class FieldODEEventHandler;
        class FieldODEEventDetector;
      }
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
            mid_g_8677e670f9e68e2e,
            mid_getHandler_b77ca012966a5dd0,
            mid_getMaxCheckInterval_e651d05ccb464edb,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getSolver_f12d4ed2528168bc,
            mid_init_f808a4f21f8be825,
            mid_isForward_89b302893bdbe1f1,
            mid_withHandler_9395159e7dce049c,
            mid_withMaxCheck_50da3c2e6691fad8,
            mid_withMaxCheck_5cf9441a828d17d8,
            mid_withMaxIter_365982a4db146285,
            mid_withSolver_fe5c5b8b4e18fdc1,
            mid_withThreshold_50da3c2e6691fad8,
            mid_create_6399bb5ecfdc159d,
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
