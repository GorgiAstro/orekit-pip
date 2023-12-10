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
            mid_init$_8336200ef3dde36b,
            mid_cumulativeProbability_46f85b53d9aedd96,
            mid_getNumberOfSuccesses_570ce0828f81a2c1,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getPopulationSize_570ce0828f81a2c1,
            mid_getSampleSize_570ce0828f81a2c1,
            mid_getSupportLowerBound_570ce0828f81a2c1,
            mid_getSupportUpperBound_570ce0828f81a2c1,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logProbability_46f85b53d9aedd96,
            mid_probability_46f85b53d9aedd96,
            mid_upperCumulativeProbability_46f85b53d9aedd96,
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
