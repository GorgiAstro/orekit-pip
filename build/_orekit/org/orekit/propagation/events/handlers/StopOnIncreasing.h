#ifndef org_orekit_propagation_events_handlers_StopOnIncreasing_H
#define org_orekit_propagation_events_handlers_StopOnIncreasing_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        namespace handlers {
          class EventHandler;
        }
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

          class StopOnIncreasing : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_eventOccurred_c85ac59cb25f2670,
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
