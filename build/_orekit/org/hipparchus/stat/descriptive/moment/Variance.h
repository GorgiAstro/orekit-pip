#ifndef org_hipparchus_stat_descriptive_moment_Variance_H
#define org_hipparchus_stat_descriptive_moment_Variance_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class SecondMoment;
          class Variance;
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

          class Variance : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_98e08a33c6fbb84a,
              mid_init$_50a2e0b139e80a58,
              mid_init$_eb21d3f0d574510d,
              mid_aggregate_9823a278b951965d,
              mid_clear_7ae3461a92a43152,
              mid_copy_419e1a63d190ede9,
              mid_evaluate_926a8b9763aa0b21,
              mid_evaluate_568f42d2326d41b5,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_5d62632feda90f27,
              mid_evaluate_431214b6e4f01f3c,
              mid_evaluate_f1d236bdd09f5396,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_456d9a2f64d6b28d,
              mid_increment_77e0f9a1f260e2e5,
              mid_isBiasCorrected_e470b6d9e0d979db,
              mid_withBiasCorrection_2309f759fa1c365a,
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
