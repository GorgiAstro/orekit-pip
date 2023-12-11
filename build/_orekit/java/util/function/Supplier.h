#ifndef java_util_function_Supplier_H
#define java_util_function_Supplier_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class Supplier : public ::java::lang::Object {
       public:
        enum {
          mid_get_e661fe3ba2fafb22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Supplier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Supplier(const Supplier& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object get$() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(Supplier);
      extern PyTypeObject *PY_TYPE(Supplier);

      class t_Supplier {
      public:
        PyObject_HEAD
        Supplier object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Supplier *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Supplier&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Supplier&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
