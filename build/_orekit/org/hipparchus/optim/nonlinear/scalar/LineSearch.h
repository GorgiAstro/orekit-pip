#ifndef org_hipparchus_optim_nonlinear_scalar_LineSearch_H
#define org_hipparchus_optim_nonlinear_scalar_LineSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        class UnivariatePointValuePair;
      }
      namespace nonlinear {
        namespace scalar {
          class MultivariateOptimizer;
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
        namespace scalar {

          class LineSearch : public ::java::lang::Object {
           public:
            enum {
              mid_init$_56e28449faf12dba,
              mid_search_eb189cc8ff2c76ea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LineSearch(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LineSearch(const LineSearch& obj) : ::java::lang::Object(obj) {}

            LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer &, jdouble, jdouble, jdouble);

            ::org::hipparchus::optim::univariate::UnivariatePointValuePair search(const JArray< jdouble > &, const JArray< jdouble > &) const;
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
          extern PyType_Def PY_TYPE_DEF(LineSearch);
          extern PyTypeObject *PY_TYPE(LineSearch);

          class t_LineSearch {
          public:
            PyObject_HEAD
            LineSearch object;
            static PyObject *wrap_Object(const LineSearch&);
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
