#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor;
    }
    namespace linear {
      class RealVector;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresProblem;
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

            class LeastSquaresAdapter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_48c4478f5a3e6b22,
                mid_evaluate_45332b266cdd66d4,
                mid_getConvergenceChecker_4c680323f2c08379,
                mid_getEvaluationCounter_d3591c1ea177be92,
                mid_getIterationCounter_d3591c1ea177be92,
                mid_getObservationSize_412668abc8d889e9,
                mid_getParameterSize_412668abc8d889e9,
                mid_getStart_75d50d73180655b4,
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
