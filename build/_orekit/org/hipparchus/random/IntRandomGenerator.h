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
          mid_nextBoolean_9ab94ac1dc23b105,
          mid_nextBytes_459771b03534868e,
          mid_nextBytes_a9fddc59b07ce512,
          mid_nextDouble_b74f83833fdad017,
          mid_nextFloat_1fb1bf0772ae5db7,
          mid_nextInt_55546ef6a647f39b,
          mid_nextLong_6c0ce7e438e5ded4,
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
