#ifndef org_hipparchus_stat_descriptive_MultivariateSummaryStatistics_H
#define org_hipparchus_stat_descriptive_MultivariateSummaryStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalMultivariateSummary;
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
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class MultivariateSummaryStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a3da1a935cb37f7b,
            mid_init$_746492bb94848925,
            mid_addValue_cc18240f4a737f14,
            mid_clear_0640e6acf969ed28,
            mid_equals_221e8e85cb385209,
            mid_getCovariance_70a207fcbc031df2,
            mid_getDimension_412668abc8d889e9,
            mid_getGeometricMean_a53a7513ecedada2,
            mid_getMax_a53a7513ecedada2,
            mid_getMean_a53a7513ecedada2,
            mid_getMin_a53a7513ecedada2,
            mid_getN_9e26256fb0d384a2,
            mid_getStandardDeviation_a53a7513ecedada2,
            mid_getSum_a53a7513ecedada2,
            mid_getSumLog_a53a7513ecedada2,
            mid_getSumSq_a53a7513ecedada2,
            mid_hashCode_412668abc8d889e9,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultivariateSummaryStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultivariateSummaryStatistics(const MultivariateSummaryStatistics& obj) : ::java::lang::Object(obj) {}

          MultivariateSummaryStatistics(jint);
          MultivariateSummaryStatistics(jint, jboolean);

          void addValue(const JArray< jdouble > &) const;
          void clear() const;
          jboolean equals(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultivariateSummaryStatistics);
        extern PyTypeObject *PY_TYPE(MultivariateSummaryStatistics);

        class t_MultivariateSummaryStatistics {
        public:
          PyObject_HEAD
          MultivariateSummaryStatistics object;
          static PyObject *wrap_Object(const MultivariateSummaryStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
