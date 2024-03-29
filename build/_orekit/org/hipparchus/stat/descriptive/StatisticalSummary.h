#ifndef org_hipparchus_stat_descriptive_StatisticalSummary_H
#define org_hipparchus_stat_descriptive_StatisticalSummary_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
      }
    }
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
            mid_aggregate_ff5d74c4ea6f9225,
            mid_aggregate_5026ee59c02f2252,
            mid_getMax_9981f74b2d109da6,
            mid_getMean_9981f74b2d109da6,
            mid_getMin_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getStandardDeviation_9981f74b2d109da6,
            mid_getSum_9981f74b2d109da6,
            mid_getVariance_9981f74b2d109da6,
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
