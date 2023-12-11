#ifndef org_hipparchus_optim_nonlinear_scalar_LeastSquaresConverter_H
#define org_hipparchus_optim_nonlinear_scalar_LeastSquaresConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace analysis {
      class MultivariateFunction;
      class MultivariateVectorFunction;
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
        namespace scalar {

          class LeastSquaresConverter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9cb9668045142b5a,
              mid_init$_4bc5aeb9e9e93295,
              mid_init$_39c91493eebe07c4,
              mid_value_86c4a0582e0747ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LeastSquaresConverter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LeastSquaresConverter(const LeastSquaresConverter& obj) : ::java::lang::Object(obj) {}

            LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction &, const JArray< jdouble > &);
            LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction &, const JArray< jdouble > &, const JArray< jdouble > &);
            LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction &, const JArray< jdouble > &, const ::org::hipparchus::linear::RealMatrix &);

            jdouble value(const JArray< jdouble > &) const;
          };
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
        namespace scalar {
          extern PyType_Def PY_TYPE_DEF(LeastSquaresConverter);
          extern PyTypeObject *PY_TYPE(LeastSquaresConverter);

          class t_LeastSquaresConverter {
          public:
            PyObject_HEAD
            LeastSquaresConverter object;
            static PyObject *wrap_Object(const LeastSquaresConverter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
