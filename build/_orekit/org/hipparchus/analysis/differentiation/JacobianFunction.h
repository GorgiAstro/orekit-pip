#ifndef org_hipparchus_analysis_differentiation_JacobianFunction_H
#define org_hipparchus_analysis_differentiation_JacobianFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateMatrixFunction;
      namespace differentiation {
        class MultivariateDifferentiableVectorFunction;
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

        class JacobianFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4abd329f558403d2,
            mid_value_2d9ee2fffcc89139,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit JacobianFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          JacobianFunction(const JacobianFunction& obj) : ::java::lang::Object(obj) {}

          JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction &);

          JArray< JArray< jdouble > > value(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(JacobianFunction);
        extern PyTypeObject *PY_TYPE(JacobianFunction);

        class t_JacobianFunction {
        public:
          PyObject_HEAD
          JacobianFunction object;
          static PyObject *wrap_Object(const JacobianFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
