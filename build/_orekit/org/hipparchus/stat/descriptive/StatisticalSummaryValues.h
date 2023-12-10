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
            mid_init$_7cf26d2aa668662f,
            mid_equals_65c7d273e80d497a,
            mid_getMax_dff5885c2c873297,
            mid_getMean_dff5885c2c873297,
            mid_getMin_dff5885c2c873297,
            mid_getN_492808a339bfa35f,
            mid_getStandardDeviation_dff5885c2c873297,
            mid_getSum_dff5885c2c873297,
            mid_getVariance_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_toString_11b109bd155ca898,
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
