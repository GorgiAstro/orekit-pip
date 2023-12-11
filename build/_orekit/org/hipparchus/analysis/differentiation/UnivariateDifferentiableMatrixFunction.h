#ifndef org_hipparchus_analysis_differentiation_UnivariateDifferentiableMatrixFunction_H
#define org_hipparchus_analysis_differentiation_UnivariateDifferentiableMatrixFunction_H

#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Derivative;
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

        class UnivariateDifferentiableMatrixFunction : public ::org::hipparchus::analysis::UnivariateMatrixFunction {
         public:
          enum {
            mid_value_a79be7c8e7684eb4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDifferentiableMatrixFunction(jobject obj) : ::org::hipparchus::analysis::UnivariateMatrixFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDifferentiableMatrixFunction(const UnivariateDifferentiableMatrixFunction& obj) : ::org::hipparchus::analysis::UnivariateMatrixFunction(obj) {}

          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction);
        extern PyTypeObject *PY_TYPE(UnivariateDifferentiableMatrixFunction);

        class t_UnivariateDifferentiableMatrixFunction {
        public:
          PyObject_HEAD
          UnivariateDifferentiableMatrixFunction object;
          static PyObject *wrap_Object(const UnivariateDifferentiableMatrixFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
