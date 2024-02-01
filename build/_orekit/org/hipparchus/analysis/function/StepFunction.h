#ifndef org_hipparchus_analysis_function_StepFunction_H
#define org_hipparchus_analysis_function_StepFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace analysis {
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
      namespace function {

        class StepFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_64100e41ba74de8f,
            mid_value_bf28ed64d6e8576b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepFunction(const StepFunction& obj) : ::java::lang::Object(obj) {}

          StepFunction(const JArray< jdouble > &, const JArray< jdouble > &);

          jdouble value(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        extern PyType_Def PY_TYPE_DEF(StepFunction);
        extern PyTypeObject *PY_TYPE(StepFunction);

        class t_StepFunction {
        public:
          PyObject_HEAD
          StepFunction object;
          static PyObject *wrap_Object(const StepFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
