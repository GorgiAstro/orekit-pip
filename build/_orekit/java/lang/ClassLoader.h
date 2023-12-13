#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassNotFoundException;
    class Package;
    class Module;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace util {
    class Enumeration;
    namespace stream {
      class Stream;
    }
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ClassLoader : public ::java::lang::Object {
     public:
      enum {
        mid_clearAssertionStatus_a1fa5dae97ea5ed2,
        mid_getDefinedPackage_ea8f0e6057ebcb3a,
        mid_getDefinedPackages_4ece9e113339960d,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getParent_fb951be34fc77929,
        mid_getPlatformClassLoader_fb951be34fc77929,
        mid_getResource_4872b6a8d8971899,
        mid_getResourceAsStream_6831515bfd9973e1,
        mid_getResources_0996d8d68b1681c5,
        mid_getSystemClassLoader_fb951be34fc77929,
        mid_getSystemResource_4872b6a8d8971899,
        mid_getSystemResourceAsStream_6831515bfd9973e1,
        mid_getSystemResources_0996d8d68b1681c5,
        mid_getUnnamedModule_a1af2f56cbb446b6,
        mid_isRegisteredAsParallelCapable_9ab94ac1dc23b105,
        mid_loadClass_19d7740902dbd288,
        mid_resources_39542c7f47d70872,
        mid_setClassAssertionStatus_76cf8b957ccb7ae1,
        mid_setDefaultAssertionStatus_fcb96c98de6fad04,
        mid_setPackageAssertionStatus_76cf8b957ccb7ae1,
        mid_loadClass_340b3ea35e3cd05e,
        mid_definePackage_1b10089f831ddf29,
        mid_getPackage_ea8f0e6057ebcb3a,
        mid_setSigners_4ba13468aa7ecd1f,
        mid_findResource_3c2cc72c73012663,
        mid_findResource_4872b6a8d8971899,
        mid_getClassLoadingLock_b5bfd4959be00bde,
        mid_findClass_c22e4a5bde0a5dcc,
        mid_findClass_19d7740902dbd288,
        mid_defineClass_b25cb33f5445c7b1,
        mid_defineClass_657a21003b8f769e,
        mid_defineClass_408d929014dcf10b,
        mid_defineClass_8bc31053d318932a,
        mid_resolveClass_9d20f27ef81b4361,
        mid_findSystemClass_19d7740902dbd288,
        mid_findLoadedClass_19d7740902dbd288,
        mid_findResources_0996d8d68b1681c5,
        mid_registerAsParallelCapable_9ab94ac1dc23b105,
        mid_getPackages_4ece9e113339960d,
        mid_findLibrary_6f0f3576df9f75ee,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassLoader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassLoader(const ClassLoader& obj) : ::java::lang::Object(obj) {}

      void clearAssertionStatus() const;
      ::java::lang::Package getDefinedPackage(const ::java::lang::String &) const;
      JArray< ::java::lang::Package > getDefinedPackages() const;
      ::java::lang::String getName() const;
      ClassLoader getParent() const;
      static ClassLoader getPlatformClassLoader();
      ::java::net::URL getResource(const ::java::lang::String &) const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      ::java::util::Enumeration getResources(const ::java::lang::String &) const;
      static ClassLoader getSystemClassLoader();
      static ::java::net::URL getSystemResource(const ::java::lang::String &);
      static ::java::io::InputStream getSystemResourceAsStream(const ::java::lang::String &);
      static ::java::util::Enumeration getSystemResources(const ::java::lang::String &);
      ::java::lang::Module getUnnamedModule() const;
      jboolean isRegisteredAsParallelCapable() const;
      ::java::lang::Class loadClass(const ::java::lang::String &) const;
      ::java::util::stream::Stream resources(const ::java::lang::String &) const;
      void setClassAssertionStatus(const ::java::lang::String &, jboolean) const;
      void setDefaultAssertionStatus(jboolean) const;
      void setPackageAssertionStatus(const ::java::lang::String &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassLoader);
    extern PyTypeObject *PY_TYPE(ClassLoader);

    class t_ClassLoader {
    public:
      PyObject_HEAD
      ClassLoader object;
      static PyObject *wrap_Object(const ClassLoader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
