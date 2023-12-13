#ifndef org_hipparchus_random_JDKRandomGenerator_H
#define org_hipparchus_random_JDKRandomGenerator_H

#include "org/hipparchus/random/IntRandomGenerator.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Random;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class JDKRandomGenerator : public ::org::hipparchus::random::IntRandomGenerator {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_61462ed9aef3cca2,
          mid_init$_3d7dd2314a0dd456,
          mid_nextBoolean_9ab94ac1dc23b105,
          mid_nextBytes_459771b03534868e,
          mid_nextDouble_b74f83833fdad017,
          mid_nextFloat_1fb1bf0772ae5db7,
          mid_nextGaussian_b74f83833fdad017,
          mid_nextInt_55546ef6a647f39b,
          mid_nextInt_0e7cf35192c3effe,
          mid_nextLong_6c0ce7e438e5ded4,
          mid_setSeed_86a2769cb881d388,
          mid_setSeed_44ed599e93e8a30c,
          mid_setSeed_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JDKRandomGenerator(jobject obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JDKRandomGenerator(const JDKRandomGenerator& obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {}

        JDKRandomGenerator();
        JDKRandomGenerator(const ::java::util::Random &);
        JDKRandomGenerator(jlong);

        jboolean nextBoolean() const;
        void nextBytes(const JArray< jbyte > &) const;
        jdouble nextDouble() const;
        jfloat nextFloat() const;
        jdouble nextGaussian() const;
        jint nextInt() const;
        jint nextInt(jint) const;
        jlong nextLong() const;
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
      extern PyType_Def PY_TYPE_DEF(JDKRandomGenerator);
      extern PyTypeObject *PY_TYPE(JDKRandomGenerator);

      class t_JDKRandomGenerator {
      public:
        PyObject_HEAD
        JDKRandomGenerator object;
        static PyObject *wrap_Object(const JDKRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
