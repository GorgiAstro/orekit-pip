#ifndef org_hipparchus_stat_descriptive_moment_Variance_H
#define org_hipparchus_stat_descriptive_moment_Variance_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace moment {
          class SecondMoment;
          class Variance;
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

          class Variance : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_4f0cd4b99215b675,
              mid_init$_b35db77cae58639e,
              mid_init$_afd6aa27b7bb12b4,
              mid_aggregate_abcc7517bb8f628c,
              mid_clear_ff7cb6c242604316,
              mid_copy_9cbdf2d14557145a,
              mid_evaluate_02811febb145516c,
              mid_evaluate_65d620e9532c2371,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_0b039b932db219bf,
              mid_evaluate_be090b022ea8e24a,
              mid_evaluate_0e12714d9e3d21fe,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              mid_isBiasCorrected_eee3de00fe971136,
              mid_withBiasCorrection_d81660c5fa3f9ace,
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
