#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateVectorFunction;
      class MultivariateMatrixFunction;
    }
    namespace optim {
      class ConvergenceChecker;
      class PointVectorValuePair;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class ParameterValidator;
            class MultivariateJacobianFunction;
            class LeastSquaresProblem;
            class LeastSquaresProblem$Evaluation;
          }
        }
      }
    }
    namespace util {
      class Incrementor;
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
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

            class LeastSquaresFactory : public ::java::lang::Object {
             public:
              enum {
                mid_countEvaluations_b27ff71e2dfbc50d,
                mid_create_5f54f00a5eeef515,
                mid_create_dfb8e4dfb091f1cf,
                mid_create_dcfc25f5b61af029,
                mid_create_c2c3c7c13d83953e,
                mid_evaluationChecker_54fd72b186a20f21,
                mid_model_f0d5667160012d0d,
                mid_weightDiagonal_2615deba242b4f6b,
                mid_weightMatrix_9ea72f16d18e4245,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresFactory(const LeastSquaresFactory& obj) : ::java::lang::Object(obj) {}

              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &, const ::org::hipparchus::util::Incrementor &);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::optim::ConvergenceChecker &, jint, jint);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::optim::ConvergenceChecker &, jint, jint);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem create(const ::org::hipparchus::analysis::MultivariateVectorFunction &, const ::org::hipparchus::analysis::MultivariateMatrixFunction &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::optim::ConvergenceChecker &, jint, jint);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::optim::ConvergenceChecker &, jint, jint, jboolean, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator &);
              static ::org::hipparchus::optim::ConvergenceChecker evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker &);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction model(const ::org::hipparchus::analysis::MultivariateVectorFunction &, const ::org::hipparchus::analysis::MultivariateMatrixFunction &);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &, const ::org::hipparchus::linear::RealVector &);
              static ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &, const ::org::hipparchus::linear::RealMatrix &);
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresFactory);
            extern PyTypeObject *PY_TYPE(LeastSquaresFactory);

            class t_LeastSquaresFactory {
            public:
              PyObject_HEAD
              LeastSquaresFactory object;
              static PyObject *wrap_Object(const LeastSquaresFactory&);
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
