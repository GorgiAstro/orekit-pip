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
        mid_addExports_768b07de71029a04,
        mid_addOpens_768b07de71029a04,
        mid_addReads_1632c3231c2d2707,
        mid_addUses_3988c968161dbc37,
        mid_canRead_f4ab9de57dd4131f,
        mid_canUse_0580a8a10aabb274,
        mid_getClassLoader_822bf82dfc5992ba,
        mid_getLayer_a9837dd004e81a19,
        mid_getName_3cffd47377eca18a,
        mid_getPackages_2dfcbd371d62f4e1,
        mid_getResourceAsStream_425095ef57e6735b,
        mid_isExported_fd2162b8a05a22fe,
        mid_isExported_e455305b1fe72883,
        mid_isNamed_89b302893bdbe1f1,
        mid_isOpen_fd2162b8a05a22fe,
        mid_isOpen_e455305b1fe72883,
        mid_toString_3cffd47377eca18a,
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
