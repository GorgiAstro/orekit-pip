#ifndef org_hipparchus_distribution_discrete_HypergeometricDistribution_H
#define org_hipparchus_distribution_discrete_HypergeometricDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        class HypergeometricDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_3796b665437eba81,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getNumberOfSuccesses_412668abc8d889e9,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getPopulationSize_412668abc8d889e9,
            mid_getSampleSize_412668abc8d889e9,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
            mid_upperCumulativeProbability_69cfb132c661aca4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HypergeometricDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HypergeometricDistribution(const HypergeometricDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          HypergeometricDistribution(jint, jint, jint);

          jdouble cumulativeProbability(jint) const;
          jint getNumberOfSuccesses() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jint getPopulationSize() const;
          jint getSampleSize() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logProbability(jint) const;
          jdouble probability(jint) const;
          jdouble upperCumulativeProbability(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {
        extern PyType_Def PY_TYPE_DEF(HypergeometricDistribution);
        extern PyTypeObject *PY_TYPE(HypergeometricDistribution);

        class t_HypergeometricDistribution {
        public:
          PyObject_HEAD
          HypergeometricDistribution object;
          static PyObject *wrap_Object(const HypergeometricDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
