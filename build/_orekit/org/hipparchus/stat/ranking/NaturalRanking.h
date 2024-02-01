#ifndef org_hipparchus_stat_ranking_NaturalRanking_H
#define org_hipparchus_stat_ranking_NaturalRanking_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class TiesStrategy;
        class RankingAlgorithm;
        class NaNStrategy;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_1a342cfb401ed671,
            mid_init$_d714e6bd58b104cb,
            mid_init$_e24b125c6ff6cc8c,
            mid_init$_49a3c82f9e34fc75,
            mid_init$_45df11e9d865ae4f,
            mid_getNanStrategy_7ad66d754bcf87e2,
            mid_getTiesStrategy_412886e0f6fc9df5,
            mid_rank_51f624c89851da7e,
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
