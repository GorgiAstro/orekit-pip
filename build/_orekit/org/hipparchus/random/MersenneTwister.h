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
          mid_init$_7ae3461a92a43152,
          mid_init$_3b603738d1eb3233,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_fefb08975c10f0a1,
          mid_nextInt_f2f64475e4580546,
          mid_setSeed_3b603738d1eb3233,
          mid_setSeed_0a2a1ac2721c0336,
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
