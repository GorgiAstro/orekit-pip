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
              mid_init$_7ae3461a92a43152,
              mid_addHandler_79d596a0d2732767,
              mid_addHandlers_5935b21d1016a436,
              mid_eventOccurred_66531e3c1769dca9,
              mid_getHandlers_a6156df500549a58,
              mid_init_9678bba57553faaf,
              mid_resetState_7c4cfc7ac2bc3a77,
              mid_setHandlers_65de9727799c5641,
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
