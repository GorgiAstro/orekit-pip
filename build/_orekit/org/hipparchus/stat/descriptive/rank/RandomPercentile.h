#ifndef org_hipparchus_stat_descriptive_rank_RandomPercentile_H
#define org_hipparchus_stat_descriptive_rank_RandomPercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

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
namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace rank {
          class RandomPercentile;
        }
      }
    }
    namespace random {
      class RandomGenerator;
    }
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
              mid_init$_0fa09c18fee449d5,
              mid_init$_17db3a65980d3441,
              mid_init$_a351c1fd6920cdee,
              mid_init$_a73757db4170dc00,
              mid_aggregate_9cce984294960975,
              mid_clear_0fa09c18fee449d5,
              mid_copy_d7fd0b60788b1919,
              mid_evaluate_19285de97bbc7eea,
              mid_evaluate_556bede10daac330,
              mid_evaluate_b1f392c723f21637,
              mid_getAggregateN_7076a671f4259cfe,
              mid_getAggregateQuantileRank_ac445c2196a57bd4,
              mid_getAggregateRank_ac445c2196a57bd4,
              mid_getN_492808a339bfa35f,
              mid_getQuantileRank_dcbc7ce2902fa136,
              mid_getRank_dcbc7ce2902fa136,
              mid_getResult_dff5885c2c873297,
              mid_getResult_dcbc7ce2902fa136,
              mid_increment_17db3a65980d3441,
              mid_maxValuesRetained_cebf7dc9be03a93c,
              mid_reduce_ac445c2196a57bd4,
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
