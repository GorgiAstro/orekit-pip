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
              mid_init$_0fa09c18fee449d5,
              mid_init$_83338c53b7ac5804,
              mid_init$_bd04c9335fb9e4cf,
              mid_init$_918564a3303f9ffd,
              mid_copy_fe8982514928923b,
              mid_evaluate_300ffa2091a31441,
              mid_evaluate_1c41301ff6e224e7,
              mid_evaluate_4e25eca381ebfe40,
              mid_evaluate_556bede10daac330,
              mid_evaluate_1c36be0f6c01add1,
              mid_getVarianceDirection_56815956fb99b83e,
              mid_isBiasCorrected_b108b35ef48e27bd,
              mid_withBiasCorrected_966ea0d2157c4e9f,
              mid_withVarianceDirection_cfff35f852434f45,
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
