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
          mid_nextBoolean_b108b35ef48e27bd,
          mid_nextBytes_20012b3010a39c05,
          mid_nextBytes_d7af9aedcdd3845b,
          mid_nextDouble_dff5885c2c873297,
          mid_nextFloat_5adccb493ada08e8,
          mid_nextGaussian_dff5885c2c873297,
          mid_nextInt_570ce0828f81a2c1,
          mid_nextInt_2235cd056f5a882b,
          mid_nextLong_492808a339bfa35f,
          mid_nextLong_02b241598e254a3f,
          mid_setSeed_d147d7ce001e2d45,
          mid_setSeed_99803b0791f320ff,
          mid_setSeed_3a8e7649f31fdb20,
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
