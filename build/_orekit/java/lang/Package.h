#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Class;
    class Package;
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
        mid_getImplementationTitle_11b109bd155ca898,
        mid_getImplementationVendor_11b109bd155ca898,
        mid_getImplementationVersion_11b109bd155ca898,
        mid_getName_11b109bd155ca898,
        mid_getPackage_2ebccdeed255784a,
        mid_getPackages_23df86f75843b87b,
        mid_getSpecificationTitle_11b109bd155ca898,
        mid_getSpecificationVendor_11b109bd155ca898,
        mid_getSpecificationVersion_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_isCompatibleWith_7edad2c2f64f4d68,
        mid_isSealed_b108b35ef48e27bd,
        mid_isSealed_c31132c160c2df88,
        mid_toString_11b109bd155ca898,
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
