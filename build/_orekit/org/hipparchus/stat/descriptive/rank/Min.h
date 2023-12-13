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
              mid_init$_a1fa5dae97ea5ed2,
              mid_aggregate_f4d24389f0be302e,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_2d9e5729438c28f1,
              mid_evaluate_1567a80062adb31b,
              mid_getN_6c0ce7e438e5ded4,
              mid_getResult_b74f83833fdad017,
              mid_increment_8ba9fe7a847cecad,
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
