#ifndef org_hipparchus_analysis_differentiation_UnivariateDifferentiableVectorFunction_H
#define org_hipparchus_analysis_differentiation_UnivariateDifferentiableVectorFunction_H

#include "org/hipparchus/analysis/UnivariateVectorFunction.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class Derivative;
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

        class UnivariateDifferentiableVectorFunction : public ::org::hipparchus::analysis::UnivariateVectorFunction {
         public:
          enum {
            mid_value_8db78ffbf68761e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDifferentiableVectorFunction(jobject obj) : ::org::hipparchus::analysis::UnivariateVectorFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDifferentiableVectorFunction(const UnivariateDifferentiableVectorFunction& obj) : ::org::hipparchus::analysis::UnivariateVectorFunction(obj) {}

          JArray< ::org::hipparchus::analysis::differentiation::Derivative > value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDifferentiableVectorFunction);
        extern PyTypeObject *PY_TYPE(UnivariateDifferentiableVectorFunction);

        class t_UnivariateDifferentiableVectorFunction {
        public:
          PyObject_HEAD
          UnivariateDifferentiableVectorFunction object;
          static PyObject *wrap_Object(const UnivariateDifferentiableVectorFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
