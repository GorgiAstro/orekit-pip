#ifndef org_hipparchus_stat_descriptive_StreamingStatistics_H
#define org_hipparchus_stat_descriptive_StreamingStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StreamingStatistics$StreamingStatisticsBuilder;
        class AggregatableStatistic;
        class StatisticalSummary;
        class StreamingStatistics;
      }
    }
    namespace random {
      class RandomGenerator;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class StreamingStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_b5a4975c915c365a,
            mid_accept_1ad26e8c8c0cd65b,
            mid_addValue_1ad26e8c8c0cd65b,
            mid_aggregate_d741cbfd11938b9c,
            mid_builder_4d17d1686c1caddb,
            mid_clear_ff7cb6c242604316,
            mid_copy_e8391c24b9a78230,
            mid_equals_72faff9b05f5ed5e,
            mid_getGeometricMean_9981f74b2d109da6,
            mid_getMax_9981f74b2d109da6,
            mid_getMean_9981f74b2d109da6,
            mid_getMedian_9981f74b2d109da6,
            mid_getMin_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getPercentile_bf28ed64d6e8576b,
            mid_getPopulationVariance_9981f74b2d109da6,
            mid_getQuadraticMean_9981f74b2d109da6,
            mid_getSecondMoment_9981f74b2d109da6,
            mid_getStandardDeviation_9981f74b2d109da6,
            mid_getSum_9981f74b2d109da6,
            mid_getSumOfLogs_9981f74b2d109da6,
            mid_getSumOfSquares_9981f74b2d109da6,
            mid_getSummary_ce882cfbdfe8020d,
            mid_getVariance_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_toString_d2c8eb4129821f0e,
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
