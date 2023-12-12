#ifndef org_hipparchus_random_StableRandomGenerator_H
#define org_hipparchus_random_StableRandomGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace random {
      class NormalizedRandomGenerator;
      class RandomGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class StableRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7264f2f4bdb6e6d3,
          mid_nextNormalizedDouble_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StableRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StableRandomGenerator(const StableRandomGenerator& obj) : ::java::lang::Object(obj) {}

        StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator &, jdouble, jdouble);

        jdouble nextNormalizedDouble() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(StableRandomGenerator);
      extern PyTypeObject *PY_TYPE(StableRandomGenerator);

      class t_StableRandomGenerator {
      public:
        PyObject_HEAD
        StableRandomGenerator object;
        static PyObject *wrap_Object(const StableRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
