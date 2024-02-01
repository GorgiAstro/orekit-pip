#ifndef org_orekit_propagation_events_handlers_PythonEventHandler_H
#define org_orekit_propagation_events_handlers_PythonEventHandler_H

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
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
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
              mid_init$_ff7cb6c242604316,
              mid_eventOccurred_66898681536e4202,
              mid_finalize_ff7cb6c242604316,
              mid_init_381d97cc333bc994,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_resetState_556ad75a8c47fba2,
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
