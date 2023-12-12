#ifndef org_hipparchus_random_HaltonSequenceGenerator_H
#define org_hipparchus_random_HaltonSequenceGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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

      class HaltonSequenceGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_init$_2ec9e030f61ba505,
          mid_getNextIndex_412668abc8d889e9,
          mid_nextVector_a53a7513ecedada2,
          mid_skipTo_1da5c9e77f24f269,
          mid_scramble_4885f823e425a625,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HaltonSequenceGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HaltonSequenceGenerator(const HaltonSequenceGenerator& obj) : ::java::lang::Object(obj) {}

        HaltonSequenceGenerator(jint);
        HaltonSequenceGenerator(jint, const JArray< jint > &, const JArray< jint > &);

        jint getNextIndex() const;
        JArray< jdouble > nextVector() const;
        JArray< jdouble > skipTo(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(HaltonSequenceGenerator);
      extern PyTypeObject *PY_TYPE(HaltonSequenceGenerator);

      class t_HaltonSequenceGenerator {
      public:
        PyObject_HEAD
        HaltonSequenceGenerator object;
        static PyObject *wrap_Object(const HaltonSequenceGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
