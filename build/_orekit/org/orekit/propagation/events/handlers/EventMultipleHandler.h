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
              mid_init$_a1fa5dae97ea5ed2,
              mid_addHandler_2c3a580824587767,
              mid_addHandlers_66864790fef57ca5,
              mid_eventOccurred_ae9b0131fefe6c67,
              mid_getHandlers_e62d3bb06d56d7e3,
              mid_init_0ac7022abb4b9f0c,
              mid_resetState_ec159c1171338d74,
              mid_setHandlers_0e7c3032c7c93ed3,
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
