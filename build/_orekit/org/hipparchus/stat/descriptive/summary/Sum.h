#ifndef org_hipparchus_stat_descriptive_summary_Sum_H
#define org_hipparchus_stat_descriptive_summary_Sum_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          class Sum;
        }
        class AggregatableStatistic;
        class WeightedEvaluation;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          class Sum : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_aggregate_25d5c59e3f447083,
              mid_clear_7ae3461a92a43152,
              mid_copy_1b7c02fe1f7afbd8,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_5d62632feda90f27,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_456d9a2f64d6b28d,
              mid_increment_77e0f9a1f260e2e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Sum(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Sum(const Sum& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Sum();

            void aggregate(const Sum &) const;
            void clear() const;
            Sum copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint) const;
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
        namespace summary {
          extern PyType_Def PY_TYPE_DEF(Sum);
          extern PyTypeObject *PY_TYPE(Sum);

          class t_Sum {
          public:
            PyObject_HEAD
            Sum object;
            static PyObject *wrap_Object(const Sum&);
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
