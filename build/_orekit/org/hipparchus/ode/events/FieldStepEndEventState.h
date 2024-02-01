#ifndef org_hipparchus_ode_events_FieldStepEndEventState_H
#define org_hipparchus_ode_events_FieldStepEndEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEStepEndHandler;
        class FieldEventOccurrence;
        class FieldEventState;
      }
      namespace sampling {
        class FieldODEStateInterpolator;
      }
      class FieldODEStateAndDerivative;
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

        class FieldStepEndEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0490fb61ed7db186,
            mid_doEvent_bb679c793e33809e,
            mid_evaluateStep_0c45e83e8206e2a1,
            mid_getEventTime_08d37e3f77b7239d,
            mid_getHandler_30b062700dfec7e5,
            mid_init_2a077928ff78cfcb,
            mid_setStepEnd_f63ca9e3185c722e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldStepEndEventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldStepEndEventState(const FieldStepEndEventState& obj) : ::java::lang::Object(obj) {}

          FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler &);

          ::org::hipparchus::ode::events::FieldEventOccurrence doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
          ::org::hipparchus::CalculusFieldElement getEventTime() const;
          ::org::hipparchus::ode::events::FieldODEStepEndHandler getHandler() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
          void setStepEnd(const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldStepEndEventState);
        extern PyTypeObject *PY_TYPE(FieldStepEndEventState);

        class t_FieldStepEndEventState {
        public:
          PyObject_HEAD
          FieldStepEndEventState object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldStepEndEventState *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldStepEndEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldStepEndEventState&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
