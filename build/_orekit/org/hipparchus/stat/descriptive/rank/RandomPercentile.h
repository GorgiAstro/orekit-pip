#ifndef org_hipparchus_stat_descriptive_rank_RandomPercentile_H
#define org_hipparchus_stat_descriptive_rank_RandomPercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_8ba9fe7a847cecad,
              mid_init$_f1c8159898f25396,
              mid_init$_6f61eb577a811a32,
              mid_aggregate_29e91062f5743be3,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_0a1c21202907a51b,
              mid_evaluate_e45651f63bcd931a,
              mid_evaluate_1567a80062adb31b,
              mid_evaluate_77eb5de7403bd8c7,
              mid_getAggregateN_b19699bf13064258,
              mid_getAggregateQuantileRank_14d6020fc6898a6b,
              mid_getAggregateRank_14d6020fc6898a6b,
              mid_getN_6c0ce7e438e5ded4,
              mid_getQuantileRank_04fd0666b613d2ab,
              mid_getRank_04fd0666b613d2ab,
              mid_getResult_b74f83833fdad017,
              mid_getResult_04fd0666b613d2ab,
              mid_increment_8ba9fe7a847cecad,
              mid_maxValuesRetained_12ed7e7112604870,
              mid_reduce_14d6020fc6898a6b,
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
