#ifndef org_hipparchus_stat_descriptive_StorelessUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_StorelessUnivariateStatistic_H

#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StorelessUnivariateStatistic;
      }
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
            mid_accept_10f281d777284cea,
            mid_clear_0640e6acf969ed28,
            mid_copy_0a0ee925e68176d0,
            mid_evaluate_9eeeb1ae977f525d,
            mid_getN_9e26256fb0d384a2,
            mid_getResult_557b8123390d8d0c,
            mid_increment_10f281d777284cea,
            mid_incrementAll_cc18240f4a737f14,
            mid_incrementAll_91b51b3c05127ead,
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
