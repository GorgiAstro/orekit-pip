#ifndef org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H
#define org_hipparchus_analysis_differentiation_FiniteDifferencesDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class UnivariateMatrixFunctionDifferentiator;
        class UnivariateVectorFunctionDifferentiator;
        class UnivariateDifferentiableVectorFunction;
        class UnivariateDifferentiableMatrixFunction;
        class UnivariateFunctionDifferentiator;
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
            mid_init$_d5322b8b512aeb26,
            mid_init$_390258812740a16c,
            mid_differentiate_220981d5dd65e2eb,
            mid_differentiate_3622054ab553d5e4,
            mid_differentiate_3e92258d2209079c,
            mid_getNbPoints_55546ef6a647f39b,
            mid_getStepSize_b74f83833fdad017,
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
