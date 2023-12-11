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
        mid_init$_0640e6acf969ed28,
        mid_init$_3cd6a6b354c6aa22,
        mid_doubles_78c9b5d7fa0dbac0,
        mid_doubles_4761ea9169c0223a,
        mid_doubles_3df00f303664137a,
        mid_doubles_ffac4831b77940ef,
        mid_nextBoolean_89b302893bdbe1f1,
        mid_nextBytes_d759c70c6670fd89,
        mid_nextDouble_557b8123390d8d0c,
        mid_nextFloat_04fe014f7609dc26,
        mid_nextGaussian_557b8123390d8d0c,
        mid_nextInt_412668abc8d889e9,
        mid_nextInt_0092017e99012694,
        mid_nextLong_9e26256fb0d384a2,
        mid_setSeed_3cd6a6b354c6aa22,
        mid_next_0092017e99012694,
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
