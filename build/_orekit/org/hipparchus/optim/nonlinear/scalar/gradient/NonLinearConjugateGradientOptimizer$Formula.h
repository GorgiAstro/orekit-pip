#ifndef org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer$Formula_H
#define org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer$Formula_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            class NonLinearConjugateGradientOptimizer$Formula;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            class NonLinearConjugateGradientOptimizer$Formula : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_6dc0f21d20882b41,
                mid_values_073c35d06272872d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NonLinearConjugateGradientOptimizer$Formula(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NonLinearConjugateGradientOptimizer$Formula(const NonLinearConjugateGradientOptimizer$Formula& obj) : ::java::lang::Enum(obj) {}

              static NonLinearConjugateGradientOptimizer$Formula *FLETCHER_REEVES;
              static NonLinearConjugateGradientOptimizer$Formula *POLAK_RIBIERE;

              static NonLinearConjugateGradientOptimizer$Formula valueOf(const ::java::lang::String &);
              static JArray< NonLinearConjugateGradientOptimizer$Formula > values();
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
            extern PyType_Def PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula);
            extern PyTypeObject *PY_TYPE(NonLinearConjugateGradientOptimizer$Formula);

            class t_NonLinearConjugateGradientOptimizer$Formula {
            public:
              PyObject_HEAD
              NonLinearConjugateGradientOptimizer$Formula object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer$Formula&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer$Formula&, PyTypeObject *);
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
