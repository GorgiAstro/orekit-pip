#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresOptimizer_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresProblem;
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
        namespace vector {
          namespace leastsquares {

            class LeastSquaresOptimizer : public ::java::lang::Object {
             public:
              enum {
                mid_optimize_3488934cadbbcc09,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresOptimizer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresOptimizer(const LeastSquaresOptimizer& obj) : ::java::lang::Object(obj) {}

              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &) const;
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
        namespace vector {
          namespace leastsquares {
            extern PyType_Def PY_TYPE_DEF(LeastSquaresOptimizer);
            extern PyTypeObject *PY_TYPE(LeastSquaresOptimizer);

            class t_LeastSquaresOptimizer {
            public:
              PyObject_HEAD
              LeastSquaresOptimizer object;
              static PyObject *wrap_Object(const LeastSquaresOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
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
