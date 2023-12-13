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
        mid_init$_734b91ac30d5f9b4,
        mid_init$_c0f56f14913e02e9,
        mid_activeCount_55546ef6a647f39b,
        mid_activeGroupCount_55546ef6a647f39b,
        mid_allowThreadSuspension_52d2d2523d94d978,
        mid_checkAccess_a1fa5dae97ea5ed2,
        mid_destroy_a1fa5dae97ea5ed2,
        mid_enumerate_0e7ff9b56e206905,
        mid_enumerate_7ed52e1c46a75d99,
        mid_enumerate_5bc4fa64d53df6cd,
        mid_enumerate_5e2818aa52434eef,
        mid_getMaxPriority_55546ef6a647f39b,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getParent_4241f87211c845e3,
        mid_interrupt_a1fa5dae97ea5ed2,
        mid_isDaemon_9ab94ac1dc23b105,
        mid_isDestroyed_9ab94ac1dc23b105,
        mid_list_a1fa5dae97ea5ed2,
        mid_parentOf_dc2161560cebbf04,
        mid_resume_a1fa5dae97ea5ed2,
        mid_setDaemon_fcb96c98de6fad04,
        mid_setMaxPriority_44ed599e93e8a30c,
        mid_stop_a1fa5dae97ea5ed2,
        mid_suspend_a1fa5dae97ea5ed2,
        mid_toString_1c1fa1e935d6cdcf,
        mid_uncaughtException_6614adf33092b99a,
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
