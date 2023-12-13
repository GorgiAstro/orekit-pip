#ifndef org_hipparchus_stat_ranking_RankingAlgorithm_H
#define org_hipparchus_stat_ranking_RankingAlgorithm_H

#include "java/lang/Object.h"

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

        class RankingAlgorithm : public ::java::lang::Object {
         public:
          enum {
            mid_rank_14dee4cb8cc3e959,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RankingAlgorithm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RankingAlgorithm(const RankingAlgorithm& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(RankingAlgorithm);
        extern PyTypeObject *PY_TYPE(RankingAlgorithm);

        class t_RankingAlgorithm {
        public:
          PyObject_HEAD
          RankingAlgorithm object;
          static PyObject *wrap_Object(const RankingAlgorithm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
