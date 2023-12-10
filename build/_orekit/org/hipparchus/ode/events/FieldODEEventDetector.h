#ifndef org_hipparchus_ode_events_FieldODEEventDetector_H
#define org_hipparchus_ode_events_FieldODEEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace events {
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
            mid_g_2fe24792561bd145,
            mid_getHandler_6becb2360697f07b,
            mid_getMaxCheckInterval_3c82d31ec337b8be,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getSolver_818bdb7f8312a2dd,
            mid_init_81b5dd1fb920fdc1,
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
