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
    class OptionalDouble;
    namespace stream {
      class DoubleStream;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class OptionalDouble : public ::java::lang::Object {
     public:
      enum {
        mid_empty_a58140050545434b,
        mid_equals_460c5e2d9d51c6cc,
        mid_getAsDouble_b74f83833fdad017,
        mid_hashCode_55546ef6a647f39b,
        mid_ifPresent_85691ac11e338ac3,
        mid_ifPresentOrElse_45e69547b92f94bd,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_isPresent_9ab94ac1dc23b105,
        mid_of_35e22db7ad859742,
        mid_orElse_04fd0666b613d2ab,
        mid_orElseThrow_b74f83833fdad017,
        mid_orElseThrow_a720d4bc78d0f73d,
        mid_stream_48a8801871033f9c,
        mid_toString_1c1fa1e935d6cdcf,
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
