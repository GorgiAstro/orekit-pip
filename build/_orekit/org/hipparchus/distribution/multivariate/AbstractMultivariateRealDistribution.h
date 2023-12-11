#ifndef org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H
#define org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace distribution {
      class MultivariateRealDistribution;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        class AbstractMultivariateRealDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_getDimension_412668abc8d889e9,
            mid_reseedRandomGenerator_3cd6a6b354c6aa22,
            mid_sample_a53a7513ecedada2,
            mid_sample_ace8110626df0bb8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractMultivariateRealDistribution(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractMultivariateRealDistribution(const AbstractMultivariateRealDistribution& obj) : ::java::lang::Object(obj) {}

          jint getDimension() const;
          void reseedRandomGenerator(jlong) const;
          JArray< jdouble > sample() const;
          JArray< JArray< jdouble > > sample(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractMultivariateRealDistribution);
        extern PyTypeObject *PY_TYPE(AbstractMultivariateRealDistribution);

        class t_AbstractMultivariateRealDistribution {
        public:
          PyObject_HEAD
          AbstractMultivariateRealDistribution object;
          static PyObject *wrap_Object(const AbstractMultivariateRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
