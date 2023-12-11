#ifndef org_hipparchus_stat_descriptive_moment_SemiVariance_H
#define org_hipparchus_stat_descriptive_moment_SemiVariance_H

#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        namespace moment {
          class SemiVariance$Direction;
          class SemiVariance;
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

          class SemiVariance : public ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_2faf93aaaab8a142,
              mid_init$_ed2afdb8506b9742,
              mid_init$_27c77adcc15eef37,
              mid_copy_26c42fa296fc5bfe,
              mid_evaluate_1f641d7d3375a072,
              mid_evaluate_05f591cf0826202b,
              mid_evaluate_173d2508cb01802e,
              mid_evaluate_9eeeb1ae977f525d,
              mid_evaluate_e9b03b2ca024d2a8,
              mid_getVarianceDirection_10a295ec4eb71545,
              mid_isBiasCorrected_89b302893bdbe1f1,
              mid_withBiasCorrected_718e07110e31bc5d,
              mid_withVarianceDirection_f5e457a3e8387ad8,
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
