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
          mid_nextGaussian_9981f74b2d109da6,
          mid_nextInt_d938fc64e8c6df2d,
          mid_nextLong_1eaf6eb0a3f3163f,
          mid_setSeed_8fd427ab23829bf5,
          mid_setSeed_f5bbab7e97879358,
          mid_toString_d2c8eb4129821f0e,
          mid_clearCache_ff7cb6c242604316,
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
