#ifndef org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H
#define org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class MultivariateRealDistribution;
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

        class AbstractMultivariateRealDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_getDimension_f2f64475e4580546,
            mid_reseedRandomGenerator_fefb08975c10f0a1,
            mid_sample_7cdc325af0834901,
            mid_sample_01d6404243df74a0,
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
