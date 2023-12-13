#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InstantiationException;
    class IllegalAccessException;
    class ClassNotFoundException;
    class Package;
    class SecurityException;
    class Module;
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
        mid_asSubclass_8796c3559c3e2023,
        mid_cast_5804c890f94a02b6,
        mid_desiredAssertionStatus_9ab94ac1dc23b105,
        mid_forName_19d7740902dbd288,
        mid_forName_914052f7ac73009e,
        mid_forName_17a93706411190d2,
        mid_getCanonicalName_1c1fa1e935d6cdcf,
        mid_getClassLoader_fb951be34fc77929,
        mid_getClasses_5aec5e13d1a5cd63,
        mid_getComponentType_1aeb0737a960d371,
        mid_getDeclaredClasses_5aec5e13d1a5cd63,
        mid_getDeclaringClass_1aeb0737a960d371,
        mid_getEnclosingClass_1aeb0737a960d371,
        mid_getEnumConstants_24e2edd6319f4c5a,
        mid_getInterfaces_5aec5e13d1a5cd63,
        mid_getModifiers_55546ef6a647f39b,
        mid_getModule_a1af2f56cbb446b6,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getNestHost_1aeb0737a960d371,
        mid_getNestMembers_5aec5e13d1a5cd63,
        mid_getPackage_3638481b62f070b2,
        mid_getPackageName_1c1fa1e935d6cdcf,
        mid_getResource_4872b6a8d8971899,
        mid_getResourceAsStream_6831515bfd9973e1,
        mid_getSigners_24e2edd6319f4c5a,
        mid_getSimpleName_1c1fa1e935d6cdcf,
        mid_getSuperclass_1aeb0737a960d371,
        mid_getTypeName_1c1fa1e935d6cdcf,
        mid_isAnnotation_9ab94ac1dc23b105,
        mid_isAnonymousClass_9ab94ac1dc23b105,
        mid_isArray_9ab94ac1dc23b105,
        mid_isAssignableFrom_a24f4963f111aa48,
        mid_isEnum_9ab94ac1dc23b105,
        mid_isInstance_460c5e2d9d51c6cc,
        mid_isInterface_9ab94ac1dc23b105,
        mid_isLocalClass_9ab94ac1dc23b105,
        mid_isMemberClass_9ab94ac1dc23b105,
        mid_isNestmateOf_a24f4963f111aa48,
        mid_isPrimitive_9ab94ac1dc23b105,
        mid_isSynthetic_9ab94ac1dc23b105,
        mid_newInstance_541690f9ee81d3ad,
        mid_toGenericString_1c1fa1e935d6cdcf,
        mid_toString_1c1fa1e935d6cdcf,
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
