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
    class ClassNotFoundException;
    class Package;
    class Module;
    class Class;
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
        mid_clearAssertionStatus_ff7cb6c242604316,
        mid_getDefinedPackage_400c3bbc8924b246,
        mid_getDefinedPackages_37403be403c5ea81,
        mid_getName_d2c8eb4129821f0e,
        mid_getParent_7e232a6d8e4f63bc,
        mid_getPlatformClassLoader_7e232a6d8e4f63bc,
        mid_getResource_549d2318dcb16c72,
        mid_getResourceAsStream_05f5377821499489,
        mid_getResources_83c9a88b2512cc85,
        mid_getSystemClassLoader_7e232a6d8e4f63bc,
        mid_getSystemResource_549d2318dcb16c72,
        mid_getSystemResourceAsStream_05f5377821499489,
        mid_getSystemResources_83c9a88b2512cc85,
        mid_getUnnamedModule_61f66fcaa02aad4a,
        mid_isRegisteredAsParallelCapable_eee3de00fe971136,
        mid_loadClass_460cf69d907ca8bf,
        mid_resources_37029a1f69d756ec,
        mid_setClassAssertionStatus_c5d48f261709aa3e,
        mid_setDefaultAssertionStatus_b35db77cae58639e,
        mid_setPackageAssertionStatus_c5d48f261709aa3e,
        mid_loadClass_8cea458b2b4a9ff2,
        mid_definePackage_665f8f02953bc652,
        mid_getPackage_400c3bbc8924b246,
        mid_setSigners_8f536d136f83ff79,
        mid_findResource_2e7511d81e1f9d6e,
        mid_findResource_549d2318dcb16c72,
        mid_getClassLoadingLock_bb1ff484ae64c57e,
        mid_findClass_8cfd7b4ac04c4786,
        mid_findClass_460cf69d907ca8bf,
        mid_defineClass_ce1bd2ffaeb48e03,
        mid_defineClass_76b1b0365f5b9a37,
        mid_defineClass_5faa6bc37a7c1e82,
        mid_defineClass_36bccabffe702045,
        mid_resolveClass_52aa27780ff57435,
        mid_findSystemClass_460cf69d907ca8bf,
        mid_findLoadedClass_460cf69d907ca8bf,
        mid_findResources_83c9a88b2512cc85,
        mid_registerAsParallelCapable_eee3de00fe971136,
        mid_getPackages_37403be403c5ea81,
        mid_findLibrary_95277969d373e11f,
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
