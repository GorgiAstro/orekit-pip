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
            mid_init$_7ae3461a92a43152,
            mid_chiSquare_04b1c4593e0336da,
            mid_chiSquare_bea0e17cbbf5365f,
            mid_chiSquareDataSetsComparison_84aeba7caf131216,
            mid_chiSquareTest_04b1c4593e0336da,
            mid_chiSquareTest_bea0e17cbbf5365f,
            mid_chiSquareTest_766218494e6ad3c9,
            mid_chiSquareTest_1663c18e69b1b60e,
            mid_chiSquareTestDataSetsComparison_84aeba7caf131216,
            mid_chiSquareTestDataSetsComparison_c7887040a8242925,
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
