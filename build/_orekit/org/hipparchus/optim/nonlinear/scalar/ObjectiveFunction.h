#ifndef org_hipparchus_optim_nonlinear_scalar_ObjectiveFunction_H
#define org_hipparchus_optim_nonlinear_scalar_ObjectiveFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
    }
    namespace analysis {
      class MultivariateFunction;
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          class ObjectiveFunction : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a65ffe78808d336c,
              mid_getObjectiveFunction_c98c22837f53cc6d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ObjectiveFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ObjectiveFunction(const ObjectiveFunction& obj) : ::java::lang::Object(obj) {}

            ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction &);

            ::org::hipparchus::analysis::MultivariateFunction getObjectiveFunction() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          extern PyType_Def PY_TYPE_DEF(ObjectiveFunction);
          extern PyTypeObject *PY_TYPE(ObjectiveFunction);

          class t_ObjectiveFunction {
          public:
            PyObject_HEAD
            ObjectiveFunction object;
            static PyObject *wrap_Object(const ObjectiveFunction&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
