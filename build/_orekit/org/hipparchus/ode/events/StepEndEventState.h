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
            mid_init$_00cecfec8aa9403e,
            mid_doEvent_1eca994d89f760c7,
            mid_evaluateStep_f2bd5620f6269916,
            mid_getEventTime_b74f83833fdad017,
            mid_getHandler_67df44026d6b5e99,
            mid_init_a7556bd72cab73f1,
            mid_setStepEnd_8ba9fe7a847cecad,
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
