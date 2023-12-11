#ifndef org_orekit_propagation_events_handlers_EventHandler_H
#define org_orekit_propagation_events_handlers_EventHandler_H

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
        namespace handlers {

          class EventHandler : public ::java::lang::Object {
           public:
            enum {
              mid_eventOccurred_c85ac59cb25f2670,
              mid_init_e0491fcf7b1e4288,
              mid_resetState_ce9bc9b3806ce3d4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EventHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EventHandler(const EventHandler& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jboolean) const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::propagation::events::EventDetector &) const;
            ::org::orekit::propagation::SpacecraftState resetState(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::propagation::SpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(EventHandler);
          extern PyTypeObject *PY_TYPE(EventHandler);

          class t_EventHandler {
          public:
            PyObject_HEAD
            EventHandler object;
            static PyObject *wrap_Object(const EventHandler&);
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
