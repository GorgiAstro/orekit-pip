#ifndef org_hipparchus_distribution_continuous_ParetoDistribution_H
#define org_hipparchus_distribution_continuous_ParetoDistribution_H

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

        class ParetoDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_8f2e782d5278b131,
            mid_init$_2c56b6dd4d4b1dec,
            mid_cumulativeProbability_dcbc7ce2902fa136,
            mid_density_dcbc7ce2902fa136,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getScale_dff5885c2c873297,
            mid_getShape_dff5885c2c873297,
            mid_getSupportLowerBound_dff5885c2c873297,
            mid_getSupportUpperBound_dff5885c2c873297,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logDensity_dcbc7ce2902fa136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParetoDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParetoDistribution(const ParetoDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          ParetoDistribution();
          ParetoDistribution(jdouble, jdouble);
          ParetoDistribution(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(ParetoDistribution);
        extern PyTypeObject *PY_TYPE(ParetoDistribution);

        class t_ParetoDistribution {
        public:
          PyObject_HEAD
          ParetoDistribution object;
          static PyObject *wrap_Object(const ParetoDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
