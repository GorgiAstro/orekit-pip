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
          mid_init$_ff7cb6c242604316,
          mid_init$_a74deff2feda424a,
          mid_init$_f5bbab7e97879358,
          mid_nextBoolean_eee3de00fe971136,
          mid_nextBytes_bba2a19638de22ff,
          mid_nextDouble_9981f74b2d109da6,
          mid_nextFloat_0e3b995f823d65ff,
          mid_nextGaussian_9981f74b2d109da6,
          mid_nextInt_d6ab429752e7c267,
          mid_nextInt_d938fc64e8c6df2d,
          mid_nextLong_42c72b98e3c2e08a,
          mid_setSeed_d43202153dd284f7,
          mid_setSeed_8fd427ab23829bf5,
          mid_setSeed_f5bbab7e97879358,
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
