#ifndef org_hipparchus_ode_events_EventState_H
#define org_hipparchus_ode_events_EventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
      }
      class ODEStateAndDerivative;
      namespace events {
        class EventOccurrence;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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

        class EventState : public ::java::lang::Object {
         public:
          enum {
            mid_doEvent_1eca994d89f760c7,
            mid_evaluateStep_f2bd5620f6269916,
            mid_getEventTime_b74f83833fdad017,
            mid_init_a7556bd72cab73f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventState(const EventState& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::EventOccurrence doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
          jdouble getEventTime() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(EventState);
        extern PyTypeObject *PY_TYPE(EventState);

        class t_EventState {
        public:
          PyObject_HEAD
          EventState object;
          static PyObject *wrap_Object(const EventState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
