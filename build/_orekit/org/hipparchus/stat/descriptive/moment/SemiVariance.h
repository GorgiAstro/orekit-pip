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
              mid_init$_ff7cb6c242604316,
              mid_init$_79c096891d3e539b,
              mid_init$_b35db77cae58639e,
              mid_init$_418b8a246e0c33bd,
              mid_copy_84a8484e1258ad28,
              mid_evaluate_229f5c50d878b104,
              mid_evaluate_02811febb145516c,
              mid_evaluate_49ff84cd883d84c0,
              mid_evaluate_620ea098e5f0da00,
              mid_evaluate_074b17341dec6c01,
              mid_getVarianceDirection_242f9ad1a2b84bd8,
              mid_isBiasCorrected_eee3de00fe971136,
              mid_withBiasCorrected_494831e647e10241,
              mid_withVarianceDirection_11b511cca7fbbae2,
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
