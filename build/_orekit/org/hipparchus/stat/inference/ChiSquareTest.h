#ifndef org_hipparchus_stat_inference_ChiSquareTest_H
#define org_hipparchus_stat_inference_ChiSquareTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
    namespace stat {
      namespace inference {

        class ChiSquareTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_chiSquare_1a9d0eafbd140a5e,
            mid_chiSquare_f8078c674056fb4a,
            mid_chiSquareDataSetsComparison_8361d6bcedc1da1a,
            mid_chiSquareTest_1a9d0eafbd140a5e,
            mid_chiSquareTest_f8078c674056fb4a,
            mid_chiSquareTest_61b6a9dae7ed2786,
            mid_chiSquareTest_8ea380ac7c124df6,
            mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a,
            mid_chiSquareTestDataSetsComparison_0d632518d2300ac8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ChiSquareTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ChiSquareTest(const ChiSquareTest& obj) : ::java::lang::Object(obj) {}

          ChiSquareTest();

          jdouble chiSquare(const JArray< JArray< jlong > > &) const;
          jdouble chiSquare(const JArray< jdouble > &, const JArray< jlong > &) const;
          jdouble chiSquareDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &) const;
          jdouble chiSquareTest(const JArray< JArray< jlong > > &) const;
          jdouble chiSquareTest(const JArray< jdouble > &, const JArray< jlong > &) const;
          jboolean chiSquareTest(const JArray< JArray< jlong > > &, jdouble) const;
          jboolean chiSquareTest(const JArray< jdouble > &, const JArray< jlong > &, jdouble) const;
          jdouble chiSquareTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &) const;
          jboolean chiSquareTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        extern PyType_Def PY_TYPE_DEF(ChiSquareTest);
        extern PyTypeObject *PY_TYPE(ChiSquareTest);

        class t_ChiSquareTest {
        public:
          PyObject_HEAD
          ChiSquareTest object;
          static PyObject *wrap_Object(const ChiSquareTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
