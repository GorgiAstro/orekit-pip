#ifndef org_hipparchus_stat_StatUtils_H
#define org_hipparchus_stat_StatUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {

      class StatUtils : public ::java::lang::Object {
       public:
        enum {
          mid_geometricMean_86c4a0582e0747ce,
          mid_geometricMean_9eeeb1ae977f525d,
          mid_max_86c4a0582e0747ce,
          mid_max_9eeeb1ae977f525d,
          mid_mean_86c4a0582e0747ce,
          mid_mean_9eeeb1ae977f525d,
          mid_meanDifference_628a76297e217f13,
          mid_min_86c4a0582e0747ce,
          mid_min_9eeeb1ae977f525d,
          mid_mode_1db7c087750eaffe,
          mid_mode_3a89ed5ea3adefb8,
          mid_normalize_1db7c087750eaffe,
          mid_percentile_05f591cf0826202b,
          mid_percentile_52cb74c4004a744d,
          mid_populationVariance_86c4a0582e0747ce,
          mid_populationVariance_05f591cf0826202b,
          mid_populationVariance_9eeeb1ae977f525d,
          mid_populationVariance_134920ed0a3e958a,
          mid_product_86c4a0582e0747ce,
          mid_product_9eeeb1ae977f525d,
          mid_sum_86c4a0582e0747ce,
          mid_sum_9eeeb1ae977f525d,
          mid_sumDifference_628a76297e217f13,
          mid_sumLog_86c4a0582e0747ce,
          mid_sumLog_9eeeb1ae977f525d,
          mid_sumSq_86c4a0582e0747ce,
          mid_sumSq_9eeeb1ae977f525d,
          mid_variance_86c4a0582e0747ce,
          mid_variance_05f591cf0826202b,
          mid_variance_9eeeb1ae977f525d,
          mid_variance_134920ed0a3e958a,
          mid_varianceDifference_abf45904c34f3045,
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
