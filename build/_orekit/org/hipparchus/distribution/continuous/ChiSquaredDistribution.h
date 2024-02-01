#ifndef org_hipparchus_distribution_continuous_ChiSquaredDistribution_H
#define org_hipparchus_distribution_continuous_ChiSquaredDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        class ChiSquaredDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_13edac039e8cc967,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getDegreesOfFreedom_9981f74b2d109da6,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getSupportLowerBound_9981f74b2d109da6,
            mid_getSupportUpperBound_9981f74b2d109da6,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logDensity_bf28ed64d6e8576b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ChiSquaredDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ChiSquaredDistribution(const ChiSquaredDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          ChiSquaredDistribution(jdouble);
          ChiSquaredDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getDegreesOfFreedom() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logDensity(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        extern PyType_Def PY_TYPE_DEF(ChiSquaredDistribution);
        extern PyTypeObject *PY_TYPE(ChiSquaredDistribution);

        class t_ChiSquaredDistribution {
        public:
          PyObject_HEAD
          ChiSquaredDistribution object;
          static PyObject *wrap_Object(const ChiSquaredDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
