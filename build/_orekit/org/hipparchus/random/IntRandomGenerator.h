#ifndef org_hipparchus_random_IntRandomGenerator_H
#define org_hipparchus_random_IntRandomGenerator_H

#include "org/hipparchus/random/BaseRandomGenerator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class IntRandomGenerator : public ::org::hipparchus::random::BaseRandomGenerator {
       public:
        enum {
          mid_nextBoolean_eee3de00fe971136,
          mid_nextBytes_bba2a19638de22ff,
          mid_nextBytes_e4288ba5fbf20d28,
          mid_nextDouble_9981f74b2d109da6,
          mid_nextFloat_0e3b995f823d65ff,
          mid_nextInt_d6ab429752e7c267,
          mid_nextLong_42c72b98e3c2e08a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntRandomGenerator(jobject obj) : ::org::hipparchus::random::BaseRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntRandomGenerator(const IntRandomGenerator& obj) : ::org::hipparchus::random::BaseRandomGenerator(obj) {}

        jboolean nextBoolean() const;
        void nextBytes(const JArray< jbyte > &) const;
        void nextBytes(const JArray< jbyte > &, jint, jint) const;
        jdouble nextDouble() const;
        jfloat nextFloat() const;
        jint nextInt() const;
        jlong nextLong() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(IntRandomGenerator);
      extern PyTypeObject *PY_TYPE(IntRandomGenerator);

      class t_IntRandomGenerator {
      public:
        PyObject_HEAD
        IntRandomGenerator object;
        static PyObject *wrap_Object(const IntRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
