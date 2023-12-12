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
          mid_init$_0175c4d47bc18395,
          mid_init$_1671dd5bf6cbe2ec,
          mid_getGenerator_bbf29926cadb12ad,
          mid_getRank_412668abc8d889e9,
          mid_getRootMatrix_70a207fcbc031df2,
          mid_nextVector_a53a7513ecedada2,
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
