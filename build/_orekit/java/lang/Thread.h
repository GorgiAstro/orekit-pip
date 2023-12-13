#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class InterruptedException;
    class StackTraceElement;
    class Thread$State;
    class Thread;
    class Class;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_5e38fe117cc20873,
        mid_init$_c0f56f14913e02e9,
        mid_init$_7ed972a788392058,
        mid_init$_96240008f388ac78,
        mid_init$_b9570bc7961950c4,
        mid_init$_7977844e3ab4abbb,
        mid_init$_3f44ea8af58136d8,
        mid_activeCount_55546ef6a647f39b,
        mid_checkAccess_a1fa5dae97ea5ed2,
        mid_countStackFrames_55546ef6a647f39b,
        mid_currentThread_2740fea5ba8b0c43,
        mid_dumpStack_a1fa5dae97ea5ed2,
        mid_enumerate_0e7ff9b56e206905,
        mid_getAllStackTraces_810bed48fafb0b9a,
        mid_getContextClassLoader_fb951be34fc77929,
        mid_getDefaultUncaughtExceptionHandler_a89b963f21517a30,
        mid_getId_6c0ce7e438e5ded4,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getPriority_55546ef6a647f39b,
        mid_getStackTrace_17c6439d4c7f5646,
        mid_getState_a3f378fa3bbd0de4,
        mid_getThreadGroup_4241f87211c845e3,
        mid_getUncaughtExceptionHandler_a89b963f21517a30,
        mid_holdsLock_460c5e2d9d51c6cc,
        mid_interrupt_a1fa5dae97ea5ed2,
        mid_interrupted_9ab94ac1dc23b105,
        mid_isAlive_9ab94ac1dc23b105,
        mid_isDaemon_9ab94ac1dc23b105,
        mid_isInterrupted_9ab94ac1dc23b105,
        mid_join_a1fa5dae97ea5ed2,
        mid_join_3d7dd2314a0dd456,
        mid_join_c89ec8817ad4d2c6,
        mid_onSpinWait_a1fa5dae97ea5ed2,
        mid_resume_a1fa5dae97ea5ed2,
        mid_run_a1fa5dae97ea5ed2,
        mid_setContextClassLoader_453dfedd86409b20,
        mid_setDaemon_fcb96c98de6fad04,
        mid_setDefaultUncaughtExceptionHandler_e3538aa684020dec,
        mid_setName_734b91ac30d5f9b4,
        mid_setPriority_44ed599e93e8a30c,
        mid_setUncaughtExceptionHandler_e3538aa684020dec,
        mid_sleep_3d7dd2314a0dd456,
        mid_sleep_c89ec8817ad4d2c6,
        mid_start_a1fa5dae97ea5ed2,
        mid_stop_a1fa5dae97ea5ed2,
        mid_suspend_a1fa5dae97ea5ed2,
        mid_toString_1c1fa1e935d6cdcf,
        mid_yield_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
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
