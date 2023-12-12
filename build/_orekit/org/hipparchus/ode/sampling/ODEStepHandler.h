#ifndef org_hipparchus_ode_sampling_ODEStepHandler_H
#define org_hipparchus_ode_sampling_ODEStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
      }
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

        class ODEStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_b79fdee299d79fcc,
            mid_handleStep_b272ebb5ead79c81,
            mid_init_7e69c83de8052a2b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEStepHandler(const ODEStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          void handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
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
        extern PyType_Def PY_TYPE_DEF(ODEStepHandler);
        extern PyTypeObject *PY_TYPE(ODEStepHandler);

        class t_ODEStepHandler {
        public:
          PyObject_HEAD
          ODEStepHandler object;
          static PyObject *wrap_Object(const ODEStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
