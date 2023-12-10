#ifndef org_hipparchus_stat_ranking_NaturalRanking_H
#define org_hipparchus_stat_ranking_NaturalRanking_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace ranking {
        class NaNStrategy;
        class RankingAlgorithm;
        class TiesStrategy;
      }
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
            mid_init$_7ae3461a92a43152,
            mid_init$_4008cb414d826f2c,
            mid_init$_7b414007e8f069d9,
            mid_init$_bb31e8cbfaf41e63,
            mid_init$_30686433a7523e33,
            mid_init$_babe6b585b24086b,
            mid_getNanStrategy_9a708dd74e04e9b8,
            mid_getTiesStrategy_93734faba96ed8f2,
            mid_rank_4b742fe429c22ba8,
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
