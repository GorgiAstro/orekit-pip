#ifndef org_hipparchus_stat_inference_TTest_H
#define org_hipparchus_stat_inference_TTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
      }
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

        class TTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_homoscedasticT_3207f9c2ae7271d9,
            mid_homoscedasticT_3aa35fce42f529d9,
            mid_homoscedasticTTest_3207f9c2ae7271d9,
            mid_homoscedasticTTest_3aa35fce42f529d9,
            mid_homoscedasticTTest_899e11e2ec28e6cd,
            mid_pairedT_3207f9c2ae7271d9,
            mid_pairedTTest_3207f9c2ae7271d9,
            mid_pairedTTest_899e11e2ec28e6cd,
            mid_t_3207f9c2ae7271d9,
            mid_t_e45651f63bcd931a,
            mid_t_172f3ca66813c571,
            mid_t_3aa35fce42f529d9,
            mid_tTest_3207f9c2ae7271d9,
            mid_tTest_e45651f63bcd931a,
            mid_tTest_172f3ca66813c571,
            mid_tTest_3aa35fce42f529d9,
            mid_tTest_899e11e2ec28e6cd,
            mid_tTest_a36fee56beaf3c37,
            mid_tTest_45e6c9d7ca9c7c3d,
            mid_tTest_516ad16aed11ab58,
            mid_df_08eba2463884b341,
            mid_homoscedasticT_7f9459f01496f8b0,
            mid_homoscedasticTTest_7f9459f01496f8b0,
            mid_tTest_08eba2463884b341,
            mid_tTest_7f9459f01496f8b0,
            mid_t_08eba2463884b341,
            mid_t_7f9459f01496f8b0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TTest(const TTest& obj) : ::java::lang::Object(obj) {}

          TTest();

          jdouble homoscedasticT(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jdouble homoscedasticTTest(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jboolean homoscedasticTTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble) const;
          jdouble pairedT(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble pairedTTest(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jboolean pairedTTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble) const;
          jdouble t(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble t(jdouble, const JArray< jdouble > &) const;
          jdouble t(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jdouble t(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jdouble tTest(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble tTest(jdouble, const JArray< jdouble > &) const;
          jdouble tTest(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jdouble tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &) const;
          jboolean tTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble) const;
          jboolean tTest(jdouble, const JArray< jdouble > &, jdouble) const;
          jboolean tTest(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &, jdouble) const;
          jboolean tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(TTest);
        extern PyTypeObject *PY_TYPE(TTest);

        class t_TTest {
        public:
          PyObject_HEAD
          TTest object;
          static PyObject *wrap_Object(const TTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
