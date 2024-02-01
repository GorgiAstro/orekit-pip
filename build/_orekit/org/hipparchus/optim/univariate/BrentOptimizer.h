#ifndef org_hipparchus_optim_univariate_BrentOptimizer_H
#define org_hipparchus_optim_univariate_BrentOptimizer_H

#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        class UnivariatePointValuePair;
      }
      class ConvergenceChecker;
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
      namespace univariate {

        class BrentOptimizer : public ::org::hipparchus::optim::univariate::UnivariateOptimizer {
         public:
          enum {
            mid_init$_13edac039e8cc967,
            mid_init$_2a1e7c9bd9677ee4,
            mid_doOptimize_3bb7748f0ac76925,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BrentOptimizer(jobject obj) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BrentOptimizer(const BrentOptimizer& obj) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(obj) {}

          BrentOptimizer(jdouble, jdouble);
          BrentOptimizer(jdouble, jdouble, const ::org::hipparchus::optim::ConvergenceChecker &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        extern PyType_Def PY_TYPE_DEF(BrentOptimizer);
        extern PyTypeObject *PY_TYPE(BrentOptimizer);

        class t_BrentOptimizer {
        public:
          PyObject_HEAD
          BrentOptimizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BrentOptimizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BrentOptimizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BrentOptimizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
