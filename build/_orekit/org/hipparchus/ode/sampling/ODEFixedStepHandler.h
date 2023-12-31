#ifndef org_hipparchus_ode_sampling_ODEFixedStepHandler_H
#define org_hipparchus_ode_sampling_ODEFixedStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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
      namespace sampling {

        class ODEFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_handleStep_55b681844909c935,
            mid_init_a7556bd72cab73f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEFixedStepHandler(const ODEFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          void handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative &, jboolean) const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(ODEFixedStepHandler);
        extern PyTypeObject *PY_TYPE(ODEFixedStepHandler);

        class t_ODEFixedStepHandler {
        public:
          PyObject_HEAD
          ODEFixedStepHandler object;
          static PyObject *wrap_Object(const ODEFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
