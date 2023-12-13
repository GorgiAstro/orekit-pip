#ifndef org_hipparchus_stat_ranking_NaturalRanking_H
#define org_hipparchus_stat_ranking_NaturalRanking_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
        class RankingAlgorithm;
        class TiesStrategy;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_762a548744e64bc1,
            mid_init$_12e7f930f26d954d,
            mid_init$_f1c8159898f25396,
            mid_init$_c6e936703eef190b,
            mid_init$_9ea9143ae8bc6296,
            mid_getNanStrategy_9ae875326a45f3e9,
            mid_getTiesStrategy_89158e6cc63b090c,
            mid_rank_14dee4cb8cc3e959,
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
