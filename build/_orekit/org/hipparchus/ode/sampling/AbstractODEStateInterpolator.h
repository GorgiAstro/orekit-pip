#ifndef org_hipparchus_ode_sampling_AbstractODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
        class AbstractODEStateInterpolator;
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

        class AbstractODEStateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentState_72cfc96c3e58d15e,
            mid_getGlobalCurrentState_72cfc96c3e58d15e,
            mid_getGlobalPreviousState_72cfc96c3e58d15e,
            mid_getInterpolatedState_f01efdb3ab1bad7f,
            mid_getPreviousState_72cfc96c3e58d15e,
            mid_isCurrentStateInterpolated_b108b35ef48e27bd,
            mid_isForward_b108b35ef48e27bd,
            mid_isPreviousStateInterpolated_b108b35ef48e27bd,
            mid_restrictStep_7be5f5a0bf70adb5,
            mid_getMapper_b352b1a7f73df8de,
            mid_computeInterpolatedStateAndDerivatives_43408383ccb9423d,
            mid_create_512799c2e2de4970,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractODEStateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractODEStateInterpolator(const AbstractODEStateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::ODEStateAndDerivative getCurrentState() const;
          ::org::hipparchus::ode::ODEStateAndDerivative getGlobalCurrentState() const;
          ::org::hipparchus::ode::ODEStateAndDerivative getGlobalPreviousState() const;
          ::org::hipparchus::ode::ODEStateAndDerivative getInterpolatedState(jdouble) const;
          ::org::hipparchus::ode::ODEStateAndDerivative getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
          AbstractODEStateInterpolator restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative &, const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractODEStateInterpolator);
        extern PyTypeObject *PY_TYPE(AbstractODEStateInterpolator);

        class t_AbstractODEStateInterpolator {
        public:
          PyObject_HEAD
          AbstractODEStateInterpolator object;
          static PyObject *wrap_Object(const AbstractODEStateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
