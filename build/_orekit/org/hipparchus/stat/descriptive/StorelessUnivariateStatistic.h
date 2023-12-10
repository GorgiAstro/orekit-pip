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
            mid_accept_77e0f9a1f260e2e5,
            mid_clear_7ae3461a92a43152,
            mid_copy_341cf16d0d9912f3,
            mid_evaluate_0a7ff474793a505a,
            mid_getN_a27fc9afd27e559d,
            mid_getResult_456d9a2f64d6b28d,
            mid_increment_77e0f9a1f260e2e5,
            mid_incrementAll_ebc26dcaf4761286,
            mid_incrementAll_d3508f432c1d798d,
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
