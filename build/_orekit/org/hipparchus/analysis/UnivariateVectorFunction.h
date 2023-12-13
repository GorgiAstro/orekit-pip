#ifndef org_hipparchus_analysis_UnivariateVectorFunction_H
#define org_hipparchus_analysis_UnivariateVectorFunction_H

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

      class UnivariateVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_e3ef0e966b8bf11e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnivariateVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnivariateVectorFunction(const UnivariateVectorFunction& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > value(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(UnivariateVectorFunction);
      extern PyTypeObject *PY_TYPE(UnivariateVectorFunction);

      class t_UnivariateVectorFunction {
      public:
        PyObject_HEAD
        UnivariateVectorFunction object;
        static PyObject *wrap_Object(const UnivariateVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
