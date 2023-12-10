#ifndef org_hipparchus_ode_events_Action_H
#define org_hipparchus_ode_events_Action_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
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
  namespace hipparchus {
    namespace ode {
      namespace events {

        class Action : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_da19fce7787ffd31,
            mid_values_738c81813a452b9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Action(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Action(const Action& obj) : ::java::lang::Enum(obj) {}

          static Action *CONTINUE;
          static Action *RESET_DERIVATIVES;
          static Action *RESET_EVENTS;
          static Action *RESET_STATE;
          static Action *STOP;

          static Action valueOf(const ::java::lang::String &);
          static JArray< Action > values();
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
        extern PyType_Def PY_TYPE_DEF(Action);
        extern PyTypeObject *PY_TYPE(Action);

        class t_Action {
        public:
          PyObject_HEAD
          Action object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Action *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Action&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Action&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
