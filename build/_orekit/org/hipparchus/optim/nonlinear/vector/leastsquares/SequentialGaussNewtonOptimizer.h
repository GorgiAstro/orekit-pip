#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresOptimizer;
            class SequentialGaussNewtonOptimizer;
            class LeastSquaresOptimizer$Optimum;
          }
        }
      }
    }
    namespace linear {
      class RealVector;
      class MatrixDecomposer;
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_init$_02dd8effa935797e,
                mid_getDecomposer_777cbca2854e04bd,
                mid_getOldEvaluation_9a5082a0d9f62d61,
                mid_isFormNormalEquations_9ab94ac1dc23b105,
                mid_optimize_b4aa3e5bf3a16dc8,
                mid_toString_1c1fa1e935d6cdcf,
                mid_withAPrioriData_85311cc1f03eb256,
                mid_withAPrioriData_c2427495961b50ca,
                mid_withDecomposer_f0df00d374bb149b,
                mid_withEvaluation_c61c89be5de85ee7,
                mid_withFormNormalEquations_e427dd7f0122b950,
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
