#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    class Optional;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Optional : public ::java::lang::Object {
     public:
      enum {
        mid_empty_9fe5189c8c3b230d,
        mid_equals_460c5e2d9d51c6cc,
        mid_get_541690f9ee81d3ad,
        mid_hashCode_55546ef6a647f39b,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_isPresent_9ab94ac1dc23b105,
        mid_of_9cbbcd2b19204a9a,
        mid_ofNullable_9cbbcd2b19204a9a,
        mid_or_c21c430465811668,
        mid_orElse_5804c890f94a02b6,
        mid_orElseGet_800ae6b5a8263b1c,
        mid_orElseThrow_541690f9ee81d3ad,
        mid_orElseThrow_800ae6b5a8263b1c,
        mid_stream_14e21bf777ff0ccf,
        mid_toString_1c1fa1e935d6cdcf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Optional(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Optional(const Optional& obj) : ::java::lang::Object(obj) {}

      static Optional empty();
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get$() const;
      jint hashCode() const;
      jboolean isEmpty() const;
      jboolean isPresent() const;
      static Optional of(const ::java::lang::Object &);
      static Optional ofNullable(const ::java::lang::Object &);
      Optional or$(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElse(const ::java::lang::Object &) const;
      ::java::lang::Object orElseGet(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElseThrow() const;
      ::java::lang::Object orElseThrow(const ::java::util::function::Supplier &) const;
      ::java::util::stream::Stream stream() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Optional);
    extern PyTypeObject *PY_TYPE(Optional);

    class t_Optional {
    public:
      PyObject_HEAD
      Optional object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Optional *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Optional&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Optional&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
