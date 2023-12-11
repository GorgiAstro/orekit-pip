#ifndef org_orekit_propagation_events_handlers_PythonEventHandler_H
#define org_orekit_propagation_events_handlers_PythonEventHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
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

          class PythonEventHandler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_eventOccurred_c85ac59cb25f2670,
              mid_finalize_0640e6acf969ed28,
              mid_init_e0491fcf7b1e4288,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_resetState_ce9bc9b3806ce3d4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonEventHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonEventHandler(const PythonEventHandler& obj) : ::java::lang::Object(obj) {}

            PythonEventHandler();

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jboolean) const;
            void finalize() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::propagation::events::EventDetector &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonEventHandler);
          extern PyTypeObject *PY_TYPE(PythonEventHandler);

          class t_PythonEventHandler {
          public:
            PyObject_HEAD
            PythonEventHandler object;
            static PyObject *wrap_Object(const PythonEventHandler&);
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
