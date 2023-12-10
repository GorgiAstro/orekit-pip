#ifndef org_hipparchus_stat_descriptive_moment_StandardDeviation_H
#define org_hipparchus_stat_descriptive_moment_StandardDeviation_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

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
              mid_init$_7ae3461a92a43152,
              mid_init$_98e08a33c6fbb84a,
              mid_init$_50a2e0b139e80a58,
              mid_init$_eb21d3f0d574510d,
              mid_clear_7ae3461a92a43152,
              mid_copy_2f34c84b343f1c2a,
              mid_evaluate_926a8b9763aa0b21,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_431214b6e4f01f3c,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_456d9a2f64d6b28d,
              mid_increment_77e0f9a1f260e2e5,
              mid_isBiasCorrected_e470b6d9e0d979db,
              mid_withBiasCorrection_2d720e64fc1348c5,
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
