#ifndef org_hipparchus_stat_descriptive_StatisticalMultivariateSummary_H
#define org_hipparchus_stat_descriptive_StatisticalMultivariateSummary_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
