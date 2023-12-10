#ifndef java_util_stream_Collectors_H
#define java_util_stream_Collectors_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace stream {

      class Collectors : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Collectors(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Collectors(const Collectors& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace stream {
      extern PyType_Def PY_TYPE_DEF(Collectors);
      extern PyTypeObject *PY_TYPE(Collectors);

      class t_Collectors {
      public:
        PyObject_HEAD
        Collectors object;
        static PyObject *wrap_Object(const Collectors&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
