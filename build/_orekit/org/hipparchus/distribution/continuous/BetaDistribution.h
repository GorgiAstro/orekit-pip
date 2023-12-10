#ifndef org_hipparchus_distribution_continuous_BetaDistribution_H
#define org_hipparchus_distribution_continuous_BetaDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        class BetaDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_1d715fa3b7b756e1,
            mid_init$_d0d6094fbd7015c5,
            mid_cumulativeProbability_0ba5fed9597b693e,
            mid_density_0ba5fed9597b693e,
            mid_getAlpha_456d9a2f64d6b28d,
            mid_getBeta_456d9a2f64d6b28d,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getSupportLowerBound_456d9a2f64d6b28d,
            mid_getSupportUpperBound_456d9a2f64d6b28d,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logDensity_0ba5fed9597b693e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BetaDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BetaDistribution(const BetaDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          BetaDistribution(jdouble, jdouble);
          BetaDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getAlpha() const;
          jdouble getBeta() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logDensity(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        extern PyType_Def PY_TYPE_DEF(BetaDistribution);
        extern PyTypeObject *PY_TYPE(BetaDistribution);

        class t_BetaDistribution {
        public:
          PyObject_HEAD
          BetaDistribution object;
          static PyObject *wrap_Object(const BetaDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif