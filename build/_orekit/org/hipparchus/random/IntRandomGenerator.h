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
          mid_nextBoolean_89b302893bdbe1f1,
          mid_nextBytes_d759c70c6670fd89,
          mid_nextBytes_ac782c7077255dd3,
          mid_nextDouble_557b8123390d8d0c,
          mid_nextFloat_04fe014f7609dc26,
          mid_nextInt_412668abc8d889e9,
          mid_nextLong_9e26256fb0d384a2,
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
