#ifndef org_hipparchus_optim_univariate_UnivariateObjectiveFunction_H
#define org_hipparchus_optim_univariate_UnivariateObjectiveFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
    }
    namespace analysis {
      class UnivariateFunction;
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

        class UnivariateObjectiveFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_78a50d687cd6d58b,
            mid_getObjectiveFunction_70756b76e7e5e9dc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateObjectiveFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateObjectiveFunction(const UnivariateObjectiveFunction& obj) : ::java::lang::Object(obj) {}

          UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction &);

          ::org::hipparchus::analysis::UnivariateFunction getObjectiveFunction() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateObjectiveFunction);
        extern PyTypeObject *PY_TYPE(UnivariateObjectiveFunction);

        class t_UnivariateObjectiveFunction {
        public:
          PyObject_HEAD
          UnivariateObjectiveFunction object;
          static PyObject *wrap_Object(const UnivariateObjectiveFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
