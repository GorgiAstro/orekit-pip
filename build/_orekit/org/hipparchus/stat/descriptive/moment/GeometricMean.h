#ifndef org_hipparchus_stat_descriptive_moment_GeometricMean_H
#define org_hipparchus_stat_descriptive_moment_GeometricMean_H

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
        namespace moment {
          class GeometricMean;
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
        namespace moment {

          class GeometricMean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_6a62c6cf36c34733,
              mid_aggregate_b7317f18b8318562,
              mid_clear_0640e6acf969ed28,
              mid_copy_942e62182ea7f28a,
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
