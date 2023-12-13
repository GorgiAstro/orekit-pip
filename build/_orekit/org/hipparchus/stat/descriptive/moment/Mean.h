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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_5f13a5ee5da004b6,
              mid_aggregate_b67a722ddd23d319,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_596ad18729073ae5,
              mid_evaluate_1567a80062adb31b,
              mid_evaluate_0f0d79795aa485ac,
              mid_getN_6c0ce7e438e5ded4,
              mid_getResult_b74f83833fdad017,
              mid_increment_8ba9fe7a847cecad,
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
