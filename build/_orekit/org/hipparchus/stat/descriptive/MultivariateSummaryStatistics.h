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
            mid_init$_0a2a1ac2721c0336,
            mid_init$_bc79bc153a2b3c2e,
            mid_addValue_ebc26dcaf4761286,
            mid_clear_7ae3461a92a43152,
            mid_equals_229c87223f486349,
            mid_getCovariance_7116bbecdd8ceb21,
            mid_getDimension_f2f64475e4580546,
            mid_getGeometricMean_7cdc325af0834901,
            mid_getMax_7cdc325af0834901,
            mid_getMean_7cdc325af0834901,
            mid_getMin_7cdc325af0834901,
            mid_getN_a27fc9afd27e559d,
            mid_getStandardDeviation_7cdc325af0834901,
            mid_getSum_7cdc325af0834901,
            mid_getSumLog_7cdc325af0834901,
            mid_getSumSq_7cdc325af0834901,
            mid_hashCode_f2f64475e4580546,
            mid_toString_0090f7797e403f43,
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
