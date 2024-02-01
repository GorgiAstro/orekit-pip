#ifndef org_hipparchus_analysis_MultivariateMatrixFunction_H
#define org_hipparchus_analysis_MultivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {

      class MultivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_2d9ee2fffcc89139,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultivariateMatrixFunction(const MultivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        JArray< JArray< jdouble > > value(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(MultivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(MultivariateMatrixFunction);

      class t_MultivariateMatrixFunction {
      public:
        PyObject_HEAD
        MultivariateMatrixFunction object;
        static PyObject *wrap_Object(const MultivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
