#ifndef java_util_function_DoubleConsumer_H
#define java_util_function_DoubleConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class DoubleConsumer;
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

      class DoubleConsumer : public ::java::lang::Object {
       public:
        enum {
          mid_accept_8ba9fe7a847cecad,
          mid_andThen_2b5fdff37f9906b0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoubleConsumer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoubleConsumer(const DoubleConsumer& obj) : ::java::lang::Object(obj) {}

        void accept(jdouble) const;
        DoubleConsumer andThen(const DoubleConsumer &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(DoubleConsumer);
      extern PyTypeObject *PY_TYPE(DoubleConsumer);

      class t_DoubleConsumer {
      public:
        PyObject_HEAD
        DoubleConsumer object;
        static PyObject *wrap_Object(const DoubleConsumer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
