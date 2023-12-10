#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class Thread;
    class StackTraceElement;
    class Class;
    class Thread$State;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread : public ::java::lang::Object {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_b1cadb67b411bc03,
        mid_init$_203b61e7fc95b723,
        mid_init$_f2927727ec66827a,
        mid_init$_daa6aef5d8b89ad3,
        mid_init$_227d057051a80c38,
        mid_init$_e5fdb4699bb71a8e,
        mid_init$_d0bc2ab4cad75c13,
        mid_activeCount_f2f64475e4580546,
        mid_checkAccess_7ae3461a92a43152,
        mid_countStackFrames_f2f64475e4580546,
        mid_currentThread_1aace7ebc26af75c,
        mid_dumpStack_7ae3461a92a43152,
        mid_enumerate_be0b9183e9f8fdcc,
        mid_getAllStackTraces_d6753b7055940a54,
        mid_getContextClassLoader_9f59dd0605cf9d96,
        mid_getDefaultUncaughtExceptionHandler_c6c0fc4da74a22c1,
        mid_getId_a27fc9afd27e559d,
        mid_getName_0090f7797e403f43,
        mid_getPriority_f2f64475e4580546,
        mid_getStackTrace_e6bb52718778b305,
        mid_getState_e7cc095e82d15730,
        mid_getThreadGroup_c5a0b769e930fe0b,
        mid_getUncaughtExceptionHandler_c6c0fc4da74a22c1,
        mid_holdsLock_229c87223f486349,
        mid_interrupt_7ae3461a92a43152,
        mid_interrupted_e470b6d9e0d979db,
        mid_isAlive_e470b6d9e0d979db,
        mid_isDaemon_e470b6d9e0d979db,
        mid_isInterrupted_e470b6d9e0d979db,
        mid_join_7ae3461a92a43152,
        mid_join_fefb08975c10f0a1,
        mid_join_7198f0f6eb202fc7,
        mid_onSpinWait_7ae3461a92a43152,
        mid_resume_7ae3461a92a43152,
        mid_run_7ae3461a92a43152,
        mid_setContextClassLoader_9d86b3b4fa2f4a01,
        mid_setDaemon_50a2e0b139e80a58,
        mid_setDefaultUncaughtExceptionHandler_bc001c0ab2a6504b,
        mid_setName_e939c6558ae8d313,
        mid_setPriority_0a2a1ac2721c0336,
        mid_setUncaughtExceptionHandler_bc001c0ab2a6504b,
        mid_sleep_fefb08975c10f0a1,
        mid_sleep_7198f0f6eb202fc7,
        mid_start_7ae3461a92a43152,
        mid_stop_7ae3461a92a43152,
        mid_suspend_7ae3461a92a43152,
        mid_toString_0090f7797e403f43,
        mid_yield_7ae3461a92a43152,
        mid_clone_dfd7647d9110ac9f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread(const Thread& obj) : ::java::lang::Object(obj) {}

      static jint MAX_PRIORITY;
      static jint MIN_PRIORITY;
      static jint NORM_PRIORITY;

      Thread();
      Thread(const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong, jboolean);

      static jint activeCount();
      void checkAccess() const;
      jint countStackFrames() const;
      static Thread currentThread();
      static void dumpStack();
      static jint enumerate(const JArray< Thread > &);
      static ::java::util::Map getAllStackTraces();
      ::java::lang::ClassLoader getContextClassLoader() const;
      static ::java::lang::Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
      jlong getId() const;
      ::java::lang::String getName() const;
      jint getPriority() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      ::java::lang::Thread$State getState() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
      ::java::lang::Thread$UncaughtExceptionHandler getUncaughtExceptionHandler() const;
      static jboolean holdsLock(const ::java::lang::Object &);
      void interrupt() const;
      static jboolean interrupted();
      jboolean isAlive() const;
      jboolean isDaemon() const;
      jboolean isInterrupted() const;
      void join() const;
      void join(jlong) const;
      void join(jlong, jint) const;
      static void onSpinWait();
      void resume() const;
      void run() const;
      void setContextClassLoader(const ::java::lang::ClassLoader &) const;
      void setDaemon(jboolean) const;
      static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &);
      void setName(const ::java::lang::String &) const;
      void setPriority(jint) const;
      void setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      static void sleep(jlong);
      static void sleep(jlong, jint);
      void start() const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      static void yield();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread);
    extern PyTypeObject *PY_TYPE(Thread);

    class t_Thread {
    public:
      PyObject_HEAD
      Thread object;
      static PyObject *wrap_Object(const Thread&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
