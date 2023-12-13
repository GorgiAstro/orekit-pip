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
        mid_init$_a1fa5dae97ea5ed2,
        mid_equals_460c5e2d9d51c6cc,
        mid_getClass_1aeb0737a960d371,
        mid_hashCode_55546ef6a647f39b,
        mid_notify_a1fa5dae97ea5ed2,
        mid_notifyAll_a1fa5dae97ea5ed2,
        mid_toString_1c1fa1e935d6cdcf,
        mid_wait_a1fa5dae97ea5ed2,
        mid_wait_3d7dd2314a0dd456,
        mid_wait_c89ec8817ad4d2c6,
        mid_finalize_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
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
