#ifndef org_hipparchus_stat_descriptive_DescriptiveStatistics_H
#define org_hipparchus_stat_descriptive_DescriptiveStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace stat {
      namespace descriptive {
        class UnivariateStatistic;
        class DescriptiveStatistics;
        class StatisticalSummary;
      }
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
            mid_init$_0640e6acf969ed28,
            mid_init$_cc18240f4a737f14,
            mid_init$_a3da1a935cb37f7b,
            mid_accept_10f281d777284cea,
            mid_addValue_10f281d777284cea,
            mid_apply_1fd59dc8c1348e34,
            mid_clear_0640e6acf969ed28,
            mid_copy_176a899d8f1ce21f,
            mid_getElement_69cfb132c661aca4,
            mid_getGeometricMean_557b8123390d8d0c,
            mid_getKurtosis_557b8123390d8d0c,
            mid_getMax_557b8123390d8d0c,
            mid_getMean_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getN_9e26256fb0d384a2,
            mid_getPercentile_7e960cd6eee376d8,
            mid_getPopulationVariance_557b8123390d8d0c,
            mid_getQuadraticMean_557b8123390d8d0c,
            mid_getSkewness_557b8123390d8d0c,
            mid_getSortedValues_a53a7513ecedada2,
            mid_getStandardDeviation_557b8123390d8d0c,
            mid_getSum_557b8123390d8d0c,
            mid_getSumOfSquares_557b8123390d8d0c,
            mid_getValues_a53a7513ecedada2,
            mid_getVariance_557b8123390d8d0c,
            mid_getWindowSize_412668abc8d889e9,
            mid_removeMostRecentValue_0640e6acf969ed28,
            mid_replaceMostRecentValue_7e960cd6eee376d8,
            mid_setWindowSize_a3da1a935cb37f7b,
            mid_toString_3cffd47377eca18a,
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
