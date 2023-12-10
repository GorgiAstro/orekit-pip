#ifndef org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H
#define org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateMatrixFunctionDifferentiator;
        class UnivariateDifferentiableVectorFunction;
        class UnivariateDifferentiableFunction;
        class UnivariateVectorFunctionDifferentiator;
        class UnivariateFunctionDifferentiator;
        class UnivariateDifferentiableMatrixFunction;
      }
      class UnivariateMatrixFunction;
      class UnivariateFunction;
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
            mid_init$_bb79ca80d85d0a66,
            mid_init$_2e15f46ce2042002,
            mid_differentiate_0f70e8683b12e576,
            mid_differentiate_b4b7f37a2e968eae,
            mid_differentiate_e7252c9501d50f30,
            mid_getNbPoints_570ce0828f81a2c1,
            mid_getStepSize_dff5885c2c873297,
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
