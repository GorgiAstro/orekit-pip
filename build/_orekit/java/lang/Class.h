#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class InstantiationException;
    class Module;
    class ClassNotFoundException;
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
        mid_asSubclass_5010aeabfbec9b1c,
        mid_cast_9facd1449e0950d3,
        mid_desiredAssertionStatus_b108b35ef48e27bd,
        mid_forName_e88d065cb04fcbf6,
        mid_forName_7096b883e1b0d903,
        mid_forName_d28f38f0fe51c5ff,
        mid_getCanonicalName_11b109bd155ca898,
        mid_getClassLoader_da1c487fbe6ab900,
        mid_getClasses_c7d92886d19dfecc,
        mid_getComponentType_7c16c5008b34b3db,
        mid_getDeclaredClasses_c7d92886d19dfecc,
        mid_getDeclaringClass_7c16c5008b34b3db,
        mid_getEnclosingClass_7c16c5008b34b3db,
        mid_getEnumConstants_b93c730013ce64c6,
        mid_getInterfaces_c7d92886d19dfecc,
        mid_getModifiers_570ce0828f81a2c1,
        mid_getModule_191607d6c6e74ab2,
        mid_getName_11b109bd155ca898,
        mid_getNestHost_7c16c5008b34b3db,
        mid_getNestMembers_c7d92886d19dfecc,
        mid_getPackage_11d7c12a6280b34b,
        mid_getPackageName_11b109bd155ca898,
        mid_getResource_92a0f99f4944a8b1,
        mid_getResourceAsStream_d8c3e08e3826298a,
        mid_getSigners_b93c730013ce64c6,
        mid_getSimpleName_11b109bd155ca898,
        mid_getSuperclass_7c16c5008b34b3db,
        mid_getTypeName_11b109bd155ca898,
        mid_isAnnotation_b108b35ef48e27bd,
        mid_isAnonymousClass_b108b35ef48e27bd,
        mid_isArray_b108b35ef48e27bd,
        mid_isAssignableFrom_839caca7c078da68,
        mid_isEnum_b108b35ef48e27bd,
        mid_isInstance_65c7d273e80d497a,
        mid_isInterface_b108b35ef48e27bd,
        mid_isLocalClass_b108b35ef48e27bd,
        mid_isMemberClass_b108b35ef48e27bd,
        mid_isNestmateOf_839caca7c078da68,
        mid_isPrimitive_b108b35ef48e27bd,
        mid_isSynthetic_b108b35ef48e27bd,
        mid_newInstance_4d26fd885228c716,
        mid_toGenericString_11b109bd155ca898,
        mid_toString_11b109bd155ca898,
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
