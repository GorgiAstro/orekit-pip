#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread.h"
#include "java/lang/Thread$State.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/util/Map.h"
#include "java/lang/Thread.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Class.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread::class$ = NULL;
    jmethodID *Thread::mids$ = NULL;
    bool Thread::live$ = false;
    jint Thread::MAX_PRIORITY = (jint) 0;
    jint Thread::MIN_PRIORITY = (jint) 0;
    jint Thread::NORM_PRIORITY = (jint) 0;

    jclass Thread::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_9069f6f03f0908d6] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;)V");
        mids$[mid_init$_874e391556ea1b99] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_init$_bc41391f15bec3a5] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_2a9d454a383c1167] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V");
        mids$[mid_init$_f6a5a8f1ff0fd9bb] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_851ebfafe6399ff6] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V");
        mids$[mid_init$_db14b7521dac523b] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V");
        mids$[mid_activeCount_d6ab429752e7c267] = env->getStaticMethodID(cls, "activeCount", "()I");
        mids$[mid_checkAccess_ff7cb6c242604316] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_countStackFrames_d6ab429752e7c267] = env->getMethodID(cls, "countStackFrames", "()I");
        mids$[mid_currentThread_a84f0397998296c9] = env->getStaticMethodID(cls, "currentThread", "()Ljava/lang/Thread;");
        mids$[mid_dumpStack_ff7cb6c242604316] = env->getStaticMethodID(cls, "dumpStack", "()V");
        mids$[mid_enumerate_156c27ca0b550ad2] = env->getStaticMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_getAllStackTraces_dbcb8bbac6b35e0d] = env->getStaticMethodID(cls, "getAllStackTraces", "()Ljava/util/Map;");
        mids$[mid_getContextClassLoader_7e232a6d8e4f63bc] = env->getMethodID(cls, "getContextClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getDefaultUncaughtExceptionHandler_77594ab3cab0151f] = env->getStaticMethodID(cls, "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_getId_42c72b98e3c2e08a] = env->getMethodID(cls, "getId", "()J");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPriority_d6ab429752e7c267] = env->getMethodID(cls, "getPriority", "()I");
        mids$[mid_getStackTrace_21f9fd78d23bbd0b] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getState_b9c99ad42ec3f57c] = env->getMethodID(cls, "getState", "()Ljava/lang/Thread$State;");
        mids$[mid_getThreadGroup_7b80b98e8a66c9f8] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getUncaughtExceptionHandler_77594ab3cab0151f] = env->getMethodID(cls, "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_holdsLock_72faff9b05f5ed5e] = env->getStaticMethodID(cls, "holdsLock", "(Ljava/lang/Object;)Z");
        mids$[mid_interrupt_ff7cb6c242604316] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_interrupted_eee3de00fe971136] = env->getStaticMethodID(cls, "interrupted", "()Z");
        mids$[mid_isAlive_eee3de00fe971136] = env->getMethodID(cls, "isAlive", "()Z");
        mids$[mid_isDaemon_eee3de00fe971136] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isInterrupted_eee3de00fe971136] = env->getMethodID(cls, "isInterrupted", "()Z");
        mids$[mid_join_ff7cb6c242604316] = env->getMethodID(cls, "join", "()V");
        mids$[mid_join_f5bbab7e97879358] = env->getMethodID(cls, "join", "(J)V");
        mids$[mid_join_915640b8c3079553] = env->getMethodID(cls, "join", "(JI)V");
        mids$[mid_onSpinWait_ff7cb6c242604316] = env->getStaticMethodID(cls, "onSpinWait", "()V");
        mids$[mid_resume_ff7cb6c242604316] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_run_ff7cb6c242604316] = env->getMethodID(cls, "run", "()V");
        mids$[mid_setContextClassLoader_a61ce527d5e72f5b] = env->getMethodID(cls, "setContextClassLoader", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_setDaemon_b35db77cae58639e] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setDefaultUncaughtExceptionHandler_e7c9c19a89809690] = env->getStaticMethodID(cls, "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_setName_105e1eadb709d9ac] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
        mids$[mid_setPriority_8fd427ab23829bf5] = env->getMethodID(cls, "setPriority", "(I)V");
        mids$[mid_setUncaughtExceptionHandler_e7c9c19a89809690] = env->getMethodID(cls, "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_sleep_f5bbab7e97879358] = env->getStaticMethodID(cls, "sleep", "(J)V");
        mids$[mid_sleep_915640b8c3079553] = env->getStaticMethodID(cls, "sleep", "(JI)V");
        mids$[mid_start_ff7cb6c242604316] = env->getMethodID(cls, "start", "()V");
        mids$[mid_stop_ff7cb6c242604316] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_ff7cb6c242604316] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_yield_ff7cb6c242604316] = env->getStaticMethodID(cls, "yield", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_PRIORITY = env->getStaticIntField(cls, "MAX_PRIORITY");
        MIN_PRIORITY = env->getStaticIntField(cls, "MIN_PRIORITY");
        NORM_PRIORITY = env->getStaticIntField(cls, "NORM_PRIORITY");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread::Thread() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Thread::Thread(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9069f6f03f0908d6, a0.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_874e391556ea1b99, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc41391f15bec3a5, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a9d454a383c1167, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6a5a8f1ff0fd9bb, a0.this$, a1.this$, a2.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_851ebfafe6399ff6, a0.this$, a1.this$, a2.this$, a3)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db14b7521dac523b, a0.this$, a1.this$, a2.this$, a3, a4)) {}

    jint Thread::activeCount()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_activeCount_d6ab429752e7c267]);
    }

    void Thread::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_ff7cb6c242604316]);
    }

    jint Thread::countStackFrames() const
    {
      return env->callIntMethod(this$, mids$[mid_countStackFrames_d6ab429752e7c267]);
    }

    Thread Thread::currentThread()
    {
      jclass cls = env->getClass(initializeClass);
      return Thread(env->callStaticObjectMethod(cls, mids$[mid_currentThread_a84f0397998296c9]));
    }

    void Thread::dumpStack()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_dumpStack_ff7cb6c242604316]);
    }

    jint Thread::enumerate(const JArray< Thread > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_enumerate_156c27ca0b550ad2], a0.this$);
    }

    ::java::util::Map Thread::getAllStackTraces()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getAllStackTraces_dbcb8bbac6b35e0d]));
    }

    ::java::lang::ClassLoader Thread::getContextClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getContextClassLoader_7e232a6d8e4f63bc]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getDefaultUncaughtExceptionHandler()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callStaticObjectMethod(cls, mids$[mid_getDefaultUncaughtExceptionHandler_77594ab3cab0151f]));
    }

    jlong Thread::getId() const
    {
      return env->callLongMethod(this$, mids$[mid_getId_42c72b98e3c2e08a]);
    }

    ::java::lang::String Thread::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jint Thread::getPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getPriority_d6ab429752e7c267]);
    }

    JArray< ::java::lang::StackTraceElement > Thread::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_21f9fd78d23bbd0b]));
    }

    ::java::lang::Thread$State Thread::getState() const
    {
      return ::java::lang::Thread$State(env->callObjectMethod(this$, mids$[mid_getState_b9c99ad42ec3f57c]));
    }

    ::java::lang::ThreadGroup Thread::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_7b80b98e8a66c9f8]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getUncaughtExceptionHandler() const
    {
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callObjectMethod(this$, mids$[mid_getUncaughtExceptionHandler_77594ab3cab0151f]));
    }

    jboolean Thread::holdsLock(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_holdsLock_72faff9b05f5ed5e], a0.this$);
    }

    void Thread::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_ff7cb6c242604316]);
    }

    jboolean Thread::interrupted()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_interrupted_eee3de00fe971136]);
    }

    jboolean Thread::isAlive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAlive_eee3de00fe971136]);
    }

    jboolean Thread::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_eee3de00fe971136]);
    }

    jboolean Thread::isInterrupted() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterrupted_eee3de00fe971136]);
    }

    void Thread::join() const
    {
      env->callVoidMethod(this$, mids$[mid_join_ff7cb6c242604316]);
    }

    void Thread::join(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_join_f5bbab7e97879358], a0);
    }

    void Thread::join(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_join_915640b8c3079553], a0, a1);
    }

    void Thread::onSpinWait()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_onSpinWait_ff7cb6c242604316]);
    }

    void Thread::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_ff7cb6c242604316]);
    }

    void Thread::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_ff7cb6c242604316]);
    }

    void Thread::setContextClassLoader(const ::java::lang::ClassLoader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setContextClassLoader_a61ce527d5e72f5b], a0.this$);
    }

    void Thread::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_b35db77cae58639e], a0);
    }

    void Thread::setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefaultUncaughtExceptionHandler_e7c9c19a89809690], a0.this$);
    }

    void Thread::setName(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setName_105e1eadb709d9ac], a0.this$);
    }

    void Thread::setPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPriority_8fd427ab23829bf5], a0);
    }

    void Thread::setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setUncaughtExceptionHandler_e7c9c19a89809690], a0.this$);
    }

    void Thread::sleep(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_f5bbab7e97879358], a0);
    }

    void Thread::sleep(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_915640b8c3079553], a0, a1);
    }

    void Thread::start() const
    {
      env->callVoidMethod(this$, mids$[mid_start_ff7cb6c242604316]);
    }

    void Thread::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_ff7cb6c242604316]);
    }

    void Thread::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_ff7cb6c242604316]);
    }

    ::java::lang::String Thread::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void Thread::yield()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_yield_ff7cb6c242604316]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Thread_init_(t_Thread *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Thread_activeCount(PyTypeObject *type);
    static PyObject *t_Thread_checkAccess(t_Thread *self);
    static PyObject *t_Thread_countStackFrames(t_Thread *self);
    static PyObject *t_Thread_currentThread(PyTypeObject *type);
    static PyObject *t_Thread_dumpStack(PyTypeObject *type);
    static PyObject *t_Thread_enumerate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_getAllStackTraces(PyTypeObject *type);
    static PyObject *t_Thread_getContextClassLoader(t_Thread *self);
    static PyObject *t_Thread_getDefaultUncaughtExceptionHandler(PyTypeObject *type);
    static PyObject *t_Thread_getId(t_Thread *self);
    static PyObject *t_Thread_getName(t_Thread *self);
    static PyObject *t_Thread_getPriority(t_Thread *self);
    static PyObject *t_Thread_getStackTrace(t_Thread *self);
    static PyObject *t_Thread_getState(t_Thread *self);
    static PyObject *t_Thread_getThreadGroup(t_Thread *self);
    static PyObject *t_Thread_getUncaughtExceptionHandler(t_Thread *self);
    static PyObject *t_Thread_holdsLock(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_interrupt(t_Thread *self);
    static PyObject *t_Thread_interrupted(PyTypeObject *type);
    static PyObject *t_Thread_isAlive(t_Thread *self);
    static PyObject *t_Thread_isDaemon(t_Thread *self);
    static PyObject *t_Thread_isInterrupted(t_Thread *self);
    static PyObject *t_Thread_join(t_Thread *self, PyObject *args);
    static PyObject *t_Thread_onSpinWait(PyTypeObject *type);
    static PyObject *t_Thread_resume(t_Thread *self);
    static PyObject *t_Thread_run(t_Thread *self);
    static PyObject *t_Thread_setContextClassLoader(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setDaemon(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setDefaultUncaughtExceptionHandler(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_setName(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setPriority(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setUncaughtExceptionHandler(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_sleep(PyTypeObject *type, PyObject *args);
    static PyObject *t_Thread_start(t_Thread *self);
    static PyObject *t_Thread_stop(t_Thread *self);
    static PyObject *t_Thread_suspend(t_Thread *self);
    static PyObject *t_Thread_toString(t_Thread *self, PyObject *args);
    static PyObject *t_Thread_yield(PyTypeObject *type);
    static PyObject *t_Thread_get__alive(t_Thread *self, void *data);
    static PyObject *t_Thread_get__allStackTraces(t_Thread *self, void *data);
    static PyObject *t_Thread_get__contextClassLoader(t_Thread *self, void *data);
    static int t_Thread_set__contextClassLoader(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__daemon(t_Thread *self, void *data);
    static int t_Thread_set__daemon(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__defaultUncaughtExceptionHandler(t_Thread *self, void *data);
    static int t_Thread_set__defaultUncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__id(t_Thread *self, void *data);
    static PyObject *t_Thread_get__name(t_Thread *self, void *data);
    static int t_Thread_set__name(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__priority(t_Thread *self, void *data);
    static int t_Thread_set__priority(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__stackTrace(t_Thread *self, void *data);
    static PyObject *t_Thread_get__state(t_Thread *self, void *data);
    static PyObject *t_Thread_get__threadGroup(t_Thread *self, void *data);
    static PyObject *t_Thread_get__uncaughtExceptionHandler(t_Thread *self, void *data);
    static int t_Thread_set__uncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data);
    static PyGetSetDef t_Thread__fields_[] = {
      DECLARE_GET_FIELD(t_Thread, alive),
      DECLARE_GET_FIELD(t_Thread, allStackTraces),
      DECLARE_GETSET_FIELD(t_Thread, contextClassLoader),
      DECLARE_GETSET_FIELD(t_Thread, daemon),
      DECLARE_GETSET_FIELD(t_Thread, defaultUncaughtExceptionHandler),
      DECLARE_GET_FIELD(t_Thread, id),
      DECLARE_GETSET_FIELD(t_Thread, name),
      DECLARE_GETSET_FIELD(t_Thread, priority),
      DECLARE_GET_FIELD(t_Thread, stackTrace),
      DECLARE_GET_FIELD(t_Thread, state),
      DECLARE_GET_FIELD(t_Thread, threadGroup),
      DECLARE_GETSET_FIELD(t_Thread, uncaughtExceptionHandler),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Thread__methods_[] = {
      DECLARE_METHOD(t_Thread, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, activeCount, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, checkAccess, METH_NOARGS),
      DECLARE_METHOD(t_Thread, countStackFrames, METH_NOARGS),
      DECLARE_METHOD(t_Thread, currentThread, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, dumpStack, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, enumerate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, getAllStackTraces, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, getContextClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getDefaultUncaughtExceptionHandler, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, getId, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getName, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getPriority, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getState, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getThreadGroup, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getUncaughtExceptionHandler, METH_NOARGS),
      DECLARE_METHOD(t_Thread, holdsLock, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, interrupt, METH_NOARGS),
      DECLARE_METHOD(t_Thread, interrupted, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, isAlive, METH_NOARGS),
      DECLARE_METHOD(t_Thread, isDaemon, METH_NOARGS),
      DECLARE_METHOD(t_Thread, isInterrupted, METH_NOARGS),
      DECLARE_METHOD(t_Thread, join, METH_VARARGS),
      DECLARE_METHOD(t_Thread, onSpinWait, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, resume, METH_NOARGS),
      DECLARE_METHOD(t_Thread, run, METH_NOARGS),
      DECLARE_METHOD(t_Thread, setContextClassLoader, METH_O),
      DECLARE_METHOD(t_Thread, setDaemon, METH_O),
      DECLARE_METHOD(t_Thread, setDefaultUncaughtExceptionHandler, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, setName, METH_O),
      DECLARE_METHOD(t_Thread, setPriority, METH_O),
      DECLARE_METHOD(t_Thread, setUncaughtExceptionHandler, METH_O),
      DECLARE_METHOD(t_Thread, sleep, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, start, METH_NOARGS),
      DECLARE_METHOD(t_Thread, stop, METH_NOARGS),
      DECLARE_METHOD(t_Thread, suspend, METH_NOARGS),
      DECLARE_METHOD(t_Thread, toString, METH_VARARGS),
      DECLARE_METHOD(t_Thread, yield, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread)[] = {
      { Py_tp_methods, t_Thread__methods_ },
      { Py_tp_init, (void *) t_Thread_init_ },
      { Py_tp_getset, t_Thread__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Thread, t_Thread, Thread);

    void t_Thread::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread), &PY_TYPE_DEF(Thread), module, "Thread", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "UncaughtExceptionHandler", make_descriptor(&PY_TYPE_DEF(Thread$UncaughtExceptionHandler)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "State", make_descriptor(&PY_TYPE_DEF(Thread$State)));
    }

    void t_Thread::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "class_", make_descriptor(Thread::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "wrapfn_", make_descriptor(t_Thread::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "boxfn_", make_descriptor(boxObject));
      env->getClass(Thread::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "MAX_PRIORITY", make_descriptor(Thread::MAX_PRIORITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "MIN_PRIORITY", make_descriptor(Thread::MIN_PRIORITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "NORM_PRIORITY", make_descriptor(Thread::NORM_PRIORITY));
    }

    static PyObject *t_Thread_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread::initializeClass, 1)))
        return NULL;
      return t_Thread::wrap_Object(Thread(((t_Thread *) arg)->object.this$));
    }
    static PyObject *t_Thread_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Thread_init_(t_Thread *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Thread object((jobject) NULL);

          INT_CALL(object = Thread());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Thread(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Runnable a0((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Runnable::initializeClass, &a0))
          {
            INT_CALL(object = Thread(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::ThreadGroup::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Runnable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Runnable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kk", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kks", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Thread(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jlong a3;
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kksJ", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = Thread(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jlong a3;
          jboolean a4;
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kksJZ", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Thread(a0, a1, a2, a3, a4));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Thread_activeCount(PyTypeObject *type)
    {
      jint result;
      OBJ_CALL(result = ::java::lang::Thread::activeCount());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_checkAccess(t_Thread *self)
    {
      OBJ_CALL(self->object.checkAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_countStackFrames(t_Thread *self)
    {
      jint result;
      OBJ_CALL(result = self->object.countStackFrames());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_currentThread(PyTypeObject *type)
    {
      Thread result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::currentThread());
      return t_Thread::wrap_Object(result);
    }

    static PyObject *t_Thread_dumpStack(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::dumpStack());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_enumerate(PyTypeObject *type, PyObject *arg)
    {
      JArray< Thread > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[k", Thread::initializeClass, &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread::enumerate(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "enumerate", arg);
      return NULL;
    }

    static PyObject *t_Thread_getAllStackTraces(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::getAllStackTraces());
      return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Thread), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_Thread_getContextClassLoader(t_Thread *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getContextClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Thread_getDefaultUncaughtExceptionHandler(PyTypeObject *type)
    {
      ::java::lang::Thread$UncaughtExceptionHandler result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::getDefaultUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(result);
    }

    static PyObject *t_Thread_getId(t_Thread *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getId());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Thread_getName(t_Thread *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Thread_getPriority(t_Thread *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPriority());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_getStackTrace(t_Thread *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Thread_getState(t_Thread *self)
    {
      ::java::lang::Thread$State result((jobject) NULL);
      OBJ_CALL(result = self->object.getState());
      return ::java::lang::t_Thread$State::wrap_Object(result);
    }

    static PyObject *t_Thread_getThreadGroup(t_Thread *self)
    {
      ::java::lang::ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_Thread_getUncaughtExceptionHandler(t_Thread *self)
    {
      ::java::lang::Thread$UncaughtExceptionHandler result((jobject) NULL);
      OBJ_CALL(result = self->object.getUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(result);
    }

    static PyObject *t_Thread_holdsLock(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread::holdsLock(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "holdsLock", arg);
      return NULL;
    }

    static PyObject *t_Thread_interrupt(t_Thread *self)
    {
      OBJ_CALL(self->object.interrupt());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_interrupted(PyTypeObject *type)
    {
      jboolean result;
      OBJ_CALL(result = ::java::lang::Thread::interrupted());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isAlive(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAlive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isDaemon(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDaemon());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isInterrupted(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterrupted());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_join(t_Thread *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.join());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.join(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(self->object.join(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "join", args);
      return NULL;
    }

    static PyObject *t_Thread_onSpinWait(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::onSpinWait());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_resume(t_Thread *self)
    {
      OBJ_CALL(self->object.resume());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_run(t_Thread *self)
    {
      OBJ_CALL(self->object.run());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_setContextClassLoader(t_Thread *self, PyObject *arg)
    {
      ::java::lang::ClassLoader a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::ClassLoader::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setContextClassLoader(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setContextClassLoader", arg);
      return NULL;
    }

    static PyObject *t_Thread_setDaemon(t_Thread *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDaemon(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDaemon", arg);
      return NULL;
    }

    static PyObject *t_Thread_setDefaultUncaughtExceptionHandler(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Thread$UncaughtExceptionHandler a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::Thread::setDefaultUncaughtExceptionHandler(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setDefaultUncaughtExceptionHandler", arg);
      return NULL;
    }

    static PyObject *t_Thread_setName(t_Thread *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setName(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setName", arg);
      return NULL;
    }

    static PyObject *t_Thread_setPriority(t_Thread *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setPriority(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPriority", arg);
      return NULL;
    }

    static PyObject *t_Thread_setUncaughtExceptionHandler(t_Thread *self, PyObject *arg)
    {
      ::java::lang::Thread$UncaughtExceptionHandler a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setUncaughtExceptionHandler(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setUncaughtExceptionHandler", arg);
      return NULL;
    }

    static PyObject *t_Thread_sleep(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(::java::lang::Thread::sleep(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(::java::lang::Thread::sleep(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sleep", args);
      return NULL;
    }

    static PyObject *t_Thread_start(t_Thread *self)
    {
      OBJ_CALL(self->object.start());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_stop(t_Thread *self)
    {
      OBJ_CALL(self->object.stop());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_suspend(t_Thread *self)
    {
      OBJ_CALL(self->object.suspend());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_toString(t_Thread *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Thread), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Thread_yield(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::yield());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_get__alive(t_Thread *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAlive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Thread_get__allStackTraces(t_Thread *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllStackTraces());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_Thread_get__contextClassLoader(t_Thread *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getContextClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }
    static int t_Thread_set__contextClassLoader(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::ClassLoader value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::ClassLoader::initializeClass, &value))
        {
          INT_CALL(self->object.setContextClassLoader(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "contextClassLoader", arg);
      return -1;
    }

    static PyObject *t_Thread_get__daemon(t_Thread *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDaemon());
      Py_RETURN_BOOL(value);
    }
    static int t_Thread_set__daemon(t_Thread *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDaemon(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "daemon", arg);
      return -1;
    }

    static PyObject *t_Thread_get__defaultUncaughtExceptionHandler(t_Thread *self, void *data)
    {
      ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefaultUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(value);
    }
    static int t_Thread_set__defaultUncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &value))
        {
          INT_CALL(self->object.setDefaultUncaughtExceptionHandler(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "defaultUncaughtExceptionHandler", arg);
      return -1;
    }

    static PyObject *t_Thread_get__id(t_Thread *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getId());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_Thread_get__name(t_Thread *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
    static int t_Thread_set__name(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setName(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "name", arg);
      return -1;
    }

    static PyObject *t_Thread_get__priority(t_Thread *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPriority());
      return PyLong_FromLong((long) value);
    }
    static int t_Thread_set__priority(t_Thread *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setPriority(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "priority", arg);
      return -1;
    }

    static PyObject *t_Thread_get__stackTrace(t_Thread *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Thread_get__state(t_Thread *self, void *data)
    {
      ::java::lang::Thread$State value((jobject) NULL);
      OBJ_CALL(value = self->object.getState());
      return ::java::lang::t_Thread$State::wrap_Object(value);
    }

    static PyObject *t_Thread_get__threadGroup(t_Thread *self, void *data)
    {
      ::java::lang::ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(value);
    }

    static PyObject *t_Thread_get__uncaughtExceptionHandler(t_Thread *self, void *data)
    {
      ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
      OBJ_CALL(value = self->object.getUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(value);
    }
    static int t_Thread_set__uncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &value))
        {
          INT_CALL(self->object.setUncaughtExceptionHandler(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "uncaughtExceptionHandler", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/SerializablePermission.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *SerializablePermission::class$ = NULL;
    jmethodID *SerializablePermission::mids$ = NULL;
    bool SerializablePermission::live$ = false;

    jclass SerializablePermission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/SerializablePermission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_SerializablePermission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SerializablePermission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SerializablePermission_init_(t_SerializablePermission *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SerializablePermission__methods_[] = {
      DECLARE_METHOD(t_SerializablePermission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SerializablePermission, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SerializablePermission)[] = {
      { Py_tp_methods, t_SerializablePermission__methods_ },
      { Py_tp_init, (void *) t_SerializablePermission_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SerializablePermission)[] = {
      &PY_TYPE_DEF(::java::security::BasicPermission),
      NULL
    };

    DEFINE_TYPE(SerializablePermission, t_SerializablePermission, SerializablePermission);

    void t_SerializablePermission::install(PyObject *module)
    {
      installType(&PY_TYPE(SerializablePermission), &PY_TYPE_DEF(SerializablePermission), module, "SerializablePermission", 0);
    }

    void t_SerializablePermission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "class_", make_descriptor(SerializablePermission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "wrapfn_", make_descriptor(t_SerializablePermission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SerializablePermission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SerializablePermission::initializeClass, 1)))
        return NULL;
      return t_SerializablePermission::wrap_Object(SerializablePermission(((t_SerializablePermission *) arg)->object.this$));
    }
    static PyObject *t_SerializablePermission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SerializablePermission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SerializablePermission_init_(t_SerializablePermission *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          SerializablePermission object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = SerializablePermission(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          SerializablePermission object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = SerializablePermission(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfPrimitive::class$ = NULL;
    jmethodID *Spliterator$OfPrimitive::mids$ = NULL;
    bool Spliterator$OfPrimitive::live$ = false;

    jclass Spliterator$OfPrimitive::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfPrimitive");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_83ee235bb1e64e94] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");
        mids$[mid_tryAdvance_72faff9b05f5ed5e] = env->getMethodID(cls, "tryAdvance", "(Ljava/lang/Object;)Z");
        mids$[mid_trySplit_48eac1ec4b1684d8] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfPrimitive;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfPrimitive::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_83ee235bb1e64e94], a0.this$);
    }

    jboolean Spliterator$OfPrimitive::tryAdvance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_72faff9b05f5ed5e], a0.this$);
    }

    Spliterator$OfPrimitive Spliterator$OfPrimitive::trySplit() const
    {
      return Spliterator$OfPrimitive(env->callObjectMethod(this$, mids$[mid_trySplit_48eac1ec4b1684d8]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfPrimitive_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfPrimitive_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfPrimitive_of_(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_forEachRemaining(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_tryAdvance(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_trySplit(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_get__parameters_(t_Spliterator$OfPrimitive *self, void *data);
    static PyGetSetDef t_Spliterator$OfPrimitive__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfPrimitive, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfPrimitive__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfPrimitive, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfPrimitive)[] = {
      { Py_tp_methods, t_Spliterator$OfPrimitive__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfPrimitive__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfPrimitive)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfPrimitive, t_Spliterator$OfPrimitive, Spliterator$OfPrimitive);
    PyObject *t_Spliterator$OfPrimitive::wrap_Object(const Spliterator$OfPrimitive& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
    {
      PyObject *obj = t_Spliterator$OfPrimitive::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfPrimitive *self = (t_Spliterator$OfPrimitive *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
        self->parameters[2] = p2;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfPrimitive::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
    {
      PyObject *obj = t_Spliterator$OfPrimitive::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfPrimitive *self = (t_Spliterator$OfPrimitive *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
        self->parameters[2] = p2;
      }
      return obj;
    }

    void t_Spliterator$OfPrimitive::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfPrimitive), &PY_TYPE_DEF(Spliterator$OfPrimitive), module, "Spliterator$OfPrimitive", 0);
    }

    void t_Spliterator$OfPrimitive::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "class_", make_descriptor(Spliterator$OfPrimitive::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "wrapfn_", make_descriptor(t_Spliterator$OfPrimitive::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfPrimitive_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfPrimitive::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfPrimitive::wrap_Object(Spliterator$OfPrimitive(((t_Spliterator$OfPrimitive *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfPrimitive_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfPrimitive::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfPrimitive_of_(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      if (!parseArg(args, "T", 3, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfPrimitive_forEachRemaining(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArgs(args, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfPrimitive_tryAdvance(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfPrimitive_trySplit(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      Spliterator$OfPrimitive result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return self->parameters[2] != NULL ? wrapType(self->parameters[2], result.this$) : t_Spliterator$OfPrimitive::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfPrimitive_get__parameters_(t_Spliterator$OfPrimitive *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectStreamClass.h"
#include "java/io/ObjectStreamField.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/io/ObjectStreamClass.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamClass::class$ = NULL;
    jmethodID *ObjectStreamClass::mids$ = NULL;
    bool ObjectStreamClass::live$ = false;
    JArray< ::java::io::ObjectStreamField > *ObjectStreamClass::NO_FIELDS = NULL;

    jclass ObjectStreamClass::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamClass");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forClass_d5247e4b166c4ce8] = env->getMethodID(cls, "forClass", "()Ljava/lang/Class;");
        mids$[mid_getField_755e6ba8a7c56da9] = env->getMethodID(cls, "getField", "(Ljava/lang/String;)Ljava/io/ObjectStreamField;");
        mids$[mid_getFields_e7c3326b5d56ed5e] = env->getMethodID(cls, "getFields", "()[Ljava/io/ObjectStreamField;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSerialVersionUID_42c72b98e3c2e08a] = env->getMethodID(cls, "getSerialVersionUID", "()J");
        mids$[mid_lookup_da01accbba3f5e1f] = env->getStaticMethodID(cls, "lookup", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_lookupAny_da01accbba3f5e1f] = env->getStaticMethodID(cls, "lookupAny", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        NO_FIELDS = new JArray< ::java::io::ObjectStreamField >(env->getStaticObjectField(cls, "NO_FIELDS", "[Ljava/io/ObjectStreamField;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Class ObjectStreamClass::forClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_forClass_d5247e4b166c4ce8]));
    }

    ::java::io::ObjectStreamField ObjectStreamClass::getField(const ::java::lang::String & a0) const
    {
      return ::java::io::ObjectStreamField(env->callObjectMethod(this$, mids$[mid_getField_755e6ba8a7c56da9], a0.this$));
    }

    JArray< ::java::io::ObjectStreamField > ObjectStreamClass::getFields() const
    {
      return JArray< ::java::io::ObjectStreamField >(env->callObjectMethod(this$, mids$[mid_getFields_e7c3326b5d56ed5e]));
    }

    ::java::lang::String ObjectStreamClass::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jlong ObjectStreamClass::getSerialVersionUID() const
    {
      return env->callLongMethod(this$, mids$[mid_getSerialVersionUID_42c72b98e3c2e08a]);
    }

    ObjectStreamClass ObjectStreamClass::lookup(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookup_da01accbba3f5e1f], a0.this$));
    }

    ObjectStreamClass ObjectStreamClass::lookupAny(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookupAny_da01accbba3f5e1f], a0.this$));
    }

    ::java::lang::String ObjectStreamClass::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectStreamClass_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_forClass(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getField(t_ObjectStreamClass *self, PyObject *arg);
    static PyObject *t_ObjectStreamClass_getFields(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getName(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getSerialVersionUID(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_lookup(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_lookupAny(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_toString(t_ObjectStreamClass *self, PyObject *args);
    static PyObject *t_ObjectStreamClass_get__fields(t_ObjectStreamClass *self, void *data);
    static PyObject *t_ObjectStreamClass_get__name(t_ObjectStreamClass *self, void *data);
    static PyObject *t_ObjectStreamClass_get__serialVersionUID(t_ObjectStreamClass *self, void *data);
    static PyGetSetDef t_ObjectStreamClass__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectStreamClass, fields),
      DECLARE_GET_FIELD(t_ObjectStreamClass, name),
      DECLARE_GET_FIELD(t_ObjectStreamClass, serialVersionUID),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectStreamClass__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamClass, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, forClass, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getField, METH_O),
      DECLARE_METHOD(t_ObjectStreamClass, getFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getName, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getSerialVersionUID, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, lookup, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, lookupAny, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamClass)[] = {
      { Py_tp_methods, t_ObjectStreamClass__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ObjectStreamClass__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamClass)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamClass, t_ObjectStreamClass, ObjectStreamClass);

    void t_ObjectStreamClass::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamClass), &PY_TYPE_DEF(ObjectStreamClass), module, "ObjectStreamClass", 0);
    }

    void t_ObjectStreamClass::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "class_", make_descriptor(ObjectStreamClass::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "wrapfn_", make_descriptor(t_ObjectStreamClass::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectStreamClass::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "NO_FIELDS", make_descriptor(JArray<jobject>(ObjectStreamClass::NO_FIELDS->this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject)));
    }

    static PyObject *t_ObjectStreamClass_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamClass::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamClass::wrap_Object(ObjectStreamClass(((t_ObjectStreamClass *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamClass_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamClass::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectStreamClass_forClass(t_ObjectStreamClass *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.forClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectStreamClass_getField(t_ObjectStreamClass *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::ObjectStreamField result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getField(a0));
        return ::java::io::t_ObjectStreamField::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getField", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_getFields(t_ObjectStreamClass *self)
    {
      JArray< ::java::io::ObjectStreamField > result((jobject) NULL);
      OBJ_CALL(result = self->object.getFields());
      return JArray<jobject>(result.this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject);
    }

    static PyObject *t_ObjectStreamClass_getName(t_ObjectStreamClass *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamClass_getSerialVersionUID(t_ObjectStreamClass *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getSerialVersionUID());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectStreamClass_lookup(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ObjectStreamClass result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::io::ObjectStreamClass::lookup(a0));
        return t_ObjectStreamClass::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_lookupAny(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ObjectStreamClass result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::io::ObjectStreamClass::lookupAny(a0));
        return t_ObjectStreamClass::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookupAny", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_toString(t_ObjectStreamClass *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ObjectStreamClass), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ObjectStreamClass_get__fields(t_ObjectStreamClass *self, void *data)
    {
      JArray< ::java::io::ObjectStreamField > value((jobject) NULL);
      OBJ_CALL(value = self->object.getFields());
      return JArray<jobject>(value.this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject);
    }

    static PyObject *t_ObjectStreamClass_get__name(t_ObjectStreamClass *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamClass_get__serialVersionUID(t_ObjectStreamClass *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getSerialVersionUID());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/security/Permission.h"
#include "java/io/Serializable.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/SecurityException.h"
#include "JArray.h"

namespace java {
  namespace security {

    ::java::lang::Class *Permission::class$ = NULL;
    jmethodID *Permission::mids$ = NULL;
    bool Permission::live$ = false;

    jclass Permission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/security/Permission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_checkGuard_83ee235bb1e64e94] = env->getMethodID(cls, "checkGuard", "(Ljava/lang/Object;)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_d2c8eb4129821f0e] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_46638c4732e66dfd] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Permission::Permission(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    void Permission::checkGuard(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkGuard_83ee235bb1e64e94], a0.this$);
    }

    jboolean Permission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String Permission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_d2c8eb4129821f0e]));
    }

    ::java::lang::String Permission::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jint Permission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Permission::implies(const Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_46638c4732e66dfd], a0.this$);
    }

    ::java::lang::String Permission::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace security {
    static PyObject *t_Permission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Permission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Permission_init_(t_Permission *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Permission_checkGuard(t_Permission *self, PyObject *arg);
    static PyObject *t_Permission_equals(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_getActions(t_Permission *self);
    static PyObject *t_Permission_getName(t_Permission *self);
    static PyObject *t_Permission_hashCode(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_implies(t_Permission *self, PyObject *arg);
    static PyObject *t_Permission_toString(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_get__actions(t_Permission *self, void *data);
    static PyObject *t_Permission_get__name(t_Permission *self, void *data);
    static PyGetSetDef t_Permission__fields_[] = {
      DECLARE_GET_FIELD(t_Permission, actions),
      DECLARE_GET_FIELD(t_Permission, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Permission__methods_[] = {
      DECLARE_METHOD(t_Permission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Permission, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Permission, checkGuard, METH_O),
      DECLARE_METHOD(t_Permission, equals, METH_VARARGS),
      DECLARE_METHOD(t_Permission, getActions, METH_NOARGS),
      DECLARE_METHOD(t_Permission, getName, METH_NOARGS),
      DECLARE_METHOD(t_Permission, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Permission, implies, METH_O),
      DECLARE_METHOD(t_Permission, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Permission)[] = {
      { Py_tp_methods, t_Permission__methods_ },
      { Py_tp_init, (void *) t_Permission_init_ },
      { Py_tp_getset, t_Permission__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Permission)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Permission, t_Permission, Permission);

    void t_Permission::install(PyObject *module)
    {
      installType(&PY_TYPE(Permission), &PY_TYPE_DEF(Permission), module, "Permission", 0);
    }

    void t_Permission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "class_", make_descriptor(Permission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "wrapfn_", make_descriptor(t_Permission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Permission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Permission::initializeClass, 1)))
        return NULL;
      return t_Permission::wrap_Object(Permission(((t_Permission *) arg)->object.this$));
    }
    static PyObject *t_Permission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Permission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Permission_init_(t_Permission *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      Permission object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = Permission(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Permission_checkGuard(t_Permission *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.checkGuard(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkGuard", arg);
      return NULL;
    }

    static PyObject *t_Permission_equals(t_Permission *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Permission_getActions(t_Permission *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getActions());
      return j2p(result);
    }

    static PyObject *t_Permission_getName(t_Permission *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Permission_hashCode(t_Permission *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Permission_implies(t_Permission *self, PyObject *arg)
    {
      Permission a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Permission::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.implies(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "implies", arg);
      return NULL;
    }

    static PyObject *t_Permission_toString(t_Permission *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Permission_get__actions(t_Permission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getActions());
      return j2p(value);
    }

    static PyObject *t_Permission_get__name(t_Permission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread$State.h"
#include "java/lang/Thread$State.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread$State::class$ = NULL;
    jmethodID *Thread$State::mids$ = NULL;
    bool Thread$State::live$ = false;
    Thread$State *Thread$State::BLOCKED = NULL;
    Thread$State *Thread$State::NEW = NULL;
    Thread$State *Thread$State::RUNNABLE = NULL;
    Thread$State *Thread$State::TERMINATED = NULL;
    Thread$State *Thread$State::TIMED_WAITING = NULL;
    Thread$State *Thread$State::WAITING = NULL;

    jclass Thread$State::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread$State");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_6b04f5f5f3a7572a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;");
        mids$[mid_values_28d562dca8405aab] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/Thread$State;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BLOCKED = new Thread$State(env->getStaticObjectField(cls, "BLOCKED", "Ljava/lang/Thread$State;"));
        NEW = new Thread$State(env->getStaticObjectField(cls, "NEW", "Ljava/lang/Thread$State;"));
        RUNNABLE = new Thread$State(env->getStaticObjectField(cls, "RUNNABLE", "Ljava/lang/Thread$State;"));
        TERMINATED = new Thread$State(env->getStaticObjectField(cls, "TERMINATED", "Ljava/lang/Thread$State;"));
        TIMED_WAITING = new Thread$State(env->getStaticObjectField(cls, "TIMED_WAITING", "Ljava/lang/Thread$State;"));
        WAITING = new Thread$State(env->getStaticObjectField(cls, "WAITING", "Ljava/lang/Thread$State;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread$State Thread$State::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Thread$State(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6b04f5f5f3a7572a], a0.this$));
    }

    JArray< Thread$State > Thread$State::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Thread$State >(env->callStaticObjectMethod(cls, mids$[mid_values_28d562dca8405aab]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread$State_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$State_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$State_of_(t_Thread$State *self, PyObject *args);
    static PyObject *t_Thread$State_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Thread$State_values(PyTypeObject *type);
    static PyObject *t_Thread$State_get__parameters_(t_Thread$State *self, void *data);
    static PyGetSetDef t_Thread$State__fields_[] = {
      DECLARE_GET_FIELD(t_Thread$State, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Thread$State__methods_[] = {
      DECLARE_METHOD(t_Thread$State, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, of_, METH_VARARGS),
      DECLARE_METHOD(t_Thread$State, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread$State)[] = {
      { Py_tp_methods, t_Thread$State__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Thread$State__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread$State)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Thread$State, t_Thread$State, Thread$State);
    PyObject *t_Thread$State::wrap_Object(const Thread$State& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Thread$State::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Thread$State *self = (t_Thread$State *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Thread$State::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Thread$State::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Thread$State *self = (t_Thread$State *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Thread$State::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread$State), &PY_TYPE_DEF(Thread$State), module, "Thread$State", 0);
    }

    void t_Thread$State::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "class_", make_descriptor(Thread$State::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "wrapfn_", make_descriptor(t_Thread$State::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "boxfn_", make_descriptor(boxObject));
      env->getClass(Thread$State::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "BLOCKED", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::BLOCKED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "NEW", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::NEW)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "RUNNABLE", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::RUNNABLE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "TERMINATED", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::TERMINATED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "TIMED_WAITING", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::TIMED_WAITING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "WAITING", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::WAITING)));
    }

    static PyObject *t_Thread$State_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread$State::initializeClass, 1)))
        return NULL;
      return t_Thread$State::wrap_Object(Thread$State(((t_Thread$State *) arg)->object.this$));
    }
    static PyObject *t_Thread$State_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread$State::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Thread$State_of_(t_Thread$State *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Thread$State_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Thread$State result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread$State::valueOf(a0));
        return t_Thread$State::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Thread$State_values(PyTypeObject *type)
    {
      JArray< Thread$State > result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread$State::values());
      return JArray<jobject>(result.this$).wrap(t_Thread$State::wrap_jobject);
    }
    static PyObject *t_Thread$State_get__parameters_(t_Thread$State *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Thread.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread$UncaughtExceptionHandler::class$ = NULL;
    jmethodID *Thread$UncaughtExceptionHandler::mids$ = NULL;
    bool Thread$UncaughtExceptionHandler::live$ = false;

    jclass Thread$UncaughtExceptionHandler::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread$UncaughtExceptionHandler");

        mids$ = new jmethodID[max_mid];
        mids$[mid_uncaughtException_c8b54bc346ca390e] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Thread$UncaughtExceptionHandler::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_c8b54bc346ca390e], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread$UncaughtExceptionHandler_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$UncaughtExceptionHandler_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$UncaughtExceptionHandler_uncaughtException(t_Thread$UncaughtExceptionHandler *self, PyObject *args);

    static PyMethodDef t_Thread$UncaughtExceptionHandler__methods_[] = {
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, uncaughtException, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread$UncaughtExceptionHandler)[] = {
      { Py_tp_methods, t_Thread$UncaughtExceptionHandler__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread$UncaughtExceptionHandler)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Thread$UncaughtExceptionHandler, t_Thread$UncaughtExceptionHandler, Thread$UncaughtExceptionHandler);

    void t_Thread$UncaughtExceptionHandler::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread$UncaughtExceptionHandler), &PY_TYPE_DEF(Thread$UncaughtExceptionHandler), module, "Thread$UncaughtExceptionHandler", 0);
    }

    void t_Thread$UncaughtExceptionHandler::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "class_", make_descriptor(Thread$UncaughtExceptionHandler::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "wrapfn_", make_descriptor(t_Thread$UncaughtExceptionHandler::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Thread$UncaughtExceptionHandler_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread$UncaughtExceptionHandler::initializeClass, 1)))
        return NULL;
      return t_Thread$UncaughtExceptionHandler::wrap_Object(Thread$UncaughtExceptionHandler(((t_Thread$UncaughtExceptionHandler *) arg)->object.this$));
    }
    static PyObject *t_Thread$UncaughtExceptionHandler_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread$UncaughtExceptionHandler::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Thread$UncaughtExceptionHandler_uncaughtException(t_Thread$UncaughtExceptionHandler *self, PyObject *args)
    {
      ::java::lang::Thread a0((jobject) NULL);
      ::java::lang::Throwable a1((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::lang::Thread::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.uncaughtException(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "uncaughtException", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ModuleLayer$Controller::class$ = NULL;
    jmethodID *ModuleLayer$Controller::mids$ = NULL;
    bool ModuleLayer$Controller::live$ = false;

    jclass ModuleLayer$Controller::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ModuleLayer$Controller");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addExports_64cfb72a8963fcfe] = env->getMethodID(cls, "addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addOpens_64cfb72a8963fcfe] = env->getMethodID(cls, "addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addReads_aa67be6bca534539] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_layer_b270adc69fca1f17] = env->getMethodID(cls, "layer", "()Ljava/lang/ModuleLayer;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer$Controller ModuleLayer$Controller::addExports(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addExports_64cfb72a8963fcfe], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addOpens(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addOpens_64cfb72a8963fcfe], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addReads(const ::java::lang::Module & a0, const ::java::lang::Module & a1) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addReads_aa67be6bca534539], a0.this$, a1.this$));
    }

    ::java::lang::ModuleLayer ModuleLayer$Controller::layer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_layer_b270adc69fca1f17]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self);

    static PyMethodDef t_ModuleLayer$Controller__methods_[] = {
      DECLARE_METHOD(t_ModuleLayer$Controller, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addExports, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addOpens, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addReads, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, layer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ModuleLayer$Controller)[] = {
      { Py_tp_methods, t_ModuleLayer$Controller__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ModuleLayer$Controller)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ModuleLayer$Controller, t_ModuleLayer$Controller, ModuleLayer$Controller);

    void t_ModuleLayer$Controller::install(PyObject *module)
    {
      installType(&PY_TYPE(ModuleLayer$Controller), &PY_TYPE_DEF(ModuleLayer$Controller), module, "ModuleLayer$Controller", 0);
    }

    void t_ModuleLayer$Controller::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "class_", make_descriptor(ModuleLayer$Controller::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "wrapfn_", make_descriptor(t_ModuleLayer$Controller::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ModuleLayer$Controller::initializeClass, 1)))
        return NULL;
      return t_ModuleLayer$Controller::wrap_Object(ModuleLayer$Controller(((t_ModuleLayer$Controller *) arg)->object.this$));
    }
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ModuleLayer$Controller::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addExports(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addExports", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addOpens(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addOpens", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::Module a1((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addReads(a0, a1));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addReads", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self)
    {
      ::java::lang::ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = self->object.layer());
      return ::java::lang::t_ModuleLayer::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectStreamField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamField::class$ = NULL;
    jmethodID *ObjectStreamField::mids$ = NULL;
    bool ObjectStreamField::live$ = false;

    jclass ObjectStreamField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_abfceab45da3bcbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
        mids$[mid_init$_3cb47bbfbfff2f5d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
        mids$[mid_compareTo_9aa1a0d21cdeb90e] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getOffset_d6ab429752e7c267] = env->getMethodID(cls, "getOffset", "()I");
        mids$[mid_getType_d5247e4b166c4ce8] = env->getMethodID(cls, "getType", "()Ljava/lang/Class;");
        mids$[mid_getTypeCode_153df32fe8b51cb6] = env->getMethodID(cls, "getTypeCode", "()C");
        mids$[mid_getTypeString_d2c8eb4129821f0e] = env->getMethodID(cls, "getTypeString", "()Ljava/lang/String;");
        mids$[mid_isPrimitive_eee3de00fe971136] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isUnshared_eee3de00fe971136] = env->getMethodID(cls, "isUnshared", "()Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_setOffset_8fd427ab23829bf5] = env->getMethodID(cls, "setOffset", "(I)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_abfceab45da3bcbb, a0.this$, a1.this$)) {}

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cb47bbfbfff2f5d, a0.this$, a1.this$, a2)) {}

    jint ObjectStreamField::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::lang::String ObjectStreamField::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jint ObjectStreamField::getOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_d6ab429752e7c267]);
    }

    ::java::lang::Class ObjectStreamField::getType() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getType_d5247e4b166c4ce8]));
    }

    jchar ObjectStreamField::getTypeCode() const
    {
      return env->callCharMethod(this$, mids$[mid_getTypeCode_153df32fe8b51cb6]);
    }

    ::java::lang::String ObjectStreamField::getTypeString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeString_d2c8eb4129821f0e]));
    }

    jboolean ObjectStreamField::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_eee3de00fe971136]);
    }

    jboolean ObjectStreamField::isUnshared() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isUnshared_eee3de00fe971136]);
    }

    ::java::lang::String ObjectStreamField::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectStreamField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectStreamField_init_(t_ObjectStreamField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectStreamField_compareTo(t_ObjectStreamField *self, PyObject *arg);
    static PyObject *t_ObjectStreamField_getName(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getOffset(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getType(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getTypeCode(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getTypeString(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_isPrimitive(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_isUnshared(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_toString(t_ObjectStreamField *self, PyObject *args);
    static PyObject *t_ObjectStreamField_get__name(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__offset(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__primitive(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__type(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__typeCode(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__typeString(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__unshared(t_ObjectStreamField *self, void *data);
    static PyGetSetDef t_ObjectStreamField__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectStreamField, name),
      DECLARE_GET_FIELD(t_ObjectStreamField, offset),
      DECLARE_GET_FIELD(t_ObjectStreamField, primitive),
      DECLARE_GET_FIELD(t_ObjectStreamField, type),
      DECLARE_GET_FIELD(t_ObjectStreamField, typeCode),
      DECLARE_GET_FIELD(t_ObjectStreamField, typeString),
      DECLARE_GET_FIELD(t_ObjectStreamField, unshared),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectStreamField__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamField, compareTo, METH_O),
      DECLARE_METHOD(t_ObjectStreamField, getName, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getOffset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getType, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getTypeCode, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getTypeString, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, isUnshared, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamField)[] = {
      { Py_tp_methods, t_ObjectStreamField__methods_ },
      { Py_tp_init, (void *) t_ObjectStreamField_init_ },
      { Py_tp_getset, t_ObjectStreamField__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamField, t_ObjectStreamField, ObjectStreamField);

    void t_ObjectStreamField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamField), &PY_TYPE_DEF(ObjectStreamField), module, "ObjectStreamField", 0);
    }

    void t_ObjectStreamField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "class_", make_descriptor(ObjectStreamField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "wrapfn_", make_descriptor(t_ObjectStreamField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectStreamField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamField::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamField::wrap_Object(ObjectStreamField(((t_ObjectStreamField *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectStreamField_init_(t_ObjectStreamField *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Class a1((jobject) NULL);
          PyTypeObject **p1;
          ObjectStreamField object((jobject) NULL);

          if (!parseArgs(args, "sK", ::java::lang::Class::initializeClass, &a0, &a1, &p1, ::java::lang::t_Class::parameters_))
          {
            INT_CALL(object = ObjectStreamField(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Class a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ObjectStreamField object((jobject) NULL);

          if (!parseArgs(args, "sKZ", ::java::lang::Class::initializeClass, &a0, &a1, &p1, ::java::lang::t_Class::parameters_, &a2))
          {
            INT_CALL(object = ObjectStreamField(a0, a1, a2));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectStreamField_compareTo(t_ObjectStreamField *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamField_getName(t_ObjectStreamField *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamField_getOffset(t_ObjectStreamField *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectStreamField_getType(t_ObjectStreamField *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getType());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectStreamField_getTypeCode(t_ObjectStreamField *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getTypeCode());
      return c2p(result);
    }

    static PyObject *t_ObjectStreamField_getTypeString(t_ObjectStreamField *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeString());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamField_isPrimitive(t_ObjectStreamField *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectStreamField_isUnshared(t_ObjectStreamField *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isUnshared());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectStreamField_toString(t_ObjectStreamField *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ObjectStreamField), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ObjectStreamField_get__name(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamField_get__offset(t_ObjectStreamField *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_ObjectStreamField_get__primitive(t_ObjectStreamField *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ObjectStreamField_get__type(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getType());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_ObjectStreamField_get__typeCode(t_ObjectStreamField *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getTypeCode());
      return c2p(value);
    }

    static PyObject *t_ObjectStreamField_get__typeString(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeString());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamField_get__unshared(t_ObjectStreamField *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isUnshared());
      Py_RETURN_BOOL(value);
    }
  }
}
