#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InstantiationException;
    class IllegalAccessException;
    class ClassNotFoundException;
    class Module;
    class Class;
    class SecurityException;
    class Package;
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
        mid_asSubclass_1220bdeb5d2287e4,
        mid_cast_ed50a8b49b8274dc,
        mid_desiredAssertionStatus_e470b6d9e0d979db,
        mid_forName_8cb3351ef7334fdc,
        mid_forName_8bff53c7fd504b40,
        mid_forName_0d73bfe55a170e60,
        mid_getCanonicalName_0090f7797e403f43,
        mid_getClassLoader_9f59dd0605cf9d96,
        mid_getClasses_9fe3f453b1078a3c,
        mid_getComponentType_8f66acc08d2a174c,
        mid_getDeclaredClasses_9fe3f453b1078a3c,
        mid_getDeclaringClass_8f66acc08d2a174c,
        mid_getEnclosingClass_8f66acc08d2a174c,
        mid_getEnumConstants_e81d7907eea7e008,
        mid_getInterfaces_9fe3f453b1078a3c,
        mid_getModifiers_f2f64475e4580546,
        mid_getModule_c94272da82329f0f,
        mid_getName_0090f7797e403f43,
        mid_getNestHost_8f66acc08d2a174c,
        mid_getNestMembers_9fe3f453b1078a3c,
        mid_getPackage_e1deee00c8c99811,
        mid_getPackageName_0090f7797e403f43,
        mid_getResource_4b560f872f3037b3,
        mid_getResourceAsStream_e48d48998e90da79,
        mid_getSigners_e81d7907eea7e008,
        mid_getSimpleName_0090f7797e403f43,
        mid_getSuperclass_8f66acc08d2a174c,
        mid_getTypeName_0090f7797e403f43,
        mid_isAnnotation_e470b6d9e0d979db,
        mid_isAnonymousClass_e470b6d9e0d979db,
        mid_isArray_e470b6d9e0d979db,
        mid_isAssignableFrom_ddf0fdab108a07e2,
        mid_isEnum_e470b6d9e0d979db,
        mid_isInstance_229c87223f486349,
        mid_isInterface_e470b6d9e0d979db,
        mid_isLocalClass_e470b6d9e0d979db,
        mid_isMemberClass_e470b6d9e0d979db,
        mid_isNestmateOf_ddf0fdab108a07e2,
        mid_isPrimitive_e470b6d9e0d979db,
        mid_isSynthetic_e470b6d9e0d979db,
        mid_newInstance_dfd7647d9110ac9f,
        mid_toGenericString_0090f7797e403f43,
        mid_toString_0090f7797e403f43,
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
