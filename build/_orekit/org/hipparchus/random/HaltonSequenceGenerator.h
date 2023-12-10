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
          mid_init$_0a2a1ac2721c0336,
          mid_init$_ac16192eaa70c1a5,
          mid_getNextIndex_f2f64475e4580546,
          mid_nextVector_7cdc325af0834901,
          mid_skipTo_eb9cceadce1b2217,
          mid_scramble_0877eb3f50bacbc0,
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
