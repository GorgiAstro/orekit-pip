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
        mid_init$_0640e6acf969ed28,
        mid_equals_221e8e85cb385209,
        mid_getClass_d4b191ff8147475d,
        mid_hashCode_412668abc8d889e9,
        mid_notify_0640e6acf969ed28,
        mid_notifyAll_0640e6acf969ed28,
        mid_toString_3cffd47377eca18a,
        mid_wait_0640e6acf969ed28,
        mid_wait_3cd6a6b354c6aa22,
        mid_wait_0bf85841a094cb2e,
        mid_finalize_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
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
