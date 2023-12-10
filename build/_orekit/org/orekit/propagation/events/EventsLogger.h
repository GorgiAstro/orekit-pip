#ifndef org_orekit_propagation_events_EventsLogger_H
#define org_orekit_propagation_events_EventsLogger_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventsLogger$LoggedEvent;
        class EventDetector;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class EventsLogger : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_clearLoggedEvents_7ae3461a92a43152,
            mid_getLoggedEvents_a6156df500549a58,
            mid_monitorDetector_ddfbe5016ff49e39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventsLogger(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventsLogger(const EventsLogger& obj) : ::java::lang::Object(obj) {}

          EventsLogger();

          void clearLoggedEvents() const;
          ::java::util::List getLoggedEvents() const;
          ::org::orekit::propagation::events::EventDetector monitorDetector(const ::org::orekit::propagation::events::EventDetector &) const;
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
        extern PyType_Def PY_TYPE_DEF(EventsLogger);
        extern PyTypeObject *PY_TYPE(EventsLogger);

        class t_EventsLogger {
        public:
          PyObject_HEAD
          EventsLogger object;
          static PyObject *wrap_Object(const EventsLogger&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
