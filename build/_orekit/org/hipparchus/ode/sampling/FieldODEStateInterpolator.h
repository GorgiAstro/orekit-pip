#ifndef org_hipparchus_ode_sampling_FieldODEStateInterpolator_H
#define org_hipparchus_ode_sampling_FieldODEStateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
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

        class FieldODEStateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_getCurrentState_15f5056f2d3c7d41,
            mid_getInterpolatedState_7a35201efb2d5095,
            mid_getPreviousState_15f5056f2d3c7d41,
            mid_isCurrentStateInterpolated_eee3de00fe971136,
            mid_isForward_eee3de00fe971136,
            mid_isPreviousStateInterpolated_eee3de00fe971136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEStateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEStateInterpolator(const FieldODEStateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::FieldODEStateAndDerivative getCurrentState() const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getInterpolatedState(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::ode::FieldODEStateAndDerivative getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEStateInterpolator);
        extern PyTypeObject *PY_TYPE(FieldODEStateInterpolator);

        class t_FieldODEStateInterpolator {
        public:
          PyObject_HEAD
          FieldODEStateInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEStateInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEStateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEStateInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
