#ifndef org_hipparchus_stat_descriptive_moment_Variance_H
#define org_hipparchus_stat_descriptive_moment_Variance_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        namespace moment {
          class Variance;
          class SecondMoment;
        }
        class AggregatableStatistic;
        class WeightedEvaluation;
      }
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

          class Variance : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_b42241ac9de9fb3c,
              mid_init$_ed2afdb8506b9742,
              mid_init$_466cd392a0f97ab1,
              mid_aggregate_60f191d3bfda3334,
              mid_clear_0640e6acf969ed28,
              mid_copy_f5aebf27311e06e7,
              mid_evaluate_05f591cf0826202b,
              mid_evaluate_abf45904c34f3045,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_579f1672894f464a,
              mid_evaluate_134920ed0a3e958a,
              mid_evaluate_fa204c95c755fb17,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
              mid_isBiasCorrected_89b302893bdbe1f1,
              mid_withBiasCorrection_69eaa2921c58f477,
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
