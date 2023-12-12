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
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace descriptive {
        class StreamingStatistics;
        class StatisticalSummary;
        class AggregatableStatistic;
        class StreamingStatistics$StreamingStatisticsBuilder;
      }
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
            mid_init$_0640e6acf969ed28,
            mid_init$_fb29db45daae1732,
            mid_accept_10f281d777284cea,
            mid_addValue_10f281d777284cea,
            mid_aggregate_dabde7a6d9f154ab,
            mid_builder_575058d69559c78a,
            mid_clear_0640e6acf969ed28,
            mid_copy_adcadc851bf4f5fa,
            mid_equals_221e8e85cb385209,
            mid_getGeometricMean_557b8123390d8d0c,
            mid_getMax_557b8123390d8d0c,
            mid_getMean_557b8123390d8d0c,
            mid_getMedian_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getN_9e26256fb0d384a2,
            mid_getPercentile_7e960cd6eee376d8,
            mid_getPopulationVariance_557b8123390d8d0c,
            mid_getQuadraticMean_557b8123390d8d0c,
            mid_getSecondMoment_557b8123390d8d0c,
            mid_getStandardDeviation_557b8123390d8d0c,
            mid_getSum_557b8123390d8d0c,
            mid_getSumOfLogs_557b8123390d8d0c,
            mid_getSumOfSquares_557b8123390d8d0c,
            mid_getSummary_8f883f2497314ce2,
            mid_getVariance_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_toString_3cffd47377eca18a,
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
