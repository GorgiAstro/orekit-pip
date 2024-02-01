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
            mid_getCurrentState_abe7a2bda3ab9237,
            mid_getGlobalCurrentState_abe7a2bda3ab9237,
            mid_getGlobalPreviousState_abe7a2bda3ab9237,
            mid_getInterpolatedState_dddd5f60deb44228,
            mid_getPreviousState_abe7a2bda3ab9237,
            mid_isCurrentStateInterpolated_eee3de00fe971136,
            mid_isForward_eee3de00fe971136,
            mid_isPreviousStateInterpolated_eee3de00fe971136,
            mid_restrictStep_a2f1f68789cc420d,
            mid_computeInterpolatedStateAndDerivatives_90bc3de9207fd930,
            mid_getMapper_0209d6833e7fdcb2,
            mid_create_1bb88e3499976d05,
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
