#ifndef org_hipparchus_stat_descriptive_rank_RandomPercentile_H
#define org_hipparchus_stat_descriptive_rank_RandomPercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class RandomPercentile;
        }
        class AggregatableStatistic;
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
              mid_init$_0640e6acf969ed28,
              mid_init$_10f281d777284cea,
              mid_init$_19e7f6e95a4dc08e,
              mid_init$_fb29db45daae1732,
              mid_aggregate_9cb79a90fac63186,
              mid_clear_0640e6acf969ed28,
              mid_copy_29eb99ad640257e5,
              mid_evaluate_1bc40469b56f2c3c,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_a6ce01f236d2d451,
              mid_getAggregateN_1ab1799bb5ae5130,
              mid_getAggregateQuantileRank_8b8f547a5368aa42,
              mid_getAggregateRank_8b8f547a5368aa42,
              mid_getN_9e26256fb0d384a2,
              mid_getQuantileRank_7e960cd6eee376d8,
              mid_getRank_7e960cd6eee376d8,
              mid_getResult_557b8123390d8d0c,
              mid_getResult_7e960cd6eee376d8,
              mid_increment_10f281d777284cea,
              mid_maxValuesRetained_9d550dd06216a860,
              mid_reduce_8b8f547a5368aa42,
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
