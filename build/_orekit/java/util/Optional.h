#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    namespace stream {
      class Stream;
    }
    class Optional;
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
        mid_empty_c5e311a9e5531e7d,
        mid_equals_65c7d273e80d497a,
        mid_get_4d26fd885228c716,
        mid_hashCode_570ce0828f81a2c1,
        mid_isEmpty_b108b35ef48e27bd,
        mid_isPresent_b108b35ef48e27bd,
        mid_of_ca633efe068089a6,
        mid_ofNullable_ca633efe068089a6,
        mid_or_65024172fd6c4767,
        mid_orElse_9facd1449e0950d3,
        mid_orElseGet_88359068aed48a59,
        mid_orElseThrow_4d26fd885228c716,
        mid_orElseThrow_88359068aed48a59,
        mid_stream_20f6d2b462aaef4b,
        mid_toString_11b109bd155ca898,
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
