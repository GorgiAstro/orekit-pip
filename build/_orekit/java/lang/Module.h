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
    class InputStream;
    class IOException;
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
        mid_addExports_d9074c75ac59e276,
        mid_addOpens_d9074c75ac59e276,
        mid_addReads_383fc8aab10c350a,
        mid_addUses_bb473f7885ba10f9,
        mid_canRead_cc1516eb3a5c7d9f,
        mid_canUse_a24f4963f111aa48,
        mid_getClassLoader_fb951be34fc77929,
        mid_getLayer_c147713285b11692,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getPackages_7e8f11dd23d1142c,
        mid_getResourceAsStream_6831515bfd9973e1,
        mid_isExported_cde6b28e15c96b75,
        mid_isExported_879a9d39890cfffe,
        mid_isNamed_9ab94ac1dc23b105,
        mid_isOpen_cde6b28e15c96b75,
        mid_isOpen_879a9d39890cfffe,
        mid_toString_1c1fa1e935d6cdcf,
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
