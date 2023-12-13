#ifndef org_hipparchus_random_RandomAdaptor_H
#define org_hipparchus_random_RandomAdaptor_H

#include "java/util/Random.h"

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

      class RandomAdaptor : public ::java::util::Random {
       public:
        enum {
          mid_init$_f1c8159898f25396,
          mid_nextBoolean_9ab94ac1dc23b105,
          mid_nextBytes_459771b03534868e,
          mid_nextBytes_a9fddc59b07ce512,
          mid_nextDouble_b74f83833fdad017,
          mid_nextFloat_1fb1bf0772ae5db7,
          mid_nextGaussian_b74f83833fdad017,
          mid_nextInt_55546ef6a647f39b,
          mid_nextInt_0e7cf35192c3effe,
          mid_nextLong_6c0ce7e438e5ded4,
          mid_nextLong_9db63109f74a74fc,
          mid_of_08644760e350d382,
          mid_setSeed_86a2769cb881d388,
          mid_setSeed_44ed599e93e8a30c,
          mid_setSeed_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RandomAdaptor(jobject obj) : ::java::util::Random(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RandomAdaptor(const RandomAdaptor& obj) : ::java::util::Random(obj) {}

        RandomAdaptor(const ::org::hipparchus::random::RandomGenerator &);

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
        static ::java::util::Random of(const ::org::hipparchus::random::RandomGenerator &);
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
      extern PyType_Def PY_TYPE_DEF(RandomAdaptor);
      extern PyTypeObject *PY_TYPE(RandomAdaptor);

      class t_RandomAdaptor {
      public:
        PyObject_HEAD
        RandomAdaptor object;
        static PyObject *wrap_Object(const RandomAdaptor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
