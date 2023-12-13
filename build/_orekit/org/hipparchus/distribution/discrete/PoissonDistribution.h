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
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_init$_1af1b4c263b48b0c,
            mid_init$_2aa803b9073e6a76,
            mid_cumulativeProbability_2afcbc21f4e57ab2,
            mid_getMean_b74f83833fdad017,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getSupportLowerBound_55546ef6a647f39b,
            mid_getSupportUpperBound_55546ef6a647f39b,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_logProbability_2afcbc21f4e57ab2,
            mid_normalApproximateProbability_2afcbc21f4e57ab2,
            mid_probability_2afcbc21f4e57ab2,
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
