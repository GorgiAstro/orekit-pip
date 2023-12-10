#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem$Evaluation_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem$Evaluation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
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

            class LeastSquaresProblem$Evaluation : public ::java::lang::Object {
             public:
              enum {
                mid_getChiSquare_456d9a2f64d6b28d,
                mid_getCost_456d9a2f64d6b28d,
                mid_getCovariances_2461b653ab91779b,
                mid_getJacobian_7116bbecdd8ceb21,
                mid_getPoint_6d9adf1d5b463928,
                mid_getRMS_456d9a2f64d6b28d,
                mid_getReducedChiSquare_b772323fc98b7293,
                mid_getResiduals_6d9adf1d5b463928,
                mid_getSigma_247afd2de476d613,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresProblem$Evaluation(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresProblem$Evaluation(const LeastSquaresProblem$Evaluation& obj) : ::java::lang::Object(obj) {}

              jdouble getChiSquare() const;
              jdouble getCost() const;
              ::org::hipparchus::linear::RealMatrix getCovariances(jdouble) const;
              ::org::hipparchus::linear::RealMatrix getJacobian() const;
              ::org::hipparchus::linear::RealVector getPoint() const;
              jdouble getRMS() const;
              jdouble getReducedChiSquare(jint) const;
              ::org::hipparchus::linear::RealVector getResiduals() const;
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresProblem$Evaluation);
            extern PyTypeObject *PY_TYPE(LeastSquaresProblem$Evaluation);

            class t_LeastSquaresProblem$Evaluation {
            public:
              PyObject_HEAD
              LeastSquaresProblem$Evaluation object;
              static PyObject *wrap_Object(const LeastSquaresProblem$Evaluation&);
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
