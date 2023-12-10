#ifndef java_util_Random_H
#define java_util_Random_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class DoubleStream;
    }
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
        mid_init$_0fa09c18fee449d5,
        mid_init$_3a8e7649f31fdb20,
        mid_doubles_0636ae0567d24d63,
        mid_doubles_b87abe13a25ee77e,
        mid_doubles_68977be6cce7f15f,
        mid_doubles_233d23af63f8a935,
        mid_nextBoolean_b108b35ef48e27bd,
        mid_nextBytes_20012b3010a39c05,
        mid_nextDouble_dff5885c2c873297,
        mid_nextFloat_5adccb493ada08e8,
        mid_nextGaussian_dff5885c2c873297,
        mid_nextInt_570ce0828f81a2c1,
        mid_nextInt_2235cd056f5a882b,
        mid_nextLong_492808a339bfa35f,
        mid_setSeed_3a8e7649f31fdb20,
        mid_next_2235cd056f5a882b,
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
