#ifndef org_hipparchus_stat_descriptive_summary_SumOfSquares_H
#define org_hipparchus_stat_descriptive_summary_SumOfSquares_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          class SumOfSquares;
        }
        class AggregatableStatistic;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
              mid_init$_0fa09c18fee449d5,
              mid_aggregate_4ae573e50f135b2f,
              mid_clear_0fa09c18fee449d5,
              mid_copy_9f0db2ec4a0fcc45,
              mid_evaluate_556bede10daac330,
              mid_getN_492808a339bfa35f,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
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
