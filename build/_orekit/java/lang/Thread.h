#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Runnable;
    class Thread$State;
    class Thread$UncaughtExceptionHandler;
    class InterruptedException;
    class StackTraceElement;
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
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_3a5469c7eeb87864,
        mid_init$_998e65c64767e7ed,
        mid_init$_d4b6d9dda8ded10d,
        mid_init$_f90c747623080421,
        mid_init$_11e2bb7560524a96,
        mid_init$_24778f7a2f9b35cb,
        mid_init$_e0297c15d739861e,
        mid_activeCount_570ce0828f81a2c1,
        mid_checkAccess_0fa09c18fee449d5,
        mid_countStackFrames_570ce0828f81a2c1,
        mid_currentThread_6dd10af16a0cee26,
        mid_dumpStack_0fa09c18fee449d5,
        mid_enumerate_937414aa547b433f,
        mid_getAllStackTraces_6f5a75ccd8c04465,
        mid_getContextClassLoader_da1c487fbe6ab900,
        mid_getDefaultUncaughtExceptionHandler_74370c614d15da80,
        mid_getId_492808a339bfa35f,
        mid_getName_11b109bd155ca898,
        mid_getPriority_570ce0828f81a2c1,
        mid_getStackTrace_3450848eb58bb499,
        mid_getState_fe441563b46730a9,
        mid_getThreadGroup_b3b4aaae6d375f3d,
        mid_getUncaughtExceptionHandler_74370c614d15da80,
        mid_holdsLock_65c7d273e80d497a,
        mid_interrupt_0fa09c18fee449d5,
        mid_interrupted_b108b35ef48e27bd,
        mid_isAlive_b108b35ef48e27bd,
        mid_isDaemon_b108b35ef48e27bd,
        mid_isInterrupted_b108b35ef48e27bd,
        mid_join_0fa09c18fee449d5,
        mid_join_3a8e7649f31fdb20,
        mid_join_bc47df22dc246221,
        mid_onSpinWait_0fa09c18fee449d5,
        mid_resume_0fa09c18fee449d5,
        mid_run_0fa09c18fee449d5,
        mid_setContextClassLoader_5b2cbf1cefa98954,
        mid_setDaemon_bd04c9335fb9e4cf,
        mid_setDefaultUncaughtExceptionHandler_77e41a8ba7cd5ddd,
        mid_setName_d0bc48d5b00dc40c,
        mid_setPriority_99803b0791f320ff,
        mid_setUncaughtExceptionHandler_77e41a8ba7cd5ddd,
        mid_sleep_3a8e7649f31fdb20,
        mid_sleep_bc47df22dc246221,
        mid_start_0fa09c18fee449d5,
        mid_stop_0fa09c18fee449d5,
        mid_suspend_0fa09c18fee449d5,
        mid_toString_11b109bd155ca898,
        mid_yield_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
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
