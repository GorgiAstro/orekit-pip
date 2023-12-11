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
        mid_init$_0db3ce164f010509,
        mid_init$_e5e2a5da4cf3e3af,
        mid_equals_221e8e85cb385209,
        mid_getClassLoaderName_3cffd47377eca18a,
        mid_getClassName_3cffd47377eca18a,
        mid_getFileName_3cffd47377eca18a,
        mid_getLineNumber_412668abc8d889e9,
        mid_getMethodName_3cffd47377eca18a,
        mid_getModuleName_3cffd47377eca18a,
        mid_getModuleVersion_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_isNativeMethod_89b302893bdbe1f1,
        mid_toString_3cffd47377eca18a,
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
