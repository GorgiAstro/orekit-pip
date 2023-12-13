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

        class StreamingStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_6f61eb577a811a32,
            mid_accept_8ba9fe7a847cecad,
            mid_addValue_8ba9fe7a847cecad,
            mid_aggregate_3cc4cef4f5479457,
            mid_builder_51916748f28e7e70,
            mid_clear_a1fa5dae97ea5ed2,
            mid_copy_32dcaf3e8c6a3a28,
            mid_equals_460c5e2d9d51c6cc,
            mid_getGeometricMean_b74f83833fdad017,
            mid_getMax_b74f83833fdad017,
            mid_getMean_b74f83833fdad017,
            mid_getMedian_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getN_6c0ce7e438e5ded4,
            mid_getPercentile_04fd0666b613d2ab,
            mid_getPopulationVariance_b74f83833fdad017,
            mid_getQuadraticMean_b74f83833fdad017,
            mid_getSecondMoment_b74f83833fdad017,
            mid_getStandardDeviation_b74f83833fdad017,
            mid_getSum_b74f83833fdad017,
            mid_getSumOfLogs_b74f83833fdad017,
            mid_getSumOfSquares_b74f83833fdad017,
            mid_getSummary_ce50f3086162cae8,
            mid_getVariance_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_toString_1c1fa1e935d6cdcf,
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
