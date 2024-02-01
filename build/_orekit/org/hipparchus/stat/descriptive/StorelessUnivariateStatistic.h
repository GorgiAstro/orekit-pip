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
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
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
            mid_accept_1ad26e8c8c0cd65b,
            mid_clear_ff7cb6c242604316,
            mid_copy_2686517d773e76c2,
            mid_evaluate_620ea098e5f0da00,
            mid_getN_42c72b98e3c2e08a,
            mid_getResult_9981f74b2d109da6,
            mid_increment_1ad26e8c8c0cd65b,
            mid_incrementAll_a71c45509eaf92d1,
            mid_incrementAll_40b495c766d36227,
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
