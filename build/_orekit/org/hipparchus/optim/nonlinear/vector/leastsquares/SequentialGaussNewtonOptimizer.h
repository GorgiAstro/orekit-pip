#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
      class RealMatrix;
      class RealVector;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer;
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresProblem;
            class SequentialGaussNewtonOptimizer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            class SequentialGaussNewtonOptimizer : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_init$_2c6bf99d169aafec,
                mid_getDecomposer_6715228bb9fc3272,
                mid_getOldEvaluation_b9160dea002527ef,
                mid_isFormNormalEquations_89b302893bdbe1f1,
                mid_optimize_07184cacaaa6a451,
                mid_toString_3cffd47377eca18a,
                mid_withAPrioriData_623502691f8621d5,
                mid_withAPrioriData_4ad66676b7da8c32,
                mid_withDecomposer_30cc4c2c9e87a99d,
                mid_withEvaluation_f0edaddfc0e1df67,
                mid_withFormNormalEquations_1dd66e38a2c693ba,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SequentialGaussNewtonOptimizer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SequentialGaussNewtonOptimizer(const SequentialGaussNewtonOptimizer& obj) : ::java::lang::Object(obj) {}

              SequentialGaussNewtonOptimizer();
              SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer &, jboolean, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &);

              ::org::hipparchus::linear::MatrixDecomposer getDecomposer() const;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation getOldEvaluation() const;
              jboolean isFormNormalEquations() const;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &) const;
              ::java::lang::String toString() const;
              SequentialGaussNewtonOptimizer withAPrioriData(const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
              SequentialGaussNewtonOptimizer withAPrioriData(const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, jdouble, jdouble) const;
              SequentialGaussNewtonOptimizer withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer &) const;
              SequentialGaussNewtonOptimizer withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &) const;
              SequentialGaussNewtonOptimizer withFormNormalEquations(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(SequentialGaussNewtonOptimizer);
            extern PyTypeObject *PY_TYPE(SequentialGaussNewtonOptimizer);

            class t_SequentialGaussNewtonOptimizer {
            public:
              PyObject_HEAD
              SequentialGaussNewtonOptimizer object;
              static PyObject *wrap_Object(const SequentialGaussNewtonOptimizer&);
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
