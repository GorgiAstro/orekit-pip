#ifndef org_hipparchus_stat_descriptive_rank_Percentile_H
#define org_hipparchus_stat_descriptive_rank_Percentile_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
      }
      namespace descriptive {
        namespace rank {
          class Percentile;
          class Percentile$EstimationType;
        }
      }
    }
    namespace util {
      class PivotingStrategy;
      class KthSelector;
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
        namespace rank {

          class Percentile : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_8ba9fe7a847cecad,
              mid_copy_6f8e2276efd5ffa7,
              mid_evaluate_04fd0666b613d2ab,
              mid_evaluate_79e4db9e1e3d84c9,
              mid_evaluate_1567a80062adb31b,
              mid_evaluate_86463cae6c6d5697,
              mid_getEstimationType_243f7211bd3660bc,
              mid_getKthSelector_5930553957d5187e,
              mid_getNaNStrategy_9ae875326a45f3e9,
              mid_getPivotingStrategy_ba4eca3a4b36ce9e,
              mid_getQuantile_b74f83833fdad017,
              mid_setData_ab69da052b88f50c,
              mid_setData_4484ad1f15b73c7a,
              mid_setQuantile_8ba9fe7a847cecad,
              mid_withEstimationType_1ec06e0f941503f2,
              mid_withKthSelector_43dbccb83ddf0e67,
              mid_withNaNStrategy_4c4577d1348367d8,
              mid_getWorkArray_4ab5393b410e04fc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Percentile(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Percentile(const Percentile& obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {}

            Percentile();
            Percentile(jdouble);

            Percentile copy() const;
            jdouble evaluate(jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint, jdouble) const;
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType getEstimationType() const;
            ::org::hipparchus::util::KthSelector getKthSelector() const;
            ::org::hipparchus::stat::ranking::NaNStrategy getNaNStrategy() const;
            ::org::hipparchus::util::PivotingStrategy getPivotingStrategy() const;
            jdouble getQuantile() const;
            void setData(const JArray< jdouble > &) const;
            void setData(const JArray< jdouble > &, jint, jint) const;
            void setQuantile(jdouble) const;
            Percentile withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType &) const;
            Percentile withKthSelector(const ::org::hipparchus::util::KthSelector &) const;
            Percentile withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy &) const;
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
        namespace rank {
          extern PyType_Def PY_TYPE_DEF(Percentile);
          extern PyTypeObject *PY_TYPE(Percentile);

          class t_Percentile {
          public:
            PyObject_HEAD
            Percentile object;
            static PyObject *wrap_Object(const Percentile&);
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
