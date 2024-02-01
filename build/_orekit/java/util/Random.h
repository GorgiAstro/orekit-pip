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
        mid_init$_ff7cb6c242604316,
        mid_init$_f5bbab7e97879358,
        mid_doubles_98f7f3ef9d3d1b57,
        mid_doubles_0b951659a4ffdc52,
        mid_doubles_f78d42f349780c18,
        mid_doubles_d304689c3764ed10,
        mid_nextBoolean_eee3de00fe971136,
        mid_nextBytes_bba2a19638de22ff,
        mid_nextDouble_9981f74b2d109da6,
        mid_nextFloat_0e3b995f823d65ff,
        mid_nextGaussian_9981f74b2d109da6,
        mid_nextInt_d6ab429752e7c267,
        mid_nextInt_d938fc64e8c6df2d,
        mid_nextLong_42c72b98e3c2e08a,
        mid_setSeed_f5bbab7e97879358,
        mid_next_d938fc64e8c6df2d,
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
