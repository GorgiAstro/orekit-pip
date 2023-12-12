#ifndef org_hipparchus_distribution_discrete_BinomialDistribution_H
#define org_hipparchus_distribution_discrete_BinomialDistribution_H

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

        class BinomialDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_89aad365fb0ed8da,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getNumberOfTrials_412668abc8d889e9,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getProbabilityOfSuccess_557b8123390d8d0c,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
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
