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
        mid_init$_711bd0f43086f576,
        mid_init$_fd1937e5fdd589c2,
        mid_equals_460c5e2d9d51c6cc,
        mid_getClassLoaderName_1c1fa1e935d6cdcf,
        mid_getClassName_1c1fa1e935d6cdcf,
        mid_getFileName_1c1fa1e935d6cdcf,
        mid_getLineNumber_55546ef6a647f39b,
        mid_getMethodName_1c1fa1e935d6cdcf,
        mid_getModuleName_1c1fa1e935d6cdcf,
        mid_getModuleVersion_1c1fa1e935d6cdcf,
        mid_hashCode_55546ef6a647f39b,
        mid_isNativeMethod_9ab94ac1dc23b105,
        mid_toString_1c1fa1e935d6cdcf,
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
