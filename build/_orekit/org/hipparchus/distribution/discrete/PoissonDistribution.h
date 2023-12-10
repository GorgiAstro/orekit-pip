#ifndef org_hipparchus_distribution_discrete_PoissonDistribution_H
#define org_hipparchus_distribution_discrete_PoissonDistribution_H

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

        class PoissonDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_77e0f9a1f260e2e5,
            mid_init$_1d715fa3b7b756e1,
            mid_init$_18b1ce6f78e2ded3,
            mid_init$_b05c288d5068eccb,
            mid_cumulativeProbability_b772323fc98b7293,
            mid_getMean_456d9a2f64d6b28d,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getSupportLowerBound_f2f64475e4580546,
            mid_getSupportUpperBound_f2f64475e4580546,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logProbability_b772323fc98b7293,
            mid_normalApproximateProbability_b772323fc98b7293,
            mid_probability_b772323fc98b7293,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PoissonDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PoissonDistribution(const PoissonDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          static jdouble DEFAULT_EPSILON;
          static jint DEFAULT_MAX_ITERATIONS;

          PoissonDistribution(jdouble);
          PoissonDistribution(jdouble, jdouble);
          PoissonDistribution(jdouble, jint);
          PoissonDistribution(jdouble, jdouble, jint);

          jdouble cumulativeProbability(jint) const;
          jdouble getMean() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logProbability(jint) const;
          jdouble normalApproximateProbability(jint) const;
          jdouble probability(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PoissonDistribution);
        extern PyTypeObject *PY_TYPE(PoissonDistribution);

        class t_PoissonDistribution {
        public:
          PyObject_HEAD
          PoissonDistribution object;
          static PyObject *wrap_Object(const PoissonDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
