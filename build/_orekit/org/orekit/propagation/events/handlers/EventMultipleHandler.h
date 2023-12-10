#ifndef org_orekit_propagation_events_handlers_EventMultipleHandler_H
#define org_orekit_propagation_events_handlers_EventMultipleHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        namespace handlers {
          class EventHandler;
          class EventMultipleHandler;
        }
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          class EventMultipleHandler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_addHandler_2c820fcef7e4ced8,
              mid_addHandlers_231f1812abdf722a,
              mid_eventOccurred_abc543fa9701720f,
              mid_getHandlers_2afa36052df4765d,
              mid_init_2e343080aa0c9516,
              mid_resetState_7a28fd3585a5b57c,
              mid_setHandlers_de3e021e7266b71e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EventMultipleHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EventMultipleHandler(const EventMultipleHandler& obj) : ::java::lang::Object(obj) {}

            EventMultipleHandler();

            EventMultipleHandler addHandler(const ::org::orekit::propagation::events::handlers::EventHandler &) const;
            EventMultipleHandler addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > &) const;
            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jboolean) const;
            ::java::util::List getHandlers() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::propagation::events::EventDetector &) const;
            ::org::orekit::propagation::SpacecraftState resetState(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::propagation::SpacecraftState &) const;
            void setHandlers(const ::java::util::List &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          extern PyType_Def PY_TYPE_DEF(EventMultipleHandler);
          extern PyTypeObject *PY_TYPE(EventMultipleHandler);

          class t_EventMultipleHandler {
          public:
            PyObject_HEAD
            EventMultipleHandler object;
            static PyObject *wrap_Object(const EventMultipleHandler&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
