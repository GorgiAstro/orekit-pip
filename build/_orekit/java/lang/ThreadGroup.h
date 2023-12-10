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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_998e65c64767e7ed,
        mid_activeCount_570ce0828f81a2c1,
        mid_activeGroupCount_570ce0828f81a2c1,
        mid_allowThreadSuspension_29387014c78e7f59,
        mid_checkAccess_0fa09c18fee449d5,
        mid_destroy_0fa09c18fee449d5,
        mid_enumerate_937414aa547b433f,
        mid_enumerate_d76130d7e84940d1,
        mid_enumerate_1260107c6b19c381,
        mid_enumerate_146ec43fb352608c,
        mid_getMaxPriority_570ce0828f81a2c1,
        mid_getName_11b109bd155ca898,
        mid_getParent_b3b4aaae6d375f3d,
        mid_interrupt_0fa09c18fee449d5,
        mid_isDaemon_b108b35ef48e27bd,
        mid_isDestroyed_b108b35ef48e27bd,
        mid_list_0fa09c18fee449d5,
        mid_parentOf_34ea0656610dcd49,
        mid_resume_0fa09c18fee449d5,
        mid_setDaemon_bd04c9335fb9e4cf,
        mid_setMaxPriority_99803b0791f320ff,
        mid_stop_0fa09c18fee449d5,
        mid_suspend_0fa09c18fee449d5,
        mid_toString_11b109bd155ca898,
        mid_uncaughtException_14ba6d7e16e50ef1,
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
