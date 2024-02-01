#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread$State;
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class Thread;
    class StackTraceElement;
    class Class;
    class InterruptedException;
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
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_9069f6f03f0908d6,
        mid_init$_874e391556ea1b99,
        mid_init$_bc41391f15bec3a5,
        mid_init$_2a9d454a383c1167,
        mid_init$_f6a5a8f1ff0fd9bb,
        mid_init$_851ebfafe6399ff6,
        mid_init$_db14b7521dac523b,
        mid_activeCount_d6ab429752e7c267,
        mid_checkAccess_ff7cb6c242604316,
        mid_countStackFrames_d6ab429752e7c267,
        mid_currentThread_a84f0397998296c9,
        mid_dumpStack_ff7cb6c242604316,
        mid_enumerate_156c27ca0b550ad2,
        mid_getAllStackTraces_dbcb8bbac6b35e0d,
        mid_getContextClassLoader_7e232a6d8e4f63bc,
        mid_getDefaultUncaughtExceptionHandler_77594ab3cab0151f,
        mid_getId_42c72b98e3c2e08a,
        mid_getName_d2c8eb4129821f0e,
        mid_getPriority_d6ab429752e7c267,
        mid_getStackTrace_21f9fd78d23bbd0b,
        mid_getState_b9c99ad42ec3f57c,
        mid_getThreadGroup_7b80b98e8a66c9f8,
        mid_getUncaughtExceptionHandler_77594ab3cab0151f,
        mid_holdsLock_72faff9b05f5ed5e,
        mid_interrupt_ff7cb6c242604316,
        mid_interrupted_eee3de00fe971136,
        mid_isAlive_eee3de00fe971136,
        mid_isDaemon_eee3de00fe971136,
        mid_isInterrupted_eee3de00fe971136,
        mid_join_ff7cb6c242604316,
        mid_join_f5bbab7e97879358,
        mid_join_915640b8c3079553,
        mid_onSpinWait_ff7cb6c242604316,
        mid_resume_ff7cb6c242604316,
        mid_run_ff7cb6c242604316,
        mid_setContextClassLoader_a61ce527d5e72f5b,
        mid_setDaemon_b35db77cae58639e,
        mid_setDefaultUncaughtExceptionHandler_e7c9c19a89809690,
        mid_setName_105e1eadb709d9ac,
        mid_setPriority_8fd427ab23829bf5,
        mid_setUncaughtExceptionHandler_e7c9c19a89809690,
        mid_sleep_f5bbab7e97879358,
        mid_sleep_915640b8c3079553,
        mid_start_ff7cb6c242604316,
        mid_stop_ff7cb6c242604316,
        mid_suspend_ff7cb6c242604316,
        mid_toString_d2c8eb4129821f0e,
        mid_yield_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
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
