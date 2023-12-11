#ifndef org_hipparchus_random_JDKRandomGenerator_H
#define org_hipparchus_random_JDKRandomGenerator_H

#include "org/hipparchus/random/IntRandomGenerator.h"

namespace java {
  namespace util {
    class Random;
  }
  namespace lang {
    class Class;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_9d6ab8c2b4bb997b,
          mid_init$_3cd6a6b354c6aa22,
          mid_nextBoolean_89b302893bdbe1f1,
          mid_nextBytes_d759c70c6670fd89,
          mid_nextDouble_557b8123390d8d0c,
          mid_nextFloat_04fe014f7609dc26,
          mid_nextGaussian_557b8123390d8d0c,
          mid_nextInt_412668abc8d889e9,
          mid_nextInt_0092017e99012694,
          mid_nextLong_9e26256fb0d384a2,
          mid_setSeed_ec63cb8a58ef5a54,
          mid_setSeed_a3da1a935cb37f7b,
          mid_setSeed_3cd6a6b354c6aa22,
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
