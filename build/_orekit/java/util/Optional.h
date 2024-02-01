#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    namespace function {
      class Supplier;
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
        mid_empty_aa56605e3771f379,
        mid_equals_72faff9b05f5ed5e,
        mid_get_704a5bee58538972,
        mid_hashCode_d6ab429752e7c267,
        mid_isEmpty_eee3de00fe971136,
        mid_isPresent_eee3de00fe971136,
        mid_of_f84efd32524f5b2c,
        mid_ofNullable_f84efd32524f5b2c,
        mid_or_ea72a799f32cba1b,
        mid_orElse_05290476c26136d7,
        mid_orElseGet_6bfcbd8b6ed48f86,
        mid_orElseThrow_704a5bee58538972,
        mid_orElseThrow_6bfcbd8b6ed48f86,
        mid_stream_11e4ca8182c1933d,
        mid_toString_d2c8eb4129821f0e,
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
