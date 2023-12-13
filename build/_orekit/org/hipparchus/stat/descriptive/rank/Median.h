#ifndef org_hipparchus_stat_descriptive_rank_Median_H
#define org_hipparchus_stat_descriptive_rank_Median_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
      }
      namespace descriptive {
        namespace rank {
          class Percentile$EstimationType;
          class Median;
        }
      }
    }
    namespace util {
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

          class Median : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_copy_e7d20978b299e4ee,
              mid_evaluate_1567a80062adb31b,
              mid_getEstimationType_243f7211bd3660bc,
              mid_getKthSelector_5930553957d5187e,
              mid_getNaNStrategy_9ae875326a45f3e9,
              mid_withEstimationType_35be72416be2b820,
              mid_withKthSelector_dbbbd61d1eee8fff,
              mid_withNaNStrategy_41d9c4eb9be594d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Median(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Median(const Median& obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {}

            Median();

            Median copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType getEstimationType() const;
            ::org::hipparchus::util::KthSelector getKthSelector() const;
            ::org::hipparchus::stat::ranking::NaNStrategy getNaNStrategy() const;
            Median withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType &) const;
            Median withKthSelector(const ::org::hipparchus::util::KthSelector &) const;
            Median withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy &) const;
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
          extern PyType_Def PY_TYPE_DEF(Median);
          extern PyTypeObject *PY_TYPE(Median);

          class t_Median {
          public:
            PyObject_HEAD
            Median object;
            static PyObject *wrap_Object(const Median&);
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
