#ifndef org_orekit_propagation_events_FieldEventState$EventOccurrence_H
#define org_orekit_propagation_events_FieldEventState$EventOccurrence_H

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
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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

        class FieldEventState$EventOccurrence : public ::java::lang::Object {
         public:
          enum {
            mid_getAction_0afc8c14772bbac8,
            mid_getNewState_fba6d56f8dbc98d0,
            mid_getStopDate_fa23a4301b9c83e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventState$EventOccurrence(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventState$EventOccurrence(const FieldEventState$EventOccurrence& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::Action getAction() const;
          ::org::orekit::propagation::FieldSpacecraftState getNewState() const;
          ::org::orekit::time::FieldAbsoluteDate getStopDate() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEventState$EventOccurrence);
        extern PyTypeObject *PY_TYPE(FieldEventState$EventOccurrence);

        class t_FieldEventState$EventOccurrence {
        public:
          PyObject_HEAD
          FieldEventState$EventOccurrence object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventState$EventOccurrence *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventState$EventOccurrence&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventState$EventOccurrence&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
