#ifndef org_hipparchus_distribution_multivariate_MixtureMultivariateNormalDistribution_H
#define org_hipparchus_distribution_multivariate_MixtureMultivariateNormalDistribution_H

#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"

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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace distribution {
      namespace multivariate {
        class MultivariateNormalDistribution;
      }
    }
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

        class MixtureMultivariateNormalDistribution : public ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution {
         public:
          enum {
            mid_init$_aa335fea495d60e0,
            mid_init$_8fdd5e0b7c0b469f,
            mid_init$_542f41869eee30e4,
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
