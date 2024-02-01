#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
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

            class LeastSquaresAdapter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_677b000fe7e9460b,
                mid_evaluate_854ba28c9e2137e8,
                mid_getConvergenceChecker_ecb318336ebe4cc7,
                mid_getEvaluationCounter_286bd168b7e14166,
                mid_getIterationCounter_286bd168b7e14166,
                mid_getObservationSize_d6ab429752e7c267,
                mid_getParameterSize_d6ab429752e7c267,
                mid_getStart_92d7e8d8d3f1dfcf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresAdapter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresAdapter(const LeastSquaresAdapter& obj) : ::java::lang::Object(obj) {}

              LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &);

              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation evaluate(const ::org::hipparchus::linear::RealVector &) const;
              ::org::hipparchus::optim::ConvergenceChecker getConvergenceChecker() const;
              ::org::hipparchus::util::Incrementor getEvaluationCounter() const;
              ::org::hipparchus::util::Incrementor getIterationCounter() const;
              jint getObservationSize() const;
              jint getParameterSize() const;
              ::org::hipparchus::linear::RealVector getStart() const;
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresAdapter);
            extern PyTypeObject *PY_TYPE(LeastSquaresAdapter);

            class t_LeastSquaresAdapter {
            public:
              PyObject_HEAD
              LeastSquaresAdapter object;
              static PyObject *wrap_Object(const LeastSquaresAdapter&);
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
