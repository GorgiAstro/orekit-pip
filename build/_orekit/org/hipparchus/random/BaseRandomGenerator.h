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
          mid_nextGaussian_dff5885c2c873297,
          mid_nextInt_2235cd056f5a882b,
          mid_nextLong_02b241598e254a3f,
          mid_setSeed_99803b0791f320ff,
          mid_setSeed_3a8e7649f31fdb20,
          mid_toString_11b109bd155ca898,
          mid_clearCache_0fa09c18fee449d5,
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
