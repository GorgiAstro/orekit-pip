#ifndef org_hipparchus_stat_descriptive_MultivariateSummaryStatistics_H
#define org_hipparchus_stat_descriptive_MultivariateSummaryStatistics_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
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
        class StatisticalMultivariateSummary;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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

        class MultivariateSummaryStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8fd427ab23829bf5,
            mid_init$_06c90d8be18d8afa,
            mid_addValue_a71c45509eaf92d1,
            mid_clear_ff7cb6c242604316,
            mid_equals_72faff9b05f5ed5e,
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
            mid_hashCode_d6ab429752e7c267,
            mid_toString_d2c8eb4129821f0e,
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
