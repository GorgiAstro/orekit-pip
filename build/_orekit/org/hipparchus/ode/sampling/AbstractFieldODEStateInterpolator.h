#ifndef org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H
#define org_hipparchus_ode_sampling_AbstractFieldODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStateInterpolator;
        class AbstractFieldODEStateInterpolator;
      }
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
            mid_getCurrentState_45f3e0f3929fa6d9,
            mid_getGlobalCurrentState_45f3e0f3929fa6d9,
            mid_getGlobalPreviousState_45f3e0f3929fa6d9,
            mid_getInterpolatedState_2c40e49ec2799666,
            mid_getPreviousState_45f3e0f3929fa6d9,
            mid_isCurrentStateInterpolated_89b302893bdbe1f1,
            mid_isForward_89b302893bdbe1f1,
            mid_isPreviousStateInterpolated_89b302893bdbe1f1,
            mid_restrictStep_c8a7f44dbda6aa98,
            mid_getMapper_9b874f5c7e7ed33f,
            mid_computeInterpolatedStateAndDerivatives_468061260e52cfe4,
            mid_create_d51369df1d005357,
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
