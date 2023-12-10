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
        namespace summary {
          class SumOfLogs;
        }
        class AggregatableStatistic;
        namespace moment {
          class GeometricMean;
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
              mid_init$_7ae3461a92a43152,
              mid_init$_2808634b771b9a30,
              mid_aggregate_9882d23af18eb664,
              mid_clear_7ae3461a92a43152,
              mid_copy_9c769f7ab9843cf4,
              mid_evaluate_0a7ff474793a505a,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_456d9a2f64d6b28d,
              mid_increment_77e0f9a1f260e2e5,
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
