#ifndef org_orekit_propagation_events_handlers_ContinueOnEvent_H
#define org_orekit_propagation_events_handlers_ContinueOnEvent_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
        }
        class EventDetector;
      }
      class SpacecraftState;
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

          class ContinueOnEvent : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_eventOccurred_ae9b0131fefe6c67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ContinueOnEvent(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ContinueOnEvent(const ContinueOnEvent& obj) : ::java::lang::Object(obj) {}

            ContinueOnEvent();

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ContinueOnEvent);
          extern PyTypeObject *PY_TYPE(ContinueOnEvent);

          class t_ContinueOnEvent {
          public:
            PyObject_HEAD
            ContinueOnEvent object;
            static PyObject *wrap_Object(const ContinueOnEvent&);
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
