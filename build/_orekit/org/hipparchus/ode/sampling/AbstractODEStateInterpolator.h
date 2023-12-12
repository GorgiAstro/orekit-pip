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
            mid_getCurrentState_0a798a152cb54887,
            mid_getGlobalCurrentState_0a798a152cb54887,
            mid_getGlobalPreviousState_0a798a152cb54887,
            mid_getInterpolatedState_0a47e68426cfc9cf,
            mid_getPreviousState_0a798a152cb54887,
            mid_isCurrentStateInterpolated_89b302893bdbe1f1,
            mid_isForward_89b302893bdbe1f1,
            mid_isPreviousStateInterpolated_89b302893bdbe1f1,
            mid_restrictStep_062f93260d31faa2,
            mid_getMapper_ac224193cab69474,
            mid_computeInterpolatedStateAndDerivatives_0611821f422badbb,
            mid_create_d36a5031f0749114,
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
