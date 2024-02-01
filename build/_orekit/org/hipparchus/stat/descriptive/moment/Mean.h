#ifndef org_hipparchus_stat_descriptive_moment_Mean_H
#define org_hipparchus_stat_descriptive_moment_Mean_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
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
        namespace moment {

          class Mean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_43fa94dba5c449e7,
              mid_aggregate_ecff28aa28da69ff,
              mid_clear_ff7cb6c242604316,
              mid_copy_2b73b4dd9d42384f,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_0b039b932db219bf,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
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
