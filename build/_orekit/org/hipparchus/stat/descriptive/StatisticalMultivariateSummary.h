#ifndef org_hipparchus_stat_descriptive_StatisticalMultivariateSummary_H
#define org_hipparchus_stat_descriptive_StatisticalMultivariateSummary_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class StatisticalMultivariateSummary : public ::java::lang::Object {
         public:
          enum {
            mid_getCovariance_b2eebabce70526d8,
            mid_getDimension_d6ab429752e7c267,
            mid_getGeometricMean_be783177b060994b,
            mid_getMax_be783177b060994b,
            mid_getMean_be783177b060994b,
            mid_getMin_be783177b060994b,
            mid_getN_42c72b98e3c2e08a,
            mid_getStandardDeviation_be783177b060994b,
            mid_getSum_be783177b060994b,
            mid_getSumLog_be783177b060994b,
            mid_getSumSq_be783177b060994b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StatisticalMultivariateSummary(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StatisticalMultivariateSummary(const StatisticalMultivariateSummary& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::linear::RealMatrix getCovariance() const;
          jint getDimension() const;
          JArray< jdouble > getGeometricMean() const;
          JArray< jdouble > getMax() const;
          JArray< jdouble > getMean() const;
          JArray< jdouble > getMin() const;
          jlong getN() const;
          JArray< jdouble > getStandardDeviation() const;
          JArray< jdouble > getSum() const;
          JArray< jdouble > getSumLog() const;
          JArray< jdouble > getSumSq() const;
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
        extern PyType_Def PY_TYPE_DEF(StatisticalMultivariateSummary);
        extern PyTypeObject *PY_TYPE(StatisticalMultivariateSummary);

        class t_StatisticalMultivariateSummary {
        public:
          PyObject_HEAD
          StatisticalMultivariateSummary object;
          static PyObject *wrap_Object(const StatisticalMultivariateSummary&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
