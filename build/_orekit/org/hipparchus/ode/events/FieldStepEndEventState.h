#ifndef org_hipparchus_ode_events_FieldStepEndEventState_H
#define org_hipparchus_ode_events_FieldStepEndEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace events {
        class FieldEventState;
        class FieldODEStepEndHandler;
        class FieldEventOccurrence;
      }
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStateInterpolator;
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

        class FieldStepEndEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9ddb55dbce73d9f2,
            mid_doEvent_bdf842cbe214f2d2,
            mid_evaluateStep_92ced200eac51ce8,
            mid_getEventTime_eba8e72a22c984ac,
            mid_getHandler_f311821b5588cd27,
            mid_init_81b5dd1fb920fdc1,
            mid_setStepEnd_072c8635f2164db9,
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
