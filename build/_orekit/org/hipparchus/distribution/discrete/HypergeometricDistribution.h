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
            mid_init$_a0df4b8e4ed3805e,
            mid_cumulativeProbability_2afcbc21f4e57ab2,
            mid_getNumberOfSuccesses_55546ef6a647f39b,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getPopulationSize_55546ef6a647f39b,
            mid_getSampleSize_55546ef6a647f39b,
            mid_getSupportLowerBound_55546ef6a647f39b,
            mid_getSupportUpperBound_55546ef6a647f39b,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_logProbability_2afcbc21f4e57ab2,
            mid_probability_2afcbc21f4e57ab2,
            mid_upperCumulativeProbability_2afcbc21f4e57ab2,
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
