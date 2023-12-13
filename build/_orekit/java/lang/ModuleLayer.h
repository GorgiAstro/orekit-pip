#ifndef java_lang_ModuleLayer_H
#define java_lang_ModuleLayer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ModuleLayer;
    class ModuleLayer$Controller;
    class Module;
    class Class;
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
        mid_boot_c147713285b11692,
        mid_empty_c147713285b11692,
        mid_findLoader_7980adf98b67e930,
        mid_findModule_fc4fec43e040d30a,
        mid_modules_7e8f11dd23d1142c,
        mid_parents_e62d3bb06d56d7e3,
        mid_toString_1c1fa1e935d6cdcf,
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
