#ifndef org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      namespace sampling {
        class AbstractFieldODEStateInterpolator;
        class FieldODEStateInterpolator;
      }
      class FieldODEStateAndDerivative;
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

        class AbstractFieldODEStateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentState_7194dd3ba3cbc7e8,
            mid_getGlobalCurrentState_7194dd3ba3cbc7e8,
            mid_getGlobalPreviousState_7194dd3ba3cbc7e8,
            mid_getInterpolatedState_ad18f3cde52c81b9,
            mid_getPreviousState_7194dd3ba3cbc7e8,
            mid_isCurrentStateInterpolated_b108b35ef48e27bd,
            mid_isForward_b108b35ef48e27bd,
            mid_isPreviousStateInterpolated_b108b35ef48e27bd,
            mid_restrictStep_a1f0e19bf87f7a7b,
            mid_getMapper_49938af8a63b9487,
            mid_computeInterpolatedStateAndDerivatives_23997ceac6beb25e,
            mid_create_fe27d20fc1a25788,
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
