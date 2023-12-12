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
        mid_empty_d0ccac9b4c6bdd55,
        mid_equals_221e8e85cb385209,
        mid_get_e661fe3ba2fafb22,
        mid_hashCode_412668abc8d889e9,
        mid_isEmpty_89b302893bdbe1f1,
        mid_isPresent_89b302893bdbe1f1,
        mid_of_a5279ad90f7422e8,
        mid_ofNullable_a5279ad90f7422e8,
        mid_or_f655b6b80eaffe76,
        mid_orElse_65d69db95c5eb156,
        mid_orElseGet_f204f9de7bbbfc88,
        mid_orElseThrow_e661fe3ba2fafb22,
        mid_orElseThrow_f204f9de7bbbfc88,
        mid_stream_d7cce92225eb0db2,
        mid_toString_3cffd47377eca18a,
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
