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
          mid_init$_a351c1fd6920cdee,
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
          mid_of_3ce1e585da81107a,
          mid_setSeed_d147d7ce001e2d45,
          mid_setSeed_99803b0791f320ff,
          mid_setSeed_3a8e7649f31fdb20,
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
