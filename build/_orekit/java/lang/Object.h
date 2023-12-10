#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class InterruptedException;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_equals_65c7d273e80d497a,
        mid_getClass_7c16c5008b34b3db,
        mid_hashCode_570ce0828f81a2c1,
        mid_notify_0fa09c18fee449d5,
        mid_notifyAll_0fa09c18fee449d5,
        mid_toString_11b109bd155ca898,
        mid_wait_0fa09c18fee449d5,
        mid_wait_3a8e7649f31fdb20,
        mid_wait_bc47df22dc246221,
        mid_finalize_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Object(jobject obj) : ::JObject(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Object(const Object& obj) : ::JObject(obj) {}

      Object();

      jboolean equals(const Object &) const;
      ::java::lang::Class getClass() const;
      jint hashCode() const;
      void notify() const;
      void notifyAll() const;
      ::java::lang::String toString() const;
      void wait() const;
      void wait(jlong) const;
      void wait(jlong, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Object);
    extern PyTypeObject *PY_TYPE(Object);

    class t_Object {
    public:
      PyObject_HEAD
      Object object;
      static PyObject *wrap_Object(const Object&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
