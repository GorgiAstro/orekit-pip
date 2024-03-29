#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresOptimizer$Optimum_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresOptimizer$Optimum_H

#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer$Optimum;
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
        namespace vector {
          namespace leastsquares {

            class LeastSquaresOptimizer$Optimum : public ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation {
             public:
              enum {
                mid_getEvaluations_d6ab429752e7c267,
                mid_getIterations_d6ab429752e7c267,
                mid_of_f448db49c708ad34,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresOptimizer$Optimum(jobject obj) : ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresOptimizer$Optimum(const LeastSquaresOptimizer$Optimum& obj) : ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(obj) {}

              jint getEvaluations() const;
              jint getIterations() const;
              static LeastSquaresOptimizer$Optimum of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &, jint, jint);
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresOptimizer$Optimum);
            extern PyTypeObject *PY_TYPE(LeastSquaresOptimizer$Optimum);

            class t_LeastSquaresOptimizer$Optimum {
            public:
              PyObject_HEAD
              LeastSquaresOptimizer$Optimum object;
              static PyObject *wrap_Object(const LeastSquaresOptimizer$Optimum&);
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
