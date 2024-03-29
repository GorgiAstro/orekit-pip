#ifndef org_orekit_propagation_events_handlers_FieldStopOnEvent_H
#define org_orekit_propagation_events_handlers_FieldStopOnEvent_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        namespace handlers {
          class FieldEventHandler;
        }
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
    }
    class CalculusFieldElement;
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

          class FieldStopOnEvent : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_eventOccurred_094737664b369b83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldStopOnEvent(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldStopOnEvent(const FieldStopOnEvent& obj) : ::java::lang::Object(obj) {}

            FieldStopOnEvent();

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldStopOnEvent);
          extern PyTypeObject *PY_TYPE(FieldStopOnEvent);

          class t_FieldStopOnEvent {
          public:
            PyObject_HEAD
            FieldStopOnEvent object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldStopOnEvent *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldStopOnEvent&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldStopOnEvent&, PyTypeObject *);
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
