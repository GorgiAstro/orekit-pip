#ifndef org_hipparchus_stat_descriptive_moment_StandardDeviation_H
#define org_hipparchus_stat_descriptive_moment_StandardDeviation_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        namespace moment {
          class StandardDeviation;
          class SecondMoment;
        }
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

          class StandardDeviation : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_b42241ac9de9fb3c,
              mid_init$_ed2afdb8506b9742,
              mid_init$_466cd392a0f97ab1,
              mid_clear_0640e6acf969ed28,
              mid_copy_7712cb22347034aa,
              mid_evaluate_05f591cf0826202b,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_134920ed0a3e958a,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
              mid_isBiasCorrected_89b302893bdbe1f1,
              mid_withBiasCorrection_31819963ee766f94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardDeviation(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardDeviation(const StandardDeviation& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            StandardDeviation();
            StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment &);
            StandardDeviation(jboolean);
            StandardDeviation(jboolean, const ::org::hipparchus::stat::descriptive::moment::SecondMoment &);

            void clear() const;
            StandardDeviation copy() const;
            jdouble evaluate(const JArray< jdouble > &, jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble, jint, jint) const;
            jlong getN() const;
            jdouble getResult() const;
            void increment(jdouble) const;
            jboolean isBiasCorrected() const;
            StandardDeviation withBiasCorrection(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(StandardDeviation);
          extern PyTypeObject *PY_TYPE(StandardDeviation);

          class t_StandardDeviation {
          public:
            PyObject_HEAD
            StandardDeviation object;
            static PyObject *wrap_Object(const StandardDeviation&);
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
