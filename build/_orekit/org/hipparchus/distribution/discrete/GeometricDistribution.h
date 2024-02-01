#ifndef org_hipparchus_distribution_discrete_GeometricDistribution_H
#define org_hipparchus_distribution_discrete_GeometricDistribution_H

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

        class GeometricDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_cumulativeProbability_ce4c02d583456bc9,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getProbabilityOfSuccess_9981f74b2d109da6,
            mid_getSupportLowerBound_d6ab429752e7c267,
            mid_getSupportUpperBound_d6ab429752e7c267,
            mid_inverseCumulativeProbability_9e72cb20adb363fb,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logProbability_ce4c02d583456bc9,
            mid_probability_ce4c02d583456bc9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeometricDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeometricDistribution(const GeometricDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          GeometricDistribution(jdouble);

          jdouble cumulativeProbability(jint) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getProbabilityOfSuccess() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jint inverseCumulativeProbability(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(GeometricDistribution);
        extern PyTypeObject *PY_TYPE(GeometricDistribution);

        class t_GeometricDistribution {
        public:
          PyObject_HEAD
          GeometricDistribution object;
          static PyObject *wrap_Object(const GeometricDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
