#ifndef org_hipparchus_analysis_MultivariateVectorFunction_H
#define org_hipparchus_analysis_MultivariateVectorFunction_H

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

      class MultivariateVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_4b742fe429c22ba8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultivariateVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultivariateVectorFunction(const MultivariateVectorFunction& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > value(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(MultivariateVectorFunction);
      extern PyTypeObject *PY_TYPE(MultivariateVectorFunction);

      class t_MultivariateVectorFunction {
      public:
        PyObject_HEAD
        MultivariateVectorFunction object;
        static PyObject *wrap_Object(const MultivariateVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
