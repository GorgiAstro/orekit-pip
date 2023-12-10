#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

            class LeastSquaresAdapter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_65dbaf75e2600015,
                mid_evaluate_3ec1db1849589637,
                mid_getConvergenceChecker_100e81b1c0752b49,
                mid_getEvaluationCounter_745ef02916e2d8db,
                mid_getIterationCounter_745ef02916e2d8db,
                mid_getObservationSize_f2f64475e4580546,
                mid_getParameterSize_f2f64475e4580546,
                mid_getStart_6d9adf1d5b463928,
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
