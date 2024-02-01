#ifndef org_hipparchus_analysis_PythonUnivariateFunction_H
#define org_hipparchus_analysis_PythonUnivariateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {

      class PythonUnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_value_bf28ed64d6e8576b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonUnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonUnivariateFunction(const PythonUnivariateFunction& obj) : ::java::lang::Object(obj) {}

        PythonUnivariateFunction();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        jdouble value(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(PythonUnivariateFunction);
      extern PyTypeObject *PY_TYPE(PythonUnivariateFunction);

      class t_PythonUnivariateFunction {
      public:
        PyObject_HEAD
        PythonUnivariateFunction object;
        static PyObject *wrap_Object(const PythonUnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
