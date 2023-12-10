#ifndef org_hipparchus_stat_descriptive_moment_GeometricMean_H
#define org_hipparchus_stat_descriptive_moment_GeometricMean_H

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
        class AggregatableStatistic;
        namespace moment {
          class GeometricMean;
        }
        namespace summary {
          class SumOfLogs;
        }
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
        namespace moment {

          class GeometricMean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_b873a77489eff3da,
              mid_aggregate_e47a6fc0848379ab,
              mid_clear_0fa09c18fee449d5,
              mid_copy_b7aadfaef0aaff44,
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

            explicit GeometricMean(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeometricMean(const GeometricMean& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            GeometricMean();
            GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs &);

            void aggregate(const GeometricMean &) const;
            void clear() const;
            GeometricMean copy() const;
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
        namespace moment {
          extern PyType_Def PY_TYPE_DEF(GeometricMean);
          extern PyTypeObject *PY_TYPE(GeometricMean);

          class t_GeometricMean {
          public:
            PyObject_HEAD
            GeometricMean object;
            static PyObject *wrap_Object(const GeometricMean&);
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
