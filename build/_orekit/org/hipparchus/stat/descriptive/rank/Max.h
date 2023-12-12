#ifndef org_hipparchus_stat_descriptive_rank_Max_H
#define org_hipparchus_stat_descriptive_rank_Max_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class Max;
        }
        class AggregatableStatistic;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
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
        namespace rank {

          class Max : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_aggregate_1f02a0aeaa94b22d,
              mid_clear_0640e6acf969ed28,
              mid_copy_2755e5ad258aab4f,
              mid_evaluate_9eeeb1ae977f525d,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Max(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Max(const Max& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Max();

            void aggregate(const Max &) const;
            void clear() const;
            Max copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jlong getN() const;
            jdouble getResult() const;
            void increment(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          extern PyType_Def PY_TYPE_DEF(Max);
          extern PyTypeObject *PY_TYPE(Max);

          class t_Max {
          public:
            PyObject_HEAD
            Max object;
            static PyObject *wrap_Object(const Max&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
