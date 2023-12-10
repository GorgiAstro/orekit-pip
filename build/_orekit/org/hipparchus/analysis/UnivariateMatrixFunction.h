#ifndef org_hipparchus_analysis_UnivariateMatrixFunction_H
#define org_hipparchus_analysis_UnivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {

      class UnivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_46ddffa0c457a6dd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnivariateMatrixFunction(const UnivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        JArray< JArray< jdouble > > value(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(UnivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(UnivariateMatrixFunction);

      class t_UnivariateMatrixFunction {
      public:
        PyObject_HEAD
        UnivariateMatrixFunction object;
        static PyObject *wrap_Object(const UnivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
