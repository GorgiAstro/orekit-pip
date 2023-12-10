#ifndef org_orekit_python_PythonSupplier_H
#define org_orekit_python_PythonSupplier_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace python {

      class PythonSupplier : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_get_4d26fd885228c716,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonSupplier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonSupplier(const PythonSupplier& obj) : ::java::lang::Object(obj) {}

        PythonSupplier();

        void finalize() const;
        ::java::lang::Object get$() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonSupplier);
      extern PyTypeObject *PY_TYPE(PythonSupplier);

      class t_PythonSupplier {
      public:
        PyObject_HEAD
        PythonSupplier object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonSupplier *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonSupplier&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonSupplier&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
