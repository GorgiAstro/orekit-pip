#ifndef org_hipparchus_stat_descriptive_summary_SumOfLogs_H
#define org_hipparchus_stat_descriptive_summary_SumOfLogs_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          class SumOfLogs;
        }
        class AggregatableStatistic;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_aggregate_2f567ea6ff0bfe8c,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_f7eb836b073b76c1,
              mid_evaluate_1567a80062adb31b,
              mid_getN_6c0ce7e438e5ded4,
              mid_getResult_b74f83833fdad017,
              mid_increment_8ba9fe7a847cecad,
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
