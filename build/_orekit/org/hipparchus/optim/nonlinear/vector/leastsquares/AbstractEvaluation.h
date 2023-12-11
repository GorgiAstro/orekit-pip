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
                mid_init$_a3da1a935cb37f7b,
                mid_getChiSquare_557b8123390d8d0c,
                mid_getCost_557b8123390d8d0c,
                mid_getCovariances_e95e381257af03e9,
                mid_getRMS_557b8123390d8d0c,
                mid_getReducedChiSquare_69cfb132c661aca4,
                mid_getSigma_6041102868c92dbb,
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
