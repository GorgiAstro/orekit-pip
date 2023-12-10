#ifndef org_hipparchus_ode_events_ODEEventHandler_H
#define org_hipparchus_ode_events_ODEEventHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
        class ODEEventDetector;
      }
      class ODEState;
      class ODEStateAndDerivative;
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

        class ODEEventHandler : public ::java::lang::Object {
         public:
          enum {
            mid_eventOccurred_b44a5bd8164db790,
            mid_init_b04fdf194c7cd3ab,
            mid_resetState_77c214d3969e685d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEEventHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEEventHandler(const ODEEventHandler& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::Action eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative &, const ::org::hipparchus::ode::events::ODEEventDetector &, jboolean) const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble, const ::org::hipparchus::ode::events::ODEEventDetector &) const;
          ::org::hipparchus::ode::ODEState resetState(const ::org::hipparchus::ode::events::ODEEventDetector &, const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(ODEEventHandler);
        extern PyTypeObject *PY_TYPE(ODEEventHandler);

        class t_ODEEventHandler {
        public:
          PyObject_HEAD
          ODEEventHandler object;
          static PyObject *wrap_Object(const ODEEventHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
