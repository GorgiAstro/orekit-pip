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
          mid_init$_e24b125c6ff6cc8c,
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
          mid_of_2ebba00158a62d33,
          mid_setSeed_d43202153dd284f7,
          mid_setSeed_8fd427ab23829bf5,
          mid_setSeed_f5bbab7e97879358,
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
