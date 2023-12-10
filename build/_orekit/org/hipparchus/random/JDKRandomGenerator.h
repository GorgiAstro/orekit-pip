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
          mid_init$_7ae3461a92a43152,
          mid_init$_ce6849a0938c2d76,
          mid_init$_fefb08975c10f0a1,
          mid_nextBoolean_e470b6d9e0d979db,
          mid_nextBytes_9c4b35f0a6dc87f3,
          mid_nextDouble_456d9a2f64d6b28d,
          mid_nextFloat_966c782d3223854d,
          mid_nextGaussian_456d9a2f64d6b28d,
          mid_nextInt_f2f64475e4580546,
          mid_nextInt_38565d58479aa24a,
          mid_nextLong_a27fc9afd27e559d,
          mid_setSeed_3b603738d1eb3233,
          mid_setSeed_0a2a1ac2721c0336,
          mid_setSeed_fefb08975c10f0a1,
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
