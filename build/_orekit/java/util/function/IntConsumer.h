#ifndef java_util_function_IntConsumer_H
#define java_util_function_IntConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class IntConsumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class IntConsumer : public ::java::lang::Object {
       public:
        enum {
          mid_accept_8fd427ab23829bf5,
          mid_andThen_9fd967b7c66352b9,
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
