#ifndef org_orekit_propagation_events_handlers_StopOnDecreasing_H
#define org_orekit_propagation_events_handlers_StopOnDecreasing_H

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

          class StopOnDecreasing : public ::java::lang::Object {
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

            explicit StopOnDecreasing(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopOnDecreasing(const StopOnDecreasing& obj) : ::java::lang::Object(obj) {}

            StopOnDecreasing();

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
          extern PyType_Def PY_TYPE_DEF(StopOnDecreasing);
          extern PyTypeObject *PY_TYPE(StopOnDecreasing);

          class t_StopOnDecreasing {
          public:
            PyObject_HEAD
            StopOnDecreasing object;
            static PyObject *wrap_Object(const StopOnDecreasing&);
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
