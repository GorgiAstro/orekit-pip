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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class MultivariateSummaryStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_99803b0791f320ff,
            mid_init$_f61a0322e15bde25,
            mid_addValue_fa9d415d19f69361,
            mid_clear_0fa09c18fee449d5,
            mid_equals_65c7d273e80d497a,
            mid_getCovariance_688b496048ff947b,
            mid_getDimension_570ce0828f81a2c1,
            mid_getGeometricMean_60c7040667a7dc5c,
            mid_getMax_60c7040667a7dc5c,
            mid_getMean_60c7040667a7dc5c,
            mid_getMin_60c7040667a7dc5c,
            mid_getN_492808a339bfa35f,
            mid_getStandardDeviation_60c7040667a7dc5c,
            mid_getSum_60c7040667a7dc5c,
            mid_getSumLog_60c7040667a7dc5c,
            mid_getSumSq_60c7040667a7dc5c,
            mid_hashCode_570ce0828f81a2c1,
            mid_toString_11b109bd155ca898,
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
