#ifndef org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace linear {
      class RealMatrix;
    }
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
      namespace multivariate {

        class MultivariateNormalDistribution : public ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution {
         public:
          enum {
            mid_init$_d28c10701e55f94c,
            mid_init$_bc6402de7b0a344c,
            mid_init$_4384082604f87d7a,
            mid_init$_dd4deb99569a6127,
            mid_density_86c4a0582e0747ce,
            mid_getCovariances_70a207fcbc031df2,
            mid_getMeans_a53a7513ecedada2,
            mid_getSingularMatrixCheckTolerance_557b8123390d8d0c,
            mid_getStandardDeviations_a53a7513ecedada2,
            mid_sample_a53a7513ecedada2,
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
