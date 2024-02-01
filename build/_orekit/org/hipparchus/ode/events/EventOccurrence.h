#ifndef org_hipparchus_ode_events_EventOccurrence_H
#define org_hipparchus_ode_events_EventOccurrence_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      namespace events {
        class Action;
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

        class EventOccurrence : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c3874a706f1894a3,
            mid_getAction_e01ac4830bcfb38f,
            mid_getNewState_1af6e9f0600af276,
            mid_getStopTime_9981f74b2d109da6,
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
