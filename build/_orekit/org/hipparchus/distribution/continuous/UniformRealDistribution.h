#ifndef org_hipparchus_distribution_continuous_UniformRealDistribution_H
#define org_hipparchus_distribution_continuous_UniformRealDistribution_H

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

        class UniformRealDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_1d715fa3b7b756e1,
            mid_cumulativeProbability_0ba5fed9597b693e,
            mid_density_0ba5fed9597b693e,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getSupportLowerBound_456d9a2f64d6b28d,
            mid_getSupportUpperBound_456d9a2f64d6b28d,
            mid_inverseCumulativeProbability_0ba5fed9597b693e,
            mid_isSupportConnected_e470b6d9e0d979db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UniformRealDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UniformRealDistribution(const UniformRealDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          UniformRealDistribution();
          UniformRealDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
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
        extern PyType_Def PY_TYPE_DEF(UniformRealDistribution);
        extern PyTypeObject *PY_TYPE(UniformRealDistribution);

        class t_UniformRealDistribution {
        public:
          PyObject_HEAD
          UniformRealDistribution object;
          static PyObject *wrap_Object(const UniformRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
