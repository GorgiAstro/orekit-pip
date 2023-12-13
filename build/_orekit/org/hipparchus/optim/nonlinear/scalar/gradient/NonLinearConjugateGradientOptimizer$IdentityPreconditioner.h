#ifndef org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_H
#define org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            class Preconditioner;
          }
        }
      }
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
          namespace gradient {

            class NonLinearConjugateGradientOptimizer$IdentityPreconditioner : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_precondition_1badeb24cd1b9588,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NonLinearConjugateGradientOptimizer$IdentityPreconditioner(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& obj) : ::java::lang::Object(obj) {}

              NonLinearConjugateGradientOptimizer$IdentityPreconditioner();

              JArray< jdouble > precondition(const JArray< jdouble > &, const JArray< jdouble > &) const;
            };
          }
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
          namespace gradient {
            extern PyType_Def PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            extern PyTypeObject *PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner);

            class t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner {
            public:
              PyObject_HEAD
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
