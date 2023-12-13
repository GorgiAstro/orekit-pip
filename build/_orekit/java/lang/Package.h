#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class Package;
    class Class;
    class NumberFormatException;
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
        mid_getImplementationTitle_1c1fa1e935d6cdcf,
        mid_getImplementationVendor_1c1fa1e935d6cdcf,
        mid_getImplementationVersion_1c1fa1e935d6cdcf,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getPackage_ea8f0e6057ebcb3a,
        mid_getPackages_4ece9e113339960d,
        mid_getSpecificationTitle_1c1fa1e935d6cdcf,
        mid_getSpecificationVendor_1c1fa1e935d6cdcf,
        mid_getSpecificationVersion_1c1fa1e935d6cdcf,
        mid_hashCode_55546ef6a647f39b,
        mid_isCompatibleWith_cde6b28e15c96b75,
        mid_isSealed_9ab94ac1dc23b105,
        mid_isSealed_72310db42813c777,
        mid_toString_1c1fa1e935d6cdcf,
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
