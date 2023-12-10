#ifndef org_hipparchus_stat_inference_KolmogorovSmirnovTest_H
#define org_hipparchus_stat_inference_KolmogorovSmirnovTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
    }
    namespace exception {
      class MathRuntimeException;
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

        class KolmogorovSmirnovTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_fefb08975c10f0a1,
            mid_approximateP_fc76f5003eb574a8,
            mid_bootstrap_a0d8ac075a455617,
            mid_bootstrap_853f5f4eb3684480,
            mid_cdf_bcad94b64f1e2dd8,
            mid_cdf_52f64ca5734d1f12,
            mid_cdfExact_bcad94b64f1e2dd8,
            mid_exactP_850e235f3bde160c,
            mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9,
            mid_kolmogorovSmirnovStatistic_a02fd79302bea67f,
            mid_kolmogorovSmirnovTest_1ce76fb6ff382da9,
            mid_kolmogorovSmirnovTest_a02fd79302bea67f,
            mid_kolmogorovSmirnovTest_6379f5334de861c2,
            mid_kolmogorovSmirnovTest_942dd14b61b4a3a3,
            mid_kolmogorovSmirnovTest_206773e96c9fbd6d,
            mid_ksSum_76e9328ecbbb348d,
            mid_pelzGood_bcad94b64f1e2dd8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KolmogorovSmirnovTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KolmogorovSmirnovTest(const KolmogorovSmirnovTest& obj) : ::java::lang::Object(obj) {}

          KolmogorovSmirnovTest();
          KolmogorovSmirnovTest(jlong);

          jdouble approximateP(jdouble, jint, jint) const;
          jdouble bootstrap(const JArray< jdouble > &, const JArray< jdouble > &, jint) const;
          jdouble bootstrap(const JArray< jdouble > &, const JArray< jdouble > &, jint, jboolean) const;
          jdouble cdf(jdouble, jint) const;
          jdouble cdf(jdouble, jint, jboolean) const;
          jdouble cdfExact(jdouble, jint) const;
          jdouble exactP(jdouble, jint, jint, jboolean) const;
          jdouble kolmogorovSmirnovStatistic(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &) const;
          jdouble kolmogorovSmirnovTest(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &) const;
          jdouble kolmogorovSmirnovTest(const JArray< jdouble > &, const JArray< jdouble > &, jboolean) const;
          jdouble kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &, jboolean) const;
          jboolean kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution &, const JArray< jdouble > &, jdouble) const;
          jdouble ksSum(jdouble, jdouble, jint) const;
          jdouble pelzGood(jdouble, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(KolmogorovSmirnovTest);
        extern PyTypeObject *PY_TYPE(KolmogorovSmirnovTest);

        class t_KolmogorovSmirnovTest {
        public:
          PyObject_HEAD
          KolmogorovSmirnovTest object;
          static PyObject *wrap_Object(const KolmogorovSmirnovTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
