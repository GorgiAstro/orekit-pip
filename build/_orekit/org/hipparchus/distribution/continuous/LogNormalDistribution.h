#ifndef org_hipparchus_distribution_continuous_LogNormalDistribution_H
#define org_hipparchus_distribution_continuous_LogNormalDistribution_H

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

        class LogNormalDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_13edac039e8cc967,
            mid_init$_bd28dc6055dc5bbd,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getLocation_9981f74b2d109da6,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getShape_9981f74b2d109da6,
            mid_getSupportLowerBound_9981f74b2d109da6,
            mid_getSupportUpperBound_9981f74b2d109da6,
            mid_isSupportConnected_eee3de00fe971136,
            mid_logDensity_bf28ed64d6e8576b,
            mid_probability_82f92590f4247da1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogNormalDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogNormalDistribution(const LogNormalDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          LogNormalDistribution();
          LogNormalDistribution(jdouble, jdouble);
          LogNormalDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getLocation() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getShape() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logDensity(jdouble) const;
          jdouble probability(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LogNormalDistribution);
        extern PyTypeObject *PY_TYPE(LogNormalDistribution);

        class t_LogNormalDistribution {
        public:
          PyObject_HEAD
          LogNormalDistribution object;
          static PyObject *wrap_Object(const LogNormalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
