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
            mid_getCurrentState_ced1effea9e5e5d4,
            mid_getGlobalCurrentState_ced1effea9e5e5d4,
            mid_getGlobalPreviousState_ced1effea9e5e5d4,
            mid_getInterpolatedState_05e60c2c1f1796ae,
            mid_getPreviousState_ced1effea9e5e5d4,
            mid_isCurrentStateInterpolated_e470b6d9e0d979db,
            mid_isForward_e470b6d9e0d979db,
            mid_isPreviousStateInterpolated_e470b6d9e0d979db,
            mid_restrictStep_8d50e0f2e9084026,
            mid_getMapper_c85ebb7ac50d94ef,
            mid_computeInterpolatedStateAndDerivatives_6016dab239580c85,
            mid_create_5812ee4c35ceca71,
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
