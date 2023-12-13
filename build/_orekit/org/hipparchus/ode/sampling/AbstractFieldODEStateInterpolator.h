#ifndef org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class AbstractFieldODEStateInterpolator;
        class FieldODEStateInterpolator;
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
            mid_getCurrentState_b7aa8b39e4b21836,
            mid_getGlobalCurrentState_b7aa8b39e4b21836,
            mid_getGlobalPreviousState_b7aa8b39e4b21836,
            mid_getInterpolatedState_285853fa8f6e2f48,
            mid_getPreviousState_b7aa8b39e4b21836,
            mid_isCurrentStateInterpolated_9ab94ac1dc23b105,
            mid_isForward_9ab94ac1dc23b105,
            mid_isPreviousStateInterpolated_9ab94ac1dc23b105,
            mid_restrictStep_fe13e56a433ef111,
            mid_getMapper_e3ed330d4a98f3fc,
            mid_computeInterpolatedStateAndDerivatives_8141c621c833a952,
            mid_create_caefaa95c8e0ef1f,
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
