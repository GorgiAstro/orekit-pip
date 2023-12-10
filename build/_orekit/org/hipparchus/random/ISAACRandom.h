#ifndef org_hipparchus_random_ISAACRandom_H
#define org_hipparchus_random_ISAACRandom_H

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

      class ISAACRandom : public ::org::hipparchus::random::IntRandomGenerator {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_3b603738d1eb3233,
          mid_init$_fefb08975c10f0a1,
          mid_nextInt_f2f64475e4580546,
          mid_setSeed_3b603738d1eb3233,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ISAACRandom(jobject obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ISAACRandom(const ISAACRandom& obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {}

        ISAACRandom();
        ISAACRandom(const JArray< jint > &);
        ISAACRandom(jlong);

        jint nextInt() const;
        void setSeed(const JArray< jint > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(ISAACRandom);
      extern PyTypeObject *PY_TYPE(ISAACRandom);

      class t_ISAACRandom {
      public:
        PyObject_HEAD
        ISAACRandom object;
        static PyObject *wrap_Object(const ISAACRandom&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
