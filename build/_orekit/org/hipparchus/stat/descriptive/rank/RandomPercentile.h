#ifndef org_hipparchus_stat_descriptive_rank_RandomPercentile_H
#define org_hipparchus_stat_descriptive_rank_RandomPercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace rank {
          class RandomPercentile;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace random {
      class RandomGenerator;
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
              mid_init$_ff7cb6c242604316,
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_e24b125c6ff6cc8c,
              mid_init$_b5a4975c915c365a,
              mid_aggregate_78833ceb074ae402,
              mid_clear_ff7cb6c242604316,
              mid_copy_8a647207efee9b27,
              mid_evaluate_4f42c7a8793320e4,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_cc1eeb8fd17c9a9b,
              mid_getAggregateN_ce4bc28a12afbddc,
              mid_getAggregateQuantileRank_d4294c336668ec62,
              mid_getAggregateRank_d4294c336668ec62,
              mid_getN_42c72b98e3c2e08a,
              mid_getQuantileRank_bf28ed64d6e8576b,
              mid_getRank_bf28ed64d6e8576b,
              mid_getResult_9981f74b2d109da6,
              mid_getResult_bf28ed64d6e8576b,
              mid_increment_1ad26e8c8c0cd65b,
              mid_maxValuesRetained_6883df933d8a0182,
              mid_reduce_d4294c336668ec62,
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
