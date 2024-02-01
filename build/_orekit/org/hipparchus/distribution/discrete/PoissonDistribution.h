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
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_13edac039e8cc967,
            mid_init$_0fd8efd9eecb8663,
            mid_init$_905e65280a4e6722,
            mid_cumulativeProbability_ce4c02d583456bc9,
            mid_getMean_9981f74b2d109da6,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getSupportLowerBound_d6ab429752e7c267,
            mid_getSupportUpperBound_d6ab429752e7c267,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logProbability_ce4c02d583456bc9,
            mid_normalApproximateProbability_ce4c02d583456bc9,
            mid_probability_ce4c02d583456bc9,
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
