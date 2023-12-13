#ifndef java_io_ObjectInputFilter$Status_H
#define java_io_ObjectInputFilter$Status_H

#include "java/lang/Enum.h"

namespace java {
  namespace io {
    class ObjectInputFilter$Status;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputFilter$Status : public ::java::lang::Enum {
     public:
      enum {
        mid_valueOf_2f091d648ef5c66a,
        mid_values_58dfdde44b6e9f1e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputFilter$Status(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputFilter$Status(const ObjectInputFilter$Status& obj) : ::java::lang::Enum(obj) {}

      static ObjectInputFilter$Status *ALLOWED;
      static ObjectInputFilter$Status *REJECTED;
      static ObjectInputFilter$Status *UNDECIDED;

      static ObjectInputFilter$Status valueOf(const ::java::lang::String &);
      static JArray< ObjectInputFilter$Status > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputFilter$Status);
    extern PyTypeObject *PY_TYPE(ObjectInputFilter$Status);

    class t_ObjectInputFilter$Status {
    public:
      PyObject_HEAD
      ObjectInputFilter$Status object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ObjectInputFilter$Status *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ObjectInputFilter$Status&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ObjectInputFilter$Status&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
