#ifndef org_hipparchus_stat_inference_TTest_H
#define org_hipparchus_stat_inference_TTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
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
            mid_init$_ff7cb6c242604316,
            mid_homoscedasticT_b01af8a77d4df96f,
            mid_homoscedasticT_f5214cbd47f47c82,
            mid_homoscedasticTTest_b01af8a77d4df96f,
            mid_homoscedasticTTest_f5214cbd47f47c82,
            mid_homoscedasticTTest_9813d7ac14cb2486,
            mid_pairedT_b01af8a77d4df96f,
            mid_pairedTTest_b01af8a77d4df96f,
            mid_pairedTTest_9813d7ac14cb2486,
            mid_t_b01af8a77d4df96f,
            mid_t_4f42c7a8793320e4,
            mid_t_903f0d6f6e0dac90,
            mid_t_f5214cbd47f47c82,
            mid_tTest_b01af8a77d4df96f,
            mid_tTest_4f42c7a8793320e4,
            mid_tTest_903f0d6f6e0dac90,
            mid_tTest_f5214cbd47f47c82,
            mid_tTest_9813d7ac14cb2486,
            mid_tTest_b1cf28637d6920a8,
            mid_tTest_fe55a42774f43357,
            mid_tTest_d0fcfd116c4adb72,
            mid_df_45d926aea7231320,
            mid_homoscedasticT_79d84db2e9af7a7b,
            mid_tTest_79d84db2e9af7a7b,
            mid_tTest_45d926aea7231320,
            mid_homoscedasticTTest_79d84db2e9af7a7b,
            mid_t_45d926aea7231320,
            mid_t_79d84db2e9af7a7b,
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
