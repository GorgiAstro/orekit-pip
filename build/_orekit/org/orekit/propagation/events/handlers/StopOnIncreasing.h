#ifndef org_orekit_propagation_events_handlers_StopOnIncreasing_H
#define org_orekit_propagation_events_handlers_StopOnIncreasing_H

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
        }
        class EventDetector;
      }
      class SpacecraftState;
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

          class StopOnIncreasing : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_eventOccurred_66898681536e4202,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopOnIncreasing(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopOnIncreasing(const StopOnIncreasing& obj) : ::java::lang::Object(obj) {}

            StopOnIncreasing();

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
          extern PyType_Def PY_TYPE_DEF(StopOnIncreasing);
          extern PyTypeObject *PY_TYPE(StopOnIncreasing);

          class t_StopOnIncreasing {
          public:
            PyObject_HEAD
            StopOnIncreasing object;
            static PyObject *wrap_Object(const StopOnIncreasing&);
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
