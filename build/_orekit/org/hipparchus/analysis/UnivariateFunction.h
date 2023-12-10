#ifndef org_hipparchus_analysis_UnivariateFunction_H
#define org_hipparchus_analysis_UnivariateFunction_H

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

      class UnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_0ba5fed9597b693e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnivariateFunction(const UnivariateFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(UnivariateFunction);
      extern PyTypeObject *PY_TYPE(UnivariateFunction);

      class t_UnivariateFunction {
      public:
        PyObject_HEAD
        UnivariateFunction object;
        static PyObject *wrap_Object(const UnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
