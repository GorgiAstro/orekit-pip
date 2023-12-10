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
        mid_empty_1edd71440bc9c025,
        mid_equals_65c7d273e80d497a,
        mid_getAsDouble_dff5885c2c873297,
        mid_hashCode_570ce0828f81a2c1,
        mid_ifPresent_6444b3e27af46e9d,
        mid_ifPresentOrElse_21108a6192158647,
        mid_isEmpty_b108b35ef48e27bd,
        mid_isPresent_b108b35ef48e27bd,
        mid_of_9afec6b700c1a06e,
        mid_orElse_dcbc7ce2902fa136,
        mid_orElseThrow_dff5885c2c873297,
        mid_orElseThrow_ccfb19691abd21ea,
        mid_stream_0636ae0567d24d63,
        mid_toString_11b109bd155ca898,
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
