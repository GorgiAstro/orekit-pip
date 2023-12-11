#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Module;
    class Class;
    class Package;
    class ClassNotFoundException;
    class String;
    class ClassLoader;
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
        mid_clearAssertionStatus_0640e6acf969ed28,
        mid_getDefinedPackage_7b9ea2e3cd9b2198,
        mid_getDefinedPackages_fd735c3a2f16936e,
        mid_getName_3cffd47377eca18a,
        mid_getParent_822bf82dfc5992ba,
        mid_getPlatformClassLoader_822bf82dfc5992ba,
        mid_getResource_b738586de9814931,
        mid_getResourceAsStream_425095ef57e6735b,
        mid_getResources_27bc01b0cf1a3695,
        mid_getSystemClassLoader_822bf82dfc5992ba,
        mid_getSystemResource_b738586de9814931,
        mid_getSystemResourceAsStream_425095ef57e6735b,
        mid_getSystemResources_27bc01b0cf1a3695,
        mid_getUnnamedModule_04458a8861f7bacc,
        mid_isRegisteredAsParallelCapable_89b302893bdbe1f1,
        mid_loadClass_33271d9fced271c1,
        mid_resources_0dc60653ff1ab3bd,
        mid_setClassAssertionStatus_e5ca4b97ee6bd2b6,
        mid_setDefaultAssertionStatus_ed2afdb8506b9742,
        mid_setPackageAssertionStatus_e5ca4b97ee6bd2b6,
        mid_loadClass_e6ece06a3060ddbb,
        mid_definePackage_9c42a69023400294,
        mid_getPackage_7b9ea2e3cd9b2198,
        mid_setSigners_d918cbcf7c43701a,
        mid_findResource_b738586de9814931,
        mid_findResource_a71fec3fc8c959f3,
        mid_getClassLoadingLock_86c4b8560f4aa70f,
        mid_findLoadedClass_33271d9fced271c1,
        mid_findClass_33271d9fced271c1,
        mid_findClass_ef42b063b49029ac,
        mid_resolveClass_80b724d415998d9f,
        mid_defineClass_3f2a7bee506c545c,
        mid_defineClass_792c4f29b3565d21,
        mid_defineClass_b7c35bde5241f9c4,
        mid_defineClass_4d1acd34d220744d,
        mid_findSystemClass_33271d9fced271c1,
        mid_findResources_27bc01b0cf1a3695,
        mid_registerAsParallelCapable_89b302893bdbe1f1,
        mid_getPackages_fd735c3a2f16936e,
        mid_findLibrary_60bb1b490b673cbf,
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
