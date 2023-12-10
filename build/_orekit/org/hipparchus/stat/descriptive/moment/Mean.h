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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          class Mean : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_a3de77dcfa83aed2,
              mid_aggregate_432a3abb0caaadf9,
              mid_clear_0fa09c18fee449d5,
              mid_copy_7b8896d94cfe5ea9,
              mid_evaluate_556bede10daac330,
              mid_evaluate_2634be61548fc62b,
              mid_getN_492808a339bfa35f,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
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
