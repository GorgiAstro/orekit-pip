#ifndef org_hipparchus_stat_descriptive_rank_Percentile_H
#define org_hipparchus_stat_descriptive_rank_Percentile_H

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
          class Percentile;
          class Percentile$EstimationType;
        }
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          class Percentile : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_77e0f9a1f260e2e5,
              mid_copy_687ecc328a5dc919,
              mid_evaluate_0ba5fed9597b693e,
              mid_evaluate_926a8b9763aa0b21,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_346318efe67d9ca8,
              mid_getEstimationType_0c09ecaa3168cf74,
              mid_getKthSelector_485854411e6d0542,
              mid_getNaNStrategy_9a708dd74e04e9b8,
              mid_getPivotingStrategy_2b26bc6a688cfe7a,
              mid_getQuantile_456d9a2f64d6b28d,
              mid_setData_ebc26dcaf4761286,
              mid_setData_d3508f432c1d798d,
              mid_setQuantile_77e0f9a1f260e2e5,
              mid_withEstimationType_1cf68d4acf585332,
              mid_withKthSelector_7ba25bf5eb4cfe80,
              mid_withNaNStrategy_a2f6eb1a3014d342,
              mid_getWorkArray_27a40d66e0497a45,
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
