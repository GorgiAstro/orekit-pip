#ifndef java_lang_ModuleLayer_H
#define java_lang_ModuleLayer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ModuleLayer;
    class Module;
    class Class;
    class ModuleLayer$Controller;
    class String;
    class ClassLoader;
  }
  namespace util {
    class List;
    class Optional;
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ModuleLayer : public ::java::lang::Object {
     public:
      enum {
        mid_boot_1488df134b0cb760,
        mid_empty_1488df134b0cb760,
        mid_findLoader_b64713dc34e37a10,
        mid_findModule_440b7941ab9a8af2,
        mid_modules_015730311a5bacdc,
        mid_parents_2afa36052df4765d,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ModuleLayer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ModuleLayer(const ModuleLayer& obj) : ::java::lang::Object(obj) {}

      static ModuleLayer boot();
      static ModuleLayer empty();
      ::java::lang::ClassLoader findLoader(const ::java::lang::String &) const;
      ::java::util::Optional findModule(const ::java::lang::String &) const;
      ::java::util::Set modules() const;
      ::java::util::List parents() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ModuleLayer);
    extern PyTypeObject *PY_TYPE(ModuleLayer);

    class t_ModuleLayer {
    public:
      PyObject_HEAD
      ModuleLayer object;
      static PyObject *wrap_Object(const ModuleLayer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
