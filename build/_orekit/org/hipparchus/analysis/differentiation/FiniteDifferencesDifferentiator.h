#ifndef org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H
#define org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateFunctionDifferentiator;
        class UnivariateDifferentiableVectorFunction;
        class UnivariateDifferentiableMatrixFunction;
        class UnivariateDifferentiableFunction;
        class UnivariateVectorFunctionDifferentiator;
        class UnivariateMatrixFunctionDifferentiator;
      }
      class UnivariateFunction;
      class UnivariateVectorFunction;
      class UnivariateMatrixFunction;
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
            mid_init$_4320462275d66e78,
            mid_init$_2baad0ec229f7c27,
            mid_differentiate_734852731d7ffcb1,
            mid_differentiate_f183e80ab489f554,
            mid_differentiate_a60494eeb9105ac5,
            mid_getNbPoints_d6ab429752e7c267,
            mid_getStepSize_9981f74b2d109da6,
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
