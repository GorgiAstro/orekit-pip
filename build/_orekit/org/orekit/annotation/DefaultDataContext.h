#ifndef org_orekit_annotation_DefaultDataContext_H
#define org_orekit_annotation_DefaultDataContext_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace annotation {

      class DefaultDataContext : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DefaultDataContext(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DefaultDataContext(const DefaultDataContext& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace annotation {
      extern PyType_Def PY_TYPE_DEF(DefaultDataContext);
      extern PyTypeObject *PY_TYPE(DefaultDataContext);

      class t_DefaultDataContext {
      public:
        PyObject_HEAD
        DefaultDataContext object;
        static PyObject *wrap_Object(const DefaultDataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
