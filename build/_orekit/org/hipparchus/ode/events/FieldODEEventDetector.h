#ifndef org_hipparchus_ode_events_FieldODEEventDetector_H
#define org_hipparchus_ode_events_FieldODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace events {
        class FieldODEEventHandler;
        class FieldAdaptableInterval;
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

        class FieldODEEventDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_455ff24598d85771,
            mid_getHandler_dbadd838da9b41eb,
            mid_getMaxCheckInterval_e0c20def93760aa5,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getSolver_015c35a97d20bc51,
            mid_init_2a077928ff78cfcb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEEventDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEEventDetector(const FieldODEEventDetector& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::CalculusFieldElement g(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::FieldODEEventHandler getHandler() const;
          ::org::hipparchus::ode::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver getSolver() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEEventDetector);
        extern PyTypeObject *PY_TYPE(FieldODEEventDetector);

        class t_FieldODEEventDetector {
        public:
          PyObject_HEAD
          FieldODEEventDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEEventDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEEventDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEEventDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
