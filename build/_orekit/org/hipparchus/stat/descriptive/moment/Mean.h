#ifndef org_hipparchus_stat_descriptive_moment_Mean_H
#define org_hipparchus_stat_descriptive_moment_Mean_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class Mean;
          class FirstMoment;
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
              mid_init$_0640e6acf969ed28,
              mid_init$_4588de4772df8531,
              mid_aggregate_d935e5680b15378b,
              mid_clear_0640e6acf969ed28,
              mid_copy_21710564dc90c0ac,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_579f1672894f464a,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
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
