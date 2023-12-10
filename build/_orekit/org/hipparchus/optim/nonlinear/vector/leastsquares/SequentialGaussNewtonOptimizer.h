#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_SequentialGaussNewtonOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class MatrixDecomposer;
      class RealMatrix;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
            class SequentialGaussNewtonOptimizer;
            class LeastSquaresOptimizer;
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
                mid_init$_7ae3461a92a43152,
                mid_init$_afcaaa06553f1136,
                mid_getDecomposer_73fdbc83e1233feb,
                mid_getOldEvaluation_056833bba10dc523,
                mid_isFormNormalEquations_e470b6d9e0d979db,
                mid_optimize_15b17ff9a423a2d3,
                mid_toString_0090f7797e403f43,
                mid_withAPrioriData_18f9d4c10ac99b39,
                mid_withAPrioriData_979af0a4487c2667,
                mid_withDecomposer_5b6bcfc129308676,
                mid_withEvaluation_8397c356ee050ebe,
                mid_withFormNormalEquations_e4a27245360af36e,
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
