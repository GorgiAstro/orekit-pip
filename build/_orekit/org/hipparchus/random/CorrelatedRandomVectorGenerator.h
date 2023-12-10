#ifndef org_hipparchus_random_CorrelatedRandomVectorGenerator_H
#define org_hipparchus_random_CorrelatedRandomVectorGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
      class NormalizedRandomGenerator;
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
          mid_init$_f383bc87eaf41e5d,
          mid_init$_e87878d3139dcedf,
          mid_getGenerator_70e84b44c84c7b7a,
          mid_getRank_f2f64475e4580546,
          mid_getRootMatrix_7116bbecdd8ceb21,
          mid_nextVector_7cdc325af0834901,
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
