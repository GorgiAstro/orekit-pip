#ifndef org_hipparchus_analysis_differentiation_UnivariateMatrixFunctionDifferentiator_H
#define org_hipparchus_analysis_differentiation_UnivariateMatrixFunctionDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateMatrixFunction;
      namespace differentiation {
        class UnivariateDifferentiableMatrixFunction;
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

        class UnivariateMatrixFunctionDifferentiator : public ::java::lang::Object {
         public:
          enum {
            mid_differentiate_3622054ab553d5e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateMatrixFunctionDifferentiator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateMatrixFunctionDifferentiator(const UnivariateMatrixFunctionDifferentiator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator);
        extern PyTypeObject *PY_TYPE(UnivariateMatrixFunctionDifferentiator);

        class t_UnivariateMatrixFunctionDifferentiator {
        public:
          PyObject_HEAD
          UnivariateMatrixFunctionDifferentiator object;
          static PyObject *wrap_Object(const UnivariateMatrixFunctionDifferentiator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
