#ifndef org_hipparchus_ode_sampling_AbstractODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class AbstractODEStateInterpolator;
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

        class AbstractODEStateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentState_73a804ac72232dd7,
            mid_getGlobalCurrentState_73a804ac72232dd7,
            mid_getGlobalPreviousState_73a804ac72232dd7,
            mid_getInterpolatedState_cf0061d2765ae5a3,
            mid_getPreviousState_73a804ac72232dd7,
            mid_isCurrentStateInterpolated_9ab94ac1dc23b105,
            mid_isForward_9ab94ac1dc23b105,
            mid_isPreviousStateInterpolated_9ab94ac1dc23b105,
            mid_restrictStep_c30f3dfccffcc659,
            mid_getMapper_d05a9ec8030c7103,
            mid_computeInterpolatedStateAndDerivatives_95a6c58152853e22,
            mid_create_39f312cb029323b1,
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
