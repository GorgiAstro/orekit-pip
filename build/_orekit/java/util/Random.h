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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_3d7dd2314a0dd456,
        mid_doubles_48a8801871033f9c,
        mid_doubles_99f9dfe38cac6ad9,
        mid_doubles_4f4c39bddcd90e90,
        mid_doubles_5cebfb9baee32207,
        mid_nextBoolean_9ab94ac1dc23b105,
        mid_nextBytes_459771b03534868e,
        mid_nextDouble_b74f83833fdad017,
        mid_nextFloat_1fb1bf0772ae5db7,
        mid_nextGaussian_b74f83833fdad017,
        mid_nextInt_55546ef6a647f39b,
        mid_nextInt_0e7cf35192c3effe,
        mid_nextLong_6c0ce7e438e5ded4,
        mid_setSeed_3d7dd2314a0dd456,
        mid_next_0e7cf35192c3effe,
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
