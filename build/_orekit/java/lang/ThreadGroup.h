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
        mid_init$_105e1eadb709d9ac,
        mid_init$_874e391556ea1b99,
        mid_activeCount_d6ab429752e7c267,
        mid_activeGroupCount_d6ab429752e7c267,
        mid_allowThreadSuspension_80aaf3d99b4df682,
        mid_checkAccess_ff7cb6c242604316,
        mid_destroy_ff7cb6c242604316,
        mid_enumerate_156c27ca0b550ad2,
        mid_enumerate_cab2a4868bba29f5,
        mid_enumerate_1c4abd89c23f47d0,
        mid_enumerate_7d43ae570a3b2c90,
        mid_getMaxPriority_d6ab429752e7c267,
        mid_getName_d2c8eb4129821f0e,
        mid_getParent_7b80b98e8a66c9f8,
        mid_interrupt_ff7cb6c242604316,
        mid_isDaemon_eee3de00fe971136,
        mid_isDestroyed_eee3de00fe971136,
        mid_list_ff7cb6c242604316,
        mid_parentOf_903082b3d46da4fd,
        mid_resume_ff7cb6c242604316,
        mid_setDaemon_b35db77cae58639e,
        mid_setMaxPriority_8fd427ab23829bf5,
        mid_stop_ff7cb6c242604316,
        mid_suspend_ff7cb6c242604316,
        mid_toString_d2c8eb4129821f0e,
        mid_uncaughtException_c8b54bc346ca390e,
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
