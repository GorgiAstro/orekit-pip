#ifndef java_util_OptionalDouble_H
#define java_util_OptionalDouble_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    namespace stream {
      class DoubleStream;
    }
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    class OptionalDouble;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class OptionalDouble : public ::java::lang::Object {
     public:
      enum {
        mid_empty_e3186f0c7a9ab30b,
        mid_equals_221e8e85cb385209,
        mid_getAsDouble_557b8123390d8d0c,
        mid_hashCode_412668abc8d889e9,
        mid_ifPresent_fda350dd3513069c,
        mid_ifPresentOrElse_67dd0e15cf1c0ffe,
        mid_isEmpty_89b302893bdbe1f1,
        mid_isPresent_89b302893bdbe1f1,
        mid_of_afa36fca5724ddcb,
        mid_orElse_7e960cd6eee376d8,
        mid_orElseThrow_557b8123390d8d0c,
        mid_orElseThrow_a5cf1eb1c68623c3,
        mid_stream_78c9b5d7fa0dbac0,
        mid_toString_3cffd47377eca18a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit OptionalDouble(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      OptionalDouble(const OptionalDouble& obj) : ::java::lang::Object(obj) {}

      static OptionalDouble empty();
      jboolean equals(const ::java::lang::Object &) const;
      jdouble getAsDouble() const;
      jint hashCode() const;
      void ifPresent(const ::java::util::function::DoubleConsumer &) const;
      void ifPresentOrElse(const ::java::util::function::DoubleConsumer &, const ::java::lang::Runnable &) const;
      jboolean isEmpty() const;
      jboolean isPresent() const;
      static OptionalDouble of(jdouble);
      jdouble orElse(jdouble) const;
      jdouble orElseThrow() const;
      jdouble orElseThrow(const ::java::util::function::Supplier &) const;
      ::java::util::stream::DoubleStream stream() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(OptionalDouble);
    extern PyTypeObject *PY_TYPE(OptionalDouble);

    class t_OptionalDouble {
    public:
      PyObject_HEAD
      OptionalDouble object;
      static PyObject *wrap_Object(const OptionalDouble&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
