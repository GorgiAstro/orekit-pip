#ifndef org_hipparchus_stat_descriptive_StatisticalSummaryValues_H
#define org_hipparchus_stat_descriptive_StatisticalSummaryValues_H

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

        class StatisticalSummaryValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1c403465fcb9a8fb,
            mid_equals_229c87223f486349,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMean_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_getN_a27fc9afd27e559d,
            mid_getStandardDeviation_456d9a2f64d6b28d,
            mid_getSum_456d9a2f64d6b28d,
            mid_getVariance_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_toString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StatisticalSummaryValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StatisticalSummaryValues(const StatisticalSummaryValues& obj) : ::java::lang::Object(obj) {}

          StatisticalSummaryValues(jdouble, jdouble, jlong, jdouble, jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getMax() const;
          jdouble getMean() const;
          jdouble getMin() const;
          jlong getN() const;
          jdouble getStandardDeviation() const;
          jdouble getSum() const;
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
        extern PyType_Def PY_TYPE_DEF(StatisticalSummaryValues);
        extern PyTypeObject *PY_TYPE(StatisticalSummaryValues);

        class t_StatisticalSummaryValues {
        public:
          PyObject_HEAD
          StatisticalSummaryValues object;
          static PyObject *wrap_Object(const StatisticalSummaryValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
