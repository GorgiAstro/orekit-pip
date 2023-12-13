#ifndef org_hipparchus_random_UncorrelatedRandomVectorGenerator_H
#define org_hipparchus_random_UncorrelatedRandomVectorGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
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

      class UncorrelatedRandomVectorGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_fcdca7d25ee46770,
          mid_init$_6227cdf98fbe4b91,
          mid_nextVector_25e1757a36c4dde2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UncorrelatedRandomVectorGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UncorrelatedRandomVectorGenerator(const UncorrelatedRandomVectorGenerator& obj) : ::java::lang::Object(obj) {}

        UncorrelatedRandomVectorGenerator(jint, const ::org::hipparchus::random::NormalizedRandomGenerator &);
        UncorrelatedRandomVectorGenerator(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::hipparchus::random::NormalizedRandomGenerator &);

        JArray< jdouble > nextVector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(UncorrelatedRandomVectorGenerator);
      extern PyTypeObject *PY_TYPE(UncorrelatedRandomVectorGenerator);

      class t_UncorrelatedRandomVectorGenerator {
      public:
        PyObject_HEAD
        UncorrelatedRandomVectorGenerator object;
        static PyObject *wrap_Object(const UncorrelatedRandomVectorGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
