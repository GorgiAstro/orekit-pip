#ifndef org_hipparchus_stat_inference_KolmogorovSmirnovTest_H
#define org_hipparchus_stat_inference_KolmogorovSmirnovTest_H

#include "java/lang/Object.h"

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
            mid_init$_0fa09c18fee449d5,
            mid_init$_3a8e7649f31fdb20,
            mid_approximateP_7a492dc1edd19b72,
            mid_bootstrap_ea13093698ab0faa,
            mid_bootstrap_a3e9810f02ff7bb5,
            mid_cdf_948617e69b66e15d,
            mid_cdf_648736fa2c0b0c97,
            mid_cdfExact_948617e69b66e15d,
            mid_exactP_7cb31c5b5c5fe800,
            mid_kolmogorovSmirnovStatistic_b561c6892e9976f8,
            mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d,
            mid_kolmogorovSmirnovTest_b561c6892e9976f8,
            mid_kolmogorovSmirnovTest_c12bc4bf7b12344d,
            mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c,
            mid_kolmogorovSmirnovTest_9a58ab94185971d6,
            mid_kolmogorovSmirnovTest_ad738ebacbd28f66,
            mid_ksSum_aa604e695a59526c,
            mid_pelzGood_948617e69b66e15d,
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
