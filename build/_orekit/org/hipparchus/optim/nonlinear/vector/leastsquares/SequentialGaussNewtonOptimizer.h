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
            class LeastSquaresOptimizer$Optimum;
            class SequentialGaussNewtonOptimizer;
            class LeastSquaresOptimizer;
            class LeastSquaresProblem;
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
                mid_init$_ff7cb6c242604316,
                mid_init$_3dc548c77dbf1d27,
                mid_getDecomposer_8a28a9a8bab78fab,
                mid_getOldEvaluation_d2ffbe10a781a877,
                mid_isFormNormalEquations_eee3de00fe971136,
                mid_optimize_45e9e6e9254f21c4,
                mid_toString_d2c8eb4129821f0e,
                mid_withAPrioriData_4f6223dc01493abc,
                mid_withAPrioriData_faa1e8fa8156a0a8,
                mid_withDecomposer_21cdda84de6ad882,
                mid_withEvaluation_0eb95f55369a5426,
                mid_withFormNormalEquations_de51b162d72cd681,
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
