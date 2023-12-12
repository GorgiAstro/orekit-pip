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
            mid_init$_0640e6acf969ed28,
            mid_init$_3cd6a6b354c6aa22,
            mid_approximateP_5b7edc654bd4c638,
            mid_bootstrap_a7af9b8e2bb5e099,
            mid_bootstrap_6a5e1519e571e53d,
            mid_cdf_156ae9d72f1c8533,
            mid_cdf_3e2cba7ad7d970a7,
            mid_cdfExact_156ae9d72f1c8533,
            mid_exactP_4cb0bd459cea3c08,
            mid_kolmogorovSmirnovStatistic_628a76297e217f13,
            mid_kolmogorovSmirnovStatistic_25a541813dc79893,
            mid_kolmogorovSmirnovTest_628a76297e217f13,
            mid_kolmogorovSmirnovTest_25a541813dc79893,
            mid_kolmogorovSmirnovTest_81226d0b24750fea,
            mid_kolmogorovSmirnovTest_7ce25eee88719bea,
            mid_kolmogorovSmirnovTest_3766a811638b85f8,
            mid_ksSum_63ce51364ee6da7c,
            mid_pelzGood_156ae9d72f1c8533,
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
