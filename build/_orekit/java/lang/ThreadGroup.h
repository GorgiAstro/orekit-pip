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
        mid_init$_f5ffdf29129ef90a,
        mid_init$_5f2f5f3d7421182b,
        mid_activeCount_412668abc8d889e9,
        mid_activeGroupCount_412668abc8d889e9,
        mid_allowThreadSuspension_bc7235a51f399397,
        mid_checkAccess_0640e6acf969ed28,
        mid_destroy_0640e6acf969ed28,
        mid_enumerate_33318ecfe98749af,
        mid_enumerate_3372509a943b910a,
        mid_enumerate_6ddae58fe6e2ebee,
        mid_enumerate_82a98c7b62ede06a,
        mid_getMaxPriority_412668abc8d889e9,
        mid_getName_3cffd47377eca18a,
        mid_getParent_33ca5756bd56429e,
        mid_interrupt_0640e6acf969ed28,
        mid_isDaemon_89b302893bdbe1f1,
        mid_isDestroyed_89b302893bdbe1f1,
        mid_list_0640e6acf969ed28,
        mid_parentOf_6ecd715167b5bcc1,
        mid_resume_0640e6acf969ed28,
        mid_setDaemon_ed2afdb8506b9742,
        mid_setMaxPriority_a3da1a935cb37f7b,
        mid_stop_0640e6acf969ed28,
        mid_suspend_0640e6acf969ed28,
        mid_toString_3cffd47377eca18a,
        mid_uncaughtException_6ab5c8a40df48e4f,
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
