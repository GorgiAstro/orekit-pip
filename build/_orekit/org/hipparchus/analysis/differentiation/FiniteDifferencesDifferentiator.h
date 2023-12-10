#ifndef org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H
#define org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateMatrixFunctionDifferentiator;
        class UnivariateFunctionDifferentiator;
        class UnivariateDifferentiableVectorFunction;
        class UnivariateDifferentiableMatrixFunction;
        class UnivariateVectorFunctionDifferentiator;
        class UnivariateDifferentiableFunction;
      }
      class UnivariateFunction;
      class UnivariateMatrixFunction;
      class UnivariateVectorFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class FiniteDifferencesDifferentiator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_987a5fb872043b12,
            mid_init$_d3d0b69fc0b5db95,
            mid_differentiate_39c5729c9c0cff99,
            mid_differentiate_bfe4c2e1bcc56b2f,
            mid_differentiate_b23ddbdee3e84f5e,
            mid_getNbPoints_f2f64475e4580546,
            mid_getStepSize_456d9a2f64d6b28d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FiniteDifferencesDifferentiator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FiniteDifferencesDifferentiator(const FiniteDifferencesDifferentiator& obj) : ::java::lang::Object(obj) {}

          FiniteDifferencesDifferentiator(jint, jdouble);
          FiniteDifferencesDifferentiator(jint, jdouble, jdouble, jdouble);

          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction differentiate(const ::org::hipparchus::analysis::UnivariateFunction &) const;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction &) const;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction &) const;
          jint getNbPoints() const;
          jdouble getStepSize() const;
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
        extern PyType_Def PY_TYPE_DEF(FiniteDifferencesDifferentiator);
        extern PyTypeObject *PY_TYPE(FiniteDifferencesDifferentiator);

        class t_FiniteDifferencesDifferentiator {
        public:
          PyObject_HEAD
          FiniteDifferencesDifferentiator object;
          static PyObject *wrap_Object(const FiniteDifferencesDifferentiator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
