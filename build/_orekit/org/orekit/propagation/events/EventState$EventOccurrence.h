#ifndef org_orekit_propagation_events_EventState$EventOccurrence_H
#define org_orekit_propagation_events_EventState$EventOccurrence_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
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

        class EventState$EventOccurrence : public ::java::lang::Object {
         public:
          enum {
            mid_getAction_4aa421fecbe7eed3,
            mid_getNewState_c6311115fea01a34,
            mid_getStopDate_85703d13e302437e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventState$EventOccurrence(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventState$EventOccurrence(const EventState$EventOccurrence& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::Action getAction() const;
          ::org::orekit::propagation::SpacecraftState getNewState() const;
          ::org::orekit::time::AbsoluteDate getStopDate() const;
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
        extern PyType_Def PY_TYPE_DEF(EventState$EventOccurrence);
        extern PyTypeObject *PY_TYPE(EventState$EventOccurrence);

        class t_EventState$EventOccurrence {
        public:
          PyObject_HEAD
          EventState$EventOccurrence object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EventState$EventOccurrence *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EventState$EventOccurrence&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EventState$EventOccurrence&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
