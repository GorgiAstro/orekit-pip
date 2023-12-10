#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class SequentialGaussNewtonOptimizer;
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresOptimizer;
            class LeastSquaresProblem;
          }
        }
      }
    }
    namespace linear {
      class MatrixDecomposer;
      class RealVector;
      class RealMatrix;
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
                mid_init$_0fa09c18fee449d5,
                mid_init$_a6dbc2626fd93207,
                mid_getDecomposer_43a2c3cb3afc9b3b,
                mid_getOldEvaluation_b37820a2ab3d7e67,
                mid_isFormNormalEquations_b108b35ef48e27bd,
                mid_optimize_3488934cadbbcc09,
                mid_toString_11b109bd155ca898,
                mid_withAPrioriData_6c4b3e1fccdc5ae7,
                mid_withAPrioriData_103c23346cfe98fc,
                mid_withDecomposer_d5e36e467a8f93c2,
                mid_withEvaluation_6b9a3a2736db8a71,
                mid_withFormNormalEquations_200a796350a5ce05,
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
