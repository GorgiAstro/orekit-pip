#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_AbstractEvaluation_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_AbstractEvaluation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
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
                mid_init$_99803b0791f320ff,
                mid_getChiSquare_dff5885c2c873297,
                mid_getCost_dff5885c2c873297,
                mid_getCovariances_f21dcd9464c6e3c5,
                mid_getRMS_dff5885c2c873297,
                mid_getReducedChiSquare_46f85b53d9aedd96,
                mid_getSigma_5df18376713b9c4f,
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
