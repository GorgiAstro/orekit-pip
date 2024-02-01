#ifndef org_hipparchus_stat_descriptive_rank_Min_H
#define org_hipparchus_stat_descriptive_rank_Min_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace rank {
          class Min;
        }
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

          class Min : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_aggregate_8517e5768ecc2305,
              mid_clear_ff7cb6c242604316,
              mid_copy_0c41f90993e4c7c6,
              mid_evaluate_620ea098e5f0da00,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Min(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Min(const Min& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Min();

            void aggregate(const Min &) const;
            void clear() const;
            Min copy() const;
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
          extern PyType_Def PY_TYPE_DEF(Min);
          extern PyTypeObject *PY_TYPE(Min);

          class t_Min {
          public:
            PyObject_HEAD
            Min object;
            static PyObject *wrap_Object(const Min&);
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
