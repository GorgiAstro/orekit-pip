#ifndef org_hipparchus_stat_ranking_NaturalRanking_H
#define org_hipparchus_stat_ranking_NaturalRanking_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
        class TiesStrategy;
        class RankingAlgorithm;
      }
    }
    namespace random {
      class RandomGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        class NaturalRanking : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_9a0bb4846d6220d9,
            mid_init$_8895955433ec1a4f,
            mid_init$_19e7f6e95a4dc08e,
            mid_init$_08eff940a3336a45,
            mid_init$_da68996d2e70adaf,
            mid_getNanStrategy_771b1218ed87a53c,
            mid_getTiesStrategy_31f335b655a6e105,
            mid_rank_1db7c087750eaffe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NaturalRanking(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NaturalRanking(const NaturalRanking& obj) : ::java::lang::Object(obj) {}

          static ::org::hipparchus::stat::ranking::NaNStrategy *DEFAULT_NAN_STRATEGY;
          static ::org::hipparchus::stat::ranking::TiesStrategy *DEFAULT_TIES_STRATEGY;

          NaturalRanking();
          NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy &);
          NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy &);
          NaturalRanking(const ::org::hipparchus::random::RandomGenerator &);
          NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy &, const ::org::hipparchus::stat::ranking::TiesStrategy &);
          NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy &, const ::org::hipparchus::random::RandomGenerator &);

          ::org::hipparchus::stat::ranking::NaNStrategy getNanStrategy() const;
          ::org::hipparchus::stat::ranking::TiesStrategy getTiesStrategy() const;
          JArray< jdouble > rank(const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        extern PyType_Def PY_TYPE_DEF(NaturalRanking);
        extern PyTypeObject *PY_TYPE(NaturalRanking);

        class t_NaturalRanking {
        public:
          PyObject_HEAD
          NaturalRanking object;
          static PyObject *wrap_Object(const NaturalRanking&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
