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
          mid_geometricMean_f05cb8c6dfd5e0b9,
          mid_geometricMean_0a7ff474793a505a,
          mid_max_f05cb8c6dfd5e0b9,
          mid_max_0a7ff474793a505a,
          mid_mean_f05cb8c6dfd5e0b9,
          mid_mean_0a7ff474793a505a,
          mid_meanDifference_1ce76fb6ff382da9,
          mid_min_f05cb8c6dfd5e0b9,
          mid_min_0a7ff474793a505a,
          mid_mode_4b742fe429c22ba8,
          mid_mode_27a40d66e0497a45,
          mid_normalize_4b742fe429c22ba8,
          mid_percentile_926a8b9763aa0b21,
          mid_percentile_346318efe67d9ca8,
          mid_populationVariance_f05cb8c6dfd5e0b9,
          mid_populationVariance_926a8b9763aa0b21,
          mid_populationVariance_0a7ff474793a505a,
          mid_populationVariance_431214b6e4f01f3c,
          mid_product_f05cb8c6dfd5e0b9,
          mid_product_0a7ff474793a505a,
          mid_sum_f05cb8c6dfd5e0b9,
          mid_sum_0a7ff474793a505a,
          mid_sumDifference_1ce76fb6ff382da9,
          mid_sumLog_f05cb8c6dfd5e0b9,
          mid_sumLog_0a7ff474793a505a,
          mid_sumSq_f05cb8c6dfd5e0b9,
          mid_sumSq_0a7ff474793a505a,
          mid_variance_f05cb8c6dfd5e0b9,
          mid_variance_926a8b9763aa0b21,
          mid_variance_0a7ff474793a505a,
          mid_variance_431214b6e4f01f3c,
          mid_varianceDifference_568f42d2326d41b5,
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
