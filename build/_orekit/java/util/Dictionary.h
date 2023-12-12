#ifndef java_util_Dictionary_H
#define java_util_Dictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Enumeration;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Dictionary : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_elements_00b99a423cfc29b8,
        mid_get_65d69db95c5eb156,
        mid_isEmpty_89b302893bdbe1f1,
        mid_keys_00b99a423cfc29b8,
        mid_put_e9b6f8dd03d71e12,
        mid_remove_65d69db95c5eb156,
        mid_size_412668abc8d889e9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

      Dictionary();

      ::java::util::Enumeration elements() const;
      ::java::lang::Object get$(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Dictionary);
    extern PyTypeObject *PY_TYPE(Dictionary);

    class t_Dictionary {
    public:
      PyObject_HEAD
      Dictionary object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Dictionary *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Dictionary&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Dictionary&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
