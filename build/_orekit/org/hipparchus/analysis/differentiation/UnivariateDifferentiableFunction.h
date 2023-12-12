#ifndef org_hipparchus_analysis_differentiation_UnivariateDifferentiableFunction_H
#define org_hipparchus_analysis_differentiation_UnivariateDifferentiableFunction_H

#include "org/hipparchus/analysis/UnivariateFunction.h"

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

        class UnivariateDifferentiableFunction : public ::org::hipparchus::analysis::UnivariateFunction {
         public:
          enum {
            mid_value_3eb2b84dba0ab7d2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDifferentiableFunction(jobject obj) : ::org::hipparchus::analysis::UnivariateFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDifferentiableFunction(const UnivariateDifferentiableFunction& obj) : ::org::hipparchus::analysis::UnivariateFunction(obj) {}

          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDifferentiableFunction);
        extern PyTypeObject *PY_TYPE(UnivariateDifferentiableFunction);

        class t_UnivariateDifferentiableFunction {
        public:
          PyObject_HEAD
          UnivariateDifferentiableFunction object;
          static PyObject *wrap_Object(const UnivariateDifferentiableFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
