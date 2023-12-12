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
          class Percentile$EstimationType;
          class Percentile;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class KthSelector;
      class PivotingStrategy;
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
              mid_init$_0640e6acf969ed28,
              mid_init$_10f281d777284cea,
              mid_copy_8a657a7f00135d6d,
              mid_evaluate_7e960cd6eee376d8,
              mid_evaluate_05f591cf0826202b,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_52cb74c4004a744d,
              mid_getEstimationType_4612cef7d7be3067,
              mid_getKthSelector_e3d4c2054ef00f3b,
              mid_getNaNStrategy_771b1218ed87a53c,
              mid_getPivotingStrategy_b6c90f164ea1e1c5,
              mid_getQuantile_557b8123390d8d0c,
              mid_setData_cc18240f4a737f14,
              mid_setData_91b51b3c05127ead,
              mid_setQuantile_10f281d777284cea,
              mid_withEstimationType_a8a5642985133f18,
              mid_withKthSelector_4905375d0b810005,
              mid_withNaNStrategy_64d279e273ef2dde,
              mid_getWorkArray_3a89ed5ea3adefb8,
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
