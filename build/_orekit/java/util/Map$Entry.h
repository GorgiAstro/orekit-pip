#ifndef java_util_Map$Entry_H
#define java_util_Map$Entry_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Map$Entry : public ::java::lang::Object {
     public:
      enum {
        mid_comparingByKey_127b1bec8b0c3ae1,
        mid_comparingByKey_09cb371d3e63c195,
        mid_comparingByValue_127b1bec8b0c3ae1,
        mid_comparingByValue_09cb371d3e63c195,
        mid_equals_460c5e2d9d51c6cc,
        mid_getKey_541690f9ee81d3ad,
        mid_getValue_541690f9ee81d3ad,
        mid_hashCode_55546ef6a647f39b,
        mid_setValue_5804c890f94a02b6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Map$Entry(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Map$Entry(const Map$Entry& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Comparator comparingByKey();
      static ::java::util::Comparator comparingByKey(const ::java::util::Comparator &);
      static ::java::util::Comparator comparingByValue();
      static ::java::util::Comparator comparingByValue(const ::java::util::Comparator &);
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object getKey() const;
      ::java::lang::Object getValue() const;
      jint hashCode() const;
      ::java::lang::Object setValue(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Map$Entry);
    extern PyTypeObject *PY_TYPE(Map$Entry);

    class t_Map$Entry {
    public:
      PyObject_HEAD
      Map$Entry object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Map$Entry *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Map$Entry&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Map$Entry&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
