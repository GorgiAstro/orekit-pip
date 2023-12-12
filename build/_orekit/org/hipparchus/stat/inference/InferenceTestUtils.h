#ifndef org_hipparchus_stat_inference_InferenceTestUtils_H
#define org_hipparchus_stat_inference_InferenceTestUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
            mid_approximateP_5b7edc654bd4c638,
            mid_chiSquare_4661adbd7cb942d0,
            mid_chiSquare_309c07a77179d86e,
            mid_chiSquareDataSetsComparison_c9aa1880e4fb2330,
            mid_chiSquareTest_4661adbd7cb942d0,
            mid_chiSquareTest_309c07a77179d86e,
            mid_chiSquareTest_76b7b3677f01cb1c,
            mid_chiSquareTest_deac5230a366dcf3,
            mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330,
            mid_chiSquareTestDataSetsComparison_885f29369ee9c892,
            mid_exactP_4cb0bd459cea3c08,
            mid_g_309c07a77179d86e,
            mid_gDataSetsComparison_c9aa1880e4fb2330,
            mid_gTest_309c07a77179d86e,
            mid_gTest_deac5230a366dcf3,
            mid_gTestDataSetsComparison_c9aa1880e4fb2330,
            mid_gTestDataSetsComparison_885f29369ee9c892,
            mid_gTestIntrinsic_309c07a77179d86e,
            mid_homoscedasticT_628a76297e217f13,
            mid_homoscedasticT_270d3373c85c64aa,
            mid_homoscedasticTTest_628a76297e217f13,
            mid_homoscedasticTTest_270d3373c85c64aa,
            mid_homoscedasticTTest_93ebb7e130400af3,
            mid_kolmogorovSmirnovStatistic_628a76297e217f13,
            mid_kolmogorovSmirnovStatistic_25a541813dc79893,
            mid_kolmogorovSmirnovTest_628a76297e217f13,
            mid_kolmogorovSmirnovTest_25a541813dc79893,
            mid_kolmogorovSmirnovTest_81226d0b24750fea,
            mid_kolmogorovSmirnovTest_7ce25eee88719bea,
            mid_kolmogorovSmirnovTest_3766a811638b85f8,
            mid_oneWayAnovaFValue_1ab1799bb5ae5130,
            mid_oneWayAnovaPValue_1ab1799bb5ae5130,
            mid_oneWayAnovaTest_cee28d5d28508179,
            mid_pairedT_628a76297e217f13,
            mid_pairedTTest_628a76297e217f13,
            mid_pairedTTest_93ebb7e130400af3,
            mid_rootLogLikelihoodRatio_db51ea2c930fe509,
            mid_t_628a76297e217f13,
            mid_t_1bc40469b56f2c3c,
            mid_t_39b4b09d85675888,
            mid_t_270d3373c85c64aa,
            mid_tTest_628a76297e217f13,
            mid_tTest_1bc40469b56f2c3c,
            mid_tTest_39b4b09d85675888,
            mid_tTest_270d3373c85c64aa,
            mid_tTest_93ebb7e130400af3,
            mid_tTest_ee5175543eb0ed15,
            mid_tTest_992a68f955dc257e,
            mid_tTest_88ba90c6a489d059,
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
