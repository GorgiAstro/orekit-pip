#ifndef org_hipparchus_distribution_discrete_HypergeometricDistribution_H
#define org_hipparchus_distribution_discrete_HypergeometricDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
            mid_init$_48ca1125d4856a74,
            mid_cumulativeProbability_ce4c02d583456bc9,
            mid_getNumberOfSuccesses_d6ab429752e7c267,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getPopulationSize_d6ab429752e7c267,
            mid_getSampleSize_d6ab429752e7c267,
            mid_getSupportLowerBound_d6ab429752e7c267,
            mid_getSupportUpperBound_d6ab429752e7c267,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logProbability_ce4c02d583456bc9,
            mid_probability_ce4c02d583456bc9,
            mid_upperCumulativeProbability_ce4c02d583456bc9,
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
