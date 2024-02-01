#ifndef java_lang_ModuleLayer$Controller_H
#define java_lang_ModuleLayer$Controller_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ModuleLayer;
    class ModuleLayer$Controller;
    class Module;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ModuleLayer$Controller : public ::java::lang::Object {
     public:
      enum {
        mid_addExports_64cfb72a8963fcfe,
        mid_addOpens_64cfb72a8963fcfe,
        mid_addReads_aa67be6bca534539,
        mid_layer_b270adc69fca1f17,
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
