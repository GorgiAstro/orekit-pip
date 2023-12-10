#ifndef org_hipparchus_distribution_discrete_PascalDistribution_H
#define org_hipparchus_distribution_discrete_PascalDistribution_H

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

        class PascalDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_987a5fb872043b12,
            mid_cumulativeProbability_b772323fc98b7293,
            mid_getNumberOfSuccesses_f2f64475e4580546,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getProbabilityOfSuccess_456d9a2f64d6b28d,
            mid_getSupportLowerBound_f2f64475e4580546,
            mid_getSupportUpperBound_f2f64475e4580546,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logProbability_b772323fc98b7293,
            mid_probability_b772323fc98b7293,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PascalDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PascalDistribution(const PascalDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          PascalDistribution(jint, jdouble);

          jdouble cumulativeProbability(jint) const;
          jint getNumberOfSuccesses() const;
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
        extern PyType_Def PY_TYPE_DEF(PascalDistribution);
        extern PyTypeObject *PY_TYPE(PascalDistribution);

        class t_PascalDistribution {
        public:
          PyObject_HEAD
          PascalDistribution object;
          static PyObject *wrap_Object(const PascalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
