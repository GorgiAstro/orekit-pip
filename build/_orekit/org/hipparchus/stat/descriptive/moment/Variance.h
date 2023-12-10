#ifndef org_hipparchus_stat_descriptive_moment_Variance_H
#define org_hipparchus_stat_descriptive_moment_Variance_H

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
          class Variance;
          class SecondMoment;
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

          class Variance : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_7d2491dc61f6c936,
              mid_init$_bd04c9335fb9e4cf,
              mid_init$_2e37288d51fb7ec1,
              mid_aggregate_193b2539f8f1ef0d,
              mid_clear_0fa09c18fee449d5,
              mid_copy_69ecd18766deb58c,
              mid_evaluate_1c41301ff6e224e7,
              mid_evaluate_81770d1e77838f28,
              mid_evaluate_556bede10daac330,
              mid_evaluate_2634be61548fc62b,
              mid_evaluate_82195b7753559055,
              mid_evaluate_70750df077661d7e,
              mid_getN_492808a339bfa35f,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
              mid_isBiasCorrected_b108b35ef48e27bd,
              mid_withBiasCorrection_cff1120d0d93730e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Variance(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Variance(const Variance& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Variance();
            Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment &);
            Variance(jboolean);
            Variance(jboolean, const ::org::hipparchus::stat::descriptive::moment::SecondMoment &);

            void aggregate(const Variance &) const;
            void clear() const;
            Variance copy() const;
            jdouble evaluate(const JArray< jdouble > &, jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jdouble, jint, jint) const;
            jlong getN() const;
            jdouble getResult() const;
            void increment(jdouble) const;
            jboolean isBiasCorrected() const;
            Variance withBiasCorrection(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(Variance);
          extern PyTypeObject *PY_TYPE(Variance);

          class t_Variance {
          public:
            PyObject_HEAD
            Variance object;
            static PyObject *wrap_Object(const Variance&);
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
