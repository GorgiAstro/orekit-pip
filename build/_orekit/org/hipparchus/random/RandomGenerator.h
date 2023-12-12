#ifndef org_hipparchus_random_RandomGenerator_H
#define org_hipparchus_random_RandomGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class RandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_nextBoolean_89b302893bdbe1f1,
          mid_nextBytes_d759c70c6670fd89,
          mid_nextBytes_ac782c7077255dd3,
          mid_nextDouble_557b8123390d8d0c,
          mid_nextFloat_04fe014f7609dc26,
          mid_nextGaussian_557b8123390d8d0c,
          mid_nextInt_412668abc8d889e9,
          mid_nextInt_0092017e99012694,
          mid_nextLong_9e26256fb0d384a2,
          mid_nextLong_f4ad805a81234b49,
          mid_setSeed_ec63cb8a58ef5a54,
          mid_setSeed_a3da1a935cb37f7b,
          mid_setSeed_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RandomGenerator(const RandomGenerator& obj) : ::java::lang::Object(obj) {}

        jboolean nextBoolean() const;
        void nextBytes(const JArray< jbyte > &) const;
        void nextBytes(const JArray< jbyte > &, jint, jint) const;
        jdouble nextDouble() const;
        jfloat nextFloat() const;
        jdouble nextGaussian() const;
        jint nextInt() const;
        jint nextInt(jint) const;
        jlong nextLong() const;
        jlong nextLong(jlong) const;
        void setSeed(const JArray< jint > &) const;
        void setSeed(jint) const;
        void setSeed(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(RandomGenerator);
      extern PyTypeObject *PY_TYPE(RandomGenerator);

      class t_RandomGenerator {
      public:
        PyObject_HEAD
        RandomGenerator object;
        static PyObject *wrap_Object(const RandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
