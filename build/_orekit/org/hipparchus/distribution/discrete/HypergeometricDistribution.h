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
            mid_init$_c80ec2f7d8b5fe87,
            mid_cumulativeProbability_b772323fc98b7293,
            mid_getNumberOfSuccesses_f2f64475e4580546,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getPopulationSize_f2f64475e4580546,
            mid_getSampleSize_f2f64475e4580546,
            mid_getSupportLowerBound_f2f64475e4580546,
            mid_getSupportUpperBound_f2f64475e4580546,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logProbability_b772323fc98b7293,
            mid_probability_b772323fc98b7293,
            mid_upperCumulativeProbability_b772323fc98b7293,
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
