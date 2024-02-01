#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InstantiationException;
    class ClassNotFoundException;
    class SecurityException;
    class Package;
    class Module;
    class IllegalAccessException;
    class Class;
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
        mid_asSubclass_f9a283d4dd9d381f,
        mid_cast_05290476c26136d7,
        mid_desiredAssertionStatus_eee3de00fe971136,
        mid_forName_460cf69d907ca8bf,
        mid_forName_7bd6bba181ab0758,
        mid_forName_8328a6bb3cdd123e,
        mid_getCanonicalName_d2c8eb4129821f0e,
        mid_getClassLoader_7e232a6d8e4f63bc,
        mid_getClasses_43ba7a5d6b18fc61,
        mid_getComponentType_d5247e4b166c4ce8,
        mid_getDeclaredClasses_43ba7a5d6b18fc61,
        mid_getDeclaringClass_d5247e4b166c4ce8,
        mid_getEnclosingClass_d5247e4b166c4ce8,
        mid_getEnumConstants_2ab86268ef7a6631,
        mid_getInterfaces_43ba7a5d6b18fc61,
        mid_getModifiers_d6ab429752e7c267,
        mid_getModule_61f66fcaa02aad4a,
        mid_getName_d2c8eb4129821f0e,
        mid_getNestHost_d5247e4b166c4ce8,
        mid_getNestMembers_43ba7a5d6b18fc61,
        mid_getPackage_8d05763394d733bc,
        mid_getPackageName_d2c8eb4129821f0e,
        mid_getResource_549d2318dcb16c72,
        mid_getResourceAsStream_05f5377821499489,
        mid_getSigners_2ab86268ef7a6631,
        mid_getSimpleName_d2c8eb4129821f0e,
        mid_getSuperclass_d5247e4b166c4ce8,
        mid_getTypeName_d2c8eb4129821f0e,
        mid_isAnnotation_eee3de00fe971136,
        mid_isAnonymousClass_eee3de00fe971136,
        mid_isArray_eee3de00fe971136,
        mid_isAssignableFrom_2d405d48789924af,
        mid_isEnum_eee3de00fe971136,
        mid_isInstance_72faff9b05f5ed5e,
        mid_isInterface_eee3de00fe971136,
        mid_isLocalClass_eee3de00fe971136,
        mid_isMemberClass_eee3de00fe971136,
        mid_isNestmateOf_2d405d48789924af,
        mid_isPrimitive_eee3de00fe971136,
        mid_isSynthetic_eee3de00fe971136,
        mid_newInstance_704a5bee58538972,
        mid_toGenericString_d2c8eb4129821f0e,
        mid_toString_d2c8eb4129821f0e,
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
