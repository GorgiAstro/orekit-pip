#ifndef org_hipparchus_random_HaltonSequenceGenerator_H
#define org_hipparchus_random_HaltonSequenceGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_init$_8fd427ab23829bf5,
          mid_init$_9466c0ef0b32e7e9,
          mid_getNextIndex_d6ab429752e7c267,
          mid_nextVector_be783177b060994b,
          mid_skipTo_81add9fc9d78d5b9,
          mid_scramble_00616f6c287fc4e7,
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
