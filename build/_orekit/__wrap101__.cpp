#include <jni.h>
#include "JCCEnv.h"
#include "java/security/BasicPermission.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace security {

    ::java::lang::Class *BasicPermission::class$ = NULL;
    jmethodID *BasicPermission::mids$ = NULL;
    bool BasicPermission::live$ = false;

    jclass BasicPermission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/security/BasicPermission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_0090f7797e403f43] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_a24701876290d2d8] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BasicPermission::BasicPermission(const ::java::lang::String & a0) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    BasicPermission::BasicPermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

    jboolean BasicPermission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String BasicPermission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_0090f7797e403f43]));
    }

    jint BasicPermission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean BasicPermission::implies(const ::java::security::Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_a24701876290d2d8], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace security {
    static PyObject *t_BasicPermission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BasicPermission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BasicPermission_init_(t_BasicPermission *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BasicPermission_equals(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_getActions(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_hashCode(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_implies(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_get__actions(t_BasicPermission *self, void *data);
    static PyGetSetDef t_BasicPermission__fields_[] = {
      DECLARE_GET_FIELD(t_BasicPermission, actions),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_BasicPermission__methods_[] = {
      DECLARE_METHOD(t_BasicPermission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BasicPermission, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BasicPermission, equals, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, getActions, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, implies, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BasicPermission)[] = {
      { Py_tp_methods, t_BasicPermission__methods_ },
      { Py_tp_init, (void *) t_BasicPermission_init_ },
      { Py_tp_getset, t_BasicPermission__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BasicPermission)[] = {
      &PY_TYPE_DEF(::java::security::Permission),
      NULL
    };

    DEFINE_TYPE(BasicPermission, t_BasicPermission, BasicPermission);

    void t_BasicPermission::install(PyObject *module)
    {
      installType(&PY_TYPE(BasicPermission), &PY_TYPE_DEF(BasicPermission), module, "BasicPermission", 0);
    }

    void t_BasicPermission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "class_", make_descriptor(BasicPermission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "wrapfn_", make_descriptor(t_BasicPermission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BasicPermission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BasicPermission::initializeClass, 1)))
        return NULL;
      return t_BasicPermission::wrap_Object(BasicPermission(((t_BasicPermission *) arg)->object.this$));
    }
    static PyObject *t_BasicPermission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BasicPermission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BasicPermission_init_(t_BasicPermission *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          BasicPermission object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = BasicPermission(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          BasicPermission object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = BasicPermission(a0, a1));
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

    static PyObject *t_BasicPermission_equals(t_BasicPermission *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_BasicPermission_getActions(t_BasicPermission *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getActions());
        return j2p(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "getActions", args, 2);
    }

    static PyObject *t_BasicPermission_hashCode(t_BasicPermission *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_BasicPermission_implies(t_BasicPermission *self, PyObject *args)
    {
      ::java::security::Permission a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::security::Permission::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.implies(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "implies", args, 2);
    }

    static PyObject *t_BasicPermission_get__actions(t_BasicPermission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getActions());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/util/Map.h"
#include "java/lang/Thread.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Class.h"
#include "java/lang/Thread$State.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_b1cadb67b411bc03] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;)V");
        mids$[mid_init$_203b61e7fc95b723] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_init$_f2927727ec66827a] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_daa6aef5d8b89ad3] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V");
        mids$[mid_init$_227d057051a80c38] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_e5fdb4699bb71a8e] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V");
        mids$[mid_init$_d0bc2ab4cad75c13] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V");
        mids$[mid_activeCount_f2f64475e4580546] = env->getStaticMethodID(cls, "activeCount", "()I");
        mids$[mid_checkAccess_7ae3461a92a43152] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_countStackFrames_f2f64475e4580546] = env->getMethodID(cls, "countStackFrames", "()I");
        mids$[mid_currentThread_1aace7ebc26af75c] = env->getStaticMethodID(cls, "currentThread", "()Ljava/lang/Thread;");
        mids$[mid_dumpStack_7ae3461a92a43152] = env->getStaticMethodID(cls, "dumpStack", "()V");
        mids$[mid_enumerate_be0b9183e9f8fdcc] = env->getStaticMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_getAllStackTraces_d6753b7055940a54] = env->getStaticMethodID(cls, "getAllStackTraces", "()Ljava/util/Map;");
        mids$[mid_getContextClassLoader_9f59dd0605cf9d96] = env->getMethodID(cls, "getContextClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getDefaultUncaughtExceptionHandler_c6c0fc4da74a22c1] = env->getStaticMethodID(cls, "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_getId_a27fc9afd27e559d] = env->getMethodID(cls, "getId", "()J");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPriority_f2f64475e4580546] = env->getMethodID(cls, "getPriority", "()I");
        mids$[mid_getStackTrace_e6bb52718778b305] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getState_e7cc095e82d15730] = env->getMethodID(cls, "getState", "()Ljava/lang/Thread$State;");
        mids$[mid_getThreadGroup_c5a0b769e930fe0b] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getUncaughtExceptionHandler_c6c0fc4da74a22c1] = env->getMethodID(cls, "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_holdsLock_229c87223f486349] = env->getStaticMethodID(cls, "holdsLock", "(Ljava/lang/Object;)Z");
        mids$[mid_interrupt_7ae3461a92a43152] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_interrupted_e470b6d9e0d979db] = env->getStaticMethodID(cls, "interrupted", "()Z");
        mids$[mid_isAlive_e470b6d9e0d979db] = env->getMethodID(cls, "isAlive", "()Z");
        mids$[mid_isDaemon_e470b6d9e0d979db] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isInterrupted_e470b6d9e0d979db] = env->getMethodID(cls, "isInterrupted", "()Z");
        mids$[mid_join_7ae3461a92a43152] = env->getMethodID(cls, "join", "()V");
        mids$[mid_join_fefb08975c10f0a1] = env->getMethodID(cls, "join", "(J)V");
        mids$[mid_join_7198f0f6eb202fc7] = env->getMethodID(cls, "join", "(JI)V");
        mids$[mid_onSpinWait_7ae3461a92a43152] = env->getStaticMethodID(cls, "onSpinWait", "()V");
        mids$[mid_resume_7ae3461a92a43152] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_run_7ae3461a92a43152] = env->getMethodID(cls, "run", "()V");
        mids$[mid_setContextClassLoader_9d86b3b4fa2f4a01] = env->getMethodID(cls, "setContextClassLoader", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_setDaemon_50a2e0b139e80a58] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setDefaultUncaughtExceptionHandler_bc001c0ab2a6504b] = env->getStaticMethodID(cls, "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_setName_e939c6558ae8d313] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
        mids$[mid_setPriority_0a2a1ac2721c0336] = env->getMethodID(cls, "setPriority", "(I)V");
        mids$[mid_setUncaughtExceptionHandler_bc001c0ab2a6504b] = env->getMethodID(cls, "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_sleep_fefb08975c10f0a1] = env->getStaticMethodID(cls, "sleep", "(J)V");
        mids$[mid_sleep_7198f0f6eb202fc7] = env->getStaticMethodID(cls, "sleep", "(JI)V");
        mids$[mid_start_7ae3461a92a43152] = env->getMethodID(cls, "start", "()V");
        mids$[mid_stop_7ae3461a92a43152] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_7ae3461a92a43152] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_yield_7ae3461a92a43152] = env->getStaticMethodID(cls, "yield", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_PRIORITY = env->getStaticIntField(cls, "MAX_PRIORITY");
        MIN_PRIORITY = env->getStaticIntField(cls, "MIN_PRIORITY");
        NORM_PRIORITY = env->getStaticIntField(cls, "NORM_PRIORITY");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread::Thread() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Thread::Thread(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1cadb67b411bc03, a0.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_203b61e7fc95b723, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2927727ec66827a, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_daa6aef5d8b89ad3, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_227d057051a80c38, a0.this$, a1.this$, a2.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e5fdb4699bb71a8e, a0.this$, a1.this$, a2.this$, a3)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc2ab4cad75c13, a0.this$, a1.this$, a2.this$, a3, a4)) {}

    jint Thread::activeCount()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_activeCount_f2f64475e4580546]);
    }

    void Thread::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_7ae3461a92a43152]);
    }

    jint Thread::countStackFrames() const
    {
      return env->callIntMethod(this$, mids$[mid_countStackFrames_f2f64475e4580546]);
    }

    Thread Thread::currentThread()
    {
      jclass cls = env->getClass(initializeClass);
      return Thread(env->callStaticObjectMethod(cls, mids$[mid_currentThread_1aace7ebc26af75c]));
    }

    void Thread::dumpStack()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_dumpStack_7ae3461a92a43152]);
    }

    jint Thread::enumerate(const JArray< Thread > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_enumerate_be0b9183e9f8fdcc], a0.this$);
    }

    ::java::util::Map Thread::getAllStackTraces()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getAllStackTraces_d6753b7055940a54]));
    }

    ::java::lang::ClassLoader Thread::getContextClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getContextClassLoader_9f59dd0605cf9d96]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getDefaultUncaughtExceptionHandler()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callStaticObjectMethod(cls, mids$[mid_getDefaultUncaughtExceptionHandler_c6c0fc4da74a22c1]));
    }

    jlong Thread::getId() const
    {
      return env->callLongMethod(this$, mids$[mid_getId_a27fc9afd27e559d]);
    }

    ::java::lang::String Thread::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jint Thread::getPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getPriority_f2f64475e4580546]);
    }

    JArray< ::java::lang::StackTraceElement > Thread::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_e6bb52718778b305]));
    }

    ::java::lang::Thread$State Thread::getState() const
    {
      return ::java::lang::Thread$State(env->callObjectMethod(this$, mids$[mid_getState_e7cc095e82d15730]));
    }

    ::java::lang::ThreadGroup Thread::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_c5a0b769e930fe0b]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getUncaughtExceptionHandler() const
    {
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callObjectMethod(this$, mids$[mid_getUncaughtExceptionHandler_c6c0fc4da74a22c1]));
    }

    jboolean Thread::holdsLock(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_holdsLock_229c87223f486349], a0.this$);
    }

    void Thread::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_7ae3461a92a43152]);
    }

    jboolean Thread::interrupted()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_interrupted_e470b6d9e0d979db]);
    }

    jboolean Thread::isAlive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAlive_e470b6d9e0d979db]);
    }

    jboolean Thread::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_e470b6d9e0d979db]);
    }

    jboolean Thread::isInterrupted() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterrupted_e470b6d9e0d979db]);
    }

    void Thread::join() const
    {
      env->callVoidMethod(this$, mids$[mid_join_7ae3461a92a43152]);
    }

    void Thread::join(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_join_fefb08975c10f0a1], a0);
    }

    void Thread::join(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_join_7198f0f6eb202fc7], a0, a1);
    }

    void Thread::onSpinWait()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_onSpinWait_7ae3461a92a43152]);
    }

    void Thread::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_7ae3461a92a43152]);
    }

    void Thread::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_7ae3461a92a43152]);
    }

    void Thread::setContextClassLoader(const ::java::lang::ClassLoader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setContextClassLoader_9d86b3b4fa2f4a01], a0.this$);
    }

    void Thread::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_50a2e0b139e80a58], a0);
    }

    void Thread::setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefaultUncaughtExceptionHandler_bc001c0ab2a6504b], a0.this$);
    }

    void Thread::setName(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setName_e939c6558ae8d313], a0.this$);
    }

    void Thread::setPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPriority_0a2a1ac2721c0336], a0);
    }

    void Thread::setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setUncaughtExceptionHandler_bc001c0ab2a6504b], a0.this$);
    }

    void Thread::sleep(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_fefb08975c10f0a1], a0);
    }

    void Thread::sleep(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_7198f0f6eb202fc7], a0, a1);
    }

    void Thread::start() const
    {
      env->callVoidMethod(this$, mids$[mid_start_7ae3461a92a43152]);
    }

    void Thread::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_7ae3461a92a43152]);
    }

    void Thread::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_7ae3461a92a43152]);
    }

    ::java::lang::String Thread::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void Thread::yield()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_yield_7ae3461a92a43152]);
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
#include "java/text/Format$Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format$Field::class$ = NULL;
    jmethodID *Format$Field::mids$ = NULL;
    bool Format$Field::live$ = false;

    jclass Format$Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format$Field");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_Format$Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format$Field_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Format$Field__methods_[] = {
      DECLARE_METHOD(t_Format$Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format$Field, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format$Field)[] = {
      { Py_tp_methods, t_Format$Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format$Field)[] = {
      &PY_TYPE_DEF(::java::text::AttributedCharacterIterator$Attribute),
      NULL
    };

    DEFINE_TYPE(Format$Field, t_Format$Field, Format$Field);

    void t_Format$Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Format$Field), &PY_TYPE_DEF(Format$Field), module, "Format$Field", 0);
    }

    void t_Format$Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "class_", make_descriptor(Format$Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "wrapfn_", make_descriptor(t_Format$Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format$Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format$Field::initializeClass, 1)))
        return NULL;
      return t_Format$Field::wrap_Object(Format$Field(((t_Format$Field *) arg)->object.this$));
    }
    static PyObject *t_Format$Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format$Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter$FilterInfo::class$ = NULL;
    jmethodID *ObjectInputFilter$FilterInfo::mids$ = NULL;
    bool ObjectInputFilter$FilterInfo::live$ = false;

    jclass ObjectInputFilter$FilterInfo::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter$FilterInfo");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arrayLength_a27fc9afd27e559d] = env->getMethodID(cls, "arrayLength", "()J");
        mids$[mid_depth_a27fc9afd27e559d] = env->getMethodID(cls, "depth", "()J");
        mids$[mid_references_a27fc9afd27e559d] = env->getMethodID(cls, "references", "()J");
        mids$[mid_serialClass_8f66acc08d2a174c] = env->getMethodID(cls, "serialClass", "()Ljava/lang/Class;");
        mids$[mid_streamBytes_a27fc9afd27e559d] = env->getMethodID(cls, "streamBytes", "()J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jlong ObjectInputFilter$FilterInfo::arrayLength() const
    {
      return env->callLongMethod(this$, mids$[mid_arrayLength_a27fc9afd27e559d]);
    }

    jlong ObjectInputFilter$FilterInfo::depth() const
    {
      return env->callLongMethod(this$, mids$[mid_depth_a27fc9afd27e559d]);
    }

    jlong ObjectInputFilter$FilterInfo::references() const
    {
      return env->callLongMethod(this$, mids$[mid_references_a27fc9afd27e559d]);
    }

    ::java::lang::Class ObjectInputFilter$FilterInfo::serialClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_serialClass_8f66acc08d2a174c]));
    }

    jlong ObjectInputFilter$FilterInfo::streamBytes() const
    {
      return env->callLongMethod(this$, mids$[mid_streamBytes_a27fc9afd27e559d]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter$FilterInfo_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$FilterInfo_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$FilterInfo_arrayLength(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_depth(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_references(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_serialClass(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_streamBytes(t_ObjectInputFilter$FilterInfo *self);

    static PyMethodDef t_ObjectInputFilter$FilterInfo__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, arrayLength, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, depth, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, references, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, serialClass, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, streamBytes, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter$FilterInfo)[] = {
      { Py_tp_methods, t_ObjectInputFilter$FilterInfo__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter$FilterInfo)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter$FilterInfo, t_ObjectInputFilter$FilterInfo, ObjectInputFilter$FilterInfo);

    void t_ObjectInputFilter$FilterInfo::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter$FilterInfo), &PY_TYPE_DEF(ObjectInputFilter$FilterInfo), module, "ObjectInputFilter$FilterInfo", 0);
    }

    void t_ObjectInputFilter$FilterInfo::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "class_", make_descriptor(ObjectInputFilter$FilterInfo::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "wrapfn_", make_descriptor(t_ObjectInputFilter$FilterInfo::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter$FilterInfo::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter$FilterInfo::wrap_Object(ObjectInputFilter$FilterInfo(((t_ObjectInputFilter$FilterInfo *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter$FilterInfo_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter$FilterInfo::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_arrayLength(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.arrayLength());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_depth(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.depth());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_references(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.references());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_serialClass(t_ObjectInputFilter$FilterInfo *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.serialClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_streamBytes(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.streamBytes());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter$Status::class$ = NULL;
    jmethodID *ObjectInputFilter$Status::mids$ = NULL;
    bool ObjectInputFilter$Status::live$ = false;
    ObjectInputFilter$Status *ObjectInputFilter$Status::ALLOWED = NULL;
    ObjectInputFilter$Status *ObjectInputFilter$Status::REJECTED = NULL;
    ObjectInputFilter$Status *ObjectInputFilter$Status::UNDECIDED = NULL;

    jclass ObjectInputFilter$Status::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter$Status");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_640b831f36f1b135] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter$Status;");
        mids$[mid_values_567ec7c7bdb1b20c] = env->getStaticMethodID(cls, "values", "()[Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        ALLOWED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "ALLOWED", "Ljava/io/ObjectInputFilter$Status;"));
        REJECTED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "REJECTED", "Ljava/io/ObjectInputFilter$Status;"));
        UNDECIDED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "UNDECIDED", "Ljava/io/ObjectInputFilter$Status;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputFilter$Status ObjectInputFilter$Status::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectInputFilter$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_640b831f36f1b135], a0.this$));
    }

    JArray< ObjectInputFilter$Status > ObjectInputFilter$Status::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ObjectInputFilter$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_567ec7c7bdb1b20c]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter$Status_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$Status_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$Status_of_(t_ObjectInputFilter$Status *self, PyObject *args);
    static PyObject *t_ObjectInputFilter$Status_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_ObjectInputFilter$Status_values(PyTypeObject *type);
    static PyObject *t_ObjectInputFilter$Status_get__parameters_(t_ObjectInputFilter$Status *self, void *data);
    static PyGetSetDef t_ObjectInputFilter$Status__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectInputFilter$Status, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputFilter$Status__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter$Status, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, of_, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter$Status)[] = {
      { Py_tp_methods, t_ObjectInputFilter$Status__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ObjectInputFilter$Status__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter$Status)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter$Status, t_ObjectInputFilter$Status, ObjectInputFilter$Status);
    PyObject *t_ObjectInputFilter$Status::wrap_Object(const ObjectInputFilter$Status& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ObjectInputFilter$Status::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ObjectInputFilter$Status *self = (t_ObjectInputFilter$Status *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ObjectInputFilter$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ObjectInputFilter$Status::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ObjectInputFilter$Status *self = (t_ObjectInputFilter$Status *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ObjectInputFilter$Status::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter$Status), &PY_TYPE_DEF(ObjectInputFilter$Status), module, "ObjectInputFilter$Status", 0);
    }

    void t_ObjectInputFilter$Status::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "class_", make_descriptor(ObjectInputFilter$Status::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "wrapfn_", make_descriptor(t_ObjectInputFilter$Status::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectInputFilter$Status::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "ALLOWED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::ALLOWED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "REJECTED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::REJECTED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "UNDECIDED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::UNDECIDED)));
    }

    static PyObject *t_ObjectInputFilter$Status_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter$Status::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter$Status::wrap_Object(ObjectInputFilter$Status(((t_ObjectInputFilter$Status *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter$Status_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter$Status::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter$Status_of_(t_ObjectInputFilter$Status *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_ObjectInputFilter$Status_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ObjectInputFilter$Status result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::io::ObjectInputFilter$Status::valueOf(a0));
        return t_ObjectInputFilter$Status::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_ObjectInputFilter$Status_values(PyTypeObject *type)
    {
      JArray< ObjectInputFilter$Status > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::ObjectInputFilter$Status::values());
      return JArray<jobject>(result.this$).wrap(t_ObjectInputFilter$Status::wrap_jobject);
    }
    static PyObject *t_ObjectInputFilter$Status_get__parameters_(t_ObjectInputFilter$Status *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/DataInput.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *DataInput::class$ = NULL;
    jmethodID *DataInput::mids$ = NULL;
    bool DataInput::live$ = false;

    jclass DataInput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/DataInput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_readBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_1d06dd1980a98d13] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_29e026b9d068f1c7] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFloat_966c782d3223854d] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_9c4b35f0a6dc87f3] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_125b1e9f043b29f8] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_f2f64475e4580546] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_0090f7797e403f43] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_a27fc9afd27e559d] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readShort_f89720844d790ad7] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_0090f7797e403f43] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnsignedByte_f2f64475e4580546] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_f2f64475e4580546] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_skipBytes_38565d58479aa24a] = env->getMethodID(cls, "skipBytes", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean DataInput::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_e470b6d9e0d979db]);
    }

    jbyte DataInput::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_1d06dd1980a98d13]);
    }

    jchar DataInput::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_29e026b9d068f1c7]);
    }

    jdouble DataInput::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_456d9a2f64d6b28d]);
    }

    jfloat DataInput::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_966c782d3223854d]);
    }

    void DataInput::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_9c4b35f0a6dc87f3], a0.this$);
    }

    void DataInput::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    jint DataInput::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_f2f64475e4580546]);
    }

    ::java::lang::String DataInput::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_0090f7797e403f43]));
    }

    jlong DataInput::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_a27fc9afd27e559d]);
    }

    jshort DataInput::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_f89720844d790ad7]);
    }

    ::java::lang::String DataInput::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_0090f7797e403f43]));
    }

    jint DataInput::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_f2f64475e4580546]);
    }

    jint DataInput::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_f2f64475e4580546]);
    }

    jint DataInput::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_38565d58479aa24a], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_DataInput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataInput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataInput_readBoolean(t_DataInput *self);
    static PyObject *t_DataInput_readByte(t_DataInput *self);
    static PyObject *t_DataInput_readChar(t_DataInput *self);
    static PyObject *t_DataInput_readDouble(t_DataInput *self);
    static PyObject *t_DataInput_readFloat(t_DataInput *self);
    static PyObject *t_DataInput_readFully(t_DataInput *self, PyObject *args);
    static PyObject *t_DataInput_readInt(t_DataInput *self);
    static PyObject *t_DataInput_readLine(t_DataInput *self);
    static PyObject *t_DataInput_readLong(t_DataInput *self);
    static PyObject *t_DataInput_readShort(t_DataInput *self);
    static PyObject *t_DataInput_readUTF(t_DataInput *self);
    static PyObject *t_DataInput_readUnsignedByte(t_DataInput *self);
    static PyObject *t_DataInput_readUnsignedShort(t_DataInput *self);
    static PyObject *t_DataInput_skipBytes(t_DataInput *self, PyObject *arg);

    static PyMethodDef t_DataInput__methods_[] = {
      DECLARE_METHOD(t_DataInput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataInput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataInput, readBoolean, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readByte, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readChar, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readDouble, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readFloat, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readFully, METH_VARARGS),
      DECLARE_METHOD(t_DataInput, readInt, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readLine, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readLong, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readShort, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUTF, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUnsignedByte, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUnsignedShort, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, skipBytes, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DataInput)[] = {
      { Py_tp_methods, t_DataInput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DataInput)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DataInput, t_DataInput, DataInput);

    void t_DataInput::install(PyObject *module)
    {
      installType(&PY_TYPE(DataInput), &PY_TYPE_DEF(DataInput), module, "DataInput", 0);
    }

    void t_DataInput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "class_", make_descriptor(DataInput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "wrapfn_", make_descriptor(t_DataInput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DataInput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DataInput::initializeClass, 1)))
        return NULL;
      return t_DataInput::wrap_Object(DataInput(((t_DataInput *) arg)->object.this$));
    }
    static PyObject *t_DataInput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DataInput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_DataInput_readBoolean(t_DataInput *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.readBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DataInput_readByte(t_DataInput *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.readByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readChar(t_DataInput *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.readChar());
      return c2p(result);
    }

    static PyObject *t_DataInput_readDouble(t_DataInput *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.readDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DataInput_readFloat(t_DataInput *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.readFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DataInput_readFully(t_DataInput *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.readFully(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.readFully(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readFully", args);
      return NULL;
    }

    static PyObject *t_DataInput_readInt(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readInt());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readLine(t_DataInput *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_DataInput_readLong(t_DataInput *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.readLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DataInput_readShort(t_DataInput *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.readShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readUTF(t_DataInput *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readUTF());
      return j2p(result);
    }

    static PyObject *t_DataInput_readUnsignedByte(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readUnsignedShort(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_skipBytes(t_DataInput *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.skipBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skipBytes", arg);
      return NULL;
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
        mids$[mid_init$_4b15f99c4b73ca21] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
        mids$[mid_init$_0b1baeb0e3d57706] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
        mids$[mid_compareTo_ac8c1b6f384391ef] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getOffset_f2f64475e4580546] = env->getMethodID(cls, "getOffset", "()I");
        mids$[mid_getType_8f66acc08d2a174c] = env->getMethodID(cls, "getType", "()Ljava/lang/Class;");
        mids$[mid_getTypeCode_29e026b9d068f1c7] = env->getMethodID(cls, "getTypeCode", "()C");
        mids$[mid_getTypeString_0090f7797e403f43] = env->getMethodID(cls, "getTypeString", "()Ljava/lang/String;");
        mids$[mid_isPrimitive_e470b6d9e0d979db] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isUnshared_e470b6d9e0d979db] = env->getMethodID(cls, "isUnshared", "()Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_setOffset_0a2a1ac2721c0336] = env->getMethodID(cls, "setOffset", "(I)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b15f99c4b73ca21, a0.this$, a1.this$)) {}

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b1baeb0e3d57706, a0.this$, a1.this$, a2)) {}

    jint ObjectStreamField::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_ac8c1b6f384391ef], a0.this$);
    }

    ::java::lang::String ObjectStreamField::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jint ObjectStreamField::getOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_f2f64475e4580546]);
    }

    ::java::lang::Class ObjectStreamField::getType() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getType_8f66acc08d2a174c]));
    }

    jchar ObjectStreamField::getTypeCode() const
    {
      return env->callCharMethod(this$, mids$[mid_getTypeCode_29e026b9d068f1c7]);
    }

    ::java::lang::String ObjectStreamField::getTypeString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeString_0090f7797e403f43]));
    }

    jboolean ObjectStreamField::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_e470b6d9e0d979db]);
    }

    jboolean ObjectStreamField::isUnshared() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isUnshared_e470b6d9e0d979db]);
    }

    ::java::lang::String ObjectStreamField::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        mids$[mid_valueOf_04c27c97710f5d4f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;");
        mids$[mid_values_75eec4d7239bbbb2] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/Thread$State;");

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
      return Thread$State(env->callStaticObjectMethod(cls, mids$[mid_valueOf_04c27c97710f5d4f], a0.this$));
    }

    JArray< Thread$State > Thread$State::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Thread$State >(env->callStaticObjectMethod(cls, mids$[mid_values_75eec4d7239bbbb2]));
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
        mids$[mid_uncaughtException_af8835c850fff4fc] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Thread$UncaughtExceptionHandler::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_af8835c850fff4fc], a0.this$, a1.this$);
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
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/ModuleLayer$Controller.h"
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
        mids$[mid_addExports_25f0c9aa7b0809e8] = env->getMethodID(cls, "addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addOpens_25f0c9aa7b0809e8] = env->getMethodID(cls, "addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addReads_4e9bc11776f00fa2] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_layer_b969436b816ffa6a] = env->getMethodID(cls, "layer", "()Ljava/lang/ModuleLayer;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer$Controller ModuleLayer$Controller::addExports(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addExports_25f0c9aa7b0809e8], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addOpens(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addOpens_25f0c9aa7b0809e8], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addReads(const ::java::lang::Module & a0, const ::java::lang::Module & a1) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addReads_4e9bc11776f00fa2], a0.this$, a1.this$));
    }

    ::java::lang::ModuleLayer ModuleLayer$Controller::layer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_layer_b969436b816ffa6a]));
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
