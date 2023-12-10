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
        mid_comparingByKey_838794f9a43cf98e,
        mid_comparingByKey_3d37843ecb21deb5,
        mid_comparingByValue_838794f9a43cf98e,
        mid_comparingByValue_3d37843ecb21deb5,
        mid_equals_229c87223f486349,
        mid_getKey_dfd7647d9110ac9f,
        mid_getValue_dfd7647d9110ac9f,
        mid_hashCode_f2f64475e4580546,
        mid_setValue_ed50a8b49b8274dc,
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
