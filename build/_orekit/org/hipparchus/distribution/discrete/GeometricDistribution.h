#ifndef org_hipparchus_distribution_discrete_GeometricDistribution_H
#define org_hipparchus_distribution_discrete_GeometricDistribution_H

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

        class GeometricDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getProbabilityOfSuccess_557b8123390d8d0c,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_inverseCumulativeProbability_abbeb9db7144ca23,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
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
