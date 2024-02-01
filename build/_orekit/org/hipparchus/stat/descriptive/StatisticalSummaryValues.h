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
            mid_init$_4b8f26a359fa6e0c,
            mid_equals_72faff9b05f5ed5e,
            mid_getMax_9981f74b2d109da6,
            mid_getMean_9981f74b2d109da6,
            mid_getMin_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getStandardDeviation_9981f74b2d109da6,
            mid_getSum_9981f74b2d109da6,
            mid_getVariance_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_toString_d2c8eb4129821f0e,
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
