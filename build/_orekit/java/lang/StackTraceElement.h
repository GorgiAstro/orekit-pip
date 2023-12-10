#ifndef java_lang_StackTraceElement_H
#define java_lang_StackTraceElement_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StackTraceElement : public ::java::lang::Object {
     public:
      enum {
        mid_init$_c08592dec40051d4,
        mid_init$_5684073b2ab70eb7,
        mid_equals_65c7d273e80d497a,
        mid_getClassLoaderName_11b109bd155ca898,
        mid_getClassName_11b109bd155ca898,
        mid_getFileName_11b109bd155ca898,
        mid_getLineNumber_570ce0828f81a2c1,
        mid_getMethodName_11b109bd155ca898,
        mid_getModuleName_11b109bd155ca898,
        mid_getModuleVersion_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_isNativeMethod_b108b35ef48e27bd,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StackTraceElement(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StackTraceElement(const StackTraceElement& obj) : ::java::lang::Object(obj) {}

      StackTraceElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jint);
      StackTraceElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jint);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getClassLoaderName() const;
      ::java::lang::String getClassName() const;
      ::java::lang::String getFileName() const;
      jint getLineNumber() const;
      ::java::lang::String getMethodName() const;
      ::java::lang::String getModuleName() const;
      ::java::lang::String getModuleVersion() const;
      jint hashCode() const;
      jboolean isNativeMethod() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StackTraceElement);
    extern PyTypeObject *PY_TYPE(StackTraceElement);

    class t_StackTraceElement {
    public:
      PyObject_HEAD
      StackTraceElement object;
      static PyObject *wrap_Object(const StackTraceElement&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
