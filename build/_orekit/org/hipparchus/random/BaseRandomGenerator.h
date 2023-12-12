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
          mid_nextGaussian_557b8123390d8d0c,
          mid_nextInt_0092017e99012694,
          mid_nextLong_f4ad805a81234b49,
          mid_setSeed_a3da1a935cb37f7b,
          mid_setSeed_3cd6a6b354c6aa22,
          mid_toString_3cffd47377eca18a,
          mid_clearCache_0640e6acf969ed28,
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
