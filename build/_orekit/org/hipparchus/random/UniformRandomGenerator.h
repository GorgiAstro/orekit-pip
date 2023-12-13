#ifndef org_hipparchus_random_UniformRandomGenerator_H
#define org_hipparchus_random_UniformRandomGenerator_H

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

      class UniformRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f1c8159898f25396,
          mid_nextNormalizedDouble_b74f83833fdad017,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UniformRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UniformRandomGenerator(const UniformRandomGenerator& obj) : ::java::lang::Object(obj) {}

        UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator &);

        jdouble nextNormalizedDouble() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(UniformRandomGenerator);
      extern PyTypeObject *PY_TYPE(UniformRandomGenerator);

      class t_UniformRandomGenerator {
      public:
        PyObject_HEAD
        UniformRandomGenerator object;
        static PyObject *wrap_Object(const UniformRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
