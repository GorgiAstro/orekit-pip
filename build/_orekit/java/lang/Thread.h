#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class StackTraceElement;
    class Thread;
    class InterruptedException;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_28b7ec64eba9f306,
        mid_init$_5f2f5f3d7421182b,
        mid_init$_38f58160c6e4b41d,
        mid_init$_15e963f75c03e9c6,
        mid_init$_643d9099f9bb7c38,
        mid_init$_324bd55ce542cf89,
        mid_init$_f6117e8acc32a6e9,
        mid_activeCount_412668abc8d889e9,
        mid_checkAccess_0640e6acf969ed28,
        mid_countStackFrames_412668abc8d889e9,
        mid_currentThread_39a13f26f025dcaa,
        mid_dumpStack_0640e6acf969ed28,
        mid_enumerate_33318ecfe98749af,
        mid_getAllStackTraces_1e62c2f73fbdd1c4,
        mid_getContextClassLoader_822bf82dfc5992ba,
        mid_getDefaultUncaughtExceptionHandler_97fdfc9062f9f501,
        mid_getId_9e26256fb0d384a2,
        mid_getName_3cffd47377eca18a,
        mid_getPriority_412668abc8d889e9,
        mid_getStackTrace_8174c106a73a6243,
        mid_getState_7ec835d9beacad15,
        mid_getThreadGroup_33ca5756bd56429e,
        mid_getUncaughtExceptionHandler_97fdfc9062f9f501,
        mid_holdsLock_221e8e85cb385209,
        mid_interrupt_0640e6acf969ed28,
        mid_interrupted_89b302893bdbe1f1,
        mid_isAlive_89b302893bdbe1f1,
        mid_isDaemon_89b302893bdbe1f1,
        mid_isInterrupted_89b302893bdbe1f1,
        mid_join_0640e6acf969ed28,
        mid_join_3cd6a6b354c6aa22,
        mid_join_0bf85841a094cb2e,
        mid_onSpinWait_0640e6acf969ed28,
        mid_resume_0640e6acf969ed28,
        mid_run_0640e6acf969ed28,
        mid_setContextClassLoader_3cf05a86101dd452,
        mid_setDaemon_ed2afdb8506b9742,
        mid_setDefaultUncaughtExceptionHandler_fb240d20456c6da7,
        mid_setName_f5ffdf29129ef90a,
        mid_setPriority_a3da1a935cb37f7b,
        mid_setUncaughtExceptionHandler_fb240d20456c6da7,
        mid_sleep_3cd6a6b354c6aa22,
        mid_sleep_0bf85841a094cb2e,
        mid_start_0640e6acf969ed28,
        mid_stop_0640e6acf969ed28,
        mid_suspend_0640e6acf969ed28,
        mid_toString_3cffd47377eca18a,
        mid_yield_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
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
