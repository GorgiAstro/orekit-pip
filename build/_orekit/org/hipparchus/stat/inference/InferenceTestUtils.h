#ifndef org_hipparchus_stat_inference_InferenceTestUtils_H
#define org_hipparchus_stat_inference_InferenceTestUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        class InferenceTestUtils : public ::java::lang::Object {
         public:
          enum {
            mid_approximateP_fc76f5003eb574a8,
            mid_chiSquare_04b1c4593e0336da,
            mid_chiSquare_bea0e17cbbf5365f,
            mid_chiSquareDataSetsComparison_84aeba7caf131216,
            mid_chiSquareTest_04b1c4593e0336da,
            mid_chiSquareTest_bea0e17cbbf5365f,
            mid_chiSquareTest_766218494e6ad3c9,
            mid_chiSquareTest_1663c18e69b1b60e,
            mid_chiSquareTestDataSetsComparison_84aeba7caf131216,
            mid_chiSquareTestDataSetsComparison_c7887040a8242925,
            mid_exactP_850e235f3bde160c,
            mid_g_bea0e17cbbf5365f,
            mid_gDataSetsComparison_84aeba7caf131216,
            mid_gTest_bea0e17cbbf5365f,
            mid_gTest_1663c18e69b1b60e,
            mid_gTestDataSetsComparison_84aeba7caf131216,
            mid_gTestDataSetsComparison_c7887040a8242925,
            mid_gTestIntrinsic_bea0e17cbbf5365f,
            mid_homoscedasticT_1ce76fb6ff382da9,
            mid_homoscedasticT_7e6cb2d20813e226,
            mid_homoscedasticTTest_1ce76fb6ff382da9,
            mid_homoscedasticTTest_7e6cb2d20813e226,
            mid_homoscedasticTTest_c2fc7bc0a4bc40d1,
            mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9,
            mid_kolmogorovSmirnovStatistic_a02fd79302bea67f,
            mid_kolmogorovSmirnovTest_1ce76fb6ff382da9,
            mid_kolmogorovSmirnovTest_a02fd79302bea67f,
            mid_kolmogorovSmirnovTest_6379f5334de861c2,
            mid_kolmogorovSmirnovTest_942dd14b61b4a3a3,
            mid_kolmogorovSmirnovTest_206773e96c9fbd6d,
            mid_oneWayAnovaFValue_a00f51a898ec07ff,
            mid_oneWayAnovaPValue_a00f51a898ec07ff,
            mid_oneWayAnovaTest_489eee1f8c6850cc,
            mid_pairedT_1ce76fb6ff382da9,
            mid_pairedTTest_1ce76fb6ff382da9,
            mid_pairedTTest_c2fc7bc0a4bc40d1,
            mid_rootLogLikelihoodRatio_076d964adec38696,
            mid_t_1ce76fb6ff382da9,
            mid_t_618a40a0b95154fa,
            mid_t_eac47427cc058468,
            mid_t_7e6cb2d20813e226,
            mid_tTest_1ce76fb6ff382da9,
            mid_tTest_618a40a0b95154fa,
            mid_tTest_eac47427cc058468,
            mid_tTest_7e6cb2d20813e226,
            mid_tTest_c2fc7bc0a4bc40d1,
            mid_tTest_44e7d76275f3c148,
            mid_tTest_290296050888289c,
            mid_tTest_d1075db52bf9375e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InferenceTestUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InferenceTestUtils(const InferenceTestUtils& obj) : ::java::lang::Object(obj) {}

          static jdouble approximateP(jdouble, jint, jint);
          static jdouble chiSquare(const JArray< JArray< jlong > > &);
          static jdouble chiSquare(const JArray< jdouble > &, const JArray< jlong > &);
          static jdouble chiSquareDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &);
          static jdouble chiSquareTest(const JArray< JArray< jlong > > &);
          static jdouble chiSquareTest(const JArray< jdouble > &, const JArray< jlong > &);
          static jboolean chiSquareTest(const JArray< JArray< jlong > > &, jdouble);
          static jboolean chiSquareTest(const JArray< jdouble > &, const JArray< jlong > &, jdouble);
          static jdouble chiSquareTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &);
          static jboolean chiSquareTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &, jdouble);
          static jdouble exactP(jdouble, jint, jint, jboolean);
          static jdouble g(const JArray< jdouble > &, const JArray< jlong > &);
          static jdouble gDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &);
          static jdouble gTest(const JArray< jdouble > &, const JArray< jlong > &);
          static jboolean gTest(const JArray< jdouble > &, const JArray< jlong > &, jdouble);
          static jdouble gTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &);
          static jboolean gTestDataSetsComparison(const JArray< jlong > &, const JArray< jlong > &, jdouble);
          static jdouble gTestIntrinsic(const JArray< jdouble > &, const JArray< jlong > &);
          static jdouble homoscedasticT(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jdouble homoscedasticTTest(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jboolean homoscedasticTTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          static jdouble kolmogorovSmirnovStatistic(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &);
          static jdouble kolmogorovSmirnovTest(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &);
          static jdouble kolmogorovSmirnovTest(const JArray< jdouble > &, const JArray< jdouble > &, jboolean);
          static jdouble kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &, jboolean);
          static jboolean kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &, jdouble);
          static jdouble oneWayAnovaFValue(const ::java::util::Collection &);
          static jdouble oneWayAnovaPValue(const ::java::util::Collection &);
          static jboolean oneWayAnovaTest(const ::java::util::Collection &, jdouble);
          static jdouble pairedT(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble pairedTTest(const JArray< jdouble > &, const JArray< jdouble > &);
          static jboolean pairedTTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          static jdouble rootLogLikelihoodRatio(jlong, jlong, jlong, jlong);
          static jdouble t(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble t(jdouble, const JArray< jdouble > &);
          static jdouble t(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jdouble t(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jdouble tTest(const JArray< jdouble > &, const JArray< jdouble > &);
          static jdouble tTest(jdouble, const JArray< jdouble > &);
          static jdouble tTest(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jdouble tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &);
          static jboolean tTest(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          static jboolean tTest(jdouble, const JArray< jdouble > &, jdouble);
          static jboolean tTest(jdouble, const ::org::hipparchus::stat::descriptive::StatisticalSummary &, jdouble);
          static jboolean tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary &, const ::org::hipparchus::stat::descriptive::StatisticalSummary &, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(InferenceTestUtils);
        extern PyTypeObject *PY_TYPE(InferenceTestUtils);

        class t_InferenceTestUtils {
        public:
          PyObject_HEAD
          InferenceTestUtils object;
          static PyObject *wrap_Object(const InferenceTestUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
