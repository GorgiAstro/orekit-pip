#ifndef org_hipparchus_distribution_multivariate_MixtureMultivariateRealDistribution_H
#define org_hipparchus_distribution_multivariate_MixtureMultivariateRealDistribution_H

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace random {
      class RandomGenerator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        class MixtureMultivariateRealDistribution : public ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution {
         public:
          enum {
            mid_init$_de3e021e7266b71e,
            mid_init$_a3d6463b27f37fbe,
            mid_density_9dc1ec0bcc0a9a29,
            mid_getComponents_2afa36052df4765d,
            mid_reseedRandomGenerator_3a8e7649f31fdb20,
            mid_sample_60c7040667a7dc5c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MixtureMultivariateRealDistribution(jobject obj) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MixtureMultivariateRealDistribution(const MixtureMultivariateRealDistribution& obj) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(obj) {}

          MixtureMultivariateRealDistribution(const ::java::util::List &);
          MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator &, const ::java::util::List &);

          jdouble density(const JArray< jdouble > &) const;
          ::java::util::List getComponents() const;
          void reseedRandomGenerator(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(MixtureMultivariateRealDistribution);
        extern PyTypeObject *PY_TYPE(MixtureMultivariateRealDistribution);

        class t_MixtureMultivariateRealDistribution {
        public:
          PyObject_HEAD
          MixtureMultivariateRealDistribution object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MixtureMultivariateRealDistribution *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MixtureMultivariateRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MixtureMultivariateRealDistribution&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
