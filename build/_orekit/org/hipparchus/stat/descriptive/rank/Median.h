#ifndef org_hipparchus_stat_descriptive_rank_Median_H
#define org_hipparchus_stat_descriptive_rank_Median_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class Percentile$EstimationType;
          class Median;
        }
      }
      namespace ranking {
        class NaNStrategy;
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
              mid_init$_0fa09c18fee449d5,
              mid_copy_36bb62a49d7ab711,
              mid_evaluate_556bede10daac330,
              mid_getEstimationType_ca8426dd6c9a49d0,
              mid_getKthSelector_f697e2e90a72747d,
              mid_getNaNStrategy_884e0da06e21afce,
              mid_withEstimationType_d01bcc37271b909f,
              mid_withKthSelector_b70e5e7236ae1b3c,
              mid_withNaNStrategy_f18b8dbf01717f4c,
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
