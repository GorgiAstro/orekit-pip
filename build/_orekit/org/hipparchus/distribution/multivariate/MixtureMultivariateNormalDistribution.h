#ifndef org_hipparchus_distribution_multivariate_MixtureMultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MixtureMultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace random {
      class RandomGenerator;
    }
    namespace distribution {
      namespace multivariate {
        class MultivariateNormalDistribution;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        class MixtureMultivariateNormalDistribution : public ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution {
         public:
          enum {
            mid_init$_0e7c3032c7c93ed3,
            mid_init$_a7978026a1eb93a2,
            mid_init$_4ad9f3a427b9950a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MixtureMultivariateNormalDistribution(jobject obj) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MixtureMultivariateNormalDistribution(const MixtureMultivariateNormalDistribution& obj) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(obj) {}

          MixtureMultivariateNormalDistribution(const ::java::util::List &);
          MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator &, const ::java::util::List &);
          MixtureMultivariateNormalDistribution(const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< JArray< JArray< jdouble > > > &);
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
        extern PyType_Def PY_TYPE_DEF(MixtureMultivariateNormalDistribution);
        extern PyTypeObject *PY_TYPE(MixtureMultivariateNormalDistribution);

        class t_MixtureMultivariateNormalDistribution {
        public:
          PyObject_HEAD
          MixtureMultivariateNormalDistribution object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MixtureMultivariateNormalDistribution *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MixtureMultivariateNormalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MixtureMultivariateNormalDistribution&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
