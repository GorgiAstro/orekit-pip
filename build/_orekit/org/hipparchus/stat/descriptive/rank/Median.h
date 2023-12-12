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
          class Median;
          class Percentile$EstimationType;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class KthSelector;
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
              mid_init$_0640e6acf969ed28,
              mid_copy_9ffc117cc13b2825,
              mid_evaluate_9eeeb1ae977f525d,
              mid_getEstimationType_4612cef7d7be3067,
              mid_getKthSelector_e3d4c2054ef00f3b,
              mid_getNaNStrategy_771b1218ed87a53c,
              mid_withEstimationType_a0066a70c668abd3,
              mid_withKthSelector_e61e10a52383847b,
              mid_withNaNStrategy_2c605bc82addaab6,
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
