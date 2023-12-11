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
            mid_init$_6eeee7b0aa7863ba,
            mid_equals_221e8e85cb385209,
            mid_getMax_557b8123390d8d0c,
            mid_getMean_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getN_9e26256fb0d384a2,
            mid_getStandardDeviation_557b8123390d8d0c,
            mid_getSum_557b8123390d8d0c,
            mid_getVariance_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_toString_3cffd47377eca18a,
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
