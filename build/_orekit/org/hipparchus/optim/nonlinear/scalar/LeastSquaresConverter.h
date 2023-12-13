#ifndef org_hipparchus_optim_nonlinear_scalar_LeastSquaresConverter_H
#define org_hipparchus_optim_nonlinear_scalar_LeastSquaresConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateVectorFunction;
      class MultivariateFunction;
    }
    namespace linear {
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
        namespace scalar {

          class LeastSquaresConverter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f1031fef074cb1b3,
              mid_init$_320ab255c7d24db5,
              mid_init$_43c579500c4567be,
              mid_value_b060e4326765ccf1,
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
