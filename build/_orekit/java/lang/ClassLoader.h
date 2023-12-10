#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class Enumeration;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Module;
    class ClassNotFoundException;
    class Class;
    class Package;
    class String;
    class ClassLoader;
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
        mid_clearAssertionStatus_0fa09c18fee449d5,
        mid_getDefinedPackage_2ebccdeed255784a,
        mid_getDefinedPackages_23df86f75843b87b,
        mid_getName_11b109bd155ca898,
        mid_getParent_da1c487fbe6ab900,
        mid_getPlatformClassLoader_da1c487fbe6ab900,
        mid_getResource_92a0f99f4944a8b1,
        mid_getResourceAsStream_d8c3e08e3826298a,
        mid_getResources_51addc91753b4c4d,
        mid_getSystemClassLoader_da1c487fbe6ab900,
        mid_getSystemResource_92a0f99f4944a8b1,
        mid_getSystemResourceAsStream_d8c3e08e3826298a,
        mid_getSystemResources_51addc91753b4c4d,
        mid_getUnnamedModule_191607d6c6e74ab2,
        mid_isRegisteredAsParallelCapable_b108b35ef48e27bd,
        mid_loadClass_e88d065cb04fcbf6,
        mid_resources_5a688b58704bda7e,
        mid_setClassAssertionStatus_d6df10f4e35ef1e8,
        mid_setDefaultAssertionStatus_bd04c9335fb9e4cf,
        mid_setPackageAssertionStatus_d6df10f4e35ef1e8,
        mid_loadClass_e38edfaa0baa77a8,
        mid_definePackage_ff1175edc40e0bc8,
        mid_getPackage_2ebccdeed255784a,
        mid_setSigners_ff6317628e6e047e,
        mid_findResource_92a0f99f4944a8b1,
        mid_findResource_9f0cb071ff0043a3,
        mid_getClassLoadingLock_f639320a33718c6c,
        mid_findLoadedClass_e88d065cb04fcbf6,
        mid_findClass_e88d065cb04fcbf6,
        mid_findClass_9ea674c8b961918c,
        mid_resolveClass_834972a40792b06e,
        mid_defineClass_2173fb0f275a5e7d,
        mid_defineClass_35421cfae2a8d0a6,
        mid_defineClass_4eab932f0aaf96b9,
        mid_defineClass_ac5afae98d4e3b56,
        mid_findSystemClass_e88d065cb04fcbf6,
        mid_findResources_51addc91753b4c4d,
        mid_registerAsParallelCapable_b108b35ef48e27bd,
        mid_getPackages_23df86f75843b87b,
        mid_findLibrary_92807efd57acb082,
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
