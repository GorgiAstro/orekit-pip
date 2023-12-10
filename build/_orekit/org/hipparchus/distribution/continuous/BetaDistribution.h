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
            mid_init$_8f2e782d5278b131,
            mid_init$_2c56b6dd4d4b1dec,
            mid_cumulativeProbability_dcbc7ce2902fa136,
            mid_density_dcbc7ce2902fa136,
            mid_getAlpha_dff5885c2c873297,
            mid_getBeta_dff5885c2c873297,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getSupportLowerBound_dff5885c2c873297,
            mid_getSupportUpperBound_dff5885c2c873297,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logDensity_dcbc7ce2902fa136,
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
