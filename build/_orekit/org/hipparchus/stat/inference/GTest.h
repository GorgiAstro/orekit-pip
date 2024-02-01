#ifndef org_hipparchus_stat_inference_GTest_H
#define org_hipparchus_stat_inference_GTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
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

        class GTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_g_f8078c674056fb4a,
            mid_gDataSetsComparison_8361d6bcedc1da1a,
            mid_gTest_f8078c674056fb4a,
            mid_gTest_8ea380ac7c124df6,
            mid_gTestDataSetsComparison_8361d6bcedc1da1a,
            mid_gTestDataSetsComparison_0d632518d2300ac8,
            mid_gTestIntrinsic_f8078c674056fb4a,
            mid_rootLogLikelihoodRatio_b846aea95df710a3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GTest(const GTest& obj) : ::java::lang::Object(obj) {}

          GTest();

          jdouble g(const JArray< jdouble > &, const JArray< jlong > &) const;
          jdouble gDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &) const;
          jdouble gTest(const JArray< jdouble > &, const JArray< jlong > &) const;
          jboolean gTest(const JArray< jdouble > &, const JArray< jlong > &, jdouble) const;
          jdouble gTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &) const;
          jboolean gTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &, jdouble) const;
          jdouble gTestIntrinsic(const JArray< jdouble > &, const JArray< jlong > &) const;
          jdouble rootLogLikelihoodRatio(jlong, jlong, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(GTest);
        extern PyTypeObject *PY_TYPE(GTest);

        class t_GTest {
        public:
          PyObject_HEAD
          GTest object;
          static PyObject *wrap_Object(const GTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
