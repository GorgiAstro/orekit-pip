#ifndef org_hipparchus_analysis_differentiation_UnivariateFunctionDifferentiator_H
#define org_hipparchus_analysis_differentiation_UnivariateFunctionDifferentiator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
      }
      class UnivariateFunction;
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

        class UnivariateFunctionDifferentiator : public ::java::lang::Object {
         public:
          enum {
            mid_differentiate_39c5729c9c0cff99,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateFunctionDifferentiator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateFunctionDifferentiator(const UnivariateFunctionDifferentiator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction differentiate(const ::org::hipparchus::analysis::UnivariateFunction &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateFunctionDifferentiator);
        extern PyTypeObject *PY_TYPE(UnivariateFunctionDifferentiator);

        class t_UnivariateFunctionDifferentiator {
        public:
          PyObject_HEAD
          UnivariateFunctionDifferentiator object;
          static PyObject *wrap_Object(const UnivariateFunctionDifferentiator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
