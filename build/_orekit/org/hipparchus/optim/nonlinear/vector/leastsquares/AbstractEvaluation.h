#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_AbstractEvaluation_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_AbstractEvaluation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            class AbstractEvaluation : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0a2a1ac2721c0336,
                mid_getChiSquare_456d9a2f64d6b28d,
                mid_getCost_456d9a2f64d6b28d,
                mid_getCovariances_2461b653ab91779b,
                mid_getRMS_456d9a2f64d6b28d,
                mid_getReducedChiSquare_b772323fc98b7293,
                mid_getSigma_247afd2de476d613,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractEvaluation(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractEvaluation(const AbstractEvaluation& obj) : ::java::lang::Object(obj) {}

              AbstractEvaluation(jint);

              jdouble getChiSquare() const;
              jdouble getCost() const;
              ::org::hipparchus::linear::RealMatrix getCovariances(jdouble) const;
              jdouble getRMS() const;
              jdouble getReducedChiSquare(jint) const;
              ::org::hipparchus::linear::RealVector getSigma(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractEvaluation);
            extern PyTypeObject *PY_TYPE(AbstractEvaluation);

            class t_AbstractEvaluation {
            public:
              PyObject_HEAD
              AbstractEvaluation object;
              static PyObject *wrap_Object(const AbstractEvaluation&);
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
