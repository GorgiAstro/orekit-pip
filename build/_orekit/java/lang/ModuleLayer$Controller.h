#ifndef java_lang_ModuleLayer$Controller_H
#define java_lang_ModuleLayer$Controller_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ModuleLayer;
    class Module;
    class Class;
    class ModuleLayer$Controller;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ModuleLayer$Controller : public ::java::lang::Object {
     public:
      enum {
        mid_addExports_25f0c9aa7b0809e8,
        mid_addOpens_25f0c9aa7b0809e8,
        mid_addReads_4e9bc11776f00fa2,
        mid_layer_b969436b816ffa6a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ModuleLayer$Controller(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ModuleLayer$Controller(const ModuleLayer$Controller& obj) : ::java::lang::Object(obj) {}

      ModuleLayer$Controller addExports(const ::java::lang::Module &, const ::java::lang::String &, const ::java::lang::Module &) const;
      ModuleLayer$Controller addOpens(const ::java::lang::Module &, const ::java::lang::String &, const ::java::lang::Module &) const;
      ModuleLayer$Controller addReads(const ::java::lang::Module &, const ::java::lang::Module &) const;
      ::java::lang::ModuleLayer layer() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ModuleLayer$Controller);
    extern PyTypeObject *PY_TYPE(ModuleLayer$Controller);

    class t_ModuleLayer$Controller {
    public:
      PyObject_HEAD
      ModuleLayer$Controller object;
      static PyObject *wrap_Object(const ModuleLayer$Controller&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
