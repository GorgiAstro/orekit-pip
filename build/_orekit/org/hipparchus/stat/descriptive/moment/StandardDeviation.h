#ifndef org_hipparchus_stat_descriptive_moment_StandardDeviation_H
#define org_hipparchus_stat_descriptive_moment_StandardDeviation_H

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
        namespace moment {
          class SecondMoment;
          class StandardDeviation;
        }
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

          class StandardDeviation : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_4f0cd4b99215b675,
              mid_init$_b35db77cae58639e,
              mid_init$_afd6aa27b7bb12b4,
              mid_clear_ff7cb6c242604316,
              mid_copy_5f0732edec832d7b,
              mid_evaluate_02811febb145516c,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_be090b022ea8e24a,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              mid_isBiasCorrected_eee3de00fe971136,
              mid_withBiasCorrection_a58c238729124c9c,
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
