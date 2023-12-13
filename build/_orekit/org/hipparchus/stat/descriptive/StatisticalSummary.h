#ifndef org_hipparchus_stat_descriptive_StatisticalSummary_H
#define org_hipparchus_stat_descriptive_StatisticalSummary_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class StatisticalSummary : public ::java::lang::Object {
         public:
          enum {
            mid_aggregate_b5d4386d9c48f5f3,
            mid_aggregate_b2572dd77c02dd54,
            mid_getMax_b74f83833fdad017,
            mid_getMean_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getN_6c0ce7e438e5ded4,
            mid_getStandardDeviation_b74f83833fdad017,
            mid_getSum_b74f83833fdad017,
            mid_getVariance_b74f83833fdad017,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StatisticalSummary(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StatisticalSummary(const StatisticalSummary& obj) : ::java::lang::Object(obj) {}

          static StatisticalSummary aggregate(const JArray< StatisticalSummary > &);
          static StatisticalSummary aggregate(const ::java::lang::Iterable &);
          jdouble getMax() const;
          jdouble getMean() const;
          jdouble getMin() const;
          jlong getN() const;
          jdouble getStandardDeviation() const;
          jdouble getSum() const;
          jdouble getVariance() const;
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
        extern PyType_Def PY_TYPE_DEF(StatisticalSummary);
        extern PyTypeObject *PY_TYPE(StatisticalSummary);

        class t_StatisticalSummary {
        public:
          PyObject_HEAD
          StatisticalSummary object;
          static PyObject *wrap_Object(const StatisticalSummary&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
