#ifndef org_hipparchus_stat_descriptive_rank_Percentile_H
#define org_hipparchus_stat_descriptive_rank_Percentile_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class Percentile$EstimationType;
          class Percentile;
        }
      }
      namespace ranking {
        class NaNStrategy;
      }
    }
    namespace util {
      class KthSelector;
      class PivotingStrategy;
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
              mid_init$_0fa09c18fee449d5,
              mid_init$_17db3a65980d3441,
              mid_copy_f11590ceba8ecf74,
              mid_evaluate_dcbc7ce2902fa136,
              mid_evaluate_1c41301ff6e224e7,
              mid_evaluate_556bede10daac330,
              mid_evaluate_9b4f2bb29c648b6e,
              mid_getEstimationType_ca8426dd6c9a49d0,
              mid_getKthSelector_f697e2e90a72747d,
              mid_getNaNStrategy_884e0da06e21afce,
              mid_getPivotingStrategy_d098c6797f63b37e,
              mid_getQuantile_dff5885c2c873297,
              mid_setData_fa9d415d19f69361,
              mid_setData_12aca76acb10f1af,
              mid_setQuantile_17db3a65980d3441,
              mid_withEstimationType_c1b36ec5c96b8b3c,
              mid_withKthSelector_1b4491e78166507c,
              mid_withNaNStrategy_13131bcbd6ba5b56,
              mid_getWorkArray_41a59b6c86e2e047,
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
