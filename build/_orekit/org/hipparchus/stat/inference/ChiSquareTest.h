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
            mid_init$_0640e6acf969ed28,
            mid_chiSquare_4661adbd7cb942d0,
            mid_chiSquare_309c07a77179d86e,
            mid_chiSquareDataSetsComparison_c9aa1880e4fb2330,
            mid_chiSquareTest_4661adbd7cb942d0,
            mid_chiSquareTest_309c07a77179d86e,
            mid_chiSquareTest_76b7b3677f01cb1c,
            mid_chiSquareTest_deac5230a366dcf3,
            mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330,
            mid_chiSquareTestDataSetsComparison_885f29369ee9c892,
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
