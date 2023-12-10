#ifndef org_hipparchus_stat_descriptive_moment_Mean_H
#define org_hipparchus_stat_descriptive_moment_Mean_H

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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace moment {
          class FirstMoment;
          class Mean;
        }
        class WeightedEvaluation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          class Mean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_8ac58f304db3fcf7,
              mid_aggregate_ebcb692cb756ea65,
              mid_clear_7ae3461a92a43152,
              mid_copy_116c2c8af939e534,
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

            explicit Mean(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Mean(const Mean& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Mean();
            Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment &);

            void aggregate(const Mean &) const;
            void clear() const;
            Mean copy() const;
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
        namespace moment {
          extern PyType_Def PY_TYPE_DEF(Mean);
          extern PyTypeObject *PY_TYPE(Mean);

          class t_Mean {
          public:
            PyObject_HEAD
            Mean object;
            static PyObject *wrap_Object(const Mean&);
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
