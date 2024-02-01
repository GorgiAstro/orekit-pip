#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_equals_72faff9b05f5ed5e,
        mid_getClass_d5247e4b166c4ce8,
        mid_hashCode_d6ab429752e7c267,
        mid_notify_ff7cb6c242604316,
        mid_notifyAll_ff7cb6c242604316,
        mid_toString_d2c8eb4129821f0e,
        mid_wait_ff7cb6c242604316,
        mid_wait_f5bbab7e97879358,
        mid_wait_915640b8c3079553,
        mid_finalize_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
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
