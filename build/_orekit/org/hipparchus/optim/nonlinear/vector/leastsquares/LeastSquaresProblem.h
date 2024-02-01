#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem_H

#include "org/hipparchus/optim/OptimizationProblem.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
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

            class LeastSquaresProblem : public ::org::hipparchus::optim::OptimizationProblem {
             public:
              enum {
                mid_evaluate_854ba28c9e2137e8,
                mid_getObservationSize_d6ab429752e7c267,
                mid_getParameterSize_d6ab429752e7c267,
                mid_getStart_92d7e8d8d3f1dfcf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresProblem(jobject obj) : ::org::hipparchus::optim::OptimizationProblem(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresProblem(const LeastSquaresProblem& obj) : ::org::hipparchus::optim::OptimizationProblem(obj) {}

              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation evaluate(const ::org::hipparchus::linear::RealVector &) const;
              jint getObservationSize() const;
              jint getParameterSize() const;
              ::org::hipparchus::linear::RealVector getStart() const;
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresProblem);
            extern PyTypeObject *PY_TYPE(LeastSquaresProblem);

            class t_LeastSquaresProblem {
            public:
              PyObject_HEAD
              LeastSquaresProblem object;
              static PyObject *wrap_Object(const LeastSquaresProblem&);
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
