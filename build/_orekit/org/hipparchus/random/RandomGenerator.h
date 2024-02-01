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
          mid_nextBoolean_eee3de00fe971136,
          mid_nextBytes_bba2a19638de22ff,
          mid_nextBytes_e4288ba5fbf20d28,
          mid_nextDouble_9981f74b2d109da6,
          mid_nextFloat_0e3b995f823d65ff,
          mid_nextGaussian_9981f74b2d109da6,
          mid_nextInt_d6ab429752e7c267,
          mid_nextInt_d938fc64e8c6df2d,
          mid_nextLong_42c72b98e3c2e08a,
          mid_nextLong_1eaf6eb0a3f3163f,
          mid_setSeed_d43202153dd284f7,
          mid_setSeed_8fd427ab23829bf5,
          mid_setSeed_f5bbab7e97879358,
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
