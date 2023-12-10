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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          class Median : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_copy_6e02f003a6bf1eec,
              mid_evaluate_0a7ff474793a505a,
              mid_getEstimationType_0c09ecaa3168cf74,
              mid_getKthSelector_485854411e6d0542,
              mid_getNaNStrategy_9a708dd74e04e9b8,
              mid_withEstimationType_87cec76cda470bc9,
              mid_withKthSelector_220f438871b85648,
              mid_withNaNStrategy_14015af1579bb7e6,
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
