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
        class EventOccurrence;
        class EventState;
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
            mid_init$_3dff193c3948a094,
            mid_doEvent_85cb4cee6c2ee34d,
            mid_evaluateStep_a2d4078e6169b71f,
            mid_getEventTime_9981f74b2d109da6,
            mid_getHandler_33c35f2cadb708df,
            mid_init_25005604bcb94d07,
            mid_setStepEnd_1ad26e8c8c0cd65b,
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
