#ifndef org_hipparchus_stat_inference_InferenceTestUtils_H
#define org_hipparchus_stat_inference_InferenceTestUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
      }
    }
    namespace distribution {
      class RealDistribution;
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
            mid_approximateP_7a492dc1edd19b72,
            mid_chiSquare_b90ef0962fb208c4,
            mid_chiSquare_830834389f7bbf30,
            mid_chiSquareDataSetsComparison_d498b5cc5125fdcb,
            mid_chiSquareTest_b90ef0962fb208c4,
            mid_chiSquareTest_830834389f7bbf30,
            mid_chiSquareTest_b37d0c4bca3b7c28,
            mid_chiSquareTest_d2b6ad91862e3050,
            mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb,
            mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb,
            mid_exactP_7cb31c5b5c5fe800,
            mid_g_830834389f7bbf30,
            mid_gDataSetsComparison_d498b5cc5125fdcb,
            mid_gTest_830834389f7bbf30,
            mid_gTest_d2b6ad91862e3050,
            mid_gTestDataSetsComparison_d498b5cc5125fdcb,
            mid_gTestDataSetsComparison_9c57b9c7c3ffd7eb,
            mid_gTestIntrinsic_830834389f7bbf30,
            mid_homoscedasticT_b561c6892e9976f8,
            mid_homoscedasticT_a6a21e289ffe5810,
            mid_homoscedasticTTest_b561c6892e9976f8,
            mid_homoscedasticTTest_a6a21e289ffe5810,
            mid_homoscedasticTTest_ed0fb6ee68c33cca,
            mid_kolmogorovSmirnovStatistic_b561c6892e9976f8,
            mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d,
            mid_kolmogorovSmirnovTest_b561c6892e9976f8,
            mid_kolmogorovSmirnovTest_c12bc4bf7b12344d,
            mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c,
            mid_kolmogorovSmirnovTest_9a58ab94185971d6,
            mid_kolmogorovSmirnovTest_ad738ebacbd28f66,
            mid_oneWayAnovaFValue_7076a671f4259cfe,
            mid_oneWayAnovaPValue_7076a671f4259cfe,
            mid_oneWayAnovaTest_c02897b462a4df37,
            mid_pairedT_b561c6892e9976f8,
            mid_pairedTTest_b561c6892e9976f8,
            mid_pairedTTest_ed0fb6ee68c33cca,
            mid_rootLogLikelihoodRatio_4a76c08ca752718a,
            mid_t_b561c6892e9976f8,
            mid_t_19285de97bbc7eea,
            mid_t_0951dfc4a2f63f29,
            mid_t_a6a21e289ffe5810,
            mid_tTest_b561c6892e9976f8,
            mid_tTest_19285de97bbc7eea,
            mid_tTest_0951dfc4a2f63f29,
            mid_tTest_a6a21e289ffe5810,
            mid_tTest_ed0fb6ee68c33cca,
            mid_tTest_97483ecb885b04db,
            mid_tTest_d69003036bf27add,
            mid_tTest_92d1c61945f36e5b,
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
