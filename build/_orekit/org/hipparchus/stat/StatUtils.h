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
          mid_geometricMean_a40ce4fdf6559ac0,
          mid_geometricMean_620ea098e5f0da00,
          mid_max_a40ce4fdf6559ac0,
          mid_max_620ea098e5f0da00,
          mid_mean_a40ce4fdf6559ac0,
          mid_mean_620ea098e5f0da00,
          mid_meanDifference_b01af8a77d4df96f,
          mid_min_a40ce4fdf6559ac0,
          mid_min_620ea098e5f0da00,
          mid_mode_51f624c89851da7e,
          mid_mode_8f6ddc643efefb02,
          mid_normalize_51f624c89851da7e,
          mid_percentile_02811febb145516c,
          mid_percentile_764f25835195d79e,
          mid_populationVariance_a40ce4fdf6559ac0,
          mid_populationVariance_02811febb145516c,
          mid_populationVariance_620ea098e5f0da00,
          mid_populationVariance_be090b022ea8e24a,
          mid_product_a40ce4fdf6559ac0,
          mid_product_620ea098e5f0da00,
          mid_sum_a40ce4fdf6559ac0,
          mid_sum_620ea098e5f0da00,
          mid_sumDifference_b01af8a77d4df96f,
          mid_sumLog_a40ce4fdf6559ac0,
          mid_sumLog_620ea098e5f0da00,
          mid_sumSq_a40ce4fdf6559ac0,
          mid_sumSq_620ea098e5f0da00,
          mid_variance_a40ce4fdf6559ac0,
          mid_variance_02811febb145516c,
          mid_variance_620ea098e5f0da00,
          mid_variance_be090b022ea8e24a,
          mid_varianceDifference_65d620e9532c2371,
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
