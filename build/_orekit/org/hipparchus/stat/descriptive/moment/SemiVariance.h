#ifndef org_hipparchus_stat_descriptive_moment_SemiVariance_H
#define org_hipparchus_stat_descriptive_moment_SemiVariance_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class SemiVariance$Direction;
          class SemiVariance;
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

          class SemiVariance : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_7cf9f8373891ab5c,
              mid_init$_fcb96c98de6fad04,
              mid_init$_f9b66e39c7031a0f,
              mid_copy_975ae770dcc03b8b,
              mid_evaluate_8dc5ab532196831b,
              mid_evaluate_79e4db9e1e3d84c9,
              mid_evaluate_188019cfa585537d,
              mid_evaluate_1567a80062adb31b,
              mid_evaluate_e3954d7d6000c211,
              mid_getVarianceDirection_f2ac1ea2980b3d49,
              mid_isBiasCorrected_9ab94ac1dc23b105,
              mid_withBiasCorrected_02dcf3aae142041b,
              mid_withVarianceDirection_9d387ca5b20ab748,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemiVariance(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemiVariance(const SemiVariance& obj) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(obj) {}

            static ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *DOWNSIDE_VARIANCE;
            static ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *UPSIDE_VARIANCE;

            SemiVariance();
            SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &);
            SemiVariance(jboolean);
            SemiVariance(jboolean, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &);

            SemiVariance copy() const;
            jdouble evaluate(const JArray< jdouble > &, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &) const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, jdouble, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &, jboolean, jint, jint) const;
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction getVarianceDirection() const;
            jboolean isBiasCorrected() const;
            SemiVariance withBiasCorrected(jboolean) const;
            SemiVariance withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction &) const;
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
          extern PyType_Def PY_TYPE_DEF(SemiVariance);
          extern PyTypeObject *PY_TYPE(SemiVariance);

          class t_SemiVariance {
          public:
            PyObject_HEAD
            SemiVariance object;
            static PyObject *wrap_Object(const SemiVariance&);
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
