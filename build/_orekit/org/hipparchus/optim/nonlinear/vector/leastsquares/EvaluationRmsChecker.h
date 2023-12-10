#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_EvaluationRmsChecker_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_EvaluationRmsChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
          }
        }
      }
      class ConvergenceChecker;
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

            class EvaluationRmsChecker : public ::java::lang::Object {
             public:
              enum {
                mid_init$_17db3a65980d3441,
                mid_init$_8f2e782d5278b131,
                mid_converged_a6b9ae58ae2de284,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit EvaluationRmsChecker(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              EvaluationRmsChecker(const EvaluationRmsChecker& obj) : ::java::lang::Object(obj) {}

              EvaluationRmsChecker(jdouble);
              EvaluationRmsChecker(jdouble, jdouble);

              jboolean converged(jint, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &) const;
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
            extern PyType_Def PY_TYPE_DEF(EvaluationRmsChecker);
            extern PyTypeObject *PY_TYPE(EvaluationRmsChecker);

            class t_EvaluationRmsChecker {
            public:
              PyObject_HEAD
              EvaluationRmsChecker object;
              static PyObject *wrap_Object(const EvaluationRmsChecker&);
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
