#ifndef org_hipparchus_analysis_TrivariateFunction_H
#define org_hipparchus_analysis_TrivariateFunction_H

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

      class TrivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_8d02ba458f22e508,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TrivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TrivariateFunction(const TrivariateFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(jdouble, jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(TrivariateFunction);
      extern PyTypeObject *PY_TYPE(TrivariateFunction);

      class t_TrivariateFunction {
      public:
        PyObject_HEAD
        TrivariateFunction object;
        static PyObject *wrap_Object(const TrivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
