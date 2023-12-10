#ifndef org_hipparchus_analysis_differentiation_MultivariateDifferentiableFunction_H
#define org_hipparchus_analysis_differentiation_MultivariateDifferentiableFunction_H

#include "org/hipparchus/analysis/MultivariateFunction.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
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
    namespace analysis {
      namespace differentiation {

        class MultivariateDifferentiableFunction : public ::org::hipparchus::analysis::MultivariateFunction {
         public:
          enum {
            mid_value_5d4ac565bbe32c28,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultivariateDifferentiableFunction(jobject obj) : ::org::hipparchus::analysis::MultivariateFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultivariateDifferentiableFunction(const MultivariateDifferentiableFunction& obj) : ::org::hipparchus::analysis::MultivariateFunction(obj) {}

          ::org::hipparchus::analysis::differentiation::DerivativeStructure value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(MultivariateDifferentiableFunction);
        extern PyTypeObject *PY_TYPE(MultivariateDifferentiableFunction);

        class t_MultivariateDifferentiableFunction {
        public:
          PyObject_HEAD
          MultivariateDifferentiableFunction object;
          static PyObject *wrap_Object(const MultivariateDifferentiableFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
