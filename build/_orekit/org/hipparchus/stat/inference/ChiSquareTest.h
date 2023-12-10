#ifndef org_hipparchus_stat_inference_ChiSquareTest_H
#define org_hipparchus_stat_inference_ChiSquareTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_init$_0fa09c18fee449d5,
            mid_chiSquare_b90ef0962fb208c4,
            mid_chiSquare_830834389f7bbf30,
            mid_chiSquareDataSetsComparison_d498b5cc5125fdcb,
            mid_chiSquareTest_b90ef0962fb208c4,
            mid_chiSquareTest_830834389f7bbf30,
            mid_chiSquareTest_b37d0c4bca3b7c28,
            mid_chiSquareTest_d2b6ad91862e3050,
            mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb,
            mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb,
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
