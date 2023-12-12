#ifndef org_hipparchus_analysis_differentiation_GradientFunction_H
#define org_hipparchus_analysis_differentiation_GradientFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class MultivariateDifferentiableFunction;
      }
      class MultivariateVectorFunction;
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

        class GradientFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d8be4dacca924147,
            mid_value_1db7c087750eaffe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GradientFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GradientFunction(const GradientFunction& obj) : ::java::lang::Object(obj) {}

          GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction &);

          JArray< jdouble > value(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(GradientFunction);
        extern PyTypeObject *PY_TYPE(GradientFunction);

        class t_GradientFunction {
        public:
          PyObject_HEAD
          GradientFunction object;
          static PyObject *wrap_Object(const GradientFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
