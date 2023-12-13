#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointVectorValuePair;
      class ConvergenceChecker;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class ParameterValidator;
            class MultivariateJacobianFunction;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresProblem;
          }
        }
      }
    }
    namespace util {
      class Incrementor;
    }
    namespace analysis {
      class MultivariateVectorFunction;
      class MultivariateMatrixFunction;
    }
    namespace linear {
      class RealVector;
      class RealMatrix;
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
                mid_countEvaluations_bc3bf0361cf57cc2,
                mid_create_d73376b7ee9ea4da,
                mid_create_8439c4332e96ba70,
                mid_create_a2ad252f198005e9,
                mid_create_f8d2e8c227588133,
                mid_evaluationChecker_fd9762d68ea9c296,
                mid_model_d5a9fe02790fb184,
                mid_weightDiagonal_e088da43f85317f3,
                mid_weightMatrix_73812dc734cb49ee,
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
