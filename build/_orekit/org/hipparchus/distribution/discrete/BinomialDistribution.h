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
            mid_init$_bb79ca80d85d0a66,
            mid_cumulativeProbability_46f85b53d9aedd96,
            mid_getNumberOfTrials_570ce0828f81a2c1,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getProbabilityOfSuccess_dff5885c2c873297,
            mid_getSupportLowerBound_570ce0828f81a2c1,
            mid_getSupportUpperBound_570ce0828f81a2c1,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logProbability_46f85b53d9aedd96,
            mid_probability_46f85b53d9aedd96,
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
