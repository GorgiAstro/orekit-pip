#ifndef org_hipparchus_stat_descriptive_summary_Sum_H
#define org_hipparchus_stat_descriptive_summary_Sum_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        class WeightedEvaluation;
        namespace summary {
          class Sum;
        }
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

          class Sum : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_aggregate_96e9928e3e40622b,
              mid_clear_ff7cb6c242604316,
              mid_copy_36e614b13a8a86d9,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_0b039b932db219bf,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Sum(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Sum(const Sum& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Sum();

            void aggregate(const Sum &) const;
            void clear() const;
            Sum copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(Sum);
          extern PyTypeObject *PY_TYPE(Sum);

          class t_Sum {
          public:
            PyObject_HEAD
            Sum object;
            static PyObject *wrap_Object(const Sum&);
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
