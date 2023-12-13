#ifndef org_hipparchus_stat_descriptive_moment_StandardDeviation_H
#define org_hipparchus_stat_descriptive_moment_StandardDeviation_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class StandardDeviation;
          class SecondMoment;
        }
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

          class StandardDeviation : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_b3f951b64db17420,
              mid_init$_fcb96c98de6fad04,
              mid_init$_22c546af386a65f5,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_8159df5c2270dba4,
              mid_evaluate_79e4db9e1e3d84c9,
              mid_evaluate_1567a80062adb31b,
              mid_evaluate_f09b11d2a075df86,
              mid_getN_6c0ce7e438e5ded4,
              mid_getResult_b74f83833fdad017,
              mid_increment_8ba9fe7a847cecad,
              mid_isBiasCorrected_9ab94ac1dc23b105,
              mid_withBiasCorrection_0810dcb67b9fc23a,
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
