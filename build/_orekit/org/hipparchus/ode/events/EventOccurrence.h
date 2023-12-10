#ifndef org_hipparchus_ode_events_EventOccurrence_H
#define org_hipparchus_ode_events_EventOccurrence_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
      class ODEState;
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

        class EventOccurrence : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b46c1ee579b4120a,
            mid_getAction_8c7583beb4e5a879,
            mid_getNewState_239034750ae844b7,
            mid_getStopTime_456d9a2f64d6b28d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventOccurrence(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventOccurrence(const EventOccurrence& obj) : ::java::lang::Object(obj) {}

          EventOccurrence(const ::org::hipparchus::ode::events::Action &, const ::org::hipparchus::ode::ODEState &, jdouble);

          ::org::hipparchus::ode::events::Action getAction() const;
          ::org::hipparchus::ode::ODEState getNewState() const;
          jdouble getStopTime() const;
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
        extern PyType_Def PY_TYPE_DEF(EventOccurrence);
        extern PyTypeObject *PY_TYPE(EventOccurrence);

        class t_EventOccurrence {
        public:
          PyObject_HEAD
          EventOccurrence object;
          static PyObject *wrap_Object(const EventOccurrence&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
