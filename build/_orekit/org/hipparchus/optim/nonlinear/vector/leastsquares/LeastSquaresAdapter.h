#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor;
    }
    namespace optim {
      class ConvergenceChecker;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresProblem;
          }
        }
      }
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
                mid_init$_d28f702b40eb4b04,
                mid_evaluate_44eae3a43792b738,
                mid_getConvergenceChecker_cae0efb5080a73b8,
                mid_getEvaluationCounter_3c86b06a86576583,
                mid_getIterationCounter_3c86b06a86576583,
                mid_getObservationSize_55546ef6a647f39b,
                mid_getParameterSize_55546ef6a647f39b,
                mid_getStart_3a10cc75bd070d84,
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
