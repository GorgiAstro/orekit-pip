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
                mid_getChiSquare_b74f83833fdad017,
                mid_getCost_b74f83833fdad017,
                mid_getCovariances_f5dd9d6021dc9dae,
                mid_getJacobian_f77d745f2128c391,
                mid_getPoint_3a10cc75bd070d84,
                mid_getRMS_b74f83833fdad017,
                mid_getReducedChiSquare_2afcbc21f4e57ab2,
                mid_getResiduals_3a10cc75bd070d84,
                mid_getSigma_0af7505d8931441d,
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
