#ifndef org_hipparchus_analysis_MultivariateFunction_H
#define org_hipparchus_analysis_MultivariateFunction_H

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

      class MultivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_9dc1ec0bcc0a9a29,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultivariateFunction(const MultivariateFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(MultivariateFunction);
      extern PyTypeObject *PY_TYPE(MultivariateFunction);

      class t_MultivariateFunction {
      public:
        PyObject_HEAD
        MultivariateFunction object;
        static PyObject *wrap_Object(const MultivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
