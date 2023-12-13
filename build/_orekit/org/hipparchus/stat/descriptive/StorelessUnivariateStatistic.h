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
            mid_accept_8ba9fe7a847cecad,
            mid_clear_a1fa5dae97ea5ed2,
            mid_copy_2b25c166f19a0def,
            mid_evaluate_1567a80062adb31b,
            mid_getN_6c0ce7e438e5ded4,
            mid_getResult_b74f83833fdad017,
            mid_increment_8ba9fe7a847cecad,
            mid_incrementAll_ab69da052b88f50c,
            mid_incrementAll_4484ad1f15b73c7a,
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
