#ifndef org_orekit_propagation_events_FieldEventsLogger$FieldLoggedEvent_H
#define org_orekit_propagation_events_FieldEventsLogger$FieldLoggedEvent_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
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

        class FieldEventsLogger$FieldLoggedEvent : public ::java::lang::Object {
         public:
          enum {
            mid_getEventDetector_9afb3f6694da2222,
            mid_getState_a553824829fc2514,
            mid_isIncreasing_e470b6d9e0d979db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventsLogger$FieldLoggedEvent(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventsLogger$FieldLoggedEvent(const FieldEventsLogger$FieldLoggedEvent& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::events::FieldEventDetector getEventDetector() const;
          ::org::orekit::propagation::FieldSpacecraftState getState() const;
          jboolean isIncreasing() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent);
        extern PyTypeObject *PY_TYPE(FieldEventsLogger$FieldLoggedEvent);

        class t_FieldEventsLogger$FieldLoggedEvent {
        public:
          PyObject_HEAD
          FieldEventsLogger$FieldLoggedEvent object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventsLogger$FieldLoggedEvent *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventsLogger$FieldLoggedEvent&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventsLogger$FieldLoggedEvent&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
