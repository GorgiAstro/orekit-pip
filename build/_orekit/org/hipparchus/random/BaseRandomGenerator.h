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
          mid_nextGaussian_b74f83833fdad017,
          mid_nextInt_0e7cf35192c3effe,
          mid_nextLong_9db63109f74a74fc,
          mid_setSeed_44ed599e93e8a30c,
          mid_setSeed_3d7dd2314a0dd456,
          mid_toString_1c1fa1e935d6cdcf,
          mid_clearCache_a1fa5dae97ea5ed2,
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
