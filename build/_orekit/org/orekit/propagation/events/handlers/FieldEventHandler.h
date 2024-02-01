#ifndef org_orekit_propagation_events_handlers_FieldEventHandler_H
#define org_orekit_propagation_events_handlers_FieldEventHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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

          class FieldEventHandler : public ::java::lang::Object {
           public:
            enum {
              mid_eventOccurred_094737664b369b83,
              mid_init_09584b3c735adb0f,
              mid_resetState_cd642b76f63f95b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldEventHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldEventHandler(const FieldEventHandler& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::propagation::events::FieldEventDetector &) const;
            ::org::orekit::propagation::FieldSpacecraftState resetState(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldEventHandler);
          extern PyTypeObject *PY_TYPE(FieldEventHandler);

          class t_FieldEventHandler {
          public:
            PyObject_HEAD
            FieldEventHandler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldEventHandler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldEventHandler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldEventHandler&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
