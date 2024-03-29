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
            mid_getCurrentState_abe7a2bda3ab9237,
            mid_getInterpolatedState_dddd5f60deb44228,
            mid_getPreviousState_abe7a2bda3ab9237,
            mid_isCurrentStateInterpolated_eee3de00fe971136,
            mid_isForward_eee3de00fe971136,
            mid_isPreviousStateInterpolated_eee3de00fe971136,
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
