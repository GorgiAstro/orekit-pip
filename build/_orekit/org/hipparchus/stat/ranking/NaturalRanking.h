#ifndef org_hipparchus_stat_ranking_NaturalRanking_H
#define org_hipparchus_stat_ranking_NaturalRanking_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class RankingAlgorithm;
        class NaNStrategy;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_dd099107a84a1a1b,
            mid_init$_c837e5ae3e5acc4c,
            mid_init$_a351c1fd6920cdee,
            mid_init$_ed87323846b88129,
            mid_init$_35f8015fd6028894,
            mid_getNanStrategy_884e0da06e21afce,
            mid_getTiesStrategy_e75cf41139182548,
            mid_rank_ac3d742ccc742f22,
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
