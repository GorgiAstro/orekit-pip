#ifndef org_orekit_python_PythonFunction_H
#define org_orekit_python_PythonFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace python {

      class PythonFunction : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_apply_65d69db95c5eb156,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFunction(const PythonFunction& obj) : ::java::lang::Object(obj) {}

        PythonFunction();

        ::java::lang::Object apply(const ::java::lang::Object &) const;
        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace python {
      extern PyType_Def PY_TYPE_DEF(PythonFunction);
      extern PyTypeObject *PY_TYPE(PythonFunction);

      class t_PythonFunction {
      public:
        PyObject_HEAD
        PythonFunction object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PythonFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFunction&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
