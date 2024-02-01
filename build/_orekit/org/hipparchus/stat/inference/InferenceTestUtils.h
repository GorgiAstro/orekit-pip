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
            mid_approximateP_e8c62577e6af9173,
            mid_chiSquare_1a9d0eafbd140a5e,
            mid_chiSquare_f8078c674056fb4a,
            mid_chiSquareDataSetsComparison_8361d6bcedc1da1a,
            mid_chiSquareTest_1a9d0eafbd140a5e,
            mid_chiSquareTest_f8078c674056fb4a,
            mid_chiSquareTest_61b6a9dae7ed2786,
            mid_chiSquareTest_8ea380ac7c124df6,
            mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a,
            mid_chiSquareTestDataSetsComparison_0d632518d2300ac8,
            mid_exactP_23ad5004a7d91208,
            mid_g_f8078c674056fb4a,
            mid_gDataSetsComparison_8361d6bcedc1da1a,
            mid_gTest_f8078c674056fb4a,
            mid_gTest_8ea380ac7c124df6,
            mid_gTestDataSetsComparison_8361d6bcedc1da1a,
            mid_gTestDataSetsComparison_0d632518d2300ac8,
            mid_gTestIntrinsic_f8078c674056fb4a,
            mid_homoscedasticT_b01af8a77d4df96f,
            mid_homoscedasticT_f5214cbd47f47c82,
            mid_homoscedasticTTest_b01af8a77d4df96f,
            mid_homoscedasticTTest_f5214cbd47f47c82,
            mid_homoscedasticTTest_9813d7ac14cb2486,
            mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f,
            mid_kolmogorovSmirnovStatistic_163649aa371f5c4c,
            mid_kolmogorovSmirnovTest_b01af8a77d4df96f,
            mid_kolmogorovSmirnovTest_163649aa371f5c4c,
            mid_kolmogorovSmirnovTest_2cf76703ce30b165,
            mid_kolmogorovSmirnovTest_12a35b6f3eee20af,
            mid_kolmogorovSmirnovTest_4b4eb130f807dbcc,
            mid_oneWayAnovaFValue_ce4bc28a12afbddc,
            mid_oneWayAnovaPValue_ce4bc28a12afbddc,
            mid_oneWayAnovaTest_9bf4a3edb5ef37bf,
            mid_pairedT_b01af8a77d4df96f,
            mid_pairedTTest_b01af8a77d4df96f,
            mid_pairedTTest_9813d7ac14cb2486,
            mid_rootLogLikelihoodRatio_b846aea95df710a3,
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
