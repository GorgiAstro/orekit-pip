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
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    namespace stream {
      class DoubleStream;
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
        mid_empty_146894f57b982226,
        mid_equals_229c87223f486349,
        mid_getAsDouble_456d9a2f64d6b28d,
        mid_hashCode_f2f64475e4580546,
        mid_ifPresent_46bb77b3436e630a,
        mid_ifPresentOrElse_f1961cc866c2c482,
        mid_isEmpty_e470b6d9e0d979db,
        mid_isPresent_e470b6d9e0d979db,
        mid_of_954217a0b3f898b1,
        mid_orElse_0ba5fed9597b693e,
        mid_orElseThrow_456d9a2f64d6b28d,
        mid_orElseThrow_f3ff6fcebd4c553e,
        mid_stream_2c8690a58875e3ae,
        mid_toString_0090f7797e403f43,
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
