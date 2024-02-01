#ifndef org_hipparchus_stat_descriptive_DescriptiveStatistics_H
#define org_hipparchus_stat_descriptive_DescriptiveStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class DescriptiveStatistics;
        class UnivariateStatistic;
        class StatisticalSummary;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_a71c45509eaf92d1,
            mid_init$_8fd427ab23829bf5,
            mid_accept_1ad26e8c8c0cd65b,
            mid_addValue_1ad26e8c8c0cd65b,
            mid_apply_57797f66ddfe155e,
            mid_clear_ff7cb6c242604316,
            mid_copy_b954cb56014d0dc4,
            mid_getElement_ce4c02d583456bc9,
            mid_getGeometricMean_9981f74b2d109da6,
            mid_getKurtosis_9981f74b2d109da6,
            mid_getMax_9981f74b2d109da6,
            mid_getMean_9981f74b2d109da6,
            mid_getMin_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getPercentile_bf28ed64d6e8576b,
            mid_getPopulationVariance_9981f74b2d109da6,
            mid_getQuadraticMean_9981f74b2d109da6,
            mid_getSkewness_9981f74b2d109da6,
            mid_getSortedValues_be783177b060994b,
            mid_getStandardDeviation_9981f74b2d109da6,
            mid_getSum_9981f74b2d109da6,
            mid_getSumOfSquares_9981f74b2d109da6,
            mid_getValues_be783177b060994b,
            mid_getVariance_9981f74b2d109da6,
            mid_getWindowSize_d6ab429752e7c267,
            mid_removeMostRecentValue_ff7cb6c242604316,
            mid_replaceMostRecentValue_bf28ed64d6e8576b,
            mid_setWindowSize_8fd427ab23829bf5,
            mid_toString_d2c8eb4129821f0e,
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
