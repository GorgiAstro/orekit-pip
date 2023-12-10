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
          mid_geometricMean_9dc1ec0bcc0a9a29,
          mid_geometricMean_556bede10daac330,
          mid_max_9dc1ec0bcc0a9a29,
          mid_max_556bede10daac330,
          mid_mean_9dc1ec0bcc0a9a29,
          mid_mean_556bede10daac330,
          mid_meanDifference_b561c6892e9976f8,
          mid_min_9dc1ec0bcc0a9a29,
          mid_min_556bede10daac330,
          mid_mode_ac3d742ccc742f22,
          mid_mode_41a59b6c86e2e047,
          mid_normalize_ac3d742ccc742f22,
          mid_percentile_1c41301ff6e224e7,
          mid_percentile_9b4f2bb29c648b6e,
          mid_populationVariance_9dc1ec0bcc0a9a29,
          mid_populationVariance_1c41301ff6e224e7,
          mid_populationVariance_556bede10daac330,
          mid_populationVariance_82195b7753559055,
          mid_product_9dc1ec0bcc0a9a29,
          mid_product_556bede10daac330,
          mid_sum_9dc1ec0bcc0a9a29,
          mid_sum_556bede10daac330,
          mid_sumDifference_b561c6892e9976f8,
          mid_sumLog_9dc1ec0bcc0a9a29,
          mid_sumLog_556bede10daac330,
          mid_sumSq_9dc1ec0bcc0a9a29,
          mid_sumSq_556bede10daac330,
          mid_variance_9dc1ec0bcc0a9a29,
          mid_variance_1c41301ff6e224e7,
          mid_variance_556bede10daac330,
          mid_variance_82195b7753559055,
          mid_varianceDifference_81770d1e77838f28,
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
