#ifndef org_hipparchus_ode_sampling_FieldODEFixedStepHandler_H
#define org_hipparchus_ode_sampling_FieldODEFixedStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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

        class FieldODEFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_handleStep_06ca8c3c24c00d34,
            mid_init_f808a4f21f8be825,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEFixedStepHandler(const FieldODEFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          void handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, jboolean) const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEFixedStepHandler);
        extern PyTypeObject *PY_TYPE(FieldODEFixedStepHandler);

        class t_FieldODEFixedStepHandler {
        public:
          PyObject_HEAD
          FieldODEFixedStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEFixedStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEFixedStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
