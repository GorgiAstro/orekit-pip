#ifndef org_hipparchus_stat_descriptive_rank_Percentile_H
#define org_hipparchus_stat_descriptive_rank_Percentile_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class Percentile;
          class Percentile$EstimationType;
        }
      }
      namespace ranking {
        class NaNStrategy;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class PivotingStrategy;
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

          class Percentile : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_1ad26e8c8c0cd65b,
              mid_copy_e585142f83051cda,
              mid_evaluate_bf28ed64d6e8576b,
              mid_evaluate_02811febb145516c,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_764f25835195d79e,
              mid_getEstimationType_07008c3d622bf167,
              mid_getKthSelector_cc406bafcbb38cb4,
              mid_getNaNStrategy_7ad66d754bcf87e2,
              mid_getPivotingStrategy_e19ea4ef6d7ee6b5,
              mid_getQuantile_9981f74b2d109da6,
              mid_setData_a71c45509eaf92d1,
              mid_setData_40b495c766d36227,
              mid_setQuantile_1ad26e8c8c0cd65b,
              mid_withEstimationType_720b3dc5c55c248a,
              mid_withKthSelector_494f8f6ae8574852,
              mid_withNaNStrategy_2ccbc67d03d0079d,
              mid_getWorkArray_8f6ddc643efefb02,
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
