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
    namespace stat {
      namespace descriptive {
        class StatisticalMultivariateSummary;
      }
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
            mid_init$_44ed599e93e8a30c,
            mid_init$_34742154de10200a,
            mid_addValue_ab69da052b88f50c,
            mid_clear_a1fa5dae97ea5ed2,
            mid_equals_460c5e2d9d51c6cc,
            mid_getCovariance_f77d745f2128c391,
            mid_getDimension_55546ef6a647f39b,
            mid_getGeometricMean_25e1757a36c4dde2,
            mid_getMax_25e1757a36c4dde2,
            mid_getMean_25e1757a36c4dde2,
            mid_getMin_25e1757a36c4dde2,
            mid_getN_6c0ce7e438e5ded4,
            mid_getStandardDeviation_25e1757a36c4dde2,
            mid_getSum_25e1757a36c4dde2,
            mid_getSumLog_25e1757a36c4dde2,
            mid_getSumSq_25e1757a36c4dde2,
            mid_hashCode_55546ef6a647f39b,
            mid_toString_1c1fa1e935d6cdcf,
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
