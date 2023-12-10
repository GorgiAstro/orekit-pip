#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
            class MultivariateJacobianFunction;
            class ParameterValidator;
            class LeastSquaresProblem;
          }
        }
      }
      class PointVectorValuePair;
      class ConvergenceChecker;
    }
    namespace analysis {
      class MultivariateVectorFunction;
      class MultivariateMatrixFunction;
    }
    namespace util {
      class Incrementor;
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
                mid_countEvaluations_d895828ff66e2e28,
                mid_create_5b568760059dad60,
                mid_create_8e09ef5bdf791899,
                mid_create_7d2867df71e9c392,
                mid_create_878472d31d65edc2,
                mid_evaluationChecker_3f15d3efc7f0fe61,
                mid_model_77824eaff5c3c8a5,
                mid_weightDiagonal_8d6b23812c19e8cd,
                mid_weightMatrix_9506dfeff4834b40,
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
