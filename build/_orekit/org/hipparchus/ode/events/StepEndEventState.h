#ifndef org_hipparchus_ode_events_StepEndEventState_H
#define org_hipparchus_ode_events_StepEndEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
      }
      namespace events {
        class ODEStepEndHandler;
        class EventState;
        class EventOccurrence;
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
            mid_init$_b9694d2460b8c773,
            mid_doEvent_6006b945607419cb,
            mid_evaluateStep_8380759ad65b5b06,
            mid_getEventTime_557b8123390d8d0c,
            mid_getHandler_df5b215978aa5f79,
            mid_init_7e69c83de8052a2b,
            mid_setStepEnd_10f281d777284cea,
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
