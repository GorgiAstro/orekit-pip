#ifndef org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
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
      namespace multivariate {

        class MultivariateNormalDistribution : public ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution {
         public:
          enum {
            mid_init$_134a5d9f7619d4a2,
            mid_init$_31b33030be845745,
            mid_init$_612ca79ece2fa236,
            mid_init$_1d9ecf23cb4dddb6,
            mid_density_b060e4326765ccf1,
            mid_getCovariances_f77d745f2128c391,
            mid_getMeans_25e1757a36c4dde2,
            mid_getSingularMatrixCheckTolerance_b74f83833fdad017,
            mid_getStandardDeviations_25e1757a36c4dde2,
            mid_sample_25e1757a36c4dde2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultivariateNormalDistribution(jobject obj) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultivariateNormalDistribution(const MultivariateNormalDistribution& obj) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(obj) {}

          MultivariateNormalDistribution(const JArray< jdouble > &, const JArray< JArray< jdouble > > &);
          MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &);
          MultivariateNormalDistribution(const JArray< jdouble > &, const JArray< JArray< jdouble > > &, jdouble);
          MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &, jdouble);

          jdouble density(const JArray< jdouble > &) const;
          ::org::hipparchus::linear::RealMatrix getCovariances() const;
          JArray< jdouble > getMeans() const;
          jdouble getSingularMatrixCheckTolerance() const;
          JArray< jdouble > getStandardDeviations() const;
          JArray< jdouble > sample() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {
        extern PyType_Def PY_TYPE_DEF(MultivariateNormalDistribution);
        extern PyTypeObject *PY_TYPE(MultivariateNormalDistribution);

        class t_MultivariateNormalDistribution {
        public:
          PyObject_HEAD
          MultivariateNormalDistribution object;
          static PyObject *wrap_Object(const MultivariateNormalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
