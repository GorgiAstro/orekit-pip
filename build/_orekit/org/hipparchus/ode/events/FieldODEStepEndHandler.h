#ifndef org_hipparchus_ode_events_FieldODEStepEndHandler_H
#define org_hipparchus_ode_events_FieldODEStepEndHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace events {
        class Action;
      }
      class FieldODEStateAndDerivative;
      class FieldODEState;
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

        class FieldODEStepEndHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init_81b5dd1fb920fdc1,
            mid_resetState_e4afa3dc8662b18a,
            mid_stepEndOccurred_02e0a9f1fb7a6117,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEStepEndHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEStepEndHandler(const FieldODEStepEndHandler& obj) : ::java::lang::Object(obj) {}

          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::ode::FieldODEState resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::Action stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEStepEndHandler);
        extern PyTypeObject *PY_TYPE(FieldODEStepEndHandler);

        class t_FieldODEStepEndHandler {
        public:
          PyObject_HEAD
          FieldODEStepEndHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEStepEndHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEStepEndHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEStepEndHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
