#ifndef org_hipparchus_stat_descriptive_moment_GeometricMean_H
#define org_hipparchus_stat_descriptive_moment_GeometricMean_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class GeometricMean;
        }
        class AggregatableStatistic;
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
        namespace moment {

          class GeometricMean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_36a30fff2b6ee27c,
              mid_aggregate_9d417ab40feb5691,
              mid_clear_ff7cb6c242604316,
              mid_copy_338a3fd864bc17df,
              mid_evaluate_620ea098e5f0da00,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
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
