#ifndef org_hipparchus_stat_inference_TTest_H
#define org_hipparchus_stat_inference_TTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
            mid_init$_7ae3461a92a43152,
            mid_homoscedasticT_1ce76fb6ff382da9,
            mid_homoscedasticT_7e6cb2d20813e226,
            mid_homoscedasticTTest_1ce76fb6ff382da9,
            mid_homoscedasticTTest_7e6cb2d20813e226,
            mid_homoscedasticTTest_c2fc7bc0a4bc40d1,
            mid_pairedT_1ce76fb6ff382da9,
            mid_pairedTTest_1ce76fb6ff382da9,
            mid_pairedTTest_c2fc7bc0a4bc40d1,
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
            mid_t_88076de049bf2857,
            mid_t_04175aacb25dae17,
            mid_df_04175aacb25dae17,
            mid_homoscedasticT_88076de049bf2857,
            mid_tTest_04175aacb25dae17,
            mid_tTest_88076de049bf2857,
            mid_homoscedasticTTest_88076de049bf2857,
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
