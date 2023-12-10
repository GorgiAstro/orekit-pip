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
          mid_init$_0fa09c18fee449d5,
          mid_init$_0db4beae88034cd6,
          mid_init$_3a8e7649f31fdb20,
          mid_nextBoolean_b108b35ef48e27bd,
          mid_nextBytes_20012b3010a39c05,
          mid_nextDouble_dff5885c2c873297,
          mid_nextFloat_5adccb493ada08e8,
          mid_nextGaussian_dff5885c2c873297,
          mid_nextInt_570ce0828f81a2c1,
          mid_nextInt_2235cd056f5a882b,
          mid_nextLong_492808a339bfa35f,
          mid_setSeed_d147d7ce001e2d45,
          mid_setSeed_99803b0791f320ff,
          mid_setSeed_3a8e7649f31fdb20,
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
