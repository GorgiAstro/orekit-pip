#ifndef org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class FieldODEStateInterpolator;
        class AbstractFieldODEStateInterpolator;
      }
      class FieldODEStateAndDerivative;
    }
    class CalculusFieldElement;
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

        class AbstractFieldODEStateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentState_f1f1c5e26e98a1d9,
            mid_getGlobalCurrentState_f1f1c5e26e98a1d9,
            mid_getGlobalPreviousState_f1f1c5e26e98a1d9,
            mid_getInterpolatedState_05327270bfa02fcd,
            mid_getPreviousState_f1f1c5e26e98a1d9,
            mid_isCurrentStateInterpolated_e470b6d9e0d979db,
            mid_isForward_e470b6d9e0d979db,
            mid_isPreviousStateInterpolated_e470b6d9e0d979db,
            mid_restrictStep_5806de34f57ffd01,
            mid_getMapper_ac3e7c17676ea260,
            mid_computeInterpolatedStateAndDerivatives_9c7dc3baaf8a762f,
            mid_create_36ffd6115f00e197,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFieldODEStateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFieldODEStateInterpolator(const AbstractFieldODEStateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::FieldODEStateAndDerivative getCurrentState() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getGlobalCurrentState() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getGlobalPreviousState() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getInterpolatedState(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
          AbstractFieldODEStateInterpolator restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractFieldODEStateInterpolator);
        extern PyTypeObject *PY_TYPE(AbstractFieldODEStateInterpolator);

        class t_AbstractFieldODEStateInterpolator {
        public:
          PyObject_HEAD
          AbstractFieldODEStateInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractFieldODEStateInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractFieldODEStateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractFieldODEStateInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
