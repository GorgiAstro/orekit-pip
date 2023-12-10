#ifndef org_hipparchus_stat_descriptive_moment_SemiVariance_H
#define org_hipparchus_stat_descriptive_moment_SemiVariance_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

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
          class SemiVariance;
          class SemiVariance$Direction;
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

          class SemiVariance : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_92366230b4333eba,
              mid_init$_50a2e0b139e80a58,
              mid_init$_60d69a885caa54d9,
              mid_copy_6f47ac504c7cf84d,
              mid_evaluate_fccab85ed8fabb8f,
              mid_evaluate_926a8b9763aa0b21,
              mid_evaluate_cd8eecfd17ecafce,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_eed160687649204b,
              mid_getVarianceDirection_8dd91916d87a48f4,
              mid_isBiasCorrected_e470b6d9e0d979db,
              mid_withBiasCorrected_7b2868bea83ac0f4,
              mid_withVarianceDirection_4162e2d5716d03fc,
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
