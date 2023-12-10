#ifndef java_lang_Module_H
#define java_lang_Module_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ModuleLayer;
    class Module;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Module : public ::java::lang::Object {
     public:
      enum {
        mid_addExports_d00bb28b6bf61004,
        mid_addOpens_d00bb28b6bf61004,
        mid_addReads_5beabc3bba841aba,
        mid_addUses_769e242b0b3d2e5a,
        mid_canRead_f13ca49a12f5310f,
        mid_canUse_839caca7c078da68,
        mid_getClassLoader_da1c487fbe6ab900,
        mid_getLayer_1488df134b0cb760,
        mid_getName_11b109bd155ca898,
        mid_getPackages_015730311a5bacdc,
        mid_getResourceAsStream_d8c3e08e3826298a,
        mid_isExported_7edad2c2f64f4d68,
        mid_isExported_124835c369cc280b,
        mid_isNamed_b108b35ef48e27bd,
        mid_isOpen_7edad2c2f64f4d68,
        mid_isOpen_124835c369cc280b,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Module(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Module(const Module& obj) : ::java::lang::Object(obj) {}

      Module addExports(const ::java::lang::String &, const Module &) const;
      Module addOpens(const ::java::lang::String &, const Module &) const;
      Module addReads(const Module &) const;
      Module addUses(const ::java::lang::Class &) const;
      jboolean canRead(const Module &) const;
      jboolean canUse(const ::java::lang::Class &) const;
      ::java::lang::ClassLoader getClassLoader() const;
      ::java::lang::ModuleLayer getLayer() const;
      ::java::lang::String getName() const;
      ::java::util::Set getPackages() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      jboolean isExported(const ::java::lang::String &) const;
      jboolean isExported(const ::java::lang::String &, const Module &) const;
      jboolean isNamed() const;
      jboolean isOpen(const ::java::lang::String &) const;
      jboolean isOpen(const ::java::lang::String &, const Module &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Module);
    extern PyTypeObject *PY_TYPE(Module);

    class t_Module {
    public:
      PyObject_HEAD
      Module object;
      static PyObject *wrap_Object(const Module&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
