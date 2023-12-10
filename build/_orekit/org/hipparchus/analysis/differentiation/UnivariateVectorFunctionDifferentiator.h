#ifndef org_hipparchus_analysis_differentiation_UnivariateVectorFunctionDifferentiator_H
#define org_hipparchus_analysis_differentiation_UnivariateVectorFunctionDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableVectorFunction;
      }
      class UnivariateVectorFunction;
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

        class UnivariateVectorFunctionDifferentiator : public ::java::lang::Object {
         public:
          enum {
            mid_differentiate_e7252c9501d50f30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateVectorFunctionDifferentiator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateVectorFunctionDifferentiator(const UnivariateVectorFunctionDifferentiator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator);
        extern PyTypeObject *PY_TYPE(UnivariateVectorFunctionDifferentiator);

        class t_UnivariateVectorFunctionDifferentiator {
        public:
          PyObject_HEAD
          UnivariateVectorFunctionDifferentiator object;
          static PyObject *wrap_Object(const UnivariateVectorFunctionDifferentiator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
