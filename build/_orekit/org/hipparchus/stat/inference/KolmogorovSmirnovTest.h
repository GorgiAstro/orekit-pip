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
            mid_init$_ff7cb6c242604316,
            mid_init$_f5bbab7e97879358,
            mid_approximateP_e8c62577e6af9173,
            mid_bootstrap_448f0f707d98e665,
            mid_bootstrap_7931484202b0fd2b,
            mid_cdf_988810e80d644418,
            mid_cdf_b44b04b83dcbc7f3,
            mid_cdfExact_988810e80d644418,
            mid_exactP_23ad5004a7d91208,
            mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f,
            mid_kolmogorovSmirnovStatistic_163649aa371f5c4c,
            mid_kolmogorovSmirnovTest_b01af8a77d4df96f,
            mid_kolmogorovSmirnovTest_163649aa371f5c4c,
            mid_kolmogorovSmirnovTest_2cf76703ce30b165,
            mid_kolmogorovSmirnovTest_12a35b6f3eee20af,
            mid_kolmogorovSmirnovTest_4b4eb130f807dbcc,
            mid_ksSum_231b24aba5c51c15,
            mid_pelzGood_988810e80d644418,
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
