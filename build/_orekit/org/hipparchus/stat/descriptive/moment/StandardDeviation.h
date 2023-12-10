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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          class StandardDeviation : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_7d2491dc61f6c936,
              mid_init$_bd04c9335fb9e4cf,
              mid_init$_2e37288d51fb7ec1,
              mid_clear_0fa09c18fee449d5,
              mid_copy_4602d7f3fad7762c,
              mid_evaluate_1c41301ff6e224e7,
              mid_evaluate_556bede10daac330,
              mid_evaluate_82195b7753559055,
              mid_getN_492808a339bfa35f,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
              mid_isBiasCorrected_b108b35ef48e27bd,
              mid_withBiasCorrection_32b8a14555b1fca5,
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
