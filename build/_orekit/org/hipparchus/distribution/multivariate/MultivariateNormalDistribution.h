#ifndef org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomGenerator;
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
            mid_init$_ef9c3ec1d213ea68,
            mid_init$_94f1a35470fa534e,
            mid_init$_bc5560afa03df4fc,
            mid_init$_ccfb2756870425b3,
            mid_density_a40ce4fdf6559ac0,
            mid_getCovariances_b2eebabce70526d8,
            mid_getMeans_be783177b060994b,
            mid_getSingularMatrixCheckTolerance_9981f74b2d109da6,
            mid_getStandardDeviations_be783177b060994b,
            mid_sample_be783177b060994b,
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
