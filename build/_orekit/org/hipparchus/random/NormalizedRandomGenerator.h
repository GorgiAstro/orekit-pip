#ifndef org_hipparchus_random_NormalizedRandomGenerator_H
#define org_hipparchus_random_NormalizedRandomGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class NormalizedRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_nextNormalizedDouble_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit NormalizedRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NormalizedRandomGenerator(const NormalizedRandomGenerator& obj) : ::java::lang::Object(obj) {}

        jdouble nextNormalizedDouble() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(NormalizedRandomGenerator);
      extern PyTypeObject *PY_TYPE(NormalizedRandomGenerator);

      class t_NormalizedRandomGenerator {
      public:
        PyObject_HEAD
        NormalizedRandomGenerator object;
        static PyObject *wrap_Object(const NormalizedRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
