#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Thread$UncaughtExceptionHandler;
    class Throwable;
    class Thread;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        mid_init$_203b61e7fc95b723,
        mid_activeCount_f2f64475e4580546,
        mid_activeGroupCount_f2f64475e4580546,
        mid_allowThreadSuspension_677f083a4e44dce2,
        mid_checkAccess_7ae3461a92a43152,
        mid_destroy_7ae3461a92a43152,
        mid_enumerate_be0b9183e9f8fdcc,
        mid_enumerate_d5e4f720e8283319,
        mid_enumerate_af1dd81845c5f065,
        mid_enumerate_7ffe8978ff7193a9,
        mid_getMaxPriority_f2f64475e4580546,
        mid_getName_0090f7797e403f43,
        mid_getParent_c5a0b769e930fe0b,
        mid_interrupt_7ae3461a92a43152,
        mid_isDaemon_e470b6d9e0d979db,
        mid_isDestroyed_e470b6d9e0d979db,
        mid_list_7ae3461a92a43152,
        mid_parentOf_aa91ddd6a3a4bb80,
        mid_resume_7ae3461a92a43152,
        mid_setDaemon_50a2e0b139e80a58,
        mid_setMaxPriority_0a2a1ac2721c0336,
        mid_stop_7ae3461a92a43152,
        mid_suspend_7ae3461a92a43152,
        mid_toString_0090f7797e403f43,
        mid_uncaughtException_af8835c850fff4fc,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ThreadGroup(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ThreadGroup(const ThreadGroup& obj) : ::java::lang::Object(obj) {}

      ThreadGroup(const ::java::lang::String &);
      ThreadGroup(const ThreadGroup &, const ::java::lang::String &);

      jint activeCount() const;
      jint activeGroupCount() const;
      jboolean allowThreadSuspension(jboolean) const;
      void checkAccess() const;
      void destroy() const;
      jint enumerate(const JArray< ::java::lang::Thread > &) const;
      jint enumerate(const JArray< ThreadGroup > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &, jboolean) const;
      jint enumerate(const JArray< ThreadGroup > &, jboolean) const;
      jint getMaxPriority() const;
      ::java::lang::String getName() const;
      ThreadGroup getParent() const;
      void interrupt() const;
      jboolean isDaemon() const;
      jboolean isDestroyed() const;
      void list() const;
      jboolean parentOf(const ThreadGroup &) const;
      void resume() const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ThreadGroup);
    extern PyTypeObject *PY_TYPE(ThreadGroup);

    class t_ThreadGroup {
    public:
      PyObject_HEAD
      ThreadGroup object;
      static PyObject *wrap_Object(const ThreadGroup&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
