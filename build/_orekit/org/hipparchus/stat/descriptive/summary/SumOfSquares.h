#ifndef org_hipparchus_stat_descriptive_summary_SumOfSquares_H
#define org_hipparchus_stat_descriptive_summary_SumOfSquares_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        namespace summary {
          class SumOfSquares;
        }
        class AggregatableStatistic;
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

          class SumOfSquares : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_aggregate_95603f11d6fc6064,
              mid_clear_0640e6acf969ed28,
              mid_copy_d9c42fff0f69ba3e,
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

            explicit SumOfSquares(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SumOfSquares(const SumOfSquares& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            SumOfSquares();

            void aggregate(const SumOfSquares &) const;
            void clear() const;
            SumOfSquares copy() const;
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
          extern PyType_Def PY_TYPE_DEF(SumOfSquares);
          extern PyTypeObject *PY_TYPE(SumOfSquares);

          class t_SumOfSquares {
          public:
            PyObject_HEAD
            SumOfSquares object;
            static PyObject *wrap_Object(const SumOfSquares&);
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
