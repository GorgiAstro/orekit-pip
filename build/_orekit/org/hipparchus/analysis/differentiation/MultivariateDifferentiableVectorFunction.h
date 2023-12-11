#ifndef org_hipparchus_analysis_differentiation_MultivariateDifferentiableVectorFunction_H
#define org_hipparchus_analysis_differentiation_MultivariateDifferentiableVectorFunction_H

#include "org/hipparchus/analysis/MultivariateVectorFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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

        class MultivariateDifferentiableVectorFunction : public ::org::hipparchus::analysis::MultivariateVectorFunction {
         public:
          enum {
            mid_value_d4a489c06cba2b0b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultivariateDifferentiableVectorFunction(jobject obj) : ::org::hipparchus::analysis::MultivariateVectorFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultivariateDifferentiableVectorFunction(const MultivariateDifferentiableVectorFunction& obj) : ::org::hipparchus::analysis::MultivariateVectorFunction(obj) {}

          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultivariateDifferentiableVectorFunction);
        extern PyTypeObject *PY_TYPE(MultivariateDifferentiableVectorFunction);

        class t_MultivariateDifferentiableVectorFunction {
        public:
          PyObject_HEAD
          MultivariateDifferentiableVectorFunction object;
          static PyObject *wrap_Object(const MultivariateDifferentiableVectorFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
