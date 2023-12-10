#ifndef org_hipparchus_ode_events_StepEndEventState_H
#define org_hipparchus_ode_events_StepEndEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class ODEStepEndHandler;
        class EventState;
        class EventOccurrence;
      }
      namespace sampling {
        class ODEStateInterpolator;
      }
      class ODEStateAndDerivative;
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

        class StepEndEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d6f7dd010125fe2a,
            mid_doEvent_786b2ff82ce4b0ff,
            mid_evaluateStep_31e05790c4db57cc,
            mid_getEventTime_456d9a2f64d6b28d,
            mid_getHandler_5cce4fefa39d3881,
            mid_init_85808f3d6374b436,
            mid_setStepEnd_77e0f9a1f260e2e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepEndEventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepEndEventState(const StepEndEventState& obj) : ::java::lang::Object(obj) {}

          StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler &);

          ::org::hipparchus::ode::events::EventOccurrence doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
          jdouble getEventTime() const;
          ::org::hipparchus::ode::events::ODEStepEndHandler getHandler() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
          void setStepEnd(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(StepEndEventState);
        extern PyTypeObject *PY_TYPE(StepEndEventState);

        class t_StepEndEventState {
        public:
          PyObject_HEAD
          StepEndEventState object;
          static PyObject *wrap_Object(const StepEndEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
