#ifndef org_hipparchus_stat_descriptive_DescriptiveStatistics_H
#define org_hipparchus_stat_descriptive_DescriptiveStatistics_H

#include "java/lang/Object.h"

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
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
        class DescriptiveStatistics;
        class UnivariateStatistic;
      }
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_fa9d415d19f69361,
            mid_init$_99803b0791f320ff,
            mid_accept_17db3a65980d3441,
            mid_addValue_17db3a65980d3441,
            mid_apply_11f6cd1332ce91d7,
            mid_clear_0fa09c18fee449d5,
            mid_copy_eb8178054e79f61d,
            mid_getElement_46f85b53d9aedd96,
            mid_getGeometricMean_dff5885c2c873297,
            mid_getKurtosis_dff5885c2c873297,
            mid_getMax_dff5885c2c873297,
            mid_getMean_dff5885c2c873297,
            mid_getMin_dff5885c2c873297,
            mid_getN_492808a339bfa35f,
            mid_getPercentile_dcbc7ce2902fa136,
            mid_getPopulationVariance_dff5885c2c873297,
            mid_getQuadraticMean_dff5885c2c873297,
            mid_getSkewness_dff5885c2c873297,
            mid_getSortedValues_60c7040667a7dc5c,
            mid_getStandardDeviation_dff5885c2c873297,
            mid_getSum_dff5885c2c873297,
            mid_getSumOfSquares_dff5885c2c873297,
            mid_getValues_60c7040667a7dc5c,
            mid_getVariance_dff5885c2c873297,
            mid_getWindowSize_570ce0828f81a2c1,
            mid_removeMostRecentValue_0fa09c18fee449d5,
            mid_replaceMostRecentValue_dcbc7ce2902fa136,
            mid_setWindowSize_99803b0791f320ff,
            mid_toString_11b109bd155ca898,
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
