#ifndef org_hipparchus_distribution_discrete_PoissonDistribution_H
#define org_hipparchus_distribution_discrete_PoissonDistribution_H

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

        class PoissonDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_init$_ab23f4ae0fb33968,
            mid_init$_47602ef8408ea361,
            mid_init$_427af08acba367ca,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getMean_557b8123390d8d0c,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_normalApproximateProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
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
