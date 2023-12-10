#ifndef org_hipparchus_stat_descriptive_StreamingStatistics_H
#define org_hipparchus_stat_descriptive_StreamingStatistics_H

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
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        class StatisticalSummary;
        class StreamingStatistics;
        class StreamingStatistics$StreamingStatisticsBuilder;
      }
    }
    namespace random {
      class RandomGenerator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class StreamingStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_a73757db4170dc00,
            mid_accept_17db3a65980d3441,
            mid_addValue_17db3a65980d3441,
            mid_aggregate_b9e7d1acbb3a5f4c,
            mid_builder_b53be6ff329e001c,
            mid_clear_0fa09c18fee449d5,
            mid_copy_28f0324196bf3cb7,
            mid_equals_65c7d273e80d497a,
            mid_getGeometricMean_dff5885c2c873297,
            mid_getMax_dff5885c2c873297,
            mid_getMean_dff5885c2c873297,
            mid_getMedian_dff5885c2c873297,
            mid_getMin_dff5885c2c873297,
            mid_getN_492808a339bfa35f,
            mid_getPercentile_dcbc7ce2902fa136,
            mid_getPopulationVariance_dff5885c2c873297,
            mid_getQuadraticMean_dff5885c2c873297,
            mid_getSecondMoment_dff5885c2c873297,
            mid_getStandardDeviation_dff5885c2c873297,
            mid_getSum_dff5885c2c873297,
            mid_getSumOfLogs_dff5885c2c873297,
            mid_getSumOfSquares_dff5885c2c873297,
            mid_getSummary_5a169194284d157f,
            mid_getVariance_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StreamingStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StreamingStatistics(const StreamingStatistics& obj) : ::java::lang::Object(obj) {}

          StreamingStatistics();
          StreamingStatistics(jdouble, const ::org::hipparchus::random::RandomGenerator &);

          void accept(jdouble) const;
          void addValue(jdouble) const;
          void aggregate(const StreamingStatistics &) const;
          static ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder builder();
          void clear() const;
          StreamingStatistics copy() const;
          jboolean equals(const ::java::lang::Object &) const;
          jdouble getGeometricMean() const;
          jdouble getMax() const;
          jdouble getMean() const;
          jdouble getMedian() const;
          jdouble getMin() const;
          jlong getN() const;
          jdouble getPercentile(jdouble) const;
          jdouble getPopulationVariance() const;
          jdouble getQuadraticMean() const;
          jdouble getSecondMoment() const;
          jdouble getStandardDeviation() const;
          jdouble getSum() const;
          jdouble getSumOfLogs() const;
          jdouble getSumOfSquares() const;
          ::org::hipparchus::stat::descriptive::StatisticalSummary getSummary() const;
          jdouble getVariance() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(StreamingStatistics);
        extern PyTypeObject *PY_TYPE(StreamingStatistics);

        class t_StreamingStatistics {
        public:
          PyObject_HEAD
          StreamingStatistics object;
          static PyObject *wrap_Object(const StreamingStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
