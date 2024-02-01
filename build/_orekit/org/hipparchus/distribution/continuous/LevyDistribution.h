#ifndef org_hipparchus_distribution_continuous_LevyDistribution_H
#define org_hipparchus_distribution_continuous_LevyDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

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
      namespace continuous {

        class LevyDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_13edac039e8cc967,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getLocation_9981f74b2d109da6,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getScale_9981f74b2d109da6,
            mid_getSupportLowerBound_9981f74b2d109da6,
            mid_getSupportUpperBound_9981f74b2d109da6,
            mid_inverseCumulativeProbability_bf28ed64d6e8576b,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logDensity_bf28ed64d6e8576b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LevyDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LevyDistribution(const LevyDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          LevyDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getLocation() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getScale() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jdouble inverseCumulativeProbability(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LevyDistribution);
        extern PyTypeObject *PY_TYPE(LevyDistribution);

        class t_LevyDistribution {
        public:
          PyObject_HEAD
          LevyDistribution object;
          static PyObject *wrap_Object(const LevyDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
