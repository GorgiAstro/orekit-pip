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
            mid_getDimension_d6ab429752e7c267,
            mid_reseedRandomGenerator_f5bbab7e97879358,
            mid_sample_be783177b060994b,
            mid_sample_45c1754ef74fe1b8,
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
