#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class Package;
    class NumberFormatException;
    class Class;
    class String;
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
        mid_getImplementationTitle_d2c8eb4129821f0e,
        mid_getImplementationVendor_d2c8eb4129821f0e,
        mid_getImplementationVersion_d2c8eb4129821f0e,
        mid_getName_d2c8eb4129821f0e,
        mid_getPackage_400c3bbc8924b246,
        mid_getPackages_37403be403c5ea81,
        mid_getSpecificationTitle_d2c8eb4129821f0e,
        mid_getSpecificationVendor_d2c8eb4129821f0e,
        mid_getSpecificationVersion_d2c8eb4129821f0e,
        mid_hashCode_d6ab429752e7c267,
        mid_isCompatibleWith_df4c65b2aede5c41,
        mid_isSealed_eee3de00fe971136,
        mid_isSealed_64047ecd76edcfe8,
        mid_toString_d2c8eb4129821f0e,
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
