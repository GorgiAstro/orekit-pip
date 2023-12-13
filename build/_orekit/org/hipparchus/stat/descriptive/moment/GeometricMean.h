#ifndef org_hipparchus_stat_descriptive_moment_GeometricMean_H
#define org_hipparchus_stat_descriptive_moment_GeometricMean_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_2f567ea6ff0bfe8c,
              mid_aggregate_5166cc86b987c86c,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_eb837c17e27d7de9,
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
