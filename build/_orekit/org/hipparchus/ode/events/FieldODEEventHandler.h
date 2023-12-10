#ifndef org_hipparchus_ode_events_FieldODEEventHandler_H
#define org_hipparchus_ode_events_FieldODEEventHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace events {
        class Action;
        class FieldODEEventDetector;
      }
      class FieldODEStateAndDerivative;
      class FieldODEState;
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

        class FieldODEEventHandler : public ::java::lang::Object {
         public:
          enum {
            mid_eventOccurred_441913d27e10bdb0,
            mid_init_8d242e8398770fef,
            mid_resetState_e98923f0683d1726,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEEventHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEEventHandler(const FieldODEEventHandler& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::Action eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::ode::events::FieldODEEventDetector &, jboolean) const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::ode::events::FieldODEEventDetector &) const;
          ::org::hipparchus::ode::FieldODEState resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector &, const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEEventHandler);
        extern PyTypeObject *PY_TYPE(FieldODEEventHandler);

        class t_FieldODEEventHandler {
        public:
          PyObject_HEAD
          FieldODEEventHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEEventHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEEventHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEEventHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
