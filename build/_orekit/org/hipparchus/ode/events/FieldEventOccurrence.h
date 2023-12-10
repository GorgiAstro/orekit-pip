#ifndef org_hipparchus_ode_events_FieldEventOccurrence_H
#define org_hipparchus_ode_events_FieldEventOccurrence_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldODEState;
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
  namespace hipparchus {
    namespace ode {
      namespace events {

        class FieldEventOccurrence : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5713f356705eba91,
            mid_getAction_4aa421fecbe7eed3,
            mid_getNewState_ca829f9a56e61a02,
            mid_getStopTime_eba8e72a22c984ac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventOccurrence(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventOccurrence(const FieldEventOccurrence& obj) : ::java::lang::Object(obj) {}

          FieldEventOccurrence(const ::org::hipparchus::ode::events::Action &, const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &);

          ::org::hipparchus::ode::events::Action getAction() const;
          ::org::hipparchus::ode::FieldODEState getNewState() const;
          ::org::hipparchus::CalculusFieldElement getStopTime() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldEventOccurrence);
        extern PyTypeObject *PY_TYPE(FieldEventOccurrence);

        class t_FieldEventOccurrence {
        public:
          PyObject_HEAD
          FieldEventOccurrence object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventOccurrence *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventOccurrence&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventOccurrence&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
