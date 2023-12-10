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
            mid_init$_17db3a65980d3441,
            mid_init$_8f2e782d5278b131,
            mid_init$_75c2da74a5a59fda,
            mid_init$_01fb2c777e5def32,
            mid_cumulativeProbability_46f85b53d9aedd96,
            mid_getMean_dff5885c2c873297,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getSupportLowerBound_570ce0828f81a2c1,
            mid_getSupportUpperBound_570ce0828f81a2c1,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logProbability_46f85b53d9aedd96,
            mid_normalApproximateProbability_46f85b53d9aedd96,
            mid_probability_46f85b53d9aedd96,
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
