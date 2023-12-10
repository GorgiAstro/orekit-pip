#ifndef org_hipparchus_stat_descriptive_rank_RandomPercentile_H
#define org_hipparchus_stat_descriptive_rank_RandomPercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        namespace rank {
          class RandomPercentile;
        }
        class AggregatableStatistic;
      }
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Collection;
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

          class RandomPercentile : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_bb31e8cbfaf41e63,
              mid_init$_313f2327697bef05,
              mid_aggregate_d05e55c7836d5599,
              mid_clear_7ae3461a92a43152,
              mid_copy_86f662ee598b8165,
              mid_evaluate_618a40a0b95154fa,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_52f299e1e5aa92be,
              mid_getAggregateN_a00f51a898ec07ff,
              mid_getAggregateQuantileRank_bbcaca5ce440726d,
              mid_getAggregateRank_bbcaca5ce440726d,
              mid_getN_a27fc9afd27e559d,
              mid_getQuantileRank_0ba5fed9597b693e,
              mid_getRank_0ba5fed9597b693e,
              mid_getResult_456d9a2f64d6b28d,
              mid_getResult_0ba5fed9597b693e,
              mid_increment_77e0f9a1f260e2e5,
              mid_maxValuesRetained_7920263ad8deab44,
              mid_reduce_bbcaca5ce440726d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RandomPercentile(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RandomPercentile(const RandomPercentile& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            static jdouble DEFAULT_EPSILON;

            RandomPercentile();
            RandomPercentile(jdouble);
            RandomPercentile(const ::org::hipparchus::random::RandomGenerator &);
            RandomPercentile(jdouble, const ::org::hipparchus::random::RandomGenerator &);

            void aggregate(const RandomPercentile &) const;
            void clear() const;
            RandomPercentile copy() const;
            jdouble evaluate(jdouble, const JArray< jdouble > &) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(jdouble, const JArray< jdouble > &, jint, jint) const;
            jdouble getAggregateN(const ::java::util::Collection &) const;
            jdouble getAggregateQuantileRank(jdouble, const ::java::util::Collection &) const;
            jdouble getAggregateRank(jdouble, const ::java::util::Collection &) const;
            jlong getN() const;
            jdouble getQuantileRank(jdouble) const;
            jdouble getRank(jdouble) const;
            jdouble getResult() const;
            jdouble getResult(jdouble) const;
            void increment(jdouble) const;
            static jlong maxValuesRetained(jdouble);
            jdouble reduce(jdouble, const ::java::util::Collection &) const;
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
          extern PyType_Def PY_TYPE_DEF(RandomPercentile);
          extern PyTypeObject *PY_TYPE(RandomPercentile);

          class t_RandomPercentile {
          public:
            PyObject_HEAD
            RandomPercentile object;
            static PyObject *wrap_Object(const RandomPercentile&);
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
