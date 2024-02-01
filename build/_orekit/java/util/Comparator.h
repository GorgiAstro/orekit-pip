#ifndef java_util_Comparator_H
#define java_util_Comparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Comparator : public ::java::lang::Object {
     public:
      enum {
        mid_compare_efe12868eed29d7b,
        mid_equals_72faff9b05f5ed5e,
        mid_naturalOrder_44d5f0105a5559b7,
        mid_nullsFirst_855f0cb3fda1e69f,
        mid_nullsLast_855f0cb3fda1e69f,
        mid_reverseOrder_44d5f0105a5559b7,
        mid_reversed_44d5f0105a5559b7,
        mid_thenComparing_855f0cb3fda1e69f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Comparator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Comparator(const Comparator& obj) : ::java::lang::Object(obj) {}

      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::Object &) const;
      static Comparator naturalOrder();
      static Comparator nullsFirst(const Comparator &);
      static Comparator nullsLast(const Comparator &);
      static Comparator reverseOrder();
      Comparator reversed() const;
      Comparator thenComparing(const Comparator &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Comparator);
    extern PyTypeObject *PY_TYPE(Comparator);

    class t_Comparator {
    public:
      PyObject_HEAD
      Comparator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Comparator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Comparator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Comparator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
