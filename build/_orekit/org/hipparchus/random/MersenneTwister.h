#ifndef org_hipparchus_random_MersenneTwister_H
#define org_hipparchus_random_MersenneTwister_H

#include "org/hipparchus/random/IntRandomGenerator.h"

namespace java {
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

      class MersenneTwister : public ::org::hipparchus::random::IntRandomGenerator {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_ec63cb8a58ef5a54,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_3cd6a6b354c6aa22,
          mid_nextInt_412668abc8d889e9,
          mid_setSeed_ec63cb8a58ef5a54,
          mid_setSeed_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MersenneTwister(jobject obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MersenneTwister(const MersenneTwister& obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {}

        MersenneTwister();
        MersenneTwister(const JArray< jint > &);
        MersenneTwister(jint);
        MersenneTwister(jlong);

        jint nextInt() const;
        void setSeed(const JArray< jint > &) const;
        void setSeed(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(MersenneTwister);
      extern PyTypeObject *PY_TYPE(MersenneTwister);

      class t_MersenneTwister {
      public:
        PyObject_HEAD
        MersenneTwister object;
        static PyObject *wrap_Object(const MersenneTwister&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
