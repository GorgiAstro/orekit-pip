#ifndef org_hipparchus_random_SynchronizedRandomGenerator_H
#define org_hipparchus_random_SynchronizedRandomGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class SynchronizedRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bb31e8cbfaf41e63,
          mid_nextBoolean_e470b6d9e0d979db,
          mid_nextBytes_9c4b35f0a6dc87f3,
          mid_nextBytes_125b1e9f043b29f8,
          mid_nextDouble_456d9a2f64d6b28d,
          mid_nextFloat_966c782d3223854d,
          mid_nextGaussian_456d9a2f64d6b28d,
          mid_nextInt_f2f64475e4580546,
          mid_nextInt_38565d58479aa24a,
          mid_nextLong_a27fc9afd27e559d,
          mid_nextLong_955f7541fca701ab,
          mid_setSeed_3b603738d1eb3233,
          mid_setSeed_0a2a1ac2721c0336,
          mid_setSeed_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SynchronizedRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SynchronizedRandomGenerator(const SynchronizedRandomGenerator& obj) : ::java::lang::Object(obj) {}

        SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator &);

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
      extern PyType_Def PY_TYPE_DEF(SynchronizedRandomGenerator);
      extern PyTypeObject *PY_TYPE(SynchronizedRandomGenerator);

      class t_SynchronizedRandomGenerator {
      public:
        PyObject_HEAD
        SynchronizedRandomGenerator object;
        static PyObject *wrap_Object(const SynchronizedRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
