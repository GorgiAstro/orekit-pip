#ifndef org_hipparchus_ode_events_StepEndEventState_H
#define org_hipparchus_ode_events_StepEndEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class EventOccurrence;
        class EventState;
        class ODEStepEndHandler;
      }
      class ODEStateAndDerivative;
      namespace sampling {
        class ODEStateInterpolator;
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

        class StepEndEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff5dc983cf5314d8,
            mid_doEvent_f67305c017c9762e,
            mid_evaluateStep_37ca30d971b4fe79,
            mid_getEventTime_dff5885c2c873297,
            mid_getHandler_6ac30cb74168b374,
            mid_init_5aaadc62bce8a394,
            mid_setStepEnd_17db3a65980d3441,
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
