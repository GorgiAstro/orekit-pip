#ifndef org_hipparchus_stat_inference_InferenceTestUtils_H
#define org_hipparchus_stat_inference_InferenceTestUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace distribution {
      class RealDistribution;
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
            mid_approximateP_3ea86aad626e7047,
            mid_chiSquare_54e0c9e47c29aca2,
            mid_chiSquare_5da72ec1f5d4a740,
            mid_chiSquareDataSetsComparison_f69626ae7ca2489a,
            mid_chiSquareTest_54e0c9e47c29aca2,
            mid_chiSquareTest_5da72ec1f5d4a740,
            mid_chiSquareTest_446489047f3f1b4f,
            mid_chiSquareTest_337fdba983c67932,
            mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a,
            mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a,
            mid_exactP_66797b2e6bbebeee,
            mid_g_5da72ec1f5d4a740,
            mid_gDataSetsComparison_f69626ae7ca2489a,
            mid_gTest_5da72ec1f5d4a740,
            mid_gTest_337fdba983c67932,
            mid_gTestDataSetsComparison_f69626ae7ca2489a,
            mid_gTestDataSetsComparison_05bd0745ca7cc56a,
            mid_gTestIntrinsic_5da72ec1f5d4a740,
            mid_homoscedasticT_3207f9c2ae7271d9,
            mid_homoscedasticT_3aa35fce42f529d9,
            mid_homoscedasticTTest_3207f9c2ae7271d9,
            mid_homoscedasticTTest_3aa35fce42f529d9,
            mid_homoscedasticTTest_899e11e2ec28e6cd,
            mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9,
            mid_kolmogorovSmirnovStatistic_27f681af35b4baa1,
            mid_kolmogorovSmirnovTest_3207f9c2ae7271d9,
            mid_kolmogorovSmirnovTest_27f681af35b4baa1,
            mid_kolmogorovSmirnovTest_0c373dc781edcf2f,
            mid_kolmogorovSmirnovTest_cc1786ac1add8fe8,
            mid_kolmogorovSmirnovTest_208417a15884b969,
            mid_oneWayAnovaFValue_b19699bf13064258,
            mid_oneWayAnovaPValue_b19699bf13064258,
            mid_oneWayAnovaTest_9417b0f508298776,
            mid_pairedT_3207f9c2ae7271d9,
            mid_pairedTTest_3207f9c2ae7271d9,
            mid_pairedTTest_899e11e2ec28e6cd,
            mid_rootLogLikelihoodRatio_84bd267915ec3a91,
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
