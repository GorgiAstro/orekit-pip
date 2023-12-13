#ifndef org_hipparchus_stat_inference_ChiSquareTest_H
#define org_hipparchus_stat_inference_ChiSquareTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_chiSquare_54e0c9e47c29aca2,
            mid_chiSquare_5da72ec1f5d4a740,
            mid_chiSquareDataSetsComparison_f69626ae7ca2489a,
            mid_chiSquareTest_54e0c9e47c29aca2,
            mid_chiSquareTest_5da72ec1f5d4a740,
            mid_chiSquareTest_446489047f3f1b4f,
            mid_chiSquareTest_337fdba983c67932,
            mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a,
            mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a,
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
