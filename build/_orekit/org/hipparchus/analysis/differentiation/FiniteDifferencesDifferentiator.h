#ifndef org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H
#define org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
      class UnivariateVectorFunction;
      namespace differentiation {
        class UnivariateDifferentiableMatrixFunction;
        class UnivariateMatrixFunctionDifferentiator;
        class UnivariateDifferentiableVectorFunction;
        class UnivariateFunctionDifferentiator;
        class UnivariateDifferentiableFunction;
        class UnivariateVectorFunctionDifferentiator;
      }
      class UnivariateMatrixFunction;
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
            mid_init$_89aad365fb0ed8da,
            mid_init$_c4eb928bd0dae600,
            mid_differentiate_8233aa57faace755,
            mid_differentiate_6ca090d927b88e04,
            mid_differentiate_4cf1016d87eb18ab,
            mid_getNbPoints_412668abc8d889e9,
            mid_getStepSize_557b8123390d8d0c,
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
