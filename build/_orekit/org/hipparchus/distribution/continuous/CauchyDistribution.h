#ifndef org_hipparchus_distribution_continuous_CauchyDistribution_H
#define org_hipparchus_distribution_continuous_CauchyDistribution_H

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

        class CauchyDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_8f2e782d5278b131,
            mid_cumulativeProbability_dcbc7ce2902fa136,
            mid_density_dcbc7ce2902fa136,
            mid_getMedian_dff5885c2c873297,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getScale_dff5885c2c873297,
            mid_getSupportLowerBound_dff5885c2c873297,
            mid_getSupportUpperBound_dff5885c2c873297,
            mid_inverseCumulativeProbability_dcbc7ce2902fa136,
            mid_isSupportConnected_b108b35ef48e27bd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CauchyDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CauchyDistribution(const CauchyDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          CauchyDistribution();
          CauchyDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getMedian() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getScale() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jdouble inverseCumulativeProbability(jdouble) const;
          jboolean isSupportConnected() const;
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
        extern PyType_Def PY_TYPE_DEF(CauchyDistribution);
        extern PyTypeObject *PY_TYPE(CauchyDistribution);

        class t_CauchyDistribution {
        public:
          PyObject_HEAD
          CauchyDistribution object;
          static PyObject *wrap_Object(const CauchyDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
