#ifndef org_orekit_propagation_events_EventsLogger$LoggedEvent_H
#define org_orekit_propagation_events_EventsLogger$LoggedEvent_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
  namespace orekit {
    namespace propagation {
      namespace events {

        class EventsLogger$LoggedEvent : public ::java::lang::Object {
         public:
          enum {
            mid_getDate_7a97f7e149e79afb,
            mid_getEventDetector_0701b00b25822fff,
            mid_getState_15e85d5301b90ef8,
            mid_isIncreasing_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventsLogger$LoggedEvent(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventsLogger$LoggedEvent(const EventsLogger$LoggedEvent& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::time::AbsoluteDate getDate() const;
          ::org::orekit::propagation::events::EventDetector getEventDetector() const;
          ::org::orekit::propagation::SpacecraftState getState() const;
          jboolean isIncreasing() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(EventsLogger$LoggedEvent);
        extern PyTypeObject *PY_TYPE(EventsLogger$LoggedEvent);

        class t_EventsLogger$LoggedEvent {
        public:
          PyObject_HEAD
          EventsLogger$LoggedEvent object;
          static PyObject *wrap_Object(const EventsLogger$LoggedEvent&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
