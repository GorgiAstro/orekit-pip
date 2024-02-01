#ifndef org_hipparchus_distribution_discrete_BinomialDistribution_H
#define org_hipparchus_distribution_discrete_BinomialDistribution_H

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

        class BinomialDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_4320462275d66e78,
            mid_cumulativeProbability_ce4c02d583456bc9,
            mid_getNumberOfTrials_d6ab429752e7c267,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getProbabilityOfSuccess_9981f74b2d109da6,
            mid_getSupportLowerBound_d6ab429752e7c267,
            mid_getSupportUpperBound_d6ab429752e7c267,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logProbability_ce4c02d583456bc9,
            mid_probability_ce4c02d583456bc9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinomialDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinomialDistribution(const BinomialDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          BinomialDistribution(jint, jdouble);

          jdouble cumulativeProbability(jint) const;
          jint getNumberOfTrials() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getProbabilityOfSuccess() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logProbability(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BinomialDistribution);
        extern PyTypeObject *PY_TYPE(BinomialDistribution);

        class t_BinomialDistribution {
        public:
          PyObject_HEAD
          BinomialDistribution object;
          static PyObject *wrap_Object(const BinomialDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
