#ifndef org_hipparchus_ode_events_ODEStepEndHandler_H
#define org_hipparchus_ode_events_ODEStepEndHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ODEStateAndDerivative;
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

        class ODEStepEndHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init_5aaadc62bce8a394,
            mid_resetState_7cd804371553b6cb,
            mid_stepEndOccurred_a59261ef992f1208,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEStepEndHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEStepEndHandler(const ODEStepEndHandler& obj) : ::java::lang::Object(obj) {}

          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
          ::org::hipparchus::ode::ODEState resetState(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::Action stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(ODEStepEndHandler);
        extern PyTypeObject *PY_TYPE(ODEStepEndHandler);

        class t_ODEStepEndHandler {
        public:
          PyObject_HEAD
          ODEStepEndHandler object;
          static PyObject *wrap_Object(const ODEStepEndHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
