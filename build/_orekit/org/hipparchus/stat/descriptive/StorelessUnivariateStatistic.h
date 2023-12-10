#ifndef org_hipparchus_stat_descriptive_StorelessUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_StorelessUnivariateStatistic_H

#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StorelessUnivariateStatistic;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
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

        class StorelessUnivariateStatistic : public ::org::hipparchus::stat::descriptive::UnivariateStatistic {
         public:
          enum {
            mid_accept_17db3a65980d3441,
            mid_clear_0fa09c18fee449d5,
            mid_copy_ac0cb19696f2f20f,
            mid_evaluate_556bede10daac330,
            mid_getN_492808a339bfa35f,
            mid_getResult_dff5885c2c873297,
            mid_increment_17db3a65980d3441,
            mid_incrementAll_fa9d415d19f69361,
            mid_incrementAll_12aca76acb10f1af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StorelessUnivariateStatistic(jobject obj) : ::org::hipparchus::stat::descriptive::UnivariateStatistic(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StorelessUnivariateStatistic(const StorelessUnivariateStatistic& obj) : ::org::hipparchus::stat::descriptive::UnivariateStatistic(obj) {}

          void accept(jdouble) const;
          void clear() const;
          StorelessUnivariateStatistic copy() const;
          jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
          jlong getN() const;
          jdouble getResult() const;
          void increment(jdouble) const;
          void incrementAll(const JArray< jdouble > &) const;
          void incrementAll(const JArray< jdouble > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(StorelessUnivariateStatistic);
        extern PyTypeObject *PY_TYPE(StorelessUnivariateStatistic);

        class t_StorelessUnivariateStatistic {
        public:
          PyObject_HEAD
          StorelessUnivariateStatistic object;
          static PyObject *wrap_Object(const StorelessUnivariateStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
