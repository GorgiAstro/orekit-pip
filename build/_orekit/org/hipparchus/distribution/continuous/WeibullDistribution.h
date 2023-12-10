#ifndef org_hipparchus_distribution_continuous_WeibullDistribution_H
#define org_hipparchus_distribution_continuous_WeibullDistribution_H

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

        class WeibullDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_1d715fa3b7b756e1,
            mid_cumulativeProbability_0ba5fed9597b693e,
            mid_density_0ba5fed9597b693e,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getScale_456d9a2f64d6b28d,
            mid_getShape_456d9a2f64d6b28d,
            mid_getSupportLowerBound_456d9a2f64d6b28d,
            mid_getSupportUpperBound_456d9a2f64d6b28d,
            mid_inverseCumulativeProbability_0ba5fed9597b693e,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logDensity_0ba5fed9597b693e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeibullDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WeibullDistribution(const WeibullDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          WeibullDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getScale() const;
          jdouble getShape() const;
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
        extern PyType_Def PY_TYPE_DEF(WeibullDistribution);
        extern PyTypeObject *PY_TYPE(WeibullDistribution);

        class t_WeibullDistribution {
        public:
          PyObject_HEAD
          WeibullDistribution object;
          static PyObject *wrap_Object(const WeibullDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
