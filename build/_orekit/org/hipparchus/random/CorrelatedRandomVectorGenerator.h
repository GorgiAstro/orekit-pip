#ifndef org_hipparchus_random_CorrelatedRandomVectorGenerator_H
#define org_hipparchus_random_CorrelatedRandomVectorGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class NormalizedRandomGenerator;
      class RandomVectorGenerator;
    }
    namespace linear {
      class RealMatrix;
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

      class CorrelatedRandomVectorGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_d111c88970dd54da,
          mid_init$_9ea176630e9f7119,
          mid_getGenerator_fb7acbed4ebdfef8,
          mid_getRank_d6ab429752e7c267,
          mid_getRootMatrix_b2eebabce70526d8,
          mid_nextVector_be783177b060994b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CorrelatedRandomVectorGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CorrelatedRandomVectorGenerator(const CorrelatedRandomVectorGenerator& obj) : ::java::lang::Object(obj) {}

        CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix &, jdouble, const ::org::hipparchus::random::NormalizedRandomGenerator &);
        CorrelatedRandomVectorGenerator(const JArray< jdouble > &, const ::org::hipparchus::linear::RealMatrix &, jdouble, const ::org::hipparchus::random::NormalizedRandomGenerator &);

        ::org::hipparchus::random::NormalizedRandomGenerator getGenerator() const;
        jint getRank() const;
        ::org::hipparchus::linear::RealMatrix getRootMatrix() const;
        JArray< jdouble > nextVector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(CorrelatedRandomVectorGenerator);
      extern PyTypeObject *PY_TYPE(CorrelatedRandomVectorGenerator);

      class t_CorrelatedRandomVectorGenerator {
      public:
        PyObject_HEAD
        CorrelatedRandomVectorGenerator object;
        static PyObject *wrap_Object(const CorrelatedRandomVectorGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
