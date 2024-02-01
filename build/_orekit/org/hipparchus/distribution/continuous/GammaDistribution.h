#ifndef org_hipparchus_distribution_continuous_GammaDistribution_H
#define org_hipparchus_distribution_continuous_GammaDistribution_H

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

        class GammaDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_13edac039e8cc967,
            mid_init$_bd28dc6055dc5bbd,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getScale_9981f74b2d109da6,
            mid_getShape_9981f74b2d109da6,
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

          explicit GammaDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GammaDistribution(const GammaDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          GammaDistribution(jdouble, jdouble);
          GammaDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getScale() const;
          jdouble getShape() const;
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
        extern PyType_Def PY_TYPE_DEF(GammaDistribution);
        extern PyTypeObject *PY_TYPE(GammaDistribution);

        class t_GammaDistribution {
        public:
          PyObject_HEAD
          GammaDistribution object;
          static PyObject *wrap_Object(const GammaDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
