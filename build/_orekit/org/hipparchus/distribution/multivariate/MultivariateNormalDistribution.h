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
            mid_init$_cdae0ed71cfef3d1,
            mid_init$_4416507268beb014,
            mid_init$_54742420e02c0a66,
            mid_init$_06cac99e0de2f70f,
            mid_density_f05cb8c6dfd5e0b9,
            mid_getCovariances_7116bbecdd8ceb21,
            mid_getMeans_7cdc325af0834901,
            mid_getSingularMatrixCheckTolerance_456d9a2f64d6b28d,
            mid_getStandardDeviations_7cdc325af0834901,
            mid_sample_7cdc325af0834901,
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
