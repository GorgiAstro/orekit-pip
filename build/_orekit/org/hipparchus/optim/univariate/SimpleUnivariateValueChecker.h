#ifndef org_hipparchus_optim_univariate_SimpleUnivariateValueChecker_H
#define org_hipparchus_optim_univariate_SimpleUnivariateValueChecker_H

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        class UnivariatePointValuePair;
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
      namespace univariate {

        class SimpleUnivariateValueChecker : public ::org::hipparchus::optim::AbstractConvergenceChecker {
         public:
          enum {
            mid_init$_369b4c97255d5afa,
            mid_init$_2aa803b9073e6a76,
            mid_converged_5e69550335eac108,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleUnivariateValueChecker(jobject obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleUnivariateValueChecker(const SimpleUnivariateValueChecker& obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {}

          SimpleUnivariateValueChecker(jdouble, jdouble);
          SimpleUnivariateValueChecker(jdouble, jdouble, jint);

          jboolean converged(jint, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair &, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair &) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleUnivariateValueChecker);
        extern PyTypeObject *PY_TYPE(SimpleUnivariateValueChecker);

        class t_SimpleUnivariateValueChecker {
        public:
          PyObject_HEAD
          SimpleUnivariateValueChecker object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SimpleUnivariateValueChecker *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SimpleUnivariateValueChecker&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SimpleUnivariateValueChecker&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
