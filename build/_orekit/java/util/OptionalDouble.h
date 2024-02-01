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
        mid_empty_04dba3560d5bf527,
        mid_equals_72faff9b05f5ed5e,
        mid_getAsDouble_9981f74b2d109da6,
        mid_hashCode_d6ab429752e7c267,
        mid_ifPresent_a4d506ef5f26a2aa,
        mid_ifPresentOrElse_07b421c1165cbd20,
        mid_isEmpty_eee3de00fe971136,
        mid_isPresent_eee3de00fe971136,
        mid_of_dbd051e44b105598,
        mid_orElse_bf28ed64d6e8576b,
        mid_orElseThrow_9981f74b2d109da6,
        mid_orElseThrow_469eb420b86053e1,
        mid_stream_98f7f3ef9d3d1b57,
        mid_toString_d2c8eb4129821f0e,
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
