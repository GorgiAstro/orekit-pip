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
            mid_init$_ab23f4ae0fb33968,
            mid_init$_87096e3fd8086100,
            mid_cumulativeProbability_7e960cd6eee376d8,
            mid_density_7e960cd6eee376d8,
            mid_getAlpha_557b8123390d8d0c,
            mid_getBeta_557b8123390d8d0c,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getSupportLowerBound_557b8123390d8d0c,
            mid_getSupportUpperBound_557b8123390d8d0c,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logDensity_7e960cd6eee376d8,
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
