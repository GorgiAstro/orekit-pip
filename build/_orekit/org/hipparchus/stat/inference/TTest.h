#ifndef org_hipparchus_stat_inference_TTest_H
#define org_hipparchus_stat_inference_TTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
            mid_init$_0640e6acf969ed28,
            mid_homoscedasticT_628a76297e217f13,
            mid_homoscedasticT_270d3373c85c64aa,
            mid_homoscedasticTTest_628a76297e217f13,
            mid_homoscedasticTTest_270d3373c85c64aa,
            mid_homoscedasticTTest_93ebb7e130400af3,
            mid_pairedT_628a76297e217f13,
            mid_pairedTTest_628a76297e217f13,
            mid_pairedTTest_93ebb7e130400af3,
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
            mid_t_79d60f5d1a9d8623,
            mid_t_9f42b6fd9d0f2606,
            mid_df_79d60f5d1a9d8623,
            mid_homoscedasticT_9f42b6fd9d0f2606,
            mid_tTest_79d60f5d1a9d8623,
            mid_tTest_9f42b6fd9d0f2606,
            mid_homoscedasticTTest_9f42b6fd9d0f2606,
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
