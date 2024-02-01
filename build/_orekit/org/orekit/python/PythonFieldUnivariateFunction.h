#ifndef org_orekit_python_PythonFieldUnivariateFunction_H
#define org_orekit_python_PythonFieldUnivariateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class FieldUnivariateFunction;
    }
    class CalculusFieldElement;
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
  namespace orekit {
    namespace python {

      class PythonFieldUnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_value_a3b854adede8eaaa,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldUnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldUnivariateFunction(const PythonFieldUnivariateFunction& obj) : ::java::lang::Object(obj) {}

        PythonFieldUnivariateFunction();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace python {
      extern PyType_Def PY_TYPE_DEF(PythonFieldUnivariateFunction);
      extern PyTypeObject *PY_TYPE(PythonFieldUnivariateFunction);

      class t_PythonFieldUnivariateFunction {
      public:
        PyObject_HEAD
        PythonFieldUnivariateFunction object;
        static PyObject *wrap_Object(const PythonFieldUnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
