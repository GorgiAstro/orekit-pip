#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class Class;
    class Package;
    class String;
    class NumberFormatException;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Package : public ::java::lang::NamedPackage {
     public:
      enum {
        mid_getImplementationTitle_3cffd47377eca18a,
        mid_getImplementationVendor_3cffd47377eca18a,
        mid_getImplementationVersion_3cffd47377eca18a,
        mid_getName_3cffd47377eca18a,
        mid_getPackage_7b9ea2e3cd9b2198,
        mid_getPackages_fd735c3a2f16936e,
        mid_getSpecificationTitle_3cffd47377eca18a,
        mid_getSpecificationVendor_3cffd47377eca18a,
        mid_getSpecificationVersion_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_isCompatibleWith_fd2162b8a05a22fe,
        mid_isSealed_89b302893bdbe1f1,
        mid_isSealed_f24d92f382df2fc3,
        mid_toString_3cffd47377eca18a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Package(jobject obj) : ::java::lang::NamedPackage(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Package(const Package& obj) : ::java::lang::NamedPackage(obj) {}

      ::java::lang::String getImplementationTitle() const;
      ::java::lang::String getImplementationVendor() const;
      ::java::lang::String getImplementationVersion() const;
      ::java::lang::String getName() const;
      static Package getPackage(const ::java::lang::String &);
      static JArray< Package > getPackages();
      ::java::lang::String getSpecificationTitle() const;
      ::java::lang::String getSpecificationVendor() const;
      ::java::lang::String getSpecificationVersion() const;
      jint hashCode() const;
      jboolean isCompatibleWith(const ::java::lang::String &) const;
      jboolean isSealed() const;
      jboolean isSealed(const ::java::net::URL &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Package);
    extern PyTypeObject *PY_TYPE(Package);

    class t_Package {
    public:
      PyObject_HEAD
      Package object;
      static PyObject *wrap_Object(const Package&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
