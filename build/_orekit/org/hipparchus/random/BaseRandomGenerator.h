#ifndef org_hipparchus_random_BaseRandomGenerator_H
#define org_hipparchus_random_BaseRandomGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class BaseRandomGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_nextGaussian_456d9a2f64d6b28d,
          mid_nextInt_38565d58479aa24a,
          mid_nextLong_955f7541fca701ab,
          mid_setSeed_0a2a1ac2721c0336,
          mid_setSeed_fefb08975c10f0a1,
          mid_toString_0090f7797e403f43,
          mid_clearCache_7ae3461a92a43152,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BaseRandomGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BaseRandomGenerator(const BaseRandomGenerator& obj) : ::java::lang::Object(obj) {}

        jdouble nextGaussian() const;
        jint nextInt(jint) const;
        jlong nextLong(jlong) const;
        void setSeed(jint) const;
        void setSeed(jlong) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(BaseRandomGenerator);
      extern PyTypeObject *PY_TYPE(BaseRandomGenerator);

      class t_BaseRandomGenerator {
      public:
        PyObject_HEAD
        BaseRandomGenerator object;
        static PyObject *wrap_Object(const BaseRandomGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
