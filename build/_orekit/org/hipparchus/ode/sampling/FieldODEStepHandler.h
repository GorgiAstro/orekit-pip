#ifndef org_hipparchus_ode_sampling_FieldODEStepHandler_H
#define org_hipparchus_ode_sampling_FieldODEStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStateInterpolator;
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

        class FieldODEStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_747fee420c9ba889,
            mid_handleStep_e7d5f5a81e2a2b8e,
            mid_init_f808a4f21f8be825,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldODEStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldODEStepHandler(const FieldODEStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          void handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldODEStepHandler);
        extern PyTypeObject *PY_TYPE(FieldODEStepHandler);

        class t_FieldODEStepHandler {
        public:
          PyObject_HEAD
          FieldODEStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldODEStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldODEStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldODEStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
