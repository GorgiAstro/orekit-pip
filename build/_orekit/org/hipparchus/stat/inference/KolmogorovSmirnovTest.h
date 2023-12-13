#ifndef org_hipparchus_stat_inference_KolmogorovSmirnovTest_H
#define org_hipparchus_stat_inference_KolmogorovSmirnovTest_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace distribution {
      class RealDistribution;
    }
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_3d7dd2314a0dd456,
            mid_approximateP_3ea86aad626e7047,
            mid_bootstrap_7c3653754c574cea,
            mid_bootstrap_a99de3bb0d946e5b,
            mid_cdf_2eeda88661ae34d3,
            mid_cdf_89b1da4f594623f7,
            mid_cdfExact_2eeda88661ae34d3,
            mid_exactP_66797b2e6bbebeee,
            mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9,
            mid_kolmogorovSmirnovStatistic_27f681af35b4baa1,
            mid_kolmogorovSmirnovTest_3207f9c2ae7271d9,
            mid_kolmogorovSmirnovTest_27f681af35b4baa1,
            mid_kolmogorovSmirnovTest_0c373dc781edcf2f,
            mid_kolmogorovSmirnovTest_cc1786ac1add8fe8,
            mid_kolmogorovSmirnovTest_208417a15884b969,
            mid_ksSum_c35488bf93c357d0,
            mid_pelzGood_2eeda88661ae34d3,
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
