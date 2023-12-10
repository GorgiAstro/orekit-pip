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
          mid_nextBoolean_e470b6d9e0d979db,
          mid_nextBytes_9c4b35f0a6dc87f3,
          mid_nextBytes_125b1e9f043b29f8,
          mid_nextDouble_456d9a2f64d6b28d,
          mid_nextFloat_966c782d3223854d,
          mid_nextInt_f2f64475e4580546,
          mid_nextLong_a27fc9afd27e559d,
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
