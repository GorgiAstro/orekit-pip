#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointVectorValuePair;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class MultivariateJacobianFunction;
            class ParameterValidator;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresProblem;
          }
        }
      }
      class ConvergenceChecker;
    }
    namespace util {
      class Incrementor;
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
    namespace analysis {
      class MultivariateVectorFunction;
      class MultivariateMatrixFunction;
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
                mid_countEvaluations_186fa1bc193d77f6,
                mid_create_1119b2bd6b827dcd,
                mid_create_8a37c42f4f10b498,
                mid_create_1f611c9d57ffe81d,
                mid_create_5217d2d0d728c25d,
                mid_evaluationChecker_17462b30e1059916,
                mid_model_cf0b4a54d3c72188,
                mid_weightDiagonal_e63f7dff9daf56ba,
                mid_weightMatrix_e868c777d4558256,
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
