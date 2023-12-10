#ifndef org_hipparchus_ode_sampling_ODEStateInterpolator_H
#define org_hipparchus_ode_sampling_ODEStateInterpolator_H

#include "java/io/Serializable.h"

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

        class ODEStateInterpolator : public ::java::io::Serializable {
         public:
          enum {
            mid_getCurrentState_72cfc96c3e58d15e,
            mid_getInterpolatedState_f01efdb3ab1bad7f,
            mid_getPreviousState_72cfc96c3e58d15e,
            mid_isCurrentStateInterpolated_b108b35ef48e27bd,
            mid_isForward_b108b35ef48e27bd,
            mid_isPreviousStateInterpolated_b108b35ef48e27bd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ODEStateInterpolator(jobject obj) : ::java::io::Serializable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ODEStateInterpolator(const ODEStateInterpolator& obj) : ::java::io::Serializable(obj) {}

          ::org::hipparchus::ode::ODEStateAndDerivative getCurrentState() const;
          ::org::hipparchus::ode::ODEStateAndDerivative getInterpolatedState(jdouble) const;
          ::org::hipparchus::ode::ODEStateAndDerivative getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
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
        extern PyType_Def PY_TYPE_DEF(ODEStateInterpolator);
        extern PyTypeObject *PY_TYPE(ODEStateInterpolator);

        class t_ODEStateInterpolator {
        public:
          PyObject_HEAD
          ODEStateInterpolator object;
          static PyObject *wrap_Object(const ODEStateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
