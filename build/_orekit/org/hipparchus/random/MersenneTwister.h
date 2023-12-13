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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_86a2769cb881d388,
          mid_init$_44ed599e93e8a30c,
          mid_init$_3d7dd2314a0dd456,
          mid_nextInt_55546ef6a647f39b,
          mid_setSeed_86a2769cb881d388,
          mid_setSeed_44ed599e93e8a30c,
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
