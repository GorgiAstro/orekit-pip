#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem$Evaluation_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_LeastSquaresProblem$Evaluation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
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
                mid_getChiSquare_9981f74b2d109da6,
                mid_getCost_9981f74b2d109da6,
                mid_getCovariances_d5a7c13c36e5009c,
                mid_getJacobian_b2eebabce70526d8,
                mid_getPoint_92d7e8d8d3f1dfcf,
                mid_getRMS_9981f74b2d109da6,
                mid_getReducedChiSquare_ce4c02d583456bc9,
                mid_getResiduals_92d7e8d8d3f1dfcf,
                mid_getSigma_2fd46ead8ae05f47,
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
