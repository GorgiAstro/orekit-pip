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
            mid_getCurrentState_15f5056f2d3c7d41,
            mid_getGlobalCurrentState_15f5056f2d3c7d41,
            mid_getGlobalPreviousState_15f5056f2d3c7d41,
            mid_getInterpolatedState_7a35201efb2d5095,
            mid_getPreviousState_15f5056f2d3c7d41,
            mid_isCurrentStateInterpolated_eee3de00fe971136,
            mid_isForward_eee3de00fe971136,
            mid_isPreviousStateInterpolated_eee3de00fe971136,
            mid_restrictStep_2a7d06ff6cc487fe,
            mid_computeInterpolatedStateAndDerivatives_318631c11a671600,
            mid_getMapper_505b2cb84189ee60,
            mid_create_ce34ea68c7aa6d21,
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
