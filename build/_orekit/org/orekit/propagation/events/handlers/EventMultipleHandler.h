#ifndef org_orekit_propagation_events_handlers_EventMultipleHandler_H
#define org_orekit_propagation_events_handlers_EventMultipleHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
          class EventMultipleHandler;
        }
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
        namespace handlers {

          class EventMultipleHandler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_addHandler_9d7d27130ee65e7b,
              mid_addHandlers_a1f562ed85ac821b,
              mid_eventOccurred_66898681536e4202,
              mid_getHandlers_d751c1a57012b438,
              mid_init_381d97cc333bc994,
              mid_resetState_556ad75a8c47fba2,
              mid_setHandlers_aa335fea495d60e0,
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
