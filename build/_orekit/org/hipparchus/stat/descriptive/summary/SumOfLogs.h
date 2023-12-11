#ifndef org_hipparchus_stat_descriptive_summary_SumOfLogs_H
#define org_hipparchus_stat_descriptive_summary_SumOfLogs_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace summary {
          class SumOfLogs;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          class SumOfLogs : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_aggregate_6a62c6cf36c34733,
              mid_clear_0640e6acf969ed28,
              mid_copy_de0aed3ae7e20e71,
              mid_evaluate_9eeeb1ae977f525d,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SumOfLogs(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SumOfLogs(const SumOfLogs& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            SumOfLogs();

            void aggregate(const SumOfLogs &) const;
            void clear() const;
            SumOfLogs copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jlong getN() const;
            jdouble getResult() const;
            void increment(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          extern PyType_Def PY_TYPE_DEF(SumOfLogs);
          extern PyTypeObject *PY_TYPE(SumOfLogs);

          class t_SumOfLogs {
          public:
            PyObject_HEAD
            SumOfLogs object;
            static PyObject *wrap_Object(const SumOfLogs&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
