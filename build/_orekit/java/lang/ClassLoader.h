#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class Enumeration;
  }
  namespace lang {
    class ClassNotFoundException;
    class Module;
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
        mid_clearAssertionStatus_7ae3461a92a43152,
        mid_getDefinedPackage_f7c808f242d7007d,
        mid_getDefinedPackages_24dcadba5c7fd8f6,
        mid_getName_0090f7797e403f43,
        mid_getParent_9f59dd0605cf9d96,
        mid_getPlatformClassLoader_9f59dd0605cf9d96,
        mid_getResource_4b560f872f3037b3,
        mid_getResourceAsStream_e48d48998e90da79,
        mid_getResources_2e136456ddf0ab85,
        mid_getSystemClassLoader_9f59dd0605cf9d96,
        mid_getSystemResource_4b560f872f3037b3,
        mid_getSystemResourceAsStream_e48d48998e90da79,
        mid_getSystemResources_2e136456ddf0ab85,
        mid_getUnnamedModule_c94272da82329f0f,
        mid_isRegisteredAsParallelCapable_e470b6d9e0d979db,
        mid_loadClass_8cb3351ef7334fdc,
        mid_resources_1c57947609c2810a,
        mid_setClassAssertionStatus_d1dd1bdcf55f8f80,
        mid_setDefaultAssertionStatus_50a2e0b139e80a58,
        mid_setPackageAssertionStatus_d1dd1bdcf55f8f80,
        mid_loadClass_5e29079533cadb94,
        mid_definePackage_f74e2edfca0e8647,
        mid_getPackage_f7c808f242d7007d,
        mid_setSigners_da4a6a76a32f7871,
        mid_findResource_4b560f872f3037b3,
        mid_findResource_66fbe1c6454cadf1,
        mid_getClassLoadingLock_f3d00a864d7248c7,
        mid_findLoadedClass_8cb3351ef7334fdc,
        mid_findClass_8cb3351ef7334fdc,
        mid_findClass_cf078d88ae8c1f80,
        mid_resolveClass_f9fd73a09eca27dc,
        mid_defineClass_5be1a60ab65d3ae9,
        mid_defineClass_2bb354dcbda9167b,
        mid_defineClass_186acf264293ee56,
        mid_defineClass_624b759c8319ed76,
        mid_findSystemClass_8cb3351ef7334fdc,
        mid_findResources_2e136456ddf0ab85,
        mid_registerAsParallelCapable_e470b6d9e0d979db,
        mid_getPackages_24dcadba5c7fd8f6,
        mid_findLibrary_43625fc1c3d86afe,
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
