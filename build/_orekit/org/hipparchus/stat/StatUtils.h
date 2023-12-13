#ifndef org_hipparchus_stat_StatUtils_H
#define org_hipparchus_stat_StatUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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

      class StatUtils : public ::java::lang::Object {
       public:
        enum {
          mid_geometricMean_b060e4326765ccf1,
          mid_geometricMean_1567a80062adb31b,
          mid_max_b060e4326765ccf1,
          mid_max_1567a80062adb31b,
          mid_mean_b060e4326765ccf1,
          mid_mean_1567a80062adb31b,
          mid_meanDifference_3207f9c2ae7271d9,
          mid_min_b060e4326765ccf1,
          mid_min_1567a80062adb31b,
          mid_mode_14dee4cb8cc3e959,
          mid_mode_4ab5393b410e04fc,
          mid_normalize_14dee4cb8cc3e959,
          mid_percentile_79e4db9e1e3d84c9,
          mid_percentile_86463cae6c6d5697,
          mid_populationVariance_b060e4326765ccf1,
          mid_populationVariance_79e4db9e1e3d84c9,
          mid_populationVariance_1567a80062adb31b,
          mid_populationVariance_f09b11d2a075df86,
          mid_product_b060e4326765ccf1,
          mid_product_1567a80062adb31b,
          mid_sum_b060e4326765ccf1,
          mid_sum_1567a80062adb31b,
          mid_sumDifference_3207f9c2ae7271d9,
          mid_sumLog_b060e4326765ccf1,
          mid_sumLog_1567a80062adb31b,
          mid_sumSq_b060e4326765ccf1,
          mid_sumSq_1567a80062adb31b,
          mid_variance_b060e4326765ccf1,
          mid_variance_79e4db9e1e3d84c9,
          mid_variance_1567a80062adb31b,
          mid_variance_f09b11d2a075df86,
          mid_varianceDifference_5427cadc72cd59f7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StatUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StatUtils(const StatUtils& obj) : ::java::lang::Object(obj) {}

        static jdouble geometricMean(const JArray< jdouble > &);
        static jdouble geometricMean(const JArray< jdouble > &, jint, jint);
        static jdouble max$(const JArray< jdouble > &);
        static jdouble max$(const JArray< jdouble > &, jint, jint);
        static jdouble mean$(const JArray< jdouble > &);
        static jdouble mean$(const JArray< jdouble > &, jint, jint);
        static jdouble meanDifference(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble min$(const JArray< jdouble > &);
        static jdouble min$(const JArray< jdouble > &, jint, jint);
        static JArray< jdouble > mode(const JArray< jdouble > &);
        static JArray< jdouble > mode(const JArray< jdouble > &, jint, jint);
        static JArray< jdouble > normalize(const JArray< jdouble > &);
        static jdouble percentile(const JArray< jdouble > &, jdouble);
        static jdouble percentile(const JArray< jdouble > &, jint, jint, jdouble);
        static jdouble populationVariance(const JArray< jdouble > &);
        static jdouble populationVariance(const JArray< jdouble > &, jdouble);
        static jdouble populationVariance(const JArray< jdouble > &, jint, jint);
        static jdouble populationVariance(const JArray< jdouble > &, jdouble, jint, jint);
        static jdouble product(const JArray< jdouble > &);
        static jdouble product(const JArray< jdouble > &, jint, jint);
        static jdouble sum(const JArray< jdouble > &);
        static jdouble sum(const JArray< jdouble > &, jint, jint);
        static jdouble sumDifference(const JArray< jdouble > &, const JArray< jdouble > &);
        static jdouble sumLog(const JArray< jdouble > &);
        static jdouble sumLog(const JArray< jdouble > &, jint, jint);
        static jdouble sumSq(const JArray< jdouble > &);
        static jdouble sumSq(const JArray< jdouble > &, jint, jint);
        static jdouble variance(const JArray< jdouble > &);
        static jdouble variance(const JArray< jdouble > &, jdouble);
        static jdouble variance(const JArray< jdouble > &, jint, jint);
        static jdouble variance(const JArray< jdouble > &, jdouble, jint, jint);
        static jdouble varianceDifference(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      extern PyType_Def PY_TYPE_DEF(StatUtils);
      extern PyTypeObject *PY_TYPE(StatUtils);

      class t_StatUtils {
      public:
        PyObject_HEAD
        StatUtils object;
        static PyObject *wrap_Object(const StatUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
