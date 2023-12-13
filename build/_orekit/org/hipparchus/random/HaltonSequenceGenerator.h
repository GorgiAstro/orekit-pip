#ifndef org_hipparchus_random_HaltonSequenceGenerator_H
#define org_hipparchus_random_HaltonSequenceGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomVectorGenerator;
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
          mid_init$_44ed599e93e8a30c,
          mid_init$_5f0ee0ef02547c61,
          mid_getNextIndex_55546ef6a647f39b,
          mid_nextVector_25e1757a36c4dde2,
          mid_skipTo_bb2a44a76ad252f7,
          mid_scramble_aad24acd6036a6f1,
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
