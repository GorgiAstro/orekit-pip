#ifndef java_util_function_IntConsumer_H
#define java_util_function_IntConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class IntConsumer;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class IntConsumer : public ::java::lang::Object {
       public:
        enum {
          mid_accept_0a2a1ac2721c0336,
          mid_andThen_bec3d71fc5873ec1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntConsumer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntConsumer(const IntConsumer& obj) : ::java::lang::Object(obj) {}

        void accept(jint) const;
        IntConsumer andThen(const IntConsumer &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntConsumer);
      extern PyTypeObject *PY_TYPE(IntConsumer);

      class t_IntConsumer {
      public:
        PyObject_HEAD
        IntConsumer object;
        static PyObject *wrap_Object(const IntConsumer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
