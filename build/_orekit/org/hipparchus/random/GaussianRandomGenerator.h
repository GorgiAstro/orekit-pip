#ifndef org_hipparchus_random_GaussianRandomGenerator_H
#define org_hipparchus_random_GaussianRandomGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
      class NormalizedRandomGenerator;
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

      class GaussianRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bb31e8cbfaf41e63,
          mid_nextNormalizedDouble_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GaussianRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GaussianRandomGenerator(const GaussianRandomGenerator& obj) : ::java::lang::Object(obj) {}

        GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator &);

        jdouble nextNormalizedDouble() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(GaussianRandomGenerator);
      extern PyTypeObject *PY_TYPE(GaussianRandomGenerator);

      class t_GaussianRandomGenerator {
      public:
        PyObject_HEAD
        GaussianRandomGenerator object;
        static PyObject *wrap_Object(const GaussianRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
