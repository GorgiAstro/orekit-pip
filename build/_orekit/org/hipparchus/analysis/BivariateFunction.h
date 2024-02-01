#ifndef org_hipparchus_analysis_BivariateFunction_H
#define org_hipparchus_analysis_BivariateFunction_H

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

      class BivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_82f92590f4247da1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BivariateFunction(const BivariateFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(BivariateFunction);
      extern PyTypeObject *PY_TYPE(BivariateFunction);

      class t_BivariateFunction {
      public:
        PyObject_HEAD
        BivariateFunction object;
        static PyObject *wrap_Object(const BivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
