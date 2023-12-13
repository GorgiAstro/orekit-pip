#ifndef org_hipparchus_stat_descriptive_DescriptiveStatistics_H
#define org_hipparchus_stat_descriptive_DescriptiveStatistics_H

#include "java/lang/Object.h"

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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_ab69da052b88f50c,
            mid_init$_44ed599e93e8a30c,
            mid_accept_8ba9fe7a847cecad,
            mid_addValue_8ba9fe7a847cecad,
            mid_apply_99884f42ea39cf31,
            mid_clear_a1fa5dae97ea5ed2,
            mid_copy_d6cc319fcebc162c,
            mid_getElement_2afcbc21f4e57ab2,
            mid_getGeometricMean_b74f83833fdad017,
            mid_getKurtosis_b74f83833fdad017,
            mid_getMax_b74f83833fdad017,
            mid_getMean_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getN_6c0ce7e438e5ded4,
            mid_getPercentile_04fd0666b613d2ab,
            mid_getPopulationVariance_b74f83833fdad017,
            mid_getQuadraticMean_b74f83833fdad017,
            mid_getSkewness_b74f83833fdad017,
            mid_getSortedValues_25e1757a36c4dde2,
            mid_getStandardDeviation_b74f83833fdad017,
            mid_getSum_b74f83833fdad017,
            mid_getSumOfSquares_b74f83833fdad017,
            mid_getValues_25e1757a36c4dde2,
            mid_getVariance_b74f83833fdad017,
            mid_getWindowSize_55546ef6a647f39b,
            mid_removeMostRecentValue_a1fa5dae97ea5ed2,
            mid_replaceMostRecentValue_04fd0666b613d2ab,
            mid_setWindowSize_44ed599e93e8a30c,
            mid_toString_1c1fa1e935d6cdcf,
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
