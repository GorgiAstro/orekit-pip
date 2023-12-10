#ifndef org_hipparchus_stat_descriptive_DescriptiveStatistics_H
#define org_hipparchus_stat_descriptive_DescriptiveStatistics_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class UnivariateStatistic;
        class StatisticalSummary;
        class DescriptiveStatistics;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class DescriptiveStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_ebc26dcaf4761286,
            mid_init$_0a2a1ac2721c0336,
            mid_accept_77e0f9a1f260e2e5,
            mid_addValue_77e0f9a1f260e2e5,
            mid_apply_13248a242645be18,
            mid_clear_7ae3461a92a43152,
            mid_copy_b253eafe130b1398,
            mid_getElement_b772323fc98b7293,
            mid_getGeometricMean_456d9a2f64d6b28d,
            mid_getKurtosis_456d9a2f64d6b28d,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMean_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_getN_a27fc9afd27e559d,
            mid_getPercentile_0ba5fed9597b693e,
            mid_getPopulationVariance_456d9a2f64d6b28d,
            mid_getQuadraticMean_456d9a2f64d6b28d,
            mid_getSkewness_456d9a2f64d6b28d,
            mid_getSortedValues_7cdc325af0834901,
            mid_getStandardDeviation_456d9a2f64d6b28d,
            mid_getSum_456d9a2f64d6b28d,
            mid_getSumOfSquares_456d9a2f64d6b28d,
            mid_getValues_7cdc325af0834901,
            mid_getVariance_456d9a2f64d6b28d,
            mid_getWindowSize_f2f64475e4580546,
            mid_removeMostRecentValue_7ae3461a92a43152,
            mid_replaceMostRecentValue_0ba5fed9597b693e,
            mid_setWindowSize_0a2a1ac2721c0336,
            mid_toString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DescriptiveStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DescriptiveStatistics(const DescriptiveStatistics& obj) : ::java::lang::Object(obj) {}

          DescriptiveStatistics();
          DescriptiveStatistics(const JArray< jdouble > &);
          DescriptiveStatistics(jint);

          void accept(jdouble) const;
          void addValue(jdouble) const;
          jdouble apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic &) const;
          void clear() const;
          DescriptiveStatistics copy() const;
          jdouble getElement(jint) const;
          jdouble getGeometricMean() const;
          jdouble getKurtosis() const;
          jdouble getMax() const;
          jdouble getMean() const;
          jdouble getMin() const;
          jlong getN() const;
          jdouble getPercentile(jdouble) const;
          jdouble getPopulationVariance() const;
          jdouble getQuadraticMean() const;
          jdouble getSkewness() const;
          JArray< jdouble > getSortedValues() const;
          jdouble getStandardDeviation() const;
          jdouble getSum() const;
          jdouble getSumOfSquares() const;
          JArray< jdouble > getValues() const;
          jdouble getVariance() const;
          jint getWindowSize() const;
          void removeMostRecentValue() const;
          jdouble replaceMostRecentValue(jdouble) const;
          void setWindowSize(jint) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(DescriptiveStatistics);
        extern PyTypeObject *PY_TYPE(DescriptiveStatistics);

        class t_DescriptiveStatistics {
        public:
          PyObject_HEAD
          DescriptiveStatistics object;
          static PyObject *wrap_Object(const DescriptiveStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
