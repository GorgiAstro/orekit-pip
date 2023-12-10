#ifndef java_util_Random_H
#define java_util_Random_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class DoubleStream;
    }
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Random : public ::java::lang::Object {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_fefb08975c10f0a1,
        mid_doubles_2c8690a58875e3ae,
        mid_doubles_19dd39eae6a70cf7,
        mid_doubles_253831d37af3b2cf,
        mid_doubles_ff691104e83f6c94,
        mid_nextBoolean_e470b6d9e0d979db,
        mid_nextBytes_9c4b35f0a6dc87f3,
        mid_nextDouble_456d9a2f64d6b28d,
        mid_nextFloat_966c782d3223854d,
        mid_nextGaussian_456d9a2f64d6b28d,
        mid_nextInt_f2f64475e4580546,
        mid_nextInt_38565d58479aa24a,
        mid_nextLong_a27fc9afd27e559d,
        mid_setSeed_fefb08975c10f0a1,
        mid_next_38565d58479aa24a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Random(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Random(const Random& obj) : ::java::lang::Object(obj) {}

      Random();
      Random(jlong);

      ::java::util::stream::DoubleStream doubles() const;
      ::java::util::stream::DoubleStream doubles(jlong) const;
      ::java::util::stream::DoubleStream doubles(jdouble, jdouble) const;
      ::java::util::stream::DoubleStream doubles(jlong, jdouble, jdouble) const;
      jboolean nextBoolean() const;
      void nextBytes(const JArray< jbyte > &) const;
      jdouble nextDouble() const;
      jfloat nextFloat() const;
      jdouble nextGaussian() const;
      jint nextInt() const;
      jint nextInt(jint) const;
      jlong nextLong() const;
      void setSeed(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Random);
    extern PyTypeObject *PY_TYPE(Random);

    class t_Random {
    public:
      PyObject_HEAD
      Random object;
      static PyObject *wrap_Object(const Random&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
