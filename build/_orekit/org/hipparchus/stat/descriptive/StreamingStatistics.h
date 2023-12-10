#ifndef org_hipparchus_stat_descriptive_StreamingStatistics_H
#define org_hipparchus_stat_descriptive_StreamingStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace descriptive {
        class StreamingStatistics;
        class AggregatableStatistic;
        class StatisticalSummary;
        class StreamingStatistics$StreamingStatisticsBuilder;
      }
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
            mid_init$_7ae3461a92a43152,
            mid_init$_313f2327697bef05,
            mid_accept_77e0f9a1f260e2e5,
            mid_addValue_77e0f9a1f260e2e5,
            mid_aggregate_209abf4c4bd685bf,
            mid_builder_8895a9fba315c7a6,
            mid_clear_7ae3461a92a43152,
            mid_copy_cdee09d4729ad8fd,
            mid_equals_229c87223f486349,
            mid_getGeometricMean_456d9a2f64d6b28d,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMean_456d9a2f64d6b28d,
            mid_getMedian_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_getN_a27fc9afd27e559d,
            mid_getPercentile_0ba5fed9597b693e,
            mid_getPopulationVariance_456d9a2f64d6b28d,
            mid_getQuadraticMean_456d9a2f64d6b28d,
            mid_getSecondMoment_456d9a2f64d6b28d,
            mid_getStandardDeviation_456d9a2f64d6b28d,
            mid_getSum_456d9a2f64d6b28d,
            mid_getSumOfLogs_456d9a2f64d6b28d,
            mid_getSumOfSquares_456d9a2f64d6b28d,
            mid_getSummary_47e97143cdc53a1c,
            mid_getVariance_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_toString_0090f7797e403f43,
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
