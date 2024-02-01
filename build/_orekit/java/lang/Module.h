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
        mid_addExports_fa179762981b12cb,
        mid_addOpens_fa179762981b12cb,
        mid_addReads_02bb0c323bdfc90e,
        mid_addUses_b496a94db6cd6bc6,
        mid_canRead_1b3f90ed17e1fa61,
        mid_canUse_2d405d48789924af,
        mid_getClassLoader_7e232a6d8e4f63bc,
        mid_getLayer_b270adc69fca1f17,
        mid_getName_d2c8eb4129821f0e,
        mid_getPackages_6b191a9b12c1004b,
        mid_getResourceAsStream_05f5377821499489,
        mid_isExported_df4c65b2aede5c41,
        mid_isExported_b16a7971c55e163f,
        mid_isNamed_eee3de00fe971136,
        mid_isOpen_df4c65b2aede5c41,
        mid_isOpen_b16a7971c55e163f,
        mid_toString_d2c8eb4129821f0e,
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
