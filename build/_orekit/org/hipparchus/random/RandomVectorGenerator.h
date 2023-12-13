#ifndef org_hipparchus_random_RandomVectorGenerator_H
#define org_hipparchus_random_RandomVectorGenerator_H

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

      class RandomVectorGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_nextVector_25e1757a36c4dde2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RandomVectorGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RandomVectorGenerator(const RandomVectorGenerator& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > nextVector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(RandomVectorGenerator);
      extern PyTypeObject *PY_TYPE(RandomVectorGenerator);

      class t_RandomVectorGenerator {
      public:
        PyObject_HEAD
        RandomVectorGenerator object;
        static PyObject *wrap_Object(const RandomVectorGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
