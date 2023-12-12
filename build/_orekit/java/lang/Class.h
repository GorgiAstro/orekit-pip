#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class SecurityException;
    class InstantiationException;
    class IllegalAccessException;
    class Module;
    class Class;
    class Package;
    class ClassNotFoundException;
    class String;
    class ClassLoader;
  }
  namespace io {
    class Serializable;
    class InputStream;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Class : public ::java::lang::Object {
     public:
      enum {
        mid_asSubclass_c1bd0f9c0c5cc3c8,
        mid_cast_65d69db95c5eb156,
        mid_desiredAssertionStatus_89b302893bdbe1f1,
        mid_forName_33271d9fced271c1,
        mid_forName_3eb86302ebf8d401,
        mid_forName_71c1e5b35d89d3a9,
        mid_getCanonicalName_3cffd47377eca18a,
        mid_getClassLoader_822bf82dfc5992ba,
        mid_getClasses_c988485cdace3d64,
        mid_getComponentType_d4b191ff8147475d,
        mid_getDeclaredClasses_c988485cdace3d64,
        mid_getDeclaringClass_d4b191ff8147475d,
        mid_getEnclosingClass_d4b191ff8147475d,
        mid_getEnumConstants_6555a5198c71b73a,
        mid_getInterfaces_c988485cdace3d64,
        mid_getModifiers_412668abc8d889e9,
        mid_getModule_04458a8861f7bacc,
        mid_getName_3cffd47377eca18a,
        mid_getNestHost_d4b191ff8147475d,
        mid_getNestMembers_c988485cdace3d64,
        mid_getPackage_2272e6eee5532c62,
        mid_getPackageName_3cffd47377eca18a,
        mid_getResource_b738586de9814931,
        mid_getResourceAsStream_425095ef57e6735b,
        mid_getSigners_6555a5198c71b73a,
        mid_getSimpleName_3cffd47377eca18a,
        mid_getSuperclass_d4b191ff8147475d,
        mid_getTypeName_3cffd47377eca18a,
        mid_isAnnotation_89b302893bdbe1f1,
        mid_isAnonymousClass_89b302893bdbe1f1,
        mid_isArray_89b302893bdbe1f1,
        mid_isAssignableFrom_0580a8a10aabb274,
        mid_isEnum_89b302893bdbe1f1,
        mid_isInstance_221e8e85cb385209,
        mid_isInterface_89b302893bdbe1f1,
        mid_isLocalClass_89b302893bdbe1f1,
        mid_isMemberClass_89b302893bdbe1f1,
        mid_isNestmateOf_0580a8a10aabb274,
        mid_isPrimitive_89b302893bdbe1f1,
        mid_isSynthetic_89b302893bdbe1f1,
        mid_newInstance_e661fe3ba2fafb22,
        mid_toGenericString_3cffd47377eca18a,
        mid_toString_3cffd47377eca18a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Class(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Class(const Class& obj) : ::java::lang::Object(obj) {}

      Class asSubclass(const Class &) const;
      ::java::lang::Object cast(const ::java::lang::Object &) const;
      jboolean desiredAssertionStatus() const;
      static Class forName(const ::java::lang::String &);
      static Class forName(const ::java::lang::Module &, const ::java::lang::String &);
      static Class forName(const ::java::lang::String &, jboolean, const ::java::lang::ClassLoader &);
      ::java::lang::String getCanonicalName() const;
      ::java::lang::ClassLoader getClassLoader() const;
      JArray< Class > getClasses() const;
      Class getComponentType() const;
      JArray< Class > getDeclaredClasses() const;
      Class getDeclaringClass() const;
      Class getEnclosingClass() const;
      JArray< ::java::lang::Object > getEnumConstants() const;
      JArray< Class > getInterfaces() const;
      jint getModifiers() const;
      ::java::lang::Module getModule() const;
      ::java::lang::String getName() const;
      Class getNestHost() const;
      JArray< Class > getNestMembers() const;
      ::java::lang::Package getPackage() const;
      ::java::lang::String getPackageName() const;
      ::java::net::URL getResource(const ::java::lang::String &) const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      JArray< ::java::lang::Object > getSigners() const;
      ::java::lang::String getSimpleName() const;
      Class getSuperclass() const;
      ::java::lang::String getTypeName() const;
      jboolean isAnnotation() const;
      jboolean isAnonymousClass() const;
      jboolean isArray() const;
      jboolean isAssignableFrom(const Class &) const;
      jboolean isEnum() const;
      jboolean isInstance(const ::java::lang::Object &) const;
      jboolean isInterface() const;
      jboolean isLocalClass() const;
      jboolean isMemberClass() const;
      jboolean isNestmateOf(const Class &) const;
      jboolean isPrimitive() const;
      jboolean isSynthetic() const;
      ::java::lang::Object newInstance() const;
      ::java::lang::String toGenericString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Class);
    extern PyTypeObject *PY_TYPE(Class);

    class t_Class {
    public:
      PyObject_HEAD
      Class object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Class *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Class&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Class&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
