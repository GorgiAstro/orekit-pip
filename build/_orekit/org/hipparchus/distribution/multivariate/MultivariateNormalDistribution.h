#ifndef org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace random {
      class RandomGenerator;
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
            mid_init$_0942607a80e88c17,
            mid_init$_ed409df2c5d12b2b,
            mid_init$_2eaf92124f7b956a,
            mid_init$_c29aa22b4d243723,
            mid_density_9dc1ec0bcc0a9a29,
            mid_getCovariances_688b496048ff947b,
            mid_getMeans_60c7040667a7dc5c,
            mid_getSingularMatrixCheckTolerance_dff5885c2c873297,
            mid_getStandardDeviations_60c7040667a7dc5c,
            mid_sample_60c7040667a7dc5c,
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
