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
          mid_init$_ff7cb6c242604316,
          mid_init$_d43202153dd284f7,
          mid_init$_8fd427ab23829bf5,
          mid_init$_f5bbab7e97879358,
          mid_nextInt_d6ab429752e7c267,
          mid_setSeed_d43202153dd284f7,
          mid_setSeed_8fd427ab23829bf5,
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
