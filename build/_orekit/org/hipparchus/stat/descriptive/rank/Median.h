#ifndef org_hipparchus_stat_descriptive_rank_Median_H
#define org_hipparchus_stat_descriptive_rank_Median_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

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
    namespace exception {
      class MathIllegalArgumentException;
    }
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
              mid_init$_ff7cb6c242604316,
              mid_copy_f6f8c41cf287a65b,
              mid_evaluate_620ea098e5f0da00,
              mid_getEstimationType_07008c3d622bf167,
              mid_getKthSelector_cc406bafcbb38cb4,
              mid_getNaNStrategy_7ad66d754bcf87e2,
              mid_withEstimationType_c6d808d827753260,
              mid_withKthSelector_61386699d5cf0f7b,
              mid_withNaNStrategy_053f2e7ae023cdf3,
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
